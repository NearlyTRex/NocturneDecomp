#include "core/set/demonset.h"

#include "common/math/vector3i.h"

namespace nocturne::core {

// The original constructor's scene setup arrives with the fields it fills.
CDemonSet::CDemonSet(engine::CDemonRenderer &renderer, const engine::CMatrix &matrix,
                     const engine::CSpecial &special)
    : renderer_(renderer), matrix_(matrix), special_(special) {}

void CDemonSet::setLightDirection(const common::CVector3i &light_direction) {
    light_direction_ = light_direction;
}

void CDemonSet::setAmbientBaseQuick(int ambient_base_quick) {
    ambient_base_quick_ = ambient_base_quick;
}

const common::CVector3i &CDemonSet::getLightDirection() const {
    return light_direction_;
}

int CDemonSet::getAmbientBaseQuick() const {
    return ambient_base_quick_;
}

const CColor3i &CDemonSet::getFlatColor() const {
    return flat_color_;
}

// nocedit 0x00570ca0
void CDemonSet::setFlatColor(int light_scale, int color_scale, int fog_scale) {
    flat_color_ = {.r = light_scale, .g = color_scale, .b = fog_scale};
}

} // namespace nocturne::core
