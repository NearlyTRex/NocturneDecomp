#include "core/set/set.h"

#include "common/math/fixed.h"
#include "common/math/matrix3x3i.h"
#include "common/math/vector3i.h"
#include "engine/matrix/matrix.h"

namespace nocturne::core {

// Retail reads the scene camera's inverse and origin instead, which only the scene camera's own
// setup writes and so go stale outside a scene.
// nocedit 0x0056e890
common::CVector3i transformToWorldSpace(const common::CVector3i &input,
                                        const engine::CMatrix &matrix) {
    const common::CMatrix3x3i &inverse = matrix.getInverseMatrix();
    const common::CVector3i origin = matrix.getCameraOrigin();
    const auto row = [&inverse, &input](int common::CVector3i::*axis) {
        return common::wrappingAdd(
            common::wrappingAdd(common::fixedMultiply(inverse.m[0].*axis, input.x),
                                common::fixedMultiply(inverse.m[1].*axis, input.y)),
            common::fixedMultiply(inverse.m[2].*axis, input.z));
    };
    return {.x = common::wrappingAdd(origin.x, row(&common::CVector3i::x)),
            .y = common::wrappingAdd(origin.y, row(&common::CVector3i::y)),
            .z = common::wrappingAdd(origin.z, row(&common::CVector3i::z))};
}

} // namespace nocturne::core
