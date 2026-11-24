#include "engine/pcx/pcx.h"

#include "common/error/error.h"
#include "common/image/png.h"
#include "common/video/framebuffer.h"
#include "engine/2d/2d.h"
#include "engine/dosio/dosio.h"
#include "engine/screendevice.h"
#include "platform/file.h"
#include "platform/filesystem.h"

#include <cstddef>
#include <cstdint>
#include <memory>
#include <optional>
#include <span>
#include <vector>

namespace nocturne::engine {
namespace {

// The original kept a 640 x 240 screen's picture at 4:3 by writing each row twice.
constexpr int kHalfHeightWidth = 640;
constexpr int kHalfHeight = 240;
constexpr std::uint32_t kFullLevel = 0xff;

[[noreturn]] void quitCannotWrite() {
    common::displayErrorAndQuit("Cannot write .PNG");
}

// The channel's level in the pixel, widened to 8 bits.
std::uint8_t readLevel(std::uint32_t pixel, const common::SChannelLayout &channel) {
    const std::uint32_t top = kFullLevel >> static_cast<unsigned>(channel.dither_shift);
    const std::uint32_t level = (pixel >> static_cast<unsigned>(channel.bit_position)) & top;
    return static_cast<std::uint8_t>(((level * kFullLevel) + (top / 2)) / top);
}

// Each pixel of the row as red, green and blue.
void appendRow(std::vector<std::uint8_t> &rgb, IScreenDevice &screen, const C2d &two_d,
               const void *row, std::size_t width) {
    if (screen.getBitsPerPixel() == 8) {
        const C2d::Palette &palette = two_d.getSourcePaletteData();
        const std::span indices(static_cast<const std::uint8_t *>(row), width);
        for (const std::uint8_t index : indices) {
            const auto entry = static_cast<std::size_t>(index) * 3;
            rgb.insert(rgb.end(), {palette[entry], palette[entry + 1], palette[entry + 2]});
        }
        return;
    }
    const SColorChannels &channels = screen.getColorChannels();
    const auto append = [&](std::uint32_t pixel) {
        rgb.insert(rgb.end(), {readLevel(pixel, channels.red), readLevel(pixel, channels.green),
                               readLevel(pixel, channels.blue)});
    };
    if (screen.getBitsPerPixel() == 16) {
        for (const std::uint16_t pixel :
             std::span(static_cast<const std::uint16_t *>(row), width)) {
            append(pixel);
        }
        return;
    }
    for (const std::uint32_t pixel : std::span(static_cast<const std::uint32_t *>(row), width)) {
        append(pixel);
    }
}

} // namespace

std::vector<std::uint8_t> readScreenRgb(IScreenDevice &screen, const C2d &two_d) {
    const int width = screen.getWindowWidth();
    std::vector<std::uint8_t> rgb;
    const std::span<void *> rows = screen.getScreenRows();
    for (int y = 0; y < screen.getWindowHeight(); ++y) {
        appendRow(rgb, screen, two_d, rows[static_cast<std::size_t>(y)],
                  static_cast<std::size_t>(width));
    }
    return rgb;
}

// The original wrote an 8-bit screen as a PCX and a 16- or 32-bit one as a raw dump of its rows;
// every depth is now a PNG, which any viewer opens.
// nocedit 0x005490c0
// bw1 0x00535d80
// bw2 0x00514a30
// bw3 0x0050da60
void saveScreenshotGeneral(IScreenDevice &screen, const C2d &two_d, const CDosIo &dosio,
                           std::string_view filename) {
    const int width = screen.getWindowWidth();
    const int height = screen.getWindowHeight();
    const int copies = width == kHalfHeightWidth && height == kHalfHeight ? 2 : 1;
    const std::vector<std::uint8_t> screen_rgb = readScreenRgb(screen, two_d);
    const std::size_t row_bytes = static_cast<std::size_t>(width) * 3;
    std::vector<std::uint8_t> rgb;
    for (std::size_t start = 0; start < screen_rgb.size(); start += row_bytes) {
        for (int copy = 0; copy < copies; ++copy) {
            rgb.insert(rgb.end(), screen_rgb.begin() + static_cast<std::ptrdiff_t>(start),
                       screen_rgb.begin() + static_cast<std::ptrdiff_t>(start + row_bytes));
        }
    }
    const std::optional<std::vector<std::uint8_t>> png =
        common::encodePng(width, height * copies, rgb, common::kPngFastest);
    if (!png) {
        quitCannotWrite();
    }
    const std::unique_ptr<platform::IFile> file =
        dosio.getFile("", filename, platform::EFileMode::Write);
    if (file == nullptr || !file->write(std::as_bytes(std::span(*png)))) {
        quitCannotWrite();
    }
}

} // namespace nocturne::engine
