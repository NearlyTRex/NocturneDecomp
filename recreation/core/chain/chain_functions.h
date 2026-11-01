#pragma once

#include "core/fwd.h"

namespace nocturne::core {

CChain *factoryFuncChain();

// A rough square root: the float's bits halved and added to half of 1.0's, with no refining
// step, so it is exact only at even powers of two.
[[nodiscard]] float fastSqrt(float value);

} // namespace nocturne::core
