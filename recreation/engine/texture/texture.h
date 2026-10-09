#pragma once

#include "engine/fwd.h"
#include "platform/fwd.h"

namespace nocturne::engine {

SMRGLHeaderExtended *ensureTextureLoaded(platform::SMRGLTextureBasic *texture);
SMRGLHeaderExtended *loadTextureAndGetData(platform::SMRGLTextureBasic *texture_info);
void clearTextureCache();
void loadAndUpdateTexture(platform::SMRGLTextureBasic *texture, SRGBColorPalette *palette);
void getTextureCacheStats(char *output_buffer);
platform::SMRGLTextureBasic *getCurrentTexture();

} // namespace nocturne::engine
