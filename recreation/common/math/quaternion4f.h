#pragma once

namespace nocturne::common {

// A rotation as a quaternion, w being the scalar part.
class CQuaternion4f {
public:
    float w = 0.0F;
    float x = 0.0F;
    float y = 0.0F;
    float z = 0.0F;

    bool operator==(const CQuaternion4f &) const = default;
};

} // namespace nocturne::common
