#include "core/dcamera/gammacurve.h"

#include "common/math/fixed.h"

#include <cmath>

namespace nocturne::core {
namespace {

constexpr float kGammaOne = 65536.0F;
constexpr double kLevelTolerance = 1e-9;

} // namespace

float gammaExponent(int gamma) {
    return static_cast<float>(gamma) / kGammaOne;
}

int applyGammaCurve(double fraction, float exponent, int scale) {
    return common::truncateToInt(
        (std::pow(fraction, static_cast<double>(exponent)) * static_cast<double>(scale)) +
        kLevelTolerance);
}

} // namespace nocturne::core
