#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CLaserBeam {
public:
    CLaserBeam();
    ~CLaserBeam();

    void init(CVector3f *origin, CVector3f *hit_position, float beam_width, float reticle_intensity,
              CVector3f *reflection_normal, int red, int green, int blue, float halo_spread,
              float cone_angle);
    void render();
};

} // namespace nocturne::core
