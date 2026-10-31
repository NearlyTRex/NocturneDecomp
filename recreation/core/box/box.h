#pragma once

#include "common/fwd.h"
#include "common/math/vector3f.h"
#include "core/fwd.h"

#include <cstdio>

namespace nocturne::core {

// A box the physics moves: where it is, how it is turned, its size, and how fast it goes and
// spins.
class CBox {
public:
    CBox();
    // nocedit 0x0041dd00
    ~CBox() = default;

    void setupCorners(common::CVector3f *position, common::CVector3f *orientation,
                      common::CVector3f *extents, float volume);
    void process(float delta_time);
    void processPhysics(float delta_time);
    // A line, the box's version, a line, then its position, orientation as x, z and y, extents,
    // volume, velocity along its own axes, spin, and whether it is valid, a line each.
    void loadFromFile(common::CTextScanner &scanner);
    void saveToFile(std::FILE *file_handle, char *indent_prefix);
    void setupVelocities(common::CVector3f *linear_velocity, common::CVector3f *angular_velocity);

    [[nodiscard]] const common::CVector3f &getPosition() const;
    [[nodiscard]] const common::CVector3f &getOrientation() const;
    [[nodiscard]] const common::CVector3f &getExtents() const;
    [[nodiscard]] const common::CVector3f &getLocalLinearVelocity() const;
    [[nodiscard]] const common::CVector3f &getAngularVelocity() const;
    // 1 for a box the physics moves, 0 for none, -1 for one still to be set up from its actor.
    [[nodiscard]] int getValidity() const;
    void setValidity(int validity);

private:
    void updateTransform(const common::CVector3f &position, const common::CVector3f &orientation,
                         float volume);

    common::CVector3f position_;
    common::CVector3f orientation_;
    common::CVector3f extents_;
    common::CVector3f linear_velocity_local_;
    common::CVector3f angular_velocity_;
    int validity_ = 0;
};

} // namespace nocturne::core
