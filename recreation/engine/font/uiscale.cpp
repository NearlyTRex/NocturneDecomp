#include "engine/font/uiscale.h"

#include <algorithm>

namespace nocturne::engine {
namespace {

constexpr int kUiBaseHeight = 480;
constexpr int kUiMaxScale = 4;

} // namespace

int getUiScale(int window_height) {
    return std::clamp((window_height + (kUiBaseHeight / 2)) / kUiBaseHeight, 1, kUiMaxScale);
}

} // namespace nocturne::engine
