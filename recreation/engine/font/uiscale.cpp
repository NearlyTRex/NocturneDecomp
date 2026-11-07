#include "engine/font/uiscale.h"

#include <algorithm>

namespace nocturne::engine {
namespace {

constexpr int kUiBaseHeight = 480;
constexpr int kUiMaxScale = 4;
constexpr float kSmallestFilteredScale = 1.5F;

} // namespace

int getUiScale(int window_height) {
    return std::clamp((window_height + (kUiBaseHeight / 2)) / kUiBaseHeight, 1, kUiMaxScale);
}

float getUiTextScale(int window_height) {
    const float scale = static_cast<float>(window_height) / static_cast<float>(kUiBaseHeight);
    return scale < kSmallestFilteredScale ? 1.0F : scale;
}

} // namespace nocturne::engine
