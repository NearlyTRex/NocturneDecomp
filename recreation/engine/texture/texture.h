#pragma once

#include "core/fwd.h"
#include "engine/fwd.h"

namespace nocturne::engine {

CTextureCache *initTextureCache();
void freeTextureCache();
SMRGLHeaderExtended *ensureTextureLoaded(core::SMRGLTextureBasic *texture);
SMRGLHeaderExtended *loadTextureAndGetData(core::SMRGLTextureBasic *texture_info);
void clearTextureCache();
void loadAndUpdateTexture(core::SMRGLTextureBasic *texture, SRGBColorPalette *palette);
void getTextureCacheStats(char *output_buffer);
core::SMRGLTextureBasic *getCurrentTexture();

} // namespace nocturne::engine
