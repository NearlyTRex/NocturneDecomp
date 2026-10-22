#pragma once

#include "core/fwd.h"

namespace nocturne::core {

void staticInit();
// Whether a corner of obb_a lies inside obb_b, or an edge of obb_a crosses it; one call does not
// see obb_b reaching into obb_a.
[[nodiscard]] bool testOBBIntersection(const SVDBox &obb_a, const SVDBox &obb_b);

} // namespace nocturne::core
