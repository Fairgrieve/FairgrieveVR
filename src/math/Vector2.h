#pragma once

namespace Engine {
    namespace Math {
        struct Vector2 {
            float x;
            float y;

            Vector2() {
                x = 0.0f;
                y = 0.0f;
            }

            Vector2(float x_val, float y_val) {
                x = x_val;
                y = y_val;
            }
        };

        Vector2 add(const Vector2& a, const Vector2& b);
        Vector2 subtract(const Vector2& a, const Vector2& b);
        Vector2 multiply(const Vector2& v, float scalar);
        Vector2 componentMultiply(const Vector2& a, const Vector2& b);
        float dot(const Vector2& a, const Vector2& b);
        float length(const Vector2& v);
        Vector2 normalize(const Vector2& v);
    }
}