#pragma once

#include "core/fwd.h"
#include "core/texlist/texturelist.h"
#include "engine/fwd.h"

#include <cstdint>
#include <span>
#include <string_view>
#include <vector>

namespace nocturne::core {

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
    void render();
    int getHeightAtPosition(int world_x, int world_z);

    [[nodiscard]] int getWidth() const;
    [[nodiscard]] int getHeight() const;
    // Row by row; empty until init.
    [[nodiscard]] std::span<const SGroundCell> getTerrainData() const;
    [[nodiscard]] const CTextureList &getTextureList() const;

private:
    const engine::CDosIo &dosio_;
    int width_;
    int height_;
    std::vector<SGroundCell> terrain_data_;
    // The original's was null before init and after free; here it is empty then.
    CTextureList texture_list_;
};

} // namespace nocturne::core
