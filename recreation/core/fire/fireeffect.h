#pragma once

#include "core/fwd.h"

#include <cstdint>
#include <cstdio>

namespace nocturne::core {

class CFireEffect {
public:
    CFireEffect();

    void init();
    void process();
    void render();
    void renderDecals(int render_mode, int render_completeness);
    void createDefaultSmoke(CVector3f *position);
    void createBulletImpact(CVector3f *impact_pos, CVector3f *surface_normal, int ground_type,
                            CDemonActor *hit_actor);
    void createSpark(CVector3f *position, CVector3f *velocity, int intensity_target,
                     int intensity_scale, int spark_type, int fade_rate);
    void createMuzzleFlash(CVector3f *position, CMatrix3x3f *rotation_matrix);
    void loadAssets();
    void createSmokeParticle(CVector3f *position, float drag_factor, CVector3f *wind_influence,
                             int alpha_value);
    void createStake(CVector3f *impact_position, CVector3f *orientation_angles,
                     CVector3f *surface_normal, int ground_type);
    void createGlassParticle(STriangleVertices *triangle_vertices, CVector3i *uv_u_per_vertex,
                             CVector3i *uv_v_per_vertex, SMRGLTextureBasic *texture, int lifetime);
    void createFireball(CVector3f *position, CVector3f *velocity, int lighting_active,
                        std::uint32_t sfx_handle);
    void createRock(CVector3f *position, CVector3f *velocity, CKeyFramedModel *model_ptr);
    void createLaserCone(CVector3f *origin, CVector3f *hit_position, float beam_width, int red,
                         int green, int blue, float cone_angle);
    void createLaserPath(CVector3f *start_position, CVector3f *velocity, float beam_width,
                         float reticle_intensity, CVector3f *reflection_normal, float total_time,
                         int red, int green, int blue);
    void traceLaser(CVector3f *origin, CVector3f *direction, SLaserInfo *laser_info,
                    int recursion_depth);
    void createExplosion(CVector3f *position, float scale, float gore_multiplier, float radius);
    int getExplosionEffect(CVector3f *position, float radius, CVector3f *out_force_dir,
                           float *out_gore_multiplier);
    void createToss(CVector3f *position, UOrientationVector *orientation, CVector3f *velocity,
                    float fuse_time, std::uint32_t sfx_handle);
    void createCrater(CVector3f *position, float radius);
    void createGunFlames(CVector3f *position, CVector3f *euler_angles, int flame_count,
                         int flame_type);
    void createLightningBolt(CVector3f *start_position, float start_width, int enable_camera_shake,
                             float end_width);
    void createLightningBoltDirectional(CVector3f *start_position, CVector3f *end_position,
                                        int enable_camera_shake, float end_width, float end_spread);
    void createTrailFromPoints(CVector3f *start_point, CVector3f *end_point, float size,
                               float alpha, float lifetime, SMRGLTextureBasic *texture_ptr);
    void createShell(CVector3f *position, CVector3f *euler_angles, CVector3f *velocity,
                     CKeyFramedModel *model_ptr);
    void createPopcorn(CVector3f *position, CVector3f *velocity);
    void createRainDrop(CVector3f *position, CVector3f *velocity);
    void load(std::FILE *file_handle);
    void save(std::FILE *file_handle);
    int hasActiveMuzzleFlash();
};

} // namespace nocturne::core
