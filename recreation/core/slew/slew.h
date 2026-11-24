#pragma once

#include "common/math/vector3f.h"
#include "engine/fwd.h"

namespace nocturne::core {

// A place and a turn steered from the keyboard, as the developers' pause flies the hero: the
// numeric keypad turns and moves on the ground, Q and A rise and fall, F5 and F8 pitch, 7 and 9
// roll, and 5 levels the turn. Alt slows it to a twentieth, Shift speeds it tenfold.
class CSlew {
public:
    CSlew(const common::CVector3f &position, const common::CVector3f &orientation);

    // One frame's steering, delta_time seconds long: pi radians and 8 units a second.
    void processInput(engine::CKeys &keys, float delta_time);

    [[nodiscard]] const common::CVector3f &getPosition() const;
    // Pitch, heading and roll, in radians.
    [[nodiscard]] const common::CVector3f &getOrientation() const;

private:
    // On the ground along the heading turned by offset radians; a negative distance backs away.
    void moveAlong(double offset, float distance);

    common::CVector3f position_;
    common::CVector3f orientation_;
};

} // namespace nocturne::core
