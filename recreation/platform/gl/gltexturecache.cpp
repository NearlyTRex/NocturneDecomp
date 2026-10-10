#include "platform/gl/gltexturecache.h"

#include "common/render/renderstate.h"

#include <algorithm>
#include <stdexcept>
#include <vector>

namespace nocturne::platform::gl {
namespace {

// High enough to cover every level GenerateMipmap builds.
constexpr GLint kAllLevels = 1000;

GLint toGl(common::ETextureFilter filter) {
    return filter == common::ETextureFilter::Linear ? GL_LINEAR : GL_NEAREST;
}

} // namespace

CGlTextureCache::CGlTextureCache(const SGlApi &gl) : gl_(gl) {}

CGlTextureCache::~CGlTextureCache() {
    release();
}

GLuint CGlTextureCache::find(std::string_view name, int dimension) {
    const auto entry = entries_.find(makeKey(name, dimension));
    if (entry == entries_.end()) {
        return 0;
    }
    entry->second.last_used = ++clock_;
    return entry->second.texture;
}

GLuint CGlTextureCache::upload(std::string_view name, int dimension,
                               std::span<const std::uint32_t> rgba) {
    if (dimension <= 0 || rgba.size() != static_cast<std::size_t>(dimension) * dimension) {
        throw std::invalid_argument("texture is not dimension squared texels");
    }
    Key key = makeKey(name, dimension);
    auto entry = entries_.find(key);
    if (entry == entries_.end()) {
        if (entries_.size() >= kCapacity) {
            evictLeastRecentlyUsed();
        }
        SEntry created;
        gl_.GenTextures(1, &created.texture);
        entry = entries_.emplace(std::move(key), created).first;
    }
    entry->second.last_used = ++clock_;
    const GLuint texture = entry->second.texture;
    gl_.ActiveTexture(GL_TEXTURE0);
    gl_.BindTexture(GL_TEXTURE_2D, texture);
    gl_.PixelStorei(GL_UNPACK_ALIGNMENT, 4);
    gl_.TexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, dimension, dimension, 0, GL_BGRA, GL_UNSIGNED_BYTE,
                   rgba.data());
    // One level, said outright: a sampler with a mip filter finds anything less complete and
    // draws the texture as nothing.
    gl_.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_BASE_LEVEL, 0);
    gl_.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAX_LEVEL, 0);
    chained_.erase(texture);
    gl_.BindTexture(GL_TEXTURE_2D, bound_);
    return texture;
}

void CGlTextureCache::bind(GLuint texture, const common::SPipelineState &state, bool reflection) {
    gl_.ActiveTexture(GL_TEXTURE0);
    gl_.BindTexture(GL_TEXTURE_2D, texture);
    bound_ = texture;
    if (texture == 0) {
        return;
    }
    if (reflection && !chained_.contains(texture)) {
        gl_.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAX_LEVEL, kAllLevels);
        gl_.GenerateMipmap(GL_TEXTURE_2D);
        chained_.insert(texture);
    }
    // Only a texture with a chain filters across levels; with one level the minification
    // filter is the magnification filter, as the engine's own renderer samples.
    const bool chained = chained_.contains(texture);
    const GLint min_filter = chained ? GL_LINEAR_MIPMAP_LINEAR : toGl(state.min_filter);
    const GLint mag_filter = chained ? GL_LINEAR : toGl(state.mag_filter);
    gl_.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, min_filter);
    gl_.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, mag_filter);
    // The engine sets TEXTUREADDRESS to CLAMP once and never changes it; repeating would wrap a
    // coordinate a little past the edge onto the far side of the image.
    gl_.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    gl_.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
}

void CGlTextureCache::invalidateBinding() {
    bound_ = 0;
}

void CGlTextureCache::release() {
    if (entries_.empty()) {
        return;
    }
    std::vector<GLuint> textures;
    textures.reserve(entries_.size());
    for (const auto &[key, entry] : entries_) {
        textures.push_back(entry.texture);
    }
    gl_.DeleteTextures(static_cast<GLsizei>(textures.size()), textures.data());
    entries_.clear();
    chained_.clear();
    // A deleted name is not one GL will bind again.
    bound_ = 0;
}

std::size_t CGlTextureCache::getSize() const {
    return entries_.size();
}

CGlTextureCache::Key CGlTextureCache::makeKey(std::string_view name, int dimension) {
    return {std::string(name.substr(0, kNameLength)), dimension};
}

void CGlTextureCache::evictLeastRecentlyUsed() {
    const auto oldest = std::ranges::min_element(
        entries_, {}, [](const auto &entry) { return entry.second.last_used; });
    const GLuint texture = oldest->second.texture;
    if (texture == bound_) {
        bound_ = 0;
    }
    chained_.erase(texture);
    gl_.DeleteTextures(1, &texture);
    entries_.erase(oldest);
}

} // namespace nocturne::platform::gl
