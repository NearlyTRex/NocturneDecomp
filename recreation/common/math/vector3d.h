#pragma once

namespace nocturne::common {

// Sound keeps its positions and velocities in double; the original gives this type no methods.
class CVector3d {
public:
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;

    bool operator==(const CVector3d &) const = default;
};

} // namespace nocturne::common
