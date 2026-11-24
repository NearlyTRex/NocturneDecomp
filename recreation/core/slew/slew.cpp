#include "core/slew/slew.h"

#include "common/math/extendedfloat.h"
#include "engine/keys/inputcodetype.h"
#include "engine/keys/keys.h"

#include <cmath>

namespace nocturne::core {
namespace {

using common::CExtendedFloat;
using engine::EInputCodeType;

constexpr double kSlowScale = 0.05;
constexpr double kFastScale = 10.0;
// The original's own pi and quarter turn, short of the true ones.
constexpr double kTurnRate = 3.1415926535;
constexpr double kQuarterTurn = 1.57079632675;
constexpr double kMoveRate = 8.0;

[[nodiscard]] CExtendedFloat load(float value) {
    return CExtendedFloat(static_cast<double>(value));
}

// As the x87 adds two floats and stores the sum.
void addStep(float &value, float step) {
    value = (load(value) + load(step)).toFloat();
}

} // namespace

CSlew::CSlew(const common::CVector3f &position, const common::CVector3f &orientation)
    : position_(position), orientation_(orientation) {}

// The original also stepped a slew rate with - and =, which only the editor reads.
// deferred: BW1-3's turns by a float pi and float quarter turns, and each angle wrapped into
//   -pi..pi after the frame's steering, a change to Nocturne's own slewing that wants approving
//   first, with the superset changes' review
// nocedit 0x005a20b0
void CSlew::processInput(engine::CKeys &keys, float delta_time) {
    float scaled = delta_time;
    if (keys.getKeyState(EInputCodeType::DIK_LMENU) != 0) {
        scaled = (load(delta_time) * CExtendedFloat(kSlowScale)).toFloat();
    } else if (keys.getKeyState(EInputCodeType::DIK_LSHIFT) != 0) {
        scaled = (load(delta_time) * CExtendedFloat(kFastScale)).toFloat();
    }
    const float angle = (load(scaled) * CExtendedFloat(kTurnRate)).toFloat();
    const float distance = (load(scaled) * CExtendedFloat(kMoveRate)).toFloat();
    const auto held = [&keys](EInputCodeType key) { return keys.getKeyState(key) != 0; };
    if (held(EInputCodeType::DIK_NUMPAD1)) {
        addStep(orientation_.y, -angle);
    }
    if (held(EInputCodeType::DIK_NUMPAD3)) {
        addStep(orientation_.y, angle);
    }
    if (held(EInputCodeType::DIK_NUMPAD8)) {
        moveAlong(0.0, distance);
    }
    if (held(EInputCodeType::DIK_NUMPAD2)) {
        moveAlong(0.0, -distance);
    }
    if (held(EInputCodeType::DIK_NUMPAD4)) {
        moveAlong(-kQuarterTurn, distance);
    }
    if (held(EInputCodeType::DIK_NUMPAD6)) {
        moveAlong(kQuarterTurn, distance);
    }
    if (held(EInputCodeType::DIK_Q)) {
        addStep(position_.y, distance);
    }
    if (held(EInputCodeType::DIK_A)) {
        addStep(position_.y, -distance);
    }
    if (held(EInputCodeType::DIK_F5)) {
        addStep(orientation_.x, -angle);
    }
    if (held(EInputCodeType::DIK_F8)) {
        addStep(orientation_.x, angle);
    }
    if (held(EInputCodeType::DIK_NUMPAD7)) {
        addStep(orientation_.z, -angle);
    }
    if (held(EInputCodeType::DIK_NUMPAD9)) {
        addStep(orientation_.z, angle);
    }
    if (held(EInputCodeType::DIK_NUMPAD5)) {
        orientation_ = {};
    }
}

void CSlew::moveAlong(double offset, float distance) {
    const double heading = (load(orientation_.y) + CExtendedFloat(offset)).toDouble();
    const CExtendedFloat step = load(distance);
    position_.x = ((CExtendedFloat(std::sin(heading)) * step) + load(position_.x)).toFloat();
    position_.z = ((CExtendedFloat(std::cos(heading)) * step) + load(position_.z)).toFloat();
}

const common::CVector3f &CSlew::getPosition() const {
    return position_;
}

const common::CVector3f &CSlew::getOrientation() const {
    return orientation_;
}

} // namespace nocturne::core
