#include "engine/ncursfx/mouse.h"

#include <algorithm>
#include <format>

namespace nocturne::engine {
namespace {

constexpr int kFrameWidth = 0x36;
constexpr int kFrameHeight = 0x37;
// Skulls past the seventh repeat it.
constexpr std::size_t kDistinctSkulls = 7;

std::vector<CAlphaBitmap> makeFrames(std::size_t count, const CDosIo &dosio, IScreenDevice &screen,
                                     CSpecial &special) {
    std::vector<CAlphaBitmap> frames;
    frames.reserve(count);
    for (std::size_t i = 0; i < count; ++i) {
        frames.emplace_back(dosio, screen, special);
    }
    return frames;
}

} // namespace

// deferred: zeroing anim_timer and effect_mode, with CMouse::render, CMouse::startEffect and
//   CMouse::consumeButton
// nocedit 0x00544380
CMouse::CMouse(const CDosIo &dosio, IScreenDevice &screen, CSpecial &special)
    : cursors_(makeFrames(kCursorCount, dosio, screen, special)),
      flames_(makeFrames(kFlameCount, dosio, screen, special)),
      skulls_(makeFrames(kSkullCount, dosio, screen, special)) {}

// nocedit 0x005443e0
CMouse::~CMouse() = default;

// nocedit 0x00544420
void CMouse::load() {
    for (std::size_t i = 0; i < kCursorCount; ++i) {
        cursors_[i].load(std::format("crsr{}", i + 1), kFrameWidth, kFrameHeight);
    }
    for (std::size_t i = 0; i < kFlameCount; ++i) {
        flames_[i].load(std::format("flame{}", i + 1), kFrameWidth, kFrameHeight);
    }
    for (std::size_t i = 0; i < kSkullCount; ++i) {
        skulls_[i].load(std::format("crsrskll{}", std::min(i + 1, kDistinctSkulls)), kFrameWidth,
                        kFrameHeight);
    }
}

CAlphaBitmap &CMouse::getCursor(std::size_t index) {
    return cursors_.at(index);
}

CAlphaBitmap &CMouse::getFlame(std::size_t index) {
    return flames_.at(index);
}

CAlphaBitmap &CMouse::getSkull(std::size_t index) {
    return skulls_.at(index);
}

} // namespace nocturne::engine
