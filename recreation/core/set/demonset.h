#pragma once

#include "common/fwd.h"
#include "common/math/matrix3x3f.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/color3i.h"
#include "core/dcamera/fog.h"
#include "core/dlight/demonlight.h"
#include "core/fwd.h"
#include "core/setdir/vdbox.h"
#include "core/setutil/3dscamera.h"
#include "core/setutil/3dslight.h"
#include "core/weather/weathertype.h"
#include "engine/fwd.h"
#include "platform/fwd.h"
#include "platform/mrglprimitivequad.h"
#include "support/fwd.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <memory>
#include <optional>
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

// A light of the set that is a spotlight, and which of the spotlights it is.
struct SSpotlight {
    const C3DSLight *light = nullptr;
    std::size_t index = 0;
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
    CDemonCamera &camera;
    // The hero's flashlight, whose filter each scene picks again.
    CDemonLight &flashlight;
    CFilterCache &filter_cache;
    // What the scene's master lights are made with.
    SDemonLightOwners light_owners;
    CWeather &weather;
    // Whose frame time the virtual director counts its holds down by.
    const CGame &game;
    CSkyDome &sky_dome;
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
    // renderSceneGeometry's modes: draw what the view reaches; draw the selected camera's saved
    // PVS, or what the view reaches, saving it, when the camera has none; or always draw what
    // the view reaches and save it.
    static constexpr int kDrawReachedGeometry = 0;
    static constexpr int kDrawCameraPVS = 1;
    static constexpr int kRecordCameraPVS = 2;

    // The raytrace geometry into the depth, out to frustum_param from the camera, lit from
    // above and in front.
    void renderSceneGeometry(float frustum_param, int render_mode);
    // Sets the scene up for play: the camera's tables and fog, a master light for each
    // spotlight, each camera's virtual director group, and the weather.
    void initScene();
    // Notes the actor as drawn where it is now, every pass due.
    static void snapshotActorTransformState(CDemonActor &actor);
    void setCameraView(int index);
    // The camera of that name, compared ignoring case.
    [[nodiscard]] std::optional<std::size_t> findCameraByName(std::string_view name) const;
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
    // Loads the lights' glow textures and the water's.
    void loadAssets();
    // A model's polygons, drawn as the renderer's quad batch.
    void renderPrimitiveBatch(std::span<const platform::SMRGLPrimitiveQuad> primitives,
                              int render_flags);
    void renderFaceListOrEnvMap(platform::SInputFace *faces, int count, int flags);
    // Each primitive filled in the active render colour into the depth.
    void renderPrimitiveList(std::span<const platform::SMRGLHeaderPrimitive> primitives);
    void renderTexturedPrimitiveListVariant(platform::SMRGLHeaderPrimitive *prim, int count);
    void markMirrorCameraDirty();
    void setFlatColor(int light_scale, int color_scale, int fog_scale);
    void cacheMirrorLighting(common::CVector3f *position);
    // 16.16. Builds the camera's light-map palette and the set's intensity table for it.
    void setGamma(int gamma);
    void setCameraAmbientValue(int index, float value);
    void setCameraAmbientValueByGroup(int group_id, float value);
    void setCameraEnabled(std::size_t camera_index, bool enabled);
    // Every camera of the group.
    void setCameraEnabledByGroup(int group_id, bool enabled);
    // The spotlight of that name, compared ignoring case, and its place among the set's
    // spotlights, which is its master light's.
    [[nodiscard]] std::optional<SSpotlight> addLightFilter(std::string_view light_name) const;
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
    // deferred: the five-deep raytrace state stack, with this
    // nocedit 0x005715b0
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
    // Marks the voxels the actor's box fills, as the actor is placed and turned, for the path
    // maps to keep out of.
    void castVoxelShadow(CDemonActor &actor);
    void transferVoxelShadow(CDemonActor *actor);
    void commitVoxelBuffer();
    int isPointInWater(common::CVector3f *point);
    // Chooses the camera that shows the actor best and switches to it, returning whether it
    // switched. With no actor it shows the first camera unless one is chosen. Unforced, it waits
    // out a switch's hold and scores a few cameras a frame; a mode of 1 scores every camera at
    // once, and above 1 switches even when a camera is chosen.
    // deferred: the pool of 1500 thumbs and the 2000 nearby actors' boxes, with this
    // nocedit 0x00574790
    int evaluateVirtualDirector(CDemonActor *actor, int force_evaluation_mode);
    // Switches to the camera, holding it for the time unless a script lets go first.
    void setPendingCamera(int camera_index, float hold_time);
    // Lets the next frame end a hold.
    void clearCameraSwitchCooldown();
    // The camera shown, or -1 for none since the scene began; the one shown before it, and how
    // long it is held back from being chosen again.
    [[nodiscard]] int getSelectedCameraIndex() const;
    [[nodiscard]] int getPreviousBestCameraIndex() const;
    [[nodiscard]] float getPreviousBestCameraTimer() const;
    // What is left of a switch's hold, and the camera it holds.
    [[nodiscard]] float getCameraSwitchCooldown() const;
    [[nodiscard]] int getPendingCameraIndex() const;
    // Each camera's score as the director last worked it out.
    [[nodiscard]] std::span<const float> getCameraScores() const;
    // Whether the actor stood outside every virtual director box at the last switch.
    [[nodiscard]] bool wasLastSwitchAreaInvalid() const;
    // The hero this machine plays, drawn first; null for none.
    void setLocalHero(CDemonActor *local_hero);
    // Lists the renderable actors to draw, nearest the camera first, the local hero before them
    // all: those moved since they were last drawn, which take the mask's passes, and those with
    // a pass due.
    void buildDisplayList(std::uint32_t dirty_flags_mask);
    // The actors to draw, as buildDisplayList last listed them.
    [[nodiscard]] std::span<CDemonActor *const> getSortedRenderActors() const;

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
    // The mission's actors in this set, which the mission owns.
    [[nodiscard]] std::span<CDemonActor *const> getActors() const;
    void setActors(std::vector<CDemonActor *> actors);
    // Of the actors, as buildActorTypeLists last sorted them: those drawn opaque or transparent,
    // the characters, the enemies among them, the waypoints, and what auto-aim may turn to.
    [[nodiscard]] std::span<CDemonActor *const> getRenderableActors() const;
    [[nodiscard]] std::span<CCharacter *const> getCharacters() const;
    [[nodiscard]] std::span<CEnemy *const> getEnemies() const;
    [[nodiscard]] std::span<CWayPoint *const> getWaypoints() const;
    [[nodiscard]] std::span<CDemonActor *const> getThreats() const;
    // As buildCollidableActorList last listed them.
    [[nodiscard]] std::span<CDemonActor *const> getCollidableActors() const;
    [[nodiscard]] std::span<const C3DSCamera> getCameras() const;
    [[nodiscard]] std::span<C3DSCamera> getCameras();
    [[nodiscard]] int getDefaultRoomSize() const;
    [[nodiscard]] std::span<const SRoom> getRooms() const;
    [[nodiscard]] int getDefaultGroundType() const;
    [[nodiscard]] int getDefaultMasterReverb() const;
    [[nodiscard]] std::span<const SVDBox> getVdirBoxes() const;
    // The raytrace geometry's .GEO file, as the last load named it.
    [[nodiscard]] const std::string &getGeometryFilename() const;
    // The camera's depth thumb, kThumbWidth * kThumbHeight depths.
    [[nodiscard]] std::span<const std::uint32_t> getThumb(std::size_t camera_index) const;
    // For each 16.16 intensity below one, its level after gamma, at least 0x100; empty until
    // setGamma.
    [[nodiscard]] std::span<const int> getIntensityToValueLookupTable() const;
    // The fog the scene shows now: the set's own until a camera brings its own.
    [[nodiscard]] const SFog &getActiveFog() const;
    // One for each of the set's spotlights, in their order, made by initScene.
    [[nodiscard]] std::span<const std::unique_ptr<CDemonLight>> getMasterLights() const;

private:
    void lightVertexColor(const common::CVector3i &surface_normal,
                          platform::SRenderVertex &vertex) const;
    // Each actor of the display list draws its background, opaque and tinted by its scale.
    void renderBackgroundActors(int layer_flag);
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
    [[nodiscard]] bool isPointInVdirBox(std::size_t box_index,
                                        const common::CVector3f &point) const;
    int findVdirBoxAtPosition(const common::CVector3f &position);
    void buildVdirBoxGroups();
    // The actor's box as the director draws it into the thumbs: its corners in 24.8, and its
    // faces, each with its plane.
    struct SActorOutline {
        std::array<common::CVector3i, CBoundingBox3D::kCorners> corners{};
        std::array<platform::SMRGLPrimitiveQuad, 6> faces;
    };
    // What the cameras are scored against: the actor's virtual director area, the radius of the
    // sphere tested against each camera's view, and its outline.
    struct SScoringTarget {
        int area = -1;
        float radius = 0.0F;
        const SActorOutline &outline;
    };

