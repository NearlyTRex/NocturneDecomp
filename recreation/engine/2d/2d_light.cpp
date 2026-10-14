#include "common/error/error.h"
#include "engine/2d/2d.h"
#include "engine/dosio/dosio.h"
#include "platform/file.h"
#include "platform/filesystem.h"

#include <algorithm>
#include <memory>
#include <optional>
#include <string>

namespace nocturne::engine {
namespace {

constexpr std::size_t kHalfLevels = C2d::kLightLevels / 2;
constexpr float kLevelStep = 1.0F / kHalfLevels;
constexpr std::size_t kLightTableBytes = C2d::kLightLevels * 256;
// A file this size is rebuilt on every load and never overwritten.
constexpr std::int64_t kRebuiltFileSize = 0x1000;
// Darkening leaves these entries as they are.
constexpr std::size_t kLastFixedLow = 9;
constexpr std::size_t kFirstFixedHigh = 246;
constexpr int kFirstMatchable = 10;
constexpr int kLastMatchable = 245;

} // namespace

// The editor's body is empty; this is the retail build's.
// nocedit 0x00402860
// nocturne 0x00403460
void C2d::loadLightTable(std::string_view filename) {
    if (dosio_.getFileSize("fog", filename) == kRebuiltFileSize) {
        buildLightTable(0);
    } else if (const std::optional<std::string> saved = dosio_.readFile("fog", filename)) {
        const std::size_t size = std::min(saved->size(), kLightTableBytes);
        for (std::size_t offset = 0; offset < size; offset += 256) {
            std::copy_n(saved->begin() + static_cast<std::ptrdiff_t>(offset),
                        std::min<std::size_t>(256, size - offset),
                        light_table_[1 + (offset / 256)].begin());
        }
    } else {
        buildLightTable(0);
        saveLightTable(filename);
    }
    light_table_.front() = light_table_[1];
    light_table_.back() = light_table_[kLightLevels];
}

// nocturne 0x004031a0
void C2d::buildLightTable(int base_color_index) {
    const auto base = static_cast<std::size_t>(base_color_index) * 3;
    for (std::size_t entry = 0; entry < 256; ++entry) {
        buildDarkeningRows(entry, base);
        buildBrighteningRows(entry);
    }
}

// Each row adds a sixteenth of the entry's distance from the base colour, starting from zero
// rather than from the base.
void C2d::buildDarkeningRows(std::size_t entry, std::size_t base) {
    const auto step = [&](std::size_t channel) {
        return (static_cast<float>(source_palette_data_[(entry * 3) + channel]) -
                static_cast<float>(source_palette_data_[base + channel])) *
               kLevelStep;
    };
    const float red_step = step(0);
    const float green_step = step(1);
    const float blue_step = step(2);
    float red = 0.0F;
    float green = 0.0F;
    float blue = 0.0F;
    for (std::size_t row = 1; row <= kHalfLevels; ++row) {
        red += red_step;
        green += green_step;
        blue += blue_step;
        light_table_[row][entry] =
            entry <= kLastFixedLow || entry >= kFirstFixedHigh
                ? static_cast<std::uint8_t>(entry)
                : static_cast<std::uint8_t>(findBestPaletteMatch(
                      static_cast<int>(red), static_cast<int>(green), static_cast<int>(blue),
                      kFirstMatchable, kLastMatchable));
    }
}

// Each row adds a sixteenth of the gap to white, so the last is white.
void C2d::buildBrighteningRows(std::size_t entry) {
    float red = source_palette_data_[entry * 3];
    float green = source_palette_data_[(entry * 3) + 1];
    float blue = source_palette_data_[(entry * 3) + 2];
    const float red_step = (255.0F - red) * kLevelStep;
    const float green_step = (255.0F - green) * kLevelStep;
    const float blue_step = (255.0F - blue) * kLevelStep;
    for (std::size_t row = kHalfLevels + 1; row <= kLightLevels; ++row) {
        red += red_step;
        green += green_step;
        blue += blue_step;
        light_table_[row][entry] = static_cast<std::uint8_t>(
            findBestPaletteMatch(static_cast<int>(red), static_cast<int>(green),
                                 static_cast<int>(blue), kFirstMatchable, kLastMatchable));
    }
}

// nocturne 0x00403500
void C2d::saveLightTable(std::string_view filename) {
    const std::unique_ptr<platform::IFile> file =
        dosio_.getFile("fog", filename, platform::EFileMode::Write);
    if (file == nullptr) {
        common::displayErrorAndQuit("Unable to write light tab");
    }
    for (std::size_t row = 1; row <= kLightLevels; ++row) {
        file->write(std::as_bytes(std::span(light_table_[row])));
    }
}

} // namespace nocturne::engine
