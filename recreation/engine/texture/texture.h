#pragma once

#include "engine/fwd.h"
#include "engine/texture/texturecache.h"
#include "platform/fwd.h"

#include <memory>

namespace nocturne::engine {

// The game's one texture cache.
class CTexture {
public:
    explicit CTexture(const STextureOwners &owners);
    ~CTexture();
    CTexture(const CTexture &) = delete;
    CTexture &operator=(const CTexture &) = delete;
    CTexture(CTexture &&) = delete;
    CTexture &operator=(CTexture &&) = delete;

    // A new, empty cache, replacing the one before.
    CTextureCache &initTextureCache();
    // Finds the texture in the cache, or loads it, and makes it current, keeping its slot in the
    // record for next time; the hardware renderer is handed it too. Nothing for an unnamed
    // texture or while textures are disabled.
    void ensureTextureLoaded(platform::SMRGLTextureBasic &texture);
    SMRGLHeaderExtended *loadTextureAndGetData(platform::SMRGLTextureBasic *texture_info);
    void clearTextureCache();
    void loadAndUpdateTexture(platform::SMRGLTextureBasic *texture, SRGBColorPalette *palette);
    void getTextureCacheStats(char *output_buffer);
    platform::SMRGLTextureBasic *getCurrentTexture();

private:
    STextureOwners owners_;
    std::unique_ptr<CTextureCache> texture_cache_instance_;
};

} // namespace nocturne::engine
