#pragma once

#include "common/fwd.h"

namespace nocturne::core {

class CLaserBeam {
public:
    void init(common::CVector3f *origin, common::CVector3f *hit_position, float beam_width,
              float reticle_intensity, common::CVector3f *reflection_normal, int red, int green,
              int blue, float halo_spread, float cone_angle);
    void render();
};

} // namespace nocturne::core
