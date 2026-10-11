#include "engine/texture/texturecache.h"

namespace nocturne::engine {

// nocedit 0x005dcab0
CTextureCache::CTextureCache(int max_texture_count) : max_texture_count_(max_texture_count) {}

int CTextureCache::getMaxTextureCount() const {
    return max_texture_count_;
}

} // namespace nocturne::engine
