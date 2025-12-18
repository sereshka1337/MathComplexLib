#pragma once
#include <cmath>

/**
 * @brief Пространство имен для математической библиотеки
 */
namespace MathLib {
    /**
     * @brief Сложение двух комплексных чисел
     * @param r1 Вещественная часть 1
     * @param i1 Мнимая часть 1
     * @param r2 Вещественная часть 2
     * @param i2 Мнимая часть 2
     * @param resR Результат (вещественная)
     * @param resI Результат (мнимая)
     */
    void complex_add(double r1, double i1, double r2, double i2, double& resR, double& resI);

    /**
     * @brief Вычитание двух комплексных чисел
     */
    void complex_sub(double r1, double i1, double r2, double i2, double& resR, double& resI);

    /**
     * @brief Умножение двух комплексных чисел
     */
    void complex_mul(double r1, double i1, double r2, double i2, double& resR, double& resI);

    /**
     * @brief Вычисление модуля комплексного числа
     */
    double complex_mod(double r, double i);
}

