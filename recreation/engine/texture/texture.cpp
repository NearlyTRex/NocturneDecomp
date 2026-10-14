#include "engine/texture/texture.h"

#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "platform/mrgltexturebasic.h"

namespace nocturne::engine {
namespace {

constexpr int kMaxTextures = 1024;
// The original kept the slot in a 16-bit count.
constexpr int kCacheIndexMask = 0xffff;

} // namespace

// The cache exists from the start, where the original's was null until initTextureCache.
CTexture::CTexture(const STextureOwners &owners)
    : owners_(owners),
      texture_cache_instance_(std::make_unique<CTextureCache>(kMaxTextures, owners)) {}

CTexture::~CTexture() = default;

// nocedit 0x005dd760
CTextureCache &CTexture::initTextureCache() {
    texture_cache_instance_ = std::make_unique<CTextureCache>(kMaxTextures, owners_);
    return *texture_cache_instance_;
}

// nocedit 0x005dd800
void CTexture::ensureTextureLoaded(platform::SMRGLTextureBasic &texture) {
    if (owners_.current_texture.textures_disabled || texture.texture_name.empty()) {
        return;
    }
    int index = texture_cache_instance_->findTexture(texture.cache_index & kCacheIndexMask,
                                                     texture.texture_name);
    const bool loaded = index == -1;
    if (loaded) {
        index = texture_cache_instance_->loadTexture(texture.texture_name);
    }
    texture.cache_index = index;
    texture_cache_instance_->setupTexture(index);
    if (loaded) {
        owners_.special.updateTextureFromPalette(texture, owners_.current_texture.palette);
    } else {
        owners_.special.selectTextureFromPalette(texture, owners_.current_texture.palette);
    }
}

// nocedit 0x005dd8e0
void CTexture::clearTextureCache() {
    texture_cache_instance_->freeTextures();
}

} // namespace nocturne::engine
