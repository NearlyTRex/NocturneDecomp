#include "common/math/fixed.h"
#include "common/math/matrix3x3i.h"
#include "common/math/vector3i.h"
#include "engine/2d/2d.h"
#include "engine/matrix/matrix.h"
#include "engine/screenprojection.h"
#include "engine/special/special.h"
#include "platform/projectedvertex.h"

#include <cstdint>

namespace nocturne::engine {
namespace {

using common::CMatrix3x3i;
using common::CVector3i;
using common::wrappingSubtract;
using platform::SProjectedVertex;

// One column of the transform dotted with the point, summed in 64 bits as IMUL and ADD/ADC
// leave it, then bits 16 to 47 as SHRD takes them.
int transformColumn(const CMatrix3x3i &transform, int CVector3i::*column, const CVector3i &point) {
    const std::uint64_t sum =
        static_cast<std::uint64_t>(std::int64_t{point.x} * (transform.m[0].*column)) +
        static_cast<std::uint64_t>(std::int64_t{point.y} * (transform.m[1].*column)) +
        static_cast<std::uint64_t>(std::int64_t{point.z} * (transform.m[2].*column));
    return static_cast<std::int32_t>(static_cast<std::uint32_t>(sum >> 16U));
}

int getClipFlags(int x, int y, int z) {
    const int neg_z = wrappingSubtract(0, z);
    int flags = 0;
    if (x > z) {
        flags = SProjectedVertex::kClipRight;
    }
    if (x < neg_z) {
        flags |= SProjectedVertex::kClipLeft;
    }
    if (y > z) {
        flags |= SProjectedVertex::kClipTop;
    }
    if (y < neg_z) {
        flags |= SProjectedVertex::kClipBottom;
    }
    if (z < 1) {
        flags |= SProjectedVertex::kClipNear;
    }
    return flags;
}

} // namespace

// The original ran an MMX copy of the same arithmetic when the CPU had MMX; the other copy also
// left the eye-space point in six scratch globals nothing reads.
// nocedit 0x005b575c
void CSpecial::transformAndProjectPoint(SProjectedVertex &output, const CVector3i &input) const {
    const CVector3i &origin = matrix_.getRelativeOrigin();
    const CVector3i relative{.x = wrappingSubtract(input.x, origin.x),
                             .y = wrappingSubtract(input.y, origin.y),
                             .z = wrappingSubtract(input.z, origin.z)};
    const CMatrix3x3i &transform = matrix_.getTransformMatrix();
    output.transformed_x = transformColumn(transform, &CVector3i::x, relative);
    output.transformed_y = transformColumn(transform, &CVector3i::y, relative);
    output.transformed_z = transformColumn(transform, &CVector3i::z, relative);
    const int flags =
        getClipFlags(output.transformed_x, output.transformed_y, output.transformed_z);
    if (flags != 0) {
        output.screen_x = flags;
        return;
    }
    projectToScreen(output, two_d_.getProjection());
}

} // namespace nocturne::engine
