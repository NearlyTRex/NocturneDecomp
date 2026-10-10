#include "common/video/presentation.h"

#include <algorithm>
#include <cmath>

namespace nocturne::common {
namespace {

bool isEmpty(SExtent extent) {
    return extent.width <= 0 || extent.height <= 0;
}

SExtent effectiveLogical(const SPresentation &presentation) {
    return isEmpty(presentation.logical) ? presentation.drawable : presentation.logical;
}

bool canMap(const SPresentation &presentation) {
    return !isEmpty(presentation.window) && !isEmpty(presentation.drawable);
}

} // namespace

SViewport fitViewport(SExtent drawable, SExtent logical) {
    if (isEmpty(drawable) || isEmpty(logical)) {
        return {.x = 0, .y = 0, .width = drawable.width, .height = drawable.height};
    }
    const double scale = std::min(static_cast<double>(drawable.width) / logical.width,
                                  static_cast<double>(drawable.height) / logical.height);
    const int width = std::max(1, static_cast<int>(std::lround(logical.width * scale)));
    const int height = std::max(1, static_cast<int>(std::lround(logical.height * scale)));
    return {.x = (drawable.width - width) / 2,
            .y = (drawable.height - height) / 2,
            .width = width,
            .height = height};
}

bool isWholeMultiple(const SViewport &viewport, SExtent logical) {
    return logical.width > 0 && viewport.width % logical.width == 0;
}

SPoint windowToLogical(const SPresentation &presentation, SPoint point) {
    if (!canMap(presentation)) {
        return point;
    }
    const SExtent logical = effectiveLogical(presentation);
    const SViewport viewport = fitViewport(presentation.drawable, logical);
    const double drawable_x =
        static_cast<double>(point.x) * presentation.drawable.width / presentation.window.width;
    const double drawable_y =
        static_cast<double>(point.y) * presentation.drawable.height / presentation.window.height;
    const double x = (drawable_x - viewport.x) * logical.width / viewport.width;
    const double y = (drawable_y - viewport.y) * logical.height / viewport.height;
    return {.x = static_cast<int>(std::clamp(x, 0.0, logical.width - 1.0)),
            .y = static_cast<int>(std::clamp(y, 0.0, logical.height - 1.0))};
}

SPoint logicalToWindow(const SPresentation &presentation, SPoint point) {
    if (!canMap(presentation)) {
        return point;
    }
    const SExtent logical = effectiveLogical(presentation);
    const SViewport viewport = fitViewport(presentation.drawable, logical);
    const double drawable_x = viewport.x + ((point.x + 0.5) * viewport.width / logical.width);
    const double drawable_y = viewport.y + ((point.y + 0.5) * viewport.height / logical.height);
    return {.x = static_cast<int>(
                std::floor(drawable_x * presentation.window.width / presentation.drawable.width)),
            .y = static_cast<int>(std::floor(drawable_y * presentation.window.height /
                                             presentation.drawable.height))};
}

} // namespace nocturne::common
