# Git-гайд по лабораторной работе

## Этап 0: Подготовка и инициализация
Выполняется в корневой папке проекта.

```bash
# 1. Инициализируем локальный репозиторий
git init

# 2. Создаем файл .gitignore
echo ".vs/
Debug/
Release/
*.user
*.obj
*.lib
*.pdb
*.dll" > .gitignore

# 3. Добавляем файлы в индекс и делаем первый коммит
git add .
git commit -m "Initial commit: project structure and gitignore"

# 4. Связываем с GitHub
# Замени URL на свой актуальный репозиторий
git remote add origin https://github.com/ВАШ_ЛОГИН/ConsoleApplication39.git
git branch -M main
git push -u origin main
```

---

## Этап 1: Статическая библиотека (Ветка)
Задание 1: Работа в отдельной ветке.

```bash
# 1. Создаем новую ветку и переходим в нее
git checkout -b feature-static-lib

# (После создания файлов StaticLib.h и StaticLib.cpp)

# 2. Добавляем изменения
git add .

# 3. Фиксируем изменения
git commit -m "Implement static library for complex math"

# 4. Отправляем ветку на GitHub
git push origin feature-static-lib
```

---

## Этап 2: Динамическая библиотека и Pull Request
Задание 2: Использование PR.

```bash
# 1. Возвращаемся в главную ветку
git checkout main

# 2. Создаем ветку для динамической библиотеки
git checkout -b feature-dynamic-lib

# (После создания файлов Complex.h и Complex.cpp)

# 3. Добавляем и коммитим
git add .
git commit -m "Implement dynamic library with Complex class"

# 4. Пушим ветку
git push origin feature-dynamic-lib
```
**На GitHub:** Открой репозиторий, создай Pull Request из `feature-dynamic-lib` в `main`.

---

## Этап 3: Создание и решение конфликта
Задание 3: Продемонстрировать решение конфликта.

### Шаг A: Изменение в первой ветке
```bash
git checkout feature-dynamic-lib
# Отредактируй MathLib.cpp (например, комментарий в функции complex_add)
git add MathLib.cpp
git commit -m "Conflict: update comment in branch"
git push origin feature-dynamic-lib
```

### Шаг B: Конфликтующее изменение в main
```bash
git checkout main
# Отредактируй ТУ ЖЕ СТРОКУ в MathLib.cpp по-другому
git add MathLib.cpp
git commit -m "Conflict: update comment in main"
```

### Шаг C: Слияние и решение
```bash
# Пытаемся влить ветку в main
git merge feature-dynamic-lib

# Получаем ошибку конфликта. 
# 1. Открываем файл MathLib.cpp.
# 2. Удаляем маркеры <<<<<<, ======, >>>>>>.
# 3. Выбираем финальный вариант кода.

# Завершаем слияние
git add MathLib.cpp
git commit -m "Resolve merge conflict"
git push origin main
```

---

## Шпаргалка по командам
- `git status` — проверить состояние файлов.
- `git log --oneline --graph` — посмотреть историю коммитов.
- `git branch` — список веток.
- `git checkout [name]` — переключиться на ветку.
- `git diff` — посмотреть изменения в коде до коммита.

