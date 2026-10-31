#include "core/box/box.h"

#include "common/math/vector3f.h"
#include "common/text/scanformat.h"
#include "common/text/textscanner.h"

namespace nocturne::core {

// deferred: the eight scrape points, the mass and the world velocity, with CBox::processPhysics
// nocedit 0x0041dc50
CBox::CBox() = default;

// deferred: the eight scrape points at the corners, with CBox::processPhysics
// nocedit 0x0041dd20
void CBox::setupCorners(common::CVector3f *position, common::CVector3f *orientation,
                        common::CVector3f *extents, float volume) {
    extents_ = *extents;
    updateTransform(*position, *orientation, volume);
}

// The box comes to rest where it is put.
// deferred: the turn, the mass from the volume, how hard it is to spin and the scrape points'
//   places, with CBox::processPhysics
// nocedit 0x0041e0e0
void CBox::updateTransform(const common::CVector3f &position, const common::CVector3f &orientation,
                           float /*volume*/) {
    position_ = position;
    orientation_ = orientation;
    linear_velocity_local_ = {};
    angular_velocity_ = {};
    validity_ = 1;
}

// Each read past the end leaves its field as it was, as the original's fscanf did, but for the
// velocities and validity, which setting the box up has cleared and made 1.
// deferred: the velocity along the box's axes turned into the world's, with CBox::processPhysics
// nocedit 0x0041fe90
void CBox::loadFromFile(common::CTextScanner &scanner) {
    scanner.skipLine();
    int version = 0;
    common::scanFormat(scanner, " %d\n", version);
    scanner.skipLine();
    common::CVector3f position = position_;
    common::CVector3f orientation = orientation_;
    common::CVector3f extents = extents_;
    common::scanFormat(scanner, " %f,%f,%f\n", position.x, position.y, position.z);
    common::scanFormat(scanner, " %f,%f,%f\n", orientation.x, orientation.z, orientation.y);
    common::scanFormat(scanner, " %f,%f,%f\n", extents.x, extents.y, extents.z);
    float volume = 0.0F;
    common::scanFormat(scanner, " %f\n", volume);
    setupCorners(&position, &orientation, &extents, volume);
    common::scanFormat(scanner, " %f,%f,%f\n", linear_velocity_local_.x, linear_velocity_local_.y,
                       linear_velocity_local_.z);
    common::scanFormat(scanner, " %f,%f,%f\n", angular_velocity_.x, angular_velocity_.y,
                       angular_velocity_.z);
    common::scanFormat(scanner, " %d\n", validity_);
}

const common::CVector3f &CBox::getPosition() const {
    return position_;
}

const common::CVector3f &CBox::getOrientation() const {
    return orientation_;
}

const common::CVector3f &CBox::getExtents() const {
    return extents_;
}

const common::CVector3f &CBox::getLocalLinearVelocity() const {
    return linear_velocity_local_;
}

const common::CVector3f &CBox::getAngularVelocity() const {
    return angular_velocity_;
}

int CBox::getValidity() const {
    return validity_;
}

void CBox::setValidity(int validity) {
    validity_ = validity;
}

} // namespace nocturne::core
