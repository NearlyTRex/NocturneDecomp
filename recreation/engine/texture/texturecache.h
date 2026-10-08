#pragma once

#include "engine/fwd.h"

namespace nocturne::engine {

class CTextureCache {
public:
    explicit CTextureCache(int max_texture_count);

    void reset();
    void freeTextures();
    int loadTexture(char *texture_name);
    int findTexture(int hint_index, char *texture_name);
    void setupTexture(int texture_index);
    void renderAllTextures();
    int getTextureCacheStats(char *output_buffer);
};

} // namespace nocturne::engine
