#pragma once

namespace nocturne::common {

class CVector2i {
public:
    int x = 0;
    int y = 0;

    bool operator==(const CVector2i &) const = default;
};

} // namespace nocturne::common
