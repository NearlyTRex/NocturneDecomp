#pragma once

namespace nocturne::core {

// A colour, or a scale for each channel, in 16.16.
struct CColor3i {
    int r = 0;
    int g = 0;
    int b = 0;

    bool operator==(const CColor3i &) const = default;
};

} // namespace nocturne::core
