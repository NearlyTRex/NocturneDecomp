#pragma once

#include "core/fwd.h"

#include <cstdint>

namespace nocturne::core {

class CTextureList {
public:
    CTextureList();

    void load(char *filename);
    void captureTexture(std::uint32_t texture_index);
};

} // namespace nocturne::core
