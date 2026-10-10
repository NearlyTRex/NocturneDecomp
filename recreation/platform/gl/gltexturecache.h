#pragma once

#include "common/fwd.h"
#include "platform/gl/glapi.h"

#include <cstddef>
#include <cstdint>
#include <map>
#include <set>
#include <span>
#include <string>
#include <string_view>
#include <utility>

namespace nocturne::platform::gl {

// GL textures by the engine's name for an image and the dimension it is working at; one name at
// two dimensions is two textures.
class CGlTextureCache {
public:
    // The least recently used texture goes to make room past this.
    static constexpr std::size_t kCapacity = 4095;
    // Names compare on this many characters, the width of the original's cache entries less
    // its terminator; asset names share long prefixes, so a shorter compare merges images.
    static constexpr std::size_t kNameLength = 63;

    explicit CGlTextureCache(const SGlApi &gl);
    ~CGlTextureCache();
    CGlTextureCache(const CGlTextureCache &) = delete;
    CGlTextureCache &operator=(const CGlTextureCache &) = delete;

    // Zero when the image is not resident.
    [[nodiscard]] GLuint find(std::string_view name, int dimension);
    // Creates or replaces the image from dimension squared words of 0xAARRGGBB, with one level.
    // The engine names its next texture while the last one's polygons still wait in the batch,
    // so the binding those polygons will draw with is put back. Throws std::invalid_argument
    // when rgba is not dimension squared words.
    GLuint upload(std::string_view name, int dimension, std::span<const std::uint32_t> rgba);
    // Binds for the draws that follow, sampled as the draw's state asks. A reflection is given
    // a mip chain on first use, since it samples a coarser level.
    void bind(GLuint texture, const common::SPipelineState &state, bool reflection);
    // After something else has bound a texture of its own.
    void invalidateBinding();
    // Drops every image, as when the engine reloads its assets for a new mode.
    void release();
    [[nodiscard]] std::size_t getSize() const;

private:
    using Key = std::pair<std::string, int>;
    struct SEntry {
        GLuint texture = 0;
        std::uint64_t last_used = 0;
    };

    [[nodiscard]] static Key makeKey(std::string_view name, int dimension);
    void evictLeastRecentlyUsed();

    const SGlApi &gl_;
    std::map<Key, SEntry> entries_;
    // Textures with a mip chain; an upload replaces the chain with one level.
    std::set<GLuint> chained_;
    std::uint64_t clock_ = 0;
    GLuint bound_ = 0;
};

} // namespace nocturne::platform::gl
