#pragma once

namespace nocturne::platform {

// A plane a * x + b * y + c * z = d, the normal scaled to 65535 and d in the units of the points
// it was taken from.
struct SClipPlane {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    bool operator==(const SClipPlane &) const = default;
};

} // namespace nocturne::platform
