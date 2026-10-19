#pragma once

#include "core/fwd.h"
#include "engine/fwd.h"
#include "platform/mrgltexturebasic.h"

#include <cstdint>
#include <span>
#include <string_view>
#include <vector>

namespace nocturne::core {

// The textures a ground is painted with, as its .TEX file lists them.
class CTextureList {
public:
    explicit CTextureList(const engine::CDosIo &dosio);

    // The .TEX file named like the given one: everything from its first '.' becomes ".tex".
    // Each line is a texture's name, upper-cased, and after a comma a number kept for saving.
    void load(std::string_view filename);
    void captureTexture(std::uint32_t texture_index);

    [[nodiscard]] std::span<const platform::SMRGLTextureBasic> getTextureEntries() const;
    [[nodiscard]] std::span<const int> getTextureValues() const;

private:
    // A pointer, so a ground can replace its list with an empty one.
    const engine::CDosIo *dosio_;
    std::vector<platform::SMRGLTextureBasic> texture_entries_;
    std::vector<int> texture_values_;
};

} // namespace nocturne::core
