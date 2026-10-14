#include "common/math/math.h"

#include <cmath>

namespace nocturne::common {
namespace {

// The original's own constants, which differ in the last digits from each other and from pi.
constexpr double kPi = 3.14159265359;
constexpr float kPiFloat = 3.1415927F;
constexpr float kTurn = 6.283185F;
// Past this sine asin's slope makes it imprecise, so the cosine decides instead.
constexpr double kPoleSine = 0.707;

float angleFromCosine(double y, double x) {
    float angle = 0.0F;
    if (x <= -1.0) {
        angle = kPiFloat;
    } else if (x < 1.0) {
        angle = static_cast<float>(std::acos(x));
    }
    return y < 0.0 ? -angle : angle;
}

float angleFromSine(double y, double x) {
    const auto angle = static_cast<float>(std::asin(y));
    return x < 0.0 ? static_cast<float>(kPi - angle) : angle;
}

} // namespace

// The original has an identical copy in core/xform.cpp.
// nocedit 0x00472090
// nocedit 0x005f55c0
float angleFromSinCos(double y, double x) {
    const bool near_pole = y >= kPoleSine || y <= -kPoleSine;
    float angle = near_pole ? angleFromCosine(y, x) : angleFromSine(y, x);
    if (static_cast<double>(angle) < -kPi) {
        angle += kTurn;
    }
    if (static_cast<double>(angle) > kPi) {
        return angle - kTurn;
    }
    return angle;
}

} // namespace nocturne::common
