#pragma once

#include "engine/fwd.h"

namespace nocturne::engine {

class CTextureCache {
public:
    // Empty, with room for max_texture_count textures.
    explicit CTextureCache(int max_texture_count);

    [[nodiscard]] int getMaxTextureCount() const;
    void reset();
    void freeTextures();
    int loadTexture(char *texture_name);
    int findTexture(int hint_index, char *texture_name);
    void setupTexture(int texture_index);
    void renderAllTextures();
    int getTextureCacheStats(char *output_buffer);

private:
    int max_texture_count_;
};

} // namespace nocturne::engine
