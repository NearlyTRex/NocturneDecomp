#include "core/box/box.h"

#include "common/math/vector3f.h"
#include "common/text/scanformat.h"
#include "common/text/textscanner.h"

namespace nocturne::core {

// deferred: the eight scrape points, the mass and the world velocity, with CBox::setupCorners
// nocedit 0x0041dc50
CBox::CBox() = default;

// Each read past the end leaves its field as it was, as the original's fscanf did.
// deferred: the corners, mass and transform from the position, orientation, extents and volume
//   read, then the velocity along the box's axes turned into the world's, with
//   CBox::setupCorners
// nocedit 0x0041fe90
void CBox::loadFromFile(common::CTextScanner &scanner) {
    scanner.skipLine();
    int version = 0;
    common::scanFormat(scanner, " %d\n", version);
    scanner.skipLine();
    common::scanFormat(scanner, " %f,%f,%f\n", position_.x, position_.y, position_.z);
    common::scanFormat(scanner, " %f,%f,%f\n", orientation_.x, orientation_.z, orientation_.y);
    common::scanFormat(scanner, " %f,%f,%f\n", extents_.x, extents_.y, extents_.z);
    float volume = 0.0F;
    common::scanFormat(scanner, " %f\n", volume);
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
