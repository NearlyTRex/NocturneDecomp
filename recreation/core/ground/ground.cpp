#include "core/ground/ground.h"

#include "common/error/error.h"
#include "engine/dosio/dosio.h"

#include <cstddef>
#include <cstdint>
#include <limits>
#include <optional>
#include <string>
#include <string_view>
#include <utility>

namespace nocturne::core {
namespace {

// What a byte of the .raw file is multiplied by for a height.
constexpr int kHeightScale = 128;
// A height past the end of the .raw file, read as fgetc's EOF.
constexpr std::int16_t kMissingHeight = -1 * kHeightScale;

// The file named like the given one, everything after its first '.' replaced by the extension.
// nocedit 0x004eebc0
std::string openFileWithExtension(const engine::CDosIo &dosio, std::string_view directory,
                                  std::string_view filename, std::string_view new_extension) {
    std::string name(filename);
    const std::size_t dot = name.find('.');
    if (dot == std::string::npos) {
        common::displayErrorAndQuit("eopen - ext not found!");
    }
    name.resize(dot + 1);
    name += new_extension;
    std::optional<std::string> file = dosio.readFile(directory, name);
    if (!file) {
        common::displayErrorAndQuit("eopen - Cannot open file");
    }
    return std::move(*file);
}

} // namespace

// deferred: the 30 by 30 grid render draws and the scales it draws at, with render
// nocedit 0x004eee80
CGround::CGround(const engine::CDosIo &dosio, int width, int height)
    : dosio_(dosio), width_(width), height_(height), texture_list_(dosio) {}

// nocedit 0x004eeee0
CGround::~CGround() = default;

// A grid whose size in bytes doesn't fit an int is out of memory; the original's could wrap to
// a short buffer it then wrote past. new can't fail quietly, so the second check is gone.
// nocedit 0x004eef00
void CGround::init() {
    free();
    const std::int64_t cells = static_cast<std::int64_t>(width_) * height_;
    if (cells < 0 || cells * static_cast<std::int64_t>(sizeof(SGroundCell)) >
                         std::numeric_limits<std::int32_t>::max()) {
        common::displayErrorAndQuit("CGround::init - Out of memory");
    }
    terrain_data_.resize(static_cast<std::size_t>(cells));
    texture_list_ = CTextureList(dosio_);
}

// nocedit 0x004eefb0
void CGround::free() {
    terrain_data_ = {};
    texture_list_ = CTextureList(dosio_);
}

// nocedit 0x004ef030
void CGround::load(std::string_view filename) {
    const std::string heights = openFileWithExtension(dosio_, "data", filename, "raw");
    for (std::size_t i = 0; i < terrain_data_.size(); ++i) {
        terrain_data_[i].height =
            i < heights.size()
                ? static_cast<std::int16_t>(static_cast<std::uint8_t>(heights[i]) * kHeightScale)
                : kMissingHeight;
    }
    const std::string colors = openFileWithExtension(dosio_, "data", filename, "clr");
    for (std::size_t i = 0; i < terrain_data_.size(); ++i) {
        const std::size_t offset = i * 2;
        std::uint16_t &color = terrain_data_[i].color;
        if (offset + 1 < colors.size()) {
            color =
                static_cast<std::uint16_t>(static_cast<std::uint8_t>(colors[offset]) |
                                           (static_cast<std::uint8_t>(colors[offset + 1]) << 8));
        } else if (offset < colors.size()) {
            color = static_cast<std::uint16_t>((color & 0xff00U) |
                                               static_cast<std::uint8_t>(colors[offset]));
        }
    }
    texture_list_.load(filename);
}

int CGround::getWidth() const {
    return width_;
}

int CGround::getHeight() const {
    return height_;
}

std::span<const SGroundCell> CGround::getTerrainData() const {
    return terrain_data_;
}

const CTextureList &CGround::getTextureList() const {
    return texture_list_;
}

} // namespace nocturne::core
