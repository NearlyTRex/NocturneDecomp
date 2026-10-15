#pragma once

namespace nocturne::core {

// A rough reciprocal square root: the float's bits halved and taken from a magic number, with no
// refining step, so it is exact only at powers of four.
[[nodiscard]] float fastInvSqrt(float dist_sq);

} // namespace nocturne::core
