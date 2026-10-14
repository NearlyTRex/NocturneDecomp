#pragma once

#include <cstdint>

namespace nocturne::platform {

// A vertex through the camera transform and the projection.
struct SProjectedVertex {
    // What screen_x holds instead of a position when the vertex is outside the view: the sign
    // bit, and a bit for each side it is past.
    static constexpr auto kClipRight = static_cast<std::int32_t>(0x80000001U);
    static constexpr auto kClipLeft = static_cast<std::int32_t>(0x80000002U);
    static constexpr auto kClipBottom = static_cast<std::int32_t>(0x80000004U);
    static constexpr auto kClipTop = static_cast<std::int32_t>(0x80000008U);
    static constexpr auto kClipNear = static_cast<std::int32_t>(0x80000010U);

    // Eye space, with the projection scale and aspect baked into x and y, so a point is in view
    // while both lie within plus and minus its depth.
    int transformed_x = 0;
    int transformed_y = 0;
    int transformed_z = 0;
    // 0x7fffffff over the depth.
    int inv_z = 0;
    // 16.16 pixels.
    int screen_x = 0;
    int screen_y = 0;
};

} // namespace nocturne::platform
