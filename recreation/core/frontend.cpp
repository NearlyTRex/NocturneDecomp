#include "core/frontend.h"

#include "common/error/error.h"
#include "engine/package/gamecontent.h"
#include "support/newmsg/newmsg.h"

#include <algorithm>
#include <cmath>
#include <format>

namespace nocturne::core {

std::string getLabel(const engine::SGameContent &content, const support::CNewMsg &messages,
                     std::string_view id) {
    const auto found = content.labels.find(id);
    if (found == content.labels.end()) {
        common::displayErrorAndQuit(std::format("No package gives the label {}", id));
    }
    return std::string(messages.getLocalizedString(found->second));
}

std::string shortenToLength(std::string_view text, std::size_t length) {
    constexpr std::string_view kShortened = "...";
    if (text.size() <= length) {
        return std::string(text);
    }
    if (length <= kShortened.size()) {
        return std::string(kShortened.substr(0, length));
    }
    std::string_view kept = text.substr(0, length - kShortened.size());
    while (kept.ends_with(' ')) {
        kept.remove_suffix(1);
    }
    return std::format("{}{}", kept, kShortened);
}

std::string_view requireFrontEndStyle(std::string_view part,
                                      const std::optional<std::string> &style,
                                      std::initializer_list<std::string_view> built) {
    if (!style) {
        common::displayErrorAndQuit(std::format("No package names the {}", part));
    }
    if (!std::ranges::contains(built, *style)) {
        common::displayErrorAndQuit(std::format("The {} {} isn't in this build", part, *style));
    }
    return *style;
}

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
