#pragma once

#include "common/fwd.h"
#include "common/math/vector3f.h"

#include <cstdio>

namespace nocturne::core {

// A collision triangle with its plane: the unit normal, the plane's distance along it, and the
// axis the normal leans on most, 0 to 2 for x to z.
// deferred: the clipper's 16-vertex buffers and 8-triangle fan, with clipTriangleToBounds and
//   buildClipTriangleFan
// nocedit 0x0049a430
class CDemonTriangle {
public:
    common::CVector3f vertex1;
    common::CVector3f vertex2;
    common::CVector3f vertex3;
    common::CVector3f normal;
    float plane_distance = 0.0F;
    int dominant_axis = 0;

    void readDataBinary(std::FILE *file_handle);
    void buildCollision(const common::CVector3f &vertex1, const common::CVector3f &vertex2,
                        const common::CVector3f &vertex3);

private:
    void calculateData();
};

} // namespace nocturne::core