    [[nodiscard]] static SActorOutline outlineActor(const CBoundingBox3D &box);
    // How much of the actor the camera sees, from the camera's depth thumb.
    float calculateActorVisibility(std::size_t camera_index, const CDemonActor &actor,
                                   const SActorOutline &outline);
    // Scores up to count cameras from where the last call stopped.
    void scoreCameras(CDemonActor &actor, const SScoringTarget &target, int count,
                      int force_evaluation_mode);
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
    std::vector<CDemonActor *> actors_;
    std::vector<CDemonActor *> renderable_actors_;
    std::vector<CCharacter *> characters_;
    std::vector<CEnemy *> enemies_;
    std::vector<CWayPoint *> waypoints_;
    std::vector<CDemonActor *> threats_;
    std::vector<CDemonActor *> collidable_actors_;
    std::vector<C3DSCamera> cameras_;
    int default_room_size_ = 0;
    std::vector<SRoom> rooms_;
    int default_ground_type_ = 2;
    int default_master_reverb_ = 0;
    std::vector<SVDBox> vdir_boxes_;
    std::string geometry_filename_;
    std::vector<std::uint32_t> thumbs_;
    std::vector<int> intensity_to_value_;
    SFog active_fog_;
    std::vector<std::unique_ptr<CDemonLight>> master_lights_;
    int selected_camera_index_ = -1;
    int previous_best_camera_index_ = -1;
    float previous_best_camera_timer_ = 0.0F;
    float camera_switch_cooldown_ = 0.0F;
    int pending_camera_index_ = 0;
    bool last_switch_area_invalid_ = false;
    // The next camera the director scores, and each camera's last score.
    int next_scored_camera_ = 0;
    std::vector<float> camera_scores_;
    CDemonActor *local_hero_ = nullptr;
    std::vector<CDemonActor *> sorted_render_actors_;
};

} // namespace nocturne::core
