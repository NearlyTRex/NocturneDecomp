#include "common/render/textureexpansion.h"

#include <cstddef>
#include <stdexcept>

namespace nocturne::common {

std::array<std::uint32_t, 256> packTexturePalette(std::span<const std::uint8_t, 768> palette) {
    std::array<std::uint32_t, 256> packed{};
    for (std::size_t i = 0; i < packed.size(); ++i) {
        const auto entry = palette.subspan(i * 3, 3);
        packed.at(i) = (std::uint32_t{entry[0]} << 16U) | (std::uint32_t{entry[1]} << 8U) |
                       std::uint32_t{entry[2]};
    }
    return packed;
}

void expandTexture(std::span<const std::uint8_t> indices,
                   const std::array<std::uint32_t, 256> &palette,
                   std::span<const std::uint8_t> opacity, std::span<std::uint32_t> out) {
    const bool has_opacity = !opacity.empty();
    if (out.size() < indices.size() || (has_opacity && opacity.size() < indices.size())) {
        throw std::invalid_argument("texture planes shorter than the texels");
    }
    for (std::size_t i = 0; i < indices.size(); ++i) {
        const std::uint32_t rgb = palette.at(indices[i]);
        if (has_opacity) {
            out[i] = rgb | (std::uint32_t{opacity[i]} << 24U);
        } else {
            out[i] = rgb == 0 ? 0 : rgb | 0xff000000U;
        }
    }
}

} // namespace nocturne::common
