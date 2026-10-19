#pragma once

namespace nocturne::core {

// A rectangle of the screen.
class CRect {
public:
    int x_min = 0;
    int x_max = 0;
    int y_min = 0;
    int y_max = 0;

    bool operator==(const CRect &) const = default;
};

} // namespace nocturne::core
