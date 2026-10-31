#include "core/gore/gore.h"

#include "engine/drender/demonrenderer.h"
#include "platform/mrgltexturebasic.h"

#include <cstddef>
#include <format>
#include <span>

namespace nocturne::core {

// nocedit 0x004ed730
CGore::CGore(engine::CDemonRenderer &renderer) : renderer_(renderer) {
    for (std::size_t shape = 0; shape < kSplatShapeCount; ++shape) {
        splat_textures_.at(shape).texture_name = std::format("BHSP{}.RAW", shape + 1);
        for (std::size_t frame = 0; frame < kSplatFrameCount; ++frame) {
            splat_frame_textures_.at((shape * kSplatFrameCount) + frame).texture_name =
                std::format("BVSP{}-{:02}.RAW", shape + 1, frame + 1);
        }
        for (std::size_t frame = 0; frame < kPoolFrameCount; ++frame) {
            pool_frame_textures_.at((shape * kPoolFrameCount) + frame).texture_name =
                std::format("BPOL{}-{:02}.RAW", shape + 1, frame + 1);
        }
    }
}

// nocedit 0x004ede60
void CGore::loadAssets() {
    renderer_.captureTexture(blood_particle_texture_);
    for (platform::SMRGLTextureBasic &texture : splat_textures_) {
        renderer_.captureTexture(texture);
    }
    for (platform::SMRGLTextureBasic &texture : splat_frame_textures_) {
        renderer_.captureTexture(texture);
    }
    for (platform::SMRGLTextureBasic &texture : pool_frame_textures_) {
        renderer_.captureTexture(texture);
    }
    renderer_.captureTexture(footstep_texture_);
}

const platform::SMRGLTextureBasic &CGore::getBloodParticleTexture() const {
    return blood_particle_texture_;
}

std::span<const platform::SMRGLTextureBasic> CGore::getSplatTextures() const {
    return splat_textures_;
}

std::span<const platform::SMRGLTextureBasic> CGore::getSplatFrameTextures() const {
    return splat_frame_textures_;
}

std::span<const platform::SMRGLTextureBasic> CGore::getPoolFrameTextures() const {
    return pool_frame_textures_;
}

const platform::SMRGLTextureBasic &CGore::getFootstepTexture() const {
    return footstep_texture_;
}

} // namespace nocturne::core
