#include "core/ground/ground.h"

#include "common/error/error.h"
#include "common/math/fixed.h"
#include "common/math/matrix3x3i.h"
#include "common/math/vector3i.h"
#include "common/render/renderstate.h"
#include "engine/dosio/dosio.h"
#include "engine/drender/demonrenderer.h"
#include "engine/matrix/matrix.h"
#include "engine/special/special.h"
#include "platform/mrglheaderprimitive.h"
#include "platform/projectedvertex.h"
#include "platform/rendervertex.h"

#include <algorithm>
#include <array>
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
// The grid's vertices start this far into the renderer's.
constexpr std::size_t kFirstGroundVertex = 0x20;
// World units in 24.8.
constexpr int kFixedOne = 0x100;
constexpr unsigned kFixedShift = 8;
// Each vertex is a quarter grey, and fades out to full at the grid's reach.
constexpr int kGroundGrey = 0x3fff;
constexpr int kFullFade = 0xffff;
// The visible cells' bounds start past any the view reaches, and take two more each way.
constexpr int kNoCell = 999;
constexpr int kCellMargin = 2;
// A texel's sixteenth in from the texture's edges, in 8.16.
constexpr int kTextureNear = 0x8 << 16;
constexpr int kTextureFar = 0xf8 << 16;
constexpr int kGroundRenderFlags =
    static_cast<int>(common::kRenderTextured | common::kRenderSmooth | common::kRenderSolidAlpha |
                     common::kRenderDepthTest | common::kRenderVertexColor);
// A corner past the view has its sign bit and a bit for each side it is past.
constexpr std::uint32_t kSideBits = 0xff;
// A point's place across its cell, in 16.16.
constexpr unsigned kFractionShift = 16;
constexpr int kWholeFraction = 0x10000;
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

// The original also kept a height scale of 1, which every height was multiplied by.
// nocedit 0x004eee80
CGround::CGround(const engine::CDosIo &dosio, int width, int height)
    : dosio_(dosio), width_(width), height_(height), texture_list_(dosio) {}

// nocedit 0x004eeee0
CGround::~CGround() = default;

void CGround::setSize(int width, int height) {
    width_ = width;
    height_ = height;
}

// A grid whose size in bytes doesn't fit an int is out of memory; the original's could wrap to
// a short buffer it then wrote past. new can't fail quietly, so the second check is gone.
// nocedit 0x004eef00
// bw1 0x004e7240
// bw2 0x004ca9c0
// bw3 0x004cfbd0
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
// bw1 0x004e72e0
// bw2 0x004caa60
// bw3 0x004cfc70
void CGround::free() {
    terrain_data_ = {};
    texture_list_ = CTextureList(dosio_);
}

// nocedit 0x004ef030
// bw1 0x004e7340
// bw2 0x004caac0
// bw3 0x004cfcd0
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

// nocedit 0x004ef380
std::size_t CGround::getVertexIndex(int row, int column) {
    constexpr std::size_t kRowStride = (std::size_t{kGridReach} * 2) + 2;
    return (kRowStride * static_cast<std::size_t>(row)) + kFirstGroundVertex +
           static_cast<std::size_t>(column);
}

// The original's distance for a far vertex's fade could overflow its shift; here it wraps.
// nocedit 0x004ef3a0
void CGround::transformAndStoreVertex(const SGroundDrawOwners &owners, int column, int row) const {
    platform::SRenderVertex &vertex = owners.renderer.getVertexBuffer()[getVertexIndex(
        (row - camera_y_) + kGridReach, (column - camera_x_) + kGridReach)];
    owners.special.transformPoint(
        vertex.projected_vertex,
        {.x = kCellSize * column * kFixedOne,
         .y = heightAt(static_cast<std::uint32_t>(row), static_cast<std::uint32_t>(column)),
         .z = kCellSize * row * kFixedOne});
    vertex.r = kGroundGrey;
    vertex.g = kGroundGrey;
    vertex.b = kGroundGrey;
    const int depth = vertex.projected_vertex.transformed_z;
    vertex.a = depth < 0
                   ? 0
                   : std::min(static_cast<int>(static_cast<std::uint32_t>(depth) << kFixedShift) /
                                  (kGridReach * kCellSize),
                              kFullFade);
}

