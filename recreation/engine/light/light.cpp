#include "engine/light/light.h"

namespace nocturne::engine {

// nocedit 0x005054d0
void CLight::setDirectionalLightVector(int dir_x, int dir_y, int dir_z) {
    light_direction_ = {.x = dir_x, .y = dir_y, .z = dir_z};
}

const common::CVector3i &CLight::getLightDirection() const {
    return light_direction_;
}

void CLight::setLightDirection(const common::CVector3i &direction) {
    light_direction_ = direction;
}

} // namespace nocturne::engine
