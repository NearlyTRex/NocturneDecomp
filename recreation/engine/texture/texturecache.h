#pragma once

#include "engine/fwd.h"

#include <array>
#include <cstdint>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {

// What the texture cache reads its files with, falls back on, and selects textures into.
struct STextureOwners {
    const CDosIo &dosio;
    const C2d &two_d;
    IScreenDevice &screen;
    CSpecial &special;
    SCurrentTexture &current_texture;
};

class CTextureCache {
public:
    // Empty, with room for max_texture_count textures.
    CTextureCache(int max_texture_count, const STextureOwners &owners);

    [[nodiscard]] int getMaxTextureCount() const;
    void reset();
    void freeTextures();
    // art/<name> for its size, which gives the dimension; the .act palette, .raw texels and
    // .opa opacity of the same stem sit beside it. Takes the next slot, back to the first after
    // the last, and returns it. Fatal for a size that isn't a square of 32 to 1024 texels, or a
    // name without an extension.
    int loadTexture(std::string_view texture_name);
    // The hinted slot when it holds the name, else the first slot below the next free one that
    // does; -1 when none.
    [[nodiscard]] int findTexture(int hint_index, std::string_view texture_name) const;
    // Makes the slot the current texture. Without the hardware renderer it also fills the
    // hardware palettes from the slot's palette.
    void setupTexture(int texture_index);
    void renderAllTextures();
    int getTextureCacheStats(char *output_buffer);

private:
    static constexpr std::size_t kPaletteBytes = 768;

    struct STextureSlot {
        std::string name;
        int dimension = 0;
        std::vector<std::uint8_t> data;
        std::vector<std::uint8_t> opacity;
        std::array<std::uint8_t, kPaletteBytes> palette{};
    };

    void setupHardwarePalettes(std::span<const std::uint8_t, kPaletteBytes> palette);

    STextureOwners owners_;
    int max_texture_count_;
    int current_texture_count_ = 0;
    std::vector<STextureSlot> slots_;
};

} // namespace nocturne::engine
