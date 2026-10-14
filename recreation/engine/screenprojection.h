#pragma once

#include "common/math/fixed.h"
#include "engine/2d/2d.h"
#include "platform/projectedvertex.h"

#include <cstdint>

namespace nocturne::engine {

// Puts an eye-space point in view onto the screen: its reciprocal depth, and its position in
// 16.16. The depth must be at least 1, as the view and the clip leave it.
inline void projectToScreen(platform::SProjectedVertex &point,
                            const SProjectionParams &projection) {
    const auto project = [&point](int coordinate, int half_extent, int center) {
        return common::wrappingAdd(
            static_cast<int>((std::int64_t{coordinate} * half_extent) / point.transformed_z),
            center);
    };
    point.inv_z = static_cast<int>(std::int64_t{0x7fffffff} / point.transformed_z);
    point.screen_x =
        project(point.transformed_x, projection.half_width_fixed, projection.center_x_fixed);
    point.screen_y =
        project(point.transformed_y, projection.neg_half_height_fixed, projection.center_y_fixed);
}

} // namespace nocturne::engine
