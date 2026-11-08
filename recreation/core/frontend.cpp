#include "core/frontend.h"

#include <algorithm>

namespace nocturne::core {
namespace {

constexpr int kWidestFrontEnd = 1280;
constexpr int kWidthStep = 16;

} // namespace

int getFrontEndWidth(int picked_width, int picked_height, bool accelerated) {
    if (!accelerated || picked_height <= 0) {
        return kFrontEndLayoutWidth;
    }
    const int exact = kFrontEndHeight * picked_width / picked_height;
    const int rounded = (exact + (kWidthStep / 2)) / kWidthStep * kWidthStep;
    return std::clamp(rounded, kFrontEndLayoutWidth, kWidestFrontEnd);
}

int getFrontEndLeft(int screen_width) {
    return std::max((screen_width - kFrontEndLayoutWidth) / 2, 0);
}

} // namespace nocturne::core
