#pragma once

#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/fwd.h"
#include "engine/fwd.h"
#include "platform/mrgltexturebasic.h"

#include <string_view>

namespace nocturne::core {

// In 24.8 about the dome's centre: the first corner of the quad overhead, the others mirroring it
// in x and z.
[[nodiscard]] common::CVector3i getSkyDomeTopCorner(float vertex_scale);
// In 24.8 about the dome's centre: the corner of the column around and the row up, sixteen
// columns to a turn and four rows to a quarter turn, from just above the horizon.
[[nodiscard]] common::CVector3i getSkyDomeCorner(float vertex_scale, int u_coord, int v_coord);

// The sky over a set, about the middle of its geometry and as wide as it: one texel of the sky
// texture on a quad overhead, then sixteen columns of three rows of quads down to the horizon.
class CSkyDome {
public:
    CSkyDome(engine::CDemonRenderer &renderer, const engine::CSpecial &special,
             const CDemonRaytrace &raytrace);

    // Drawn in the texture named, its corners lit by the brightness.
    void renderSkyDome(std::string_view texture_name, int brightness_factor);

    [[nodiscard]] const platform::SMRGLTextureBasic &getTexture() const;
    // At the geometry's floor, in the middle of its width and depth.
    [[nodiscard]] const common::CVector3f &getCenter() const;
    // The dome's radius: the geometry's half width, height or half depth, the greatest, times
    // 1.414.
    [[nodiscard]] float getVertexScale() const;

private:
    void generateSkyDomeVertex(int u_coord, int v_coord, int vertex_index);
    void projectCorner(int vertex_index, const common::CVector3i &point);

    engine::CDemonRenderer &renderer_;
    const engine::CSpecial &special_;
    const CDemonRaytrace &raytrace_;
    platform::SMRGLTextureBasic texture_{.texture_name = "NITESKY.RAW"};
    int brightness_ = 0;
    common::CVector3f center_{};
    float vertex_scale_ = 0.0F;
};

} // namespace nocturne::core
