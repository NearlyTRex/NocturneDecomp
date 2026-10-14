#pragma once

namespace nocturne::common {

class CVector3i {
public:
    int x = 0;
    int y = 0;
    int z = 0;

    bool operator==(const CVector3i &) const = default;
};

} // namespace nocturne::common
