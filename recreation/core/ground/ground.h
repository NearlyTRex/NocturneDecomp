#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "core/texlist/texturelist.h"
#include "engine/fwd.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <span>
#include <string_view>
#include <vector>

namespace nocturne::core {

// What a ground is drawn with: the renderer, its projection, and the camera's transform.
struct SGroundDrawOwners {
    engine::CDemonRenderer &renderer;
    const engine::CSpecial &special;
    const engine::CMatrix &matrix;
};

// One point of a ground's grid.
struct SGroundCell {
    std::int16_t height = 0;
    std::uint16_t color = 0;
};

// A heightfield ground: a grid of heights and colours, and the textures painted over it.
class CGround {
public:
    CGround(const engine::CDosIo &dosio, int width, int height);
    ~CGround();
    CGround(const CGround &) = delete;
    CGround &operator=(const CGround &) = delete;

    // A grid of zeroes and an empty texture list, for load to fill.
    void init();
    // No grid and an empty texture list.
    void free();
    // After init: the heights from the .raw file named like the given one, everything from its
    // first '.' replaced, a byte each scaled by 128; the colours from its .clr, two bytes each;
    // then its texture list. A file that runs short gives heights of -128 and leaves colours.
    void load(std::string_view filename);
    // The cells about the camera, 30 each way, that its view reaches, each a textured square of
    // eight units split into two triangles, from the far edges in toward the camera; the grid
    // repeats past its edges.
    void render(const SGroundDrawOwners &owners);
    // The height in 24.8 at the point, between the corners of the triangle of its cell it is in;
    // x picks the grid's row and z its column, the other way from render's.
    [[nodiscard]] int getHeightAtPosition(int world_x, int world_z) const;

    [[nodiscard]] int getWidth() const;
    [[nodiscard]] int getHeight() const;
    // Row by row; empty until init.
    [[nodiscard]] std::span<const SGroundCell> getTerrainData() const;
    [[nodiscard]] const CTextureList &getTextureList() const;

    // The renderer vertex a grid point draws with, counted from the camera's cell.
    [[nodiscard]] static std::size_t getVertexIndex(int row, int column);

    // How many cells the draw reaches each way from the camera's, and how large a cell is.
    static constexpr int kGridReach = 30;
    static constexpr int kCellSize = 8;

private:
    // The grid point into the renderer's vertices, grey, fading out with its distance.
    void transformAndStoreVertex(const SGroundDrawOwners &owners, int column, int row) const;
    // Every grid point the view's far corners and the camera reach, two cells further.
    void transformAndStoreVertices(const SGroundDrawOwners &owners);
    void setQuadTextureCoordinates(const SGroundDrawOwners &owners, int column, int row);
    static void renderTerrainPrimitive(const SGroundDrawOwners &owners, std::array<int, 3> corners);
    void renderTerrainQuad(const SGroundDrawOwners &owners, int world_column, int world_row);
    void renderVisibleTerrain(const SGroundDrawOwners &owners);
    [[nodiscard]] int heightAt(std::uint32_t row, std::uint32_t column) const;

    const engine::CDosIo &dosio_;
    int width_;
    int height_;
    // The camera's cell, and the cells about it the view reaches.
    int camera_x_ = 0;
    int camera_y_ = 0;
    int visible_min_x_ = 0;
    int visible_max_x_ = 0;
    int visible_min_y_ = 0;
    int visible_max_y_ = 0;
    // The quad being drawn's corners.
    std::array<std::size_t, 4> vertex_indices_{};
    std::vector<SGroundCell> terrain_data_;
    // The original's was null before init and after free; here it is empty then.
    // nocedit 0x005dbdb0
    CTextureList texture_list_;
};

} // namespace nocturne::core
