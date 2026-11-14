#include "core/frontend.h"

#include <algorithm>
#include <cmath>

namespace nocturne::core {

common::SExtent getFrontEndMode(int picked_width, int picked_height, bool accelerated) {
    if (!accelerated || picked_width < kFrontEndLayoutWidth || picked_height < kFrontEndHeight) {
        return {.width = kFrontEndLayoutWidth, .height = kFrontEndHeight};
    }
    return {.width = picked_width, .height = picked_height};
}

SFrontEndLayout getFrontEndLayout(int screen_width, int screen_height) {
    const float scale = std::min(static_cast<float>(screen_width) / kFrontEndLayoutWidth,
                                 static_cast<float>(screen_height) / kFrontEndHeight);
    SFrontEndLayout layout{.scale = scale > 0.0F ? scale : 1.0F, .left = 0, .top = 0};
    layout.left = std::max((screen_width - layout.getLength(kFrontEndLayoutWidth)) / 2, 0);
    layout.top = std::max((screen_height - layout.getLength(kFrontEndHeight)) / 2, 0);
    return layout;
}

int SFrontEndLayout::getX(int layout_x) const {
    return left + static_cast<int>(std::lround(static_cast<float>(layout_x) * scale));
}

int SFrontEndLayout::getY(int layout_y) const {
    return top + static_cast<int>(std::lround(static_cast<float>(layout_y) * scale));
}

int SFrontEndLayout::getLength(int layout_length) const {
    const auto length = static_cast<int>(std::lround(static_cast<float>(layout_length) * scale));
    return layout_length > 0 ? std::max(length, 1) : length;
}

engine::EBitmapFilter getFrontEndArtFilter(platform::EUpscaler upscaler, float scale) {
    using engine::EBitmapFilter;
    switch (upscaler) {
    case platform::EUpscaler::Nearest:
    case platform::EUpscaler::Xbr:
        return EBitmapFilter::Nearest;
    case platform::EUpscaler::Standard:
        return std::floor(scale) == scale ? EBitmapFilter::Nearest : EBitmapFilter::Smooth;
    default:
        return EBitmapFilter::Smooth;
    }
}

void displayInLayout(engine::CAlphaBitmap &bitmap, const SFrontEndLayout &layout,
                     const common::SViewport &area, int alpha, platform::EUpscaler upscaler) {
    bitmap.displayScaled(layout.getX(area.x), layout.getY(area.y), layout.getLength(area.width),
                         layout.getLength(area.height), alpha,
                         getFrontEndArtFilter(upscaler, layout.scale));
}

} // namespace nocturne::core
