#pragma once

#include "common/fwd.h"
#include "common/math/vector3i.h"

namespace nocturne::engine {

// The software renderer's light: an ambient level and one directional light.
class CLight {
public:
    void setAmbientLightLevel(int light_level);
    void setDirectionalLightVector(int dir_x, int dir_y, int dir_z);
    int calculateLighting(int normal_x, int normal_y, int normal_z);
    void calculateAndStoreVertexLight(int vertex_index, common::CVector3i *vertex_position);

    // The direction the polygon lighting reads, which a 3D window saves and puts back alone.
    [[nodiscard]] const common::CVector3i &getLightDirection() const;
    void setLightDirection(const common::CVector3i &direction);

private:
    // The original's setDirectionalLightVector also kept a second copy, which nothing reads.
    common::CVector3i light_direction_;
};

} // namespace nocturne::engine
