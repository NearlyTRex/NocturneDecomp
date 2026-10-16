#include "engine/alphabit/alphabitmap.h"

#include "common/error/error.h"
#include "common/math/bits.h"
#include "engine/dosio/dosio.h"
#include "engine/screendevice.h"

#include <algorithm>
#include <cstddef>
#include <format>
#include <optional>
#include <string>
#include <utility>

namespace nocturne::engine {
namespace {

constexpr int kTrueColorDepth = 32;
constexpr std::uint8_t kOpaque = 0xff;
// What the 16-bit blender expects, whatever the screen's own layout.
constexpr SColorChannels kEightEightEight{
    .red = {.bit_position = 16}, .green = {.bit_position = 8}, .blue = {.bit_position = 0}};

std::uint32_t packColor(std::uint8_t red, std::uint8_t green, std::uint8_t blue,
                        const SColorChannels &layout) {
    return common::shiftLeft(red, layout.red.bit_position) |
           common::shiftLeft(green, layout.green.bit_position) |
           common::shiftLeft(blue, layout.blue.bit_position);
}

std::string readArt(const CDosIo &dosio, const std::string &filename) {
    std::optional<std::string> contents = dosio.readFile("art", filename);
    if (!contents) {
        common::displayErrorAndQuit(std::format("CAlphaBitmap::load - Can't open {}", filename));
    }
    return std::move(*contents);
}

// A file shorter than its image leaves the rest zero; the original left it uninitialised.
void copyInto(std::vector<std::uint8_t> &dest, const std::string &contents) {
    std::copy_n(contents.begin(), std::min(contents.size(), dest.size()), dest.begin());
}

} // namespace

// nocedit 0x00410520
CAlphaBitmap::CAlphaBitmap(const CDosIo &dosio, IScreenDevice &screen, CSpecial &special)
    : dosio_(dosio), screen_(screen), special_(special) {}

// nocedit 0x00410540
CAlphaBitmap::~CAlphaBitmap() = default;

// The original kept the size, so drawing a freed image read freed memory.
// nocedit 0x00410560
void CAlphaBitmap::free() {
    raw_.clear();
    opa_.clear();
    act_.fill(0);
    width_ = 0;
    height_ = 0;
}

std::span<const std::uint8_t> CAlphaBitmap::getRaw() const {
    return raw_;
}

// nocedit 0x004105d0
void CAlphaBitmap::load(std::string_view filename, int width, int height) {
    free();
    width_ = width;
    height_ = height;
    const auto size = static_cast<std::size_t>(width) * static_cast<std::size_t>(height);
    raw_.assign(size, 0);
    opa_.assign(size, 0);
    copyInto(raw_, readArt(dosio_, std::format("{}.raw", filename)));
    loadPalette(filename);
    loadOpacity(filename);
}

// Keeps every scaleFactorX-th pixel of every scaleFactorY-th row. The original divided by a zero
// factor, and gave the image a negative size for a negative one.
// nocedit 0x00410c20
void CAlphaBitmap::scale(int scaleFactorX, int scaleFactorY) {
    if (scaleFactorX < 1 || scaleFactorY < 1) {
        return;
    }
    const int width = width_ / scaleFactorX;
    const int height = height_ / scaleFactorY;
    std::size_t dest = 0;
    for (int y = 0; y < height; ++y) {
        const auto row = static_cast<std::size_t>(y) * static_cast<std::size_t>(width_) *
                         static_cast<std::size_t>(scaleFactorY);
        for (int x = 0; x < width; ++x, ++dest) {
            const std::size_t source =
                row + (static_cast<std::size_t>(x) * static_cast<std::size_t>(scaleFactorX));
            raw_[dest] = raw_[source];
            opa_[dest] = opa_[source];
        }
    }
    raw_.resize(dest);
    opa_.resize(dest);
    width_ = width;
    height_ = height;
}

// Missing entries are black.
void CAlphaBitmap::loadPalette(std::string_view filename) {
    std::string rgb = readArt(dosio_, std::format("{}.act", filename));
    rgb.resize(act_.size() * 3, '\0');
    const SColorChannels &layout = screen_.getBitsPerPixel() == kTrueColorDepth
                                       ? screen_.getColorChannels()
                                       : kEightEightEight;
    for (std::size_t i = 0; i < act_.size(); ++i) {
        act_[i] = packColor(static_cast<std::uint8_t>(rgb[i * 3]),
                            static_cast<std::uint8_t>(rgb[(i * 3) + 1]),
                            static_cast<std::uint8_t>(rgb[(i * 3) + 2]), layout);
    }
}

void CAlphaBitmap::loadOpacity(std::string_view filename) {
    const std::optional<std::string> contents =
        dosio_.readFile("art", std::format("{}.opa", filename));
    if (contents) {
        copyInto(opa_, *contents);
        return;
    }
    std::ranges::transform(raw_, opa_.begin(), [this](std::uint8_t index) {
        return act_[index] != 0 ? kOpaque : std::uint8_t{0};
    });
}

} // namespace nocturne::engine
