#pragma once

#include "common/fwd.h"
#include "common/math/matrix3x3f.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/color3i.h"
#include "core/dcamera/fog.h"
#include "core/fwd.h"
#include "core/setdir/vdbox.h"
#include "core/setutil/3dscamera.h"
#include "core/setutil/3dslight.h"
#include "core/weather/weathertype.h"
#include "engine/fwd.h"
#include "platform/fwd.h"
#include "support/fwd.h"

#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {

// A reverb room: a turned box in world units, its extents half its size on each axis, and the
// size of room it sounds like.
struct SRoom {
    common::CVector3f position;
    common::CVector3f extents;
    common::CMatrix3x3f rotation_matrix;
    int reverb_size = 0;
};

// What a set loads with and into, and draws with.
struct SDemonSetOwners {
    engine::CDemonRenderer &renderer;
    const engine::CMatrix &matrix;
    engine::CSpecial &special;
    const engine::CDosIo &dosio;
    const support::CNewMsg &messages;
    ILoadingScreen &loading_screen;
    CDemonRaytrace &raytrace;
    CTerrain &terrain;
    CWater &water;
    CKeyFramedModel &enviro_model;
    engine::C2d &two_d;
    engine::IScreenDevice &screen;
    engine::IRawInput &raw_input;
};

class CDemonSet {
public:
    // A camera's depth thumb: 64 by 48 depths, row by row.
    static constexpr std::size_t kThumbWidth = 64;
    static constexpr std::size_t kThumbHeight = 48;

    explicit CDemonSet(const SDemonSetOwners &owners);

    // models\filename, a .SET file of any version. Fatal when it can't be opened. The raytrace
    // geometry and path maps are reloaded only when the geometry file differs from the last set's.
    void load(std::string_view filename);
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
    // Puts each vertex into the renderer's buffer in eye space and on the screen, and turns face
    // capture off when every one is in view.
    void rotateVerticies(std::span<const common::CVector3i> input_vertices);
    // Gives the buffer's first vertex_count vertices their colour from the light direction, the
    // ambient level and the flat colour, by the given normals or by the polygons' faces.
    void lightVerticies(int vertex_count, std::span<const platform::SMRGLPrimitiveQuad> polygons,
                        std::span<const common::CVector3i> vertex_normals);
    void process();
    int getReverbPresetAtPosition(common::CVector3f *position);
    void loadAssets();
    // A model's polygons, drawn as the renderer's quad batch.
    void renderPrimitiveBatch(std::span<const platform::SMRGLPrimitiveQuad> primitives,
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

    // The quick light's direction, and the ambient level it adds, 0xffff being full.
    void setLightDirection(const common::CVector3i &light_direction);
    void setAmbientBaseQuick(int ambient_base_quick);
    [[nodiscard]] const common::CVector3i &getLightDirection() const;
    [[nodiscard]] int getAmbientBaseQuick() const;
    [[nodiscard]] const CColor3i &getFlatColor() const;

    [[nodiscard]] int getSetFileVersion() const;
    [[nodiscard]] float getSetScaleFactor() const;
    [[nodiscard]] float getMinAmbientValue() const;
    [[nodiscard]] const SFog &getSceneFog() const;
    [[nodiscard]] bool getUseEnviroModel() const;
    [[nodiscard]] const std::string &getEnviroModelName() const;
    [[nodiscard]] bool getHasSky() const;
    [[nodiscard]] const std::string &getSkyTextureName() const;
    // 0x4000 is full brightness.
    [[nodiscard]] int getSkyBrightness() const;
    [[nodiscard]] bool getUseWorldGeometry() const;
    [[nodiscard]] const std::string &getWorldGeometryName() const;
    [[nodiscard]] EWeatherType getWeatherType() const;
    [[nodiscard]] bool getPlayerOnTrain() const;
    [[nodiscard]] std::span<const C3DSLight> getLights() const;
    [[nodiscard]] std::span<const C3DSCamera> getCameras() const;
    [[nodiscard]] int getDefaultRoomSize() const;
    [[nodiscard]] std::span<const SRoom> getRooms() const;
    [[nodiscard]] int getDefaultGroundType() const;
    [[nodiscard]] int getDefaultMasterReverb() const;
    [[nodiscard]] std::span<const SVDBox> getVdirBoxes() const;
    // The raytrace geometry's .GEO file, as the last load named it.
    [[nodiscard]] const std::string &getGeometryFilename() const;
    // The camera's depth thumb, kThumbWidth * kThumbHeight depths.
    [[nodiscard]] std::span<const std::uint32_t> getThumb(std::size_t camera_index) const;

private:
    void lightVertexColor(const common::CVector3i &surface_normal,
                          platform::SRenderVertex &vertex) const;
    // Frees the enviro model and the terrain.
    void clear();
    std::string loadHeader(common::CTextScanner &scanner);
    void loadFog(common::CTextScanner &scanner);
    void loadEnvironment(common::CTextScanner &scanner, std::string_view geometry_name);
    void loadSky(common::CTextScanner &scanner, std::string_view geometry_name);
    void loadLightsAndCameras(common::CTextScanner &scanner);
    void loadRoomsAndGround(common::CTextScanner &scanner, std::string_view geometry_name);
    void loadVdirBoxesAndVisibility(common::CTextScanner &scanner);
    void showMissingGeometryWarning();
    static void skipDeprecatedVirtualDirectorData(common::CTextScanner &scanner);
    int findVdirBoxRoot(int box_index);
    void buildVdirBoxGroups();
    void refreshThumbs(std::string_view filename);

    SDemonSetOwners owners_;
    // As the original constructor sets them.
    common::CVector3i light_direction_{.x = -37000, .y = -37000, .z = 37000};
    int ambient_base_quick_ = 0x280;
    CColor3i flat_color_{.r = 0x10000, .g = 0x10000, .b = 0x10000};
    int set_file_version_ = 0;
    float set_scale_factor_ = 0.0F;
    float min_ambient_value_ = 0.0F;
    SFog scene_fog_;
    bool use_enviro_model_ = false;
    std::string enviro_model_name_ = "none";
    bool has_sky_ = false;
    std::string sky_texture_name_;
    int sky_brightness_ = 0;
    bool use_world_geometry_ = false;
    std::string world_geometry_name_ = "none";
    EWeatherType weather_type_ = EWeatherType::WEATHER_TYPE_NONE;
    bool player_on_train_ = false;
    std::vector<C3DSLight> lights_;
    std::vector<C3DSCamera> cameras_;
    int default_room_size_ = 0;
    std::vector<SRoom> rooms_;
    int default_ground_type_ = 2;
    int default_master_reverb_ = 0;
    std::vector<SVDBox> vdir_boxes_;
    std::string geometry_filename_;
    std::vector<std::uint32_t> thumbs_;
};

} // namespace nocturne::core