// The view's four far corners, a grid's reach out along each of the camera's axes either way
// across and up, and the camera itself, in cells.
// nocedit 0x004ef490
void CGround::transformAndStoreVertices(const SGroundDrawOwners &owners) {
    const common::CMatrix3x3i &axes = owners.matrix.getInverseMatrix();
    const int reach = kGridReach * kCellSize * kFixedOne;
    const auto corner = [&axes](int across, int up, int ahead) {
        const auto component = [&axes, across, up, ahead](int common::CVector3i::*axis) {
            return common::wrappingAdd(
                common::wrappingAdd(common::fixedMultiply(axes.m[0].*axis, across),
                                    common::fixedMultiply(axes.m[1].*axis, up)),
                common::fixedMultiply(axes.m[2].*axis, ahead));
        };
        return common::CVector3i{.x = component(&common::CVector3i::x),
                                 .y = component(&common::CVector3i::y),
                                 .z = component(&common::CVector3i::z)};
    };
    const std::array<common::CVector3i, 5> corners{
        corner(reach, reach, reach), corner(-reach, reach, reach), corner(-reach, -reach, reach),
        corner(reach, -reach, reach), common::CVector3i{}};
    int min_x = kNoCell;
    int min_y = kNoCell;
    int max_x = -kNoCell;
    int max_y = -kNoCell;
    for (const common::CVector3i &point : corners) {
        const int x = point.x / (kCellSize * kFixedOne);
        const int y = point.z / (kCellSize * kFixedOne);
        min_x = std::min(min_x, x);
        min_y = std::min(min_y, y);
        max_x = std::max(max_x, x);
        max_y = std::max(max_y, y);
    }
    visible_max_x_ = max_x + kCellMargin;
    visible_max_y_ = max_y + kCellMargin;
    visible_min_x_ = min_x - kCellMargin;
    visible_min_y_ = min_y - kCellMargin;
    const int first_x = std::max(-kGridReach, visible_min_x_);
    const int last_x = std::min(kGridReach, visible_max_x_);
    const int first_y = std::max(-kGridReach, visible_min_y_);
    const int last_y = std::min(kGridReach, visible_max_y_);
    for (int y = first_y; y <= last_y; ++y) {
        for (int x = first_x; x <= last_x; ++x) {
            transformAndStoreVertex(owners, camera_x_ + x, camera_y_ + y);
        }
    }
}

// The texture inset half a texel's sixteenth from each edge, in 8.16.
// nocedit 0x004ef880
void CGround::setQuadTextureCoordinates(const SGroundDrawOwners &owners, int column, int row) {
    texture_list_.captureTexture(
        owners.renderer,
        terrain_data_[(static_cast<std::size_t>(row) * static_cast<std::size_t>(width_)) +
                      static_cast<std::size_t>(column)]
            .color);
    const std::span<platform::SRenderVertex> vertices = owners.renderer.getVertexBuffer();
    const auto place = [&vertices](std::size_t index, int u, int v) {
        vertices[index].u = u;
        vertices[index].v = v;
    };
    place(vertex_indices_[1], kTextureFar, kTextureFar);
    place(vertex_indices_[0], kTextureNear, kTextureFar);
    place(vertex_indices_[3], kTextureNear, kTextureNear);
    place(vertex_indices_[2], kTextureFar, kTextureNear);
}

// nocedit 0x004ef970
void CGround::renderTerrainPrimitive(const SGroundDrawOwners &owners, std::array<int, 3> corners) {
    owners.renderer.renderTexturedDirect(
        {.surface_normal = {}, .vertex_indices = {corners.begin(), corners.end()}},
        kGroundRenderFlags);
}

// A quad wholly past one side of the view is skipped; the others are split along the diagonal
// their cell's checkerboard square picks.
// nocedit 0x004ef990
void CGround::renderTerrainQuad(const SGroundDrawOwners &owners, int world_column, int world_row) {
    const int column_in_grid = (world_column - camera_x_) + kGridReach;
    const int row_in_grid = (world_row - camera_y_) + kGridReach;
    const auto row =
        static_cast<std::uint32_t>(world_row) & static_cast<std::uint32_t>(height_ - 1);
    const auto column =
        static_cast<std::uint32_t>(world_column) & static_cast<std::uint32_t>(width_ - 1);
    vertex_indices_ = {getVertexIndex(row_in_grid, column_in_grid),
                       getVertexIndex(row_in_grid, column_in_grid + 1),
                       getVertexIndex(row_in_grid + 1, column_in_grid + 1),
                       getVertexIndex(row_in_grid + 1, column_in_grid)};
    const std::span<platform::SRenderVertex> vertices = owners.renderer.getVertexBuffer();
    std::uint32_t shared_sides = ~0U;
    for (const std::size_t index : vertex_indices_) {
        shared_sides &= static_cast<std::uint32_t>(vertices[index].projected_vertex.screen_x);
    }
    if (static_cast<std::int32_t>(shared_sides) < 0 && (shared_sides & kSideBits) != 0) {
        return;
    }
    setQuadTextureCoordinates(owners, static_cast<int>(column), static_cast<int>(row));
    const auto index = [this](std::size_t corner) {
        return static_cast<int>(vertex_indices_.at(corner));
    };
    if ((column & 1U) == (row & 1U)) {
        renderTerrainPrimitive(owners, {index(2), index(1), index(0)});
        renderTerrainPrimitive(owners, {index(3), index(2), index(0)});
        return;
    }
    renderTerrainPrimitive(owners, {index(3), index(1), index(0)});
    renderTerrainPrimitive(owners, {index(3), index(2), index(1)});
}

