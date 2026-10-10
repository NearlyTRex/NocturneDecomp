#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "platform/fwd.h"

#include <cstdio>

namespace nocturne::core {

class CDemonSet {
public:
    CDemonSet();
    ~CDemonSet();

    void load(char *filename);
    void renderSceneGeometry(float frustum_param, int render_mode);
    void initScene();
    void snapshotActorTransformState(CDemonActor *actor);
    void setCameraView(int index);
    int findCameraByName(char *name);
    void reinitCamera(int clear_enabled, int is_clearing, int screen_height);
    void processActors();
    void renderStaticLights();
    void renderScene(int skip_prerender);
    void renderGogglesView();
    void addDynamicLight(CDemonLight *light);
    void addCoronaGlobe(CDemonGlobe *globe);
    void addQueuedCoronaGlobe(CDemonGlobe *globe);
    void renderLightDebugView();
    void clearLights();
    void setLightingParameters(common::CVector3f *position, common::UOrientationVector *orientation,
                               common::CVector3f *aabb_min, common::CVector3f *aabb_max,
                               common::CMatrix3x3f *rotation_matrix);
    int calculateSpatialLighting(common::CVector3i *world_position,
                                 common::CVector3i *surface_normal);
    void computeLighting(common::CVector3i *world_position, common::CVector3i *surface_normal,
                         int start_vertex_index, int vertex_count);
    void computeVertexOmniLighting(common::CVector3f *vertex_position,
                                   common::CVector3f *position_offset, int vertex_index);
    void pushScreenBoundsToCamera(int vertex_count);
    void rotateVerticies(int vertex_count, common::CVector3i *input_vertices);
    void lightVerticies(int vertex_count, int tri_count, void *face_data,
                        common::CVector3i *vertex_positions, int vertices_per_face,
                        common::CVector3i *vertex_normals);
    void process();
    int getReverbPresetAtPosition(common::CVector3f *position);
    void loadAssets();
    void renderPrimitiveBatch(platform::SMRGLPrimitiveQuad *primitive_array, int primitive_count,
                              int render_flags);
    void renderFaceListOrEnvMap(platform::SInputFace *faces, int count, int flags);
    void renderPrimitiveList(platform::SMRGLHeaderPrimitive *primitive_array, int primitive_count);
    void renderTexturedPrimitiveListVariant(platform::SMRGLHeaderPrimitive *prim, int count);
    void markMirrorCameraDirty();
    void setFlatColor(int light_scale, int color_scale, int fog_scale);
    void cacheMirrorLighting(common::CVector3f *position);
    void setGamma(int gamma);
    void setCameraAmbientValue(int index, float value);
    void setCameraAmbientValueByGroup(int group_id, float value);
    void setCameraEnabled(int camera_index, int enabled);
    void setCameraEnabledByGroup(int group_id, int enabled);
    void addLightFilter(char *light_name, C3DSLight **out_light, CDemonLight **out_master_light);
    void initCameraShake(float peak, float attack, float sustain, float decay);
    void buildActorTypeLists();
    void loadMasterLightStates(int *light_state_buffer);
    int saveMasterLightStates(int *light_state_buffer);
    void saveStateInfo(std::FILE *file_handle);
    void loadStateInfo(std::FILE *file_handle);
    float processCollisionTypes(common::CVector3f *position, float radius);
    float rayVoxelHeightQuery(common::CVector3f *position);
    int testLineOcclusion(common::CVector3f *start_pos, common::CVector3f *end_pos);
    int testVoxelRaycast(common::CVector3f *start_pos, common::CVector3f *end_pos);
    float raycast(common::CVector3f *ray_origin, common::CVector3f *ray_target);
    float iterativeRaycast(common::CVector3f *start_pos, common::CVector3f *direction);
    int testOBBCylinderCollision(SIntersectXZCylinder *cylinder, CBoundingBox3D *bounding_box,
                                 common::CVector3f *position,
                                 common::CMatrix3x3f *orientation_matrix);
    float testCylinderCollision(float start_x, float start_z, float dir_x, float dir_z,
                                float radius, float bottom_y, float top_y);
    void pushRaytraceState();
    void popRaytraceState();
    void skipExactCollisions();
    void init();
    void ignore(CDemonActor *actor);
    void disableIgnore();
    void enableCollision();
    void setRayType(int ray_type);
    void setRayTypeLaser(int laser_type, int color_r, int color_g, int color_b);
    void notifyDamageListeners(common::CVector3f *position, common::CVector3f *actor_position,
                               SDamageInfo *damage_info);
    void buildCollidableActorList();
    void castVoxelShadow(CDemonActor *actor);
    void transferVoxelShadow(CDemonActor *actor);
    void commitVoxelBuffer();
    int isPointInWater(common::CVector3f *point);
    int evaluateVirtualDirector(CDemonActor *actor, int force_evaluation_mode);
    void setPendingCamera(int camera_index, float hold_time);
    void clearCameraSwitchCooldown();
};

} // namespace nocturne::core
