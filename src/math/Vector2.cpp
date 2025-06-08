#include "Vector2.h"
#include <cmath>

using namespace Engine::Math;

namespace Engine {
    namespace Math {
        Vector2 add(const Vector2& a, const Vector2& b) {
            return Vector2(a.x + b.x, a.y + b.y);
        }

        Vector2 subtract(const Vector2& a, const Vector2& b) {
            return Vector2(a.x - b.x, a.y - b.y);
        }

        Vector2 multiply(const Vector2& v, float scalar) {
            return Vector2(scalar * v.x, scalar * v.y);
        }

        Vector2 componentMultiply(const Vector2& a, const Vector2& b) {
            return Vector2(a.x * b.x, a.y * b.y);
        }

        float dot(const Vector2& a, const Vector2& b) {
            return (a.x * b.x) + (a.y * b.y);
        }

        float length(const Vector2& v) {
            return sqrt((v.x * v.x) + (v.y * v.y));
        }

        Vector2 normalize(const Vector2& v) {
            float len = length(v);
            if (len == 0.0f) {
                return Vector2(0.0f, 0.0f);
            }

            return Vector2(v.x / len, v.y / len);
        }
    }
}