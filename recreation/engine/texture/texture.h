#pragma once

#include "engine/fwd.h"
#include "platform/fwd.h"

#include <memory>

namespace nocturne::engine {

// The game's one texture cache and the texture currently being worked on.
class CTexture {
public:
    CTexture();
    ~CTexture();
    CTexture(const CTexture &) = delete;
    CTexture &operator=(const CTexture &) = delete;
    CTexture(CTexture &&) = delete;
    CTexture &operator=(CTexture &&) = delete;

    // A new, empty cache, replacing any earlier one.
    CTextureCache &initTextureCache();
    SMRGLHeaderExtended *ensureTextureLoaded(platform::SMRGLTextureBasic *texture);
    SMRGLHeaderExtended *loadTextureAndGetData(platform::SMRGLTextureBasic *texture_info);
    void clearTextureCache();
    void loadAndUpdateTexture(platform::SMRGLTextureBasic *texture, SRGBColorPalette *palette);
    void getTextureCacheStats(char *output_buffer);
    platform::SMRGLTextureBasic *getCurrentTexture();

private:
    std::unique_ptr<CTextureCache> texture_cache_instance_;
};

} // namespace nocturne::engine
