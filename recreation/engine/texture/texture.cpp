#include "engine/texture/texture.h"

#include "engine/texture/texturecache.h"

namespace nocturne::engine {
namespace {

constexpr int kMaxTextures = 1024;

} // namespace

CTexture::CTexture() = default;

CTexture::~CTexture() = default;

// nocedit 0x005dd760
CTextureCache &CTexture::initTextureCache() {
    texture_cache_instance_ = std::make_unique<CTextureCache>(kMaxTextures);
    return *texture_cache_instance_;
}

} // namespace nocturne::engine
