#pragma once

namespace nocturne::core {

// A 16.16 gamma as the power the curves raise each level to, a float as the original holds it.
[[nodiscard]] float gammaExponent(int gamma);

// The fraction, from 0 to 1, raised to the power and scaled, chopped toward zero. The original
// chopped a level that came out a hair under its whole value to the one below, so even a gamma of
// one moved some levels; a tolerance of a billionth keeps those whole.
[[nodiscard]] int applyGammaCurve(double fraction, float exponent, int scale);

} // namespace nocturne::core