// Each quarter about the camera from its outer edges in: the rows behind it up from the first,
// the rows ahead down from the last, and within each the columns left of it on from the first and
// right of it back from the last.
// nocedit 0x004efb70
void CGround::renderVisibleTerrain(const SGroundDrawOwners &owners) {
    const int first_x = std::max(-kGridReach, visible_min_x_);
    const int last_x = std::min(kGridReach, visible_max_x_);
    const int first_y = std::max(-kGridReach, visible_min_y_);
    const int last_y = std::min(kGridReach, visible_max_y_);
    const auto drawRow = [this, &owners, first_x, last_x](int y) {
        for (int x = first_x; x < 0; ++x) {
            renderTerrainQuad(owners, camera_x_ + x, camera_y_ + y);
        }
        for (int x = last_x - 1; x >= 0; --x) {
            renderTerrainQuad(owners, camera_x_ + x, camera_y_ + y);
        }
    };
    for (int y = first_y; y < 0; ++y) {
        drawRow(y);
    }
    for (int y = last_y - 1; y >= 0; --y) {
        drawRow(y);
    }
}

// The camera's cell rounds toward zero, then a cell down when below it.
// nocedit 0x004efc90
void CGround::render(const SGroundDrawOwners &owners) {
    const common::CVector3i origin = owners.matrix.getCameraOrigin();
    camera_x_ = origin.x / (kCellSize * kFixedOne);
    camera_y_ = origin.z / (kCellSize * kFixedOne);
    if (camera_x_ < 0) {
        --camera_x_;
    }
    if (camera_y_ < 0) {
        --camera_y_;
    }
    transformAndStoreVertices(owners);
    owners.renderer.setRenderingState(true);
    renderVisibleTerrain(owners);
    owners.renderer.setRenderingState(false);
}

int CGround::heightAt(std::uint32_t row, std::uint32_t column) const {
    const std::uint32_t wrapped_row = row & static_cast<std::uint32_t>(height_ - 1);
    const std::uint32_t wrapped_column = column & static_cast<std::uint32_t>(width_ - 1);
    return terrain_data_[(static_cast<std::size_t>(wrapped_row) *
                          static_cast<std::size_t>(width_)) +
                         wrapped_column]
        .height;
}

// Each cell is split along the diagonal its checkerboard square picks, and the point takes the
// plane of the triangle it is in; the original masked one corner's column by the height.
// nocedit 0x004efd30
int CGround::getHeightAtPosition(int world_x, int world_z) const {
    constexpr int kCell = kCellSize * kFixedOne;
    const auto fraction = [](int coordinate) {
        return static_cast<int>(
            (static_cast<std::int64_t>(static_cast<std::uint32_t>(coordinate) & (kCell - 1U))
             << kFractionShift) /
            kCell);
    };
    int along_z = fraction(world_z);
    const int along_x = fraction(world_x);
    const auto width_mask = static_cast<std::uint32_t>(width_ - 1);
    const auto height_mask = static_cast<std::uint32_t>(height_ - 1);
    const std::uint32_t column = width_mask & (static_cast<std::uint32_t>(world_z) / kCell);
    const std::uint32_t row = (static_cast<std::uint32_t>(world_x) / kCell) & height_mask;
    const std::uint32_t next_row = row + 1;
    const std::uint32_t next_column = column + 1;
    const auto at = [this](std::uint32_t cell) {
        return static_cast<int>(terrain_data_[cell].height);
    };
    const auto width = static_cast<std::uint32_t>(width_);
    const auto blend = [](int weight_z, int rise_z, int weight_x, int rise_x, int base) {
        const auto scaled = [](int weight, int rise) {
            return static_cast<int>((static_cast<std::int64_t>(weight) * rise) >> kFractionShift);
        };
        return common::wrappingAdd(common::wrappingAdd(scaled(weight_x, rise_x), base),
                                   scaled(weight_z, rise_z));
    };
    if ((column & 1U) != (row & 1U)) {
        along_z = kWholeFraction - along_z;
        if (along_x < along_z) {
            const int near = at(column + (width * row));
            const int across = at((next_column & width_mask) + (width * row));
            const int ahead = at(column + ((next_row & height_mask) * width));
            return blend(along_z, near - across, along_x, ahead - near, across);
        }
        const std::uint32_t far_column = width_mask & next_column;
        const int across = at((row * width) + far_column);
        const std::uint32_t ahead_row = width * (next_row & height_mask);
        const int corner = at(ahead_row + far_column);
        return blend(along_z, at(column + ahead_row) - corner, along_x, corner - across, across);
    }
    if (along_x < along_z) {
        const int near = at(column + (width * row));
        const int across = at((width_mask & next_column) + (width * row));
        const int corner = at((next_column & height_mask) + ((next_row & height_mask) * width));
        return blend(along_z, across - near, along_x, corner - across, near);
    }
    const int near = at((row * width) + column);
    const std::uint32_t ahead_row = (next_row & height_mask) * width;
    const int ahead = at(column + ahead_row);
    return blend(along_z, at((next_column & width_mask) + ahead_row) - ahead, along_x, ahead - near,
                 near);
}

std::span<const SGroundCell> CGround::getTerrainData() const {
    return terrain_data_;
}

const CTextureList &CGround::getTextureList() const {
    return texture_list_;
}

} // namespace nocturne::core
