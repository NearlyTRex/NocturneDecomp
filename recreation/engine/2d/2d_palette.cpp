#include "common/error/error.h"
#include "engine/2d/2d.h"
#include "engine/dosio/dosio.h"
#include "platform/file.h"
#include "platform/filesystem.h"

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <memory>
#include <optional>
#include <string>

namespace nocturne::engine {
namespace {

// Entries 0 to 9 and 230 up are left out of the cube; the light table may use up to 245.
constexpr int kFirstMatchable = 10;
constexpr int kLastCubeEntry = 229;
constexpr int kCubeStep = 8;
constexpr float kFarthest = 1e30F;

// The brightness findBestPaletteMatch compares: the colour's length, scaled so white is 255.
float luminance(int red, int green, int blue) {
    const double length =
        std::sqrt(static_cast<double>((red * red) + (green * green) + (blue * blue)));
    return static_cast<float>(length * 0.57735027);
}

} // namespace

// The original left the result unset for an empty range; it is start_index here.
// nocedit 0x00401460
int C2d::findBestPaletteMatch(int red, int green, int blue, int start_index, int end_index) const {
    const float target = luminance(red, green, blue);
    int best_index = start_index;
    float best = kFarthest;
    for (int i = std::max(start_index, 0); i <= std::min(end_index, 255); ++i) {
        const auto entry = static_cast<std::size_t>(i);
        const double red_gap = std::abs(red - source_palette_data_[entry * 3]);
        const double green_gap = std::abs(green - source_palette_data_[(entry * 3) + 1]);
        const double blue_gap = std::abs(blue - source_palette_data_[(entry * 3) + 2]);
        const double luminance_gap =
            std::abs(static_cast<double>(target) - palette_luminance_cache_[entry]);
        const double distance = (red_gap * red_gap * 0.3) + (green_gap * green_gap * 0.59) +
                                (blue_gap * blue_gap * 0.11) +
                                (luminance_gap * luminance_gap * 0.15);
        if (distance < best) {
            best = static_cast<float>(distance);
            best_index = i;
        }
    }
    return best_index;
}

// nocedit 0x00402870
void C2d::buildColorLookupTable() {
    for (std::size_t i = 0; i < palette_luminance_cache_.size(); ++i) {
        palette_luminance_cache_[i] =
            luminance(source_palette_data_[i * 3], source_palette_data_[(i * 3) + 1],
                      source_palette_data_[(i * 3) + 2]);
    }
    std::size_t index = 0;
    for (int red = 0; red < 256; red += kCubeStep) {
        for (int green = 0; green < 256; green += kCubeStep) {
            for (int blue = 0; blue < 256; blue += kCubeStep) {
                color_cube_lookup_[index++] = static_cast<std::uint8_t>(
                    findBestPaletteMatch(red, green, blue, kFirstMatchable, kLastCubeEntry));
            }
        }
    }
    color_cube_lookup_[0] = 0;
}

// fog/<name>.map caches the cube; it is built and written when it isn't there.
// nocedit 0x00402930
void C2d::loadOrBuildColorMap(std::string_view filename) {
    const std::size_t dot = filename.find('.');
    if (dot == std::string_view::npos) {
        common::displayErrorAndQuit("hose!");
    }
    const std::string map_name = std::string(filename.substr(0, dot)) + ".map";
    const std::optional<std::string> cached = dosio_.readFile("fog", map_name);
    if (cached) {
        std::copy_n(cached->begin(), std::min(cached->size(), kColorCubeSize),
                    color_cube_lookup_.begin());
        return;
    }
    buildColorLookupTable();
    const std::unique_ptr<platform::IFile> file =
        dosio_.getFile("fog", map_name, platform::EFileMode::Write);
    if (file == nullptr) {
        common::displayErrorAndQuit("Unable to write quick map!");
    }
    file->write(std::as_bytes(std::span(color_cube_lookup_)));
}

} // namespace nocturne::engine
