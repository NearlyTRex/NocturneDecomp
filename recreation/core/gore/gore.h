#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "engine/fwd.h"
#include "platform/mrgltexturebasic.h"

#include <array>
#include <cstddef>
#include <cstdio>
#include <span>

namespace nocturne::core {

// The game's blood and footprints: the textures they are drawn with.
class CGore {
public:
    // Blood splashed on a wall comes in four shapes, and each splat and each pool spreads through
    // its own frames.
    static constexpr std::size_t kSplatShapeCount = 4;
    static constexpr std::size_t kSplatFrameCount = 16;
    static constexpr std::size_t kPoolFrameCount = 29;

    // Its textures load through the renderer.
    // deferred: the blood particle, splat, pool and footstep arrays, and emptying them, with
    //   reset and the steps that spawn them
    // nocedit 0x004eb8c0
    explicit CGore(engine::CDemonRenderer &renderer);

    void reset();
    void renderParticles();
    void renderDecals(int render_all, int expire_flag);
    void process();
    void spawnBloodParticles(common::CVector3f *position, common::CVector3f *velocity,
                             EBloodType blood_type);
    void createGroundBloodSplat(common::CVector3f *position, EBloodType blood_type);
    void createWallBloodSplat(common::CVector3f *position, common::CVector3f *normal,
                              EBloodType blood_type);
    void spawnBloodBurst(common::CVector3f *position, common::CVector3f *direction, int count,
                         EBloodType blood_type);
    void createBloodPool(common::CVector3f *position, EBloodType blood_type);
    void loadAssets();
    void spawnFliesOnActor(CDemonActor *actor, int gather_count, float spawn_rate,
                           common::CVector3f *box_size);
    void createFootstep(common::CVector3f *position, common::UOrientationVector *orientation,
                        int surface_type, int alpha, EBloodType blood_type);
    int findBloodTypeAtPosition(common::CVector3f *position, int *out_blood_type);
    int load(std::FILE *file_handle);
    int save(std::FILE *file_handle);

    [[nodiscard]] const platform::SMRGLTextureBasic &getBloodParticleTexture() const;
    // A wall splat's texture of each shape.
    [[nodiscard]] std::span<const platform::SMRGLTextureBasic> getSplatTextures() const;
    // Each splat's frames, then each pool's, shape by shape.
    [[nodiscard]] std::span<const platform::SMRGLTextureBasic> getSplatFrameTextures() const;
    [[nodiscard]] std::span<const platform::SMRGLTextureBasic> getPoolFrameTextures() const;
    [[nodiscard]] const platform::SMRGLTextureBasic &getFootstepTexture() const;

private:
    engine::CDemonRenderer &renderer_;
    platform::SMRGLTextureBasic blood_particle_texture_{.texture_name = "BGLOB.RAW"};
    std::array<platform::SMRGLTextureBasic, kSplatShapeCount> splat_textures_;
    std::array<platform::SMRGLTextureBasic, kSplatShapeCount * kSplatFrameCount>
        splat_frame_textures_;
    std::array<platform::SMRGLTextureBasic, kSplatShapeCount * kPoolFrameCount>
        pool_frame_textures_;
    platform::SMRGLTextureBasic footstep_texture_{.texture_name = "FOOTSTEP.RAW"};
};

} // namespace nocturne::core
