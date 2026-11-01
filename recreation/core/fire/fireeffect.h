#pragma once

#include "common/fwd.h"
#include "core/dmodel/keyframedmodelinstance.h"
#include "core/fwd.h"
#include "engine/fwd.h"
#include "platform/fwd.h"
#include "platform/mrgltexturebasic.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <span>

namespace nocturne::core {

// What the fire effects load their textures with and find their models among.
struct SFireEffectOwners {
    engine::CDemonRenderer &renderer;
    IKeyFramedModels &keyframed_models;
};

// The game's shots, flames, sparks, explosions and the like: the models and textures they are
// drawn with.
class CFireEffect {
public:
    static constexpr std::size_t kDebrisModelCount = 5;
    static constexpr std::size_t kGunFlameFrameCount = 20;
    static constexpr std::size_t kLightningBoltTextureCount = 6;

    // deferred: the particle pools, with the particles' process and render steps
    // nocedit 0x004bef20
    explicit CFireEffect(const SFireEffectOwners &owners);

    void init();
    void process();
    void render();
    void renderDecals(int render_mode, int render_completeness);
    void createDefaultSmoke(common::CVector3f *position);
    void createBulletImpact(common::CVector3f *impact_pos, common::CVector3f *surface_normal,
                            int ground_type, CDemonActor *hit_actor);
    void createSpark(common::CVector3f *position, common::CVector3f *velocity, int intensity_target,
                     int intensity_scale, int spark_type, int fade_rate);
    void createMuzzleFlash(common::CVector3f *position, common::CMatrix3x3f *rotation_matrix);
    void loadAssets();
    void createSmokeParticle(common::CVector3f *position, float drag_factor,
                             common::CVector3f *wind_influence, int alpha_value);
    void createStake(common::CVector3f *impact_position, common::CVector3f *orientation_angles,
                     common::CVector3f *surface_normal, int ground_type);
    void createGlassParticle(STriangleVertices *triangle_vertices,
                             common::CVector3i *uv_u_per_vertex, common::CVector3i *uv_v_per_vertex,
                             platform::SMRGLTextureBasic *texture, int lifetime);
    void createFireball(common::CVector3f *position, common::CVector3f *velocity,
                        int lighting_active, std::uint32_t sfx_handle);
    void createRock(common::CVector3f *position, common::CVector3f *velocity,
                    CKeyFramedModel *model_ptr);
    void createLaserCone(common::CVector3f *origin, common::CVector3f *hit_position,
                         float beam_width, int red, int green, int blue, float cone_angle);
    void createLaserPath(common::CVector3f *start_position, common::CVector3f *velocity,
                         float beam_width, float reticle_intensity,
                         common::CVector3f *reflection_normal, float total_time, int red, int green,
                         int blue);
    void traceLaser(common::CVector3f *origin, common::CVector3f *direction, SLaserInfo *laser_info,
                    int recursion_depth);
    void createExplosion(common::CVector3f *position, float scale, float gore_multiplier,
                         float radius);
    int getExplosionEffect(common::CVector3f *position, float radius,
                           common::CVector3f *out_force_dir, float *out_gore_multiplier);
    void createToss(common::CVector3f *position, common::UOrientationVector *orientation,
                    common::CVector3f *velocity, float fuse_time, std::uint32_t sfx_handle);
    void createCrater(common::CVector3f *position, float radius);
    void createGunFlames(common::CVector3f *position, common::CVector3f *euler_angles,
                         int flame_count, int flame_type);
    void createLightningBolt(common::CVector3f *start_position, float start_width,
                             int enable_camera_shake, float end_width);
    void createLightningBoltDirectional(common::CVector3f *start_position,
                                        common::CVector3f *end_position, int enable_camera_shake,
                                        float end_width, float end_spread);
    void createTrailFromPoints(common::CVector3f *start_point, common::CVector3f *end_point,
                               float size, float alpha, float lifetime,
                               platform::SMRGLTextureBasic *texture_ptr);
    void createShell(common::CVector3f *position, common::CVector3f *euler_angles,
                     common::CVector3f *velocity, CKeyFramedModel *model_ptr);
    void createPopcorn(common::CVector3f *position, common::CVector3f *velocity);
    void createRainDrop(common::CVector3f *position, common::CVector3f *velocity);
    void load(std::FILE *file_handle);
    void save(std::FILE *file_handle);
    int hasActiveMuzzleFlash();

    // The models a flaming stake, the three fireballs, large, small and green, the gun flash
    // and the bits of debris are drawn with.
    [[nodiscard]] const CKeyFramedModelInstance &getStakeModel() const;
    [[nodiscard]] const CKeyFramedModelInstance &getFireballModel() const;
    [[nodiscard]] const CKeyFramedModelInstance &getSmallFireballModel() const;
    [[nodiscard]] const CKeyFramedModelInstance &getGreenFireballModel() const;
    [[nodiscard]] const CKeyFramedModelInstance &getGunFlashModel() const;
    [[nodiscard]] std::span<const CKeyFramedModelInstance> getDebrisModels() const;
    // The textures of a bullet hole, a spark and a blue spark.
    [[nodiscard]] const platform::SMRGLTextureBasic &getBlackHoleTexture() const;
    [[nodiscard]] const platform::SMRGLTextureBasic &getSparkTexture() const;
    [[nodiscard]] const platform::SMRGLTextureBasic &getBlueSparkTexture() const;
    // The frames a gun's flames burn through, and the lightning bolts' textures.
    [[nodiscard]] std::span<const platform::SMRGLTextureBasic> getGunFlameTextures() const;
    [[nodiscard]] std::span<const platform::SMRGLTextureBasic> getLightningBoltTextures() const;

private:
    void loadStakeAssets();
    void loadFireballAssets();
    // Rocks borrow their models from whoever throws them.
    static void loadRockAssets();
    void loadDynamiteAssets();
    void loadGunFlameAssets();
    void loadGunFlashAssets();
    void loadLightningBoltAssets();
    void loadDebrisAssets();

    SFireEffectOwners owners_;
    CKeyFramedModelInstance stake_model_;
    CKeyFramedModelInstance fireball_model_;
    CKeyFramedModelInstance small_fireball_model_;
    CKeyFramedModelInstance green_fireball_model_;
    CKeyFramedModelInstance gun_flash_model_;
    std::array<CKeyFramedModelInstance, kDebrisModelCount> debris_models_;
    platform::SMRGLTextureBasic black_hole_texture_{.texture_name = "BHOLE.RAW"};
    platform::SMRGLTextureBasic spark_texture_{.texture_name = "SPARK.RAW"};
    platform::SMRGLTextureBasic blue_spark_texture_{.texture_name = "BLUSPARK.RAW"};
    std::array<platform::SMRGLTextureBasic, kGunFlameFrameCount> gun_flame_textures_;
    std::array<platform::SMRGLTextureBasic, kLightningBoltTextureCount> lightning_bolt_textures_;
};

} // namespace nocturne::core
