#pragma once

#include "common/fwd.h"
#include "common/math/matrix3x3i.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/dlight/cameraview.h"
#include "core/dlight/lightmappixel.h"
#include "core/fwd.h"
#include "core/rect.h"
#include "engine/2d/2d.h"
#include "engine/fwd.h"
#include "platform/fwd.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {

// What a camera draws with and sets up: the tables every camera shares, the screen it sizes its
// buffers for, the renderer it hands the fog colour to, and the CRT stream the fog is drawn from.
struct SDemonCameraOwners {
    SCameraTables &tables;
    engine::IScreenDevice &screen;
    engine::CSpecial &special;
    common::CWatcomRandom &crt_random;
    // What a scene the camera begins is drawn through.
    engine::CDemonRenderer &renderer;
    // Where the backdrops are read from.
    const engine::CDosIo &dosio;
    // Whose transform and projection a scene's begin copies, to map the screen back to the world.
    const engine::CMatrix &matrix;
    const engine::C2d &two_d;
};

// The software renderer's camera: a frame and depth buffer at most 480 lines tall, and the
// tables and fog it draws the scene with.
class CDemonCamera : public CCameraView {
public:
    // deferred: the precomputed surface normals, with precomputeNormals
    // The original's image decompressor is made where a fog is loaded.
    // nocedit 0x0044bb10
    explicit CDemonCamera(const SDemonCameraOwners &owners);
    ~CDemonCamera() override;
    CDemonCamera(const CDemonCamera &) = delete;
    CDemonCamera &operator=(const CDemonCamera &) = delete;
    CDemonCamera(CDemonCamera &&) = delete;
    CDemonCamera &operator=(CDemonCamera &&) = delete;

    void setupPerspectiveAndFog(common::CVector3f *position,
                                platform::SProjectedVertex *projected_vertex) override;
    int getFogValueAtPosition(common::CVector3i *world_position,
                              platform::SProjectedVertex *projected_vertex) override;
    void saveAlphaTransform(int alpha_index) override;

    // A gamma of one, buffers for the screen's height, a fresh fog grid, and the lookup table.
    void initLookupTable();
    void init(int screen_height);
    void free();
    void setSceneCamera(int skip_clear_buffers);
    void resetSceneCamera();
    // Opens the camera's scene: its frame the viewport, the renderer at its place, lens and turn,
    // and, unless told to skip it, the screen and depth buffers cleared. A scene already open is
    // fatal.
    void beginScene(int skip_clear_buffers);
    [[nodiscard]] bool isSceneOpen() const;
    // Closes the scene: the renderer's viewport back, and, unless the scene skipped its clearing
    // or the copy is skipped, the screen's depths copied into the camera's. A scene not open is
    // fatal.
    void endScene(int skip_zbuffer_copy);
    // The first background scene draws into the camera's own frame at 32 bits, its colours
    // 8-8-8, in software, until the matching end puts the screen back. The scene must be open.
    void beginBackgroundScene();
    void endBackgroundScene(int restore_zbuffer);
    // Marks the rectangle of the frame, every edge inclusive, for its depths to be put back
    // before the next scene; past kMaxDirtyRects of them, the whole frame's.
    void pushRect(const CRect &rect);
    // The depths the scene began with, put back into the screen's where the rectangles marked
    // since the last scene began, kept to the frame; in hardware, the renderer's master depths
    // over the whole window.
    void restoreZBufferRectArray();
    // The renderer's transform, camera origin and projection as the scene began, and the
    // transform's inverse.
    void updateTransformMatrices();
    // The screen point with its depth, in 16.16 on screen, 0x7fffffff where nothing was drawn;
    // returns the depth.
    int screenToWorldCoord(int screen_x, int screen_y, common::CVector3i *output_ptr);
    // A screenToWorldCoord point back to the world, in 24.8, through the scene's projection and
    // inverse transform.
    common::CVector3i *screenToWorldTransform(common::CVector3i *input_ptr,
                                              common::CVector3i *output_ptr);
    // A world point in 24.8 to the screen in 16.16, with its depth; outside the frustum it is all
    // zeros, so a zero depth says the point isn't on the screen.
    common::CVector3i *worldToScreenWithFrustumCull(common::CVector3i *input_ptr,
                                                    common::CVector3i *output_ptr);
    // Where each display pixel of the view, inside the rectangle on a 480-line frame or else the
    // whole display, falls in the light's view: its depth there, its shadow map entry and its
    // beam texel, and each display row's first and last pixel the light reaches. A pixel past
    // the frame's edge, facing away from a light other than the moving screen's, or out of the
    // light's view gets none. No more than kMaxPrecomputedLights since precomputeNormals.
    void precomputeLight(CDemonLight &light_source, const CRect &rect);
    // Each display pixel's world position, depth and surface normal from what the background
    // scene drew: the depths through the scene's inverse projection, the normal from the
    // pixel's colour. The farthest depth is the camera's reach.
    void precomputeNormals();
    int calculateAttenuatedDirectionalLight(common::CVector3i *world_pos, CDemonLight *light_source,
                                            common::CVector3i *light_direction);
    // A backdrop's .ACT palette, from backdrop or art, then its .fog and its image: the fog's
    // density grid and planes, the image scaled into the frame and shrunk into the backdrop
    // texture. Nothing without the palette; the fog or image missing is skipped.
    void loadImage(std::string_view filename);
    void renderLightCoronas(CDemonLight *light_source);
    // The light's beam level added to the coronas' light at each pixel precomputeLight found
    // the light reaching, not behind the light's shadow map.
    void addLightmapToCorona(const CDemonLight &light_source);
    int isCoronaSufficientlyVisible(CDemonLight *light_source);
    CRect *computeLightExtentBounds(CDemonLight *light, CRect *out_bounds);
    // The coronas' light started over at the effect's level, and the fog over the display mixed
    // from the drifting fog's two planes as far as it has drifted between them.
    void processCorona();
    // The backdrop lit by the coronas' blurred light and fogged onto the screen, past 480 lines
    // into the renderer's hold buffer, the fog drifting on by the frame's time in 65536ths of a
    // second, and the hardware renderer's scene begun.
    void lockAndRenderToBuffer(int frame_time);
    void renderGlobeCoronas(CDemonGlobe *globe, int force_render);
    int isBoundingBoxVisible(common::CVector3f *position, common::CVector3f *orientation,
                             common::CVector3f *bbox_min, common::CVector3f *bbox_max);
    int isSphereVisible(common::CVector3f *position, float radius);
    // From 0 to 1.
    void setEffectIntensity(float intensity);
    // The fog's colour goes to the renderer; its drift, thinning height and density to the fog
    // grid.
    void initCameraFog(const SFog &fog_config);
    // 16.16; 1 leaves each level as it is.
    void generateGammaPalette(int gamma_value);
    void clearFramebufferAndWorkBuffers(int clear_color);
    void initCameraShake(float peak_intensity, float attack_time, float sustain_duration,
                         float decay_time);
    common::CVector3f *computeVisibleFrustumBounds(common::CVector3f *output_bounds);
    // The screen's depths into the camera's, and back.
    void saveZBufferScanlines();
    void restoreZBufferScanlines();

    [[nodiscard]] const std::string &getCameraName() const;
    void setCameraName(std::string_view camera_name);
    // In world units.
    [[nodiscard]] float getMaxDistance() const;
    void setMaxDistance(float max_distance);
    [[nodiscard]] int getFramebufferWidth() const;
    [[nodiscard]] int getFramebufferHeight() const;
    // What a display pixel is wide and tall in frame pixels.
    [[nodiscard]] int getScaleFactor() const;
    [[nodiscard]] int getDisplayWidth() const;
    [[nodiscard]] int getDisplayHeight() const;
    // A pixel a word, row by row; empty until init.
    [[nodiscard]] std::span<const std::uint32_t> getFramebuffer() const;
    [[nodiscard]] std::span<const std::uint32_t> getZBuffer() const;
    // 0xffff is full.
    [[nodiscard]] int getCoronaBlendFactor() const;
    // As pushRect marked them since the scene began.
    [[nodiscard]] std::span<const CRect> getDirtyRects() const;
    [[nodiscard]] bool getDirtyRectsOverflowed() const;

    // As precomputeNormals left them, a display pixel each, 320 a row; empty before it.
    [[nodiscard]] std::span<const common::CVector3i> getPrecomputedWorldPositions() const;
    [[nodiscard]] std::span<const common::CVector3f> getPrecomputedNormals() const;
    [[nodiscard]] std::span<const int> getPrecomputedDepths() const;

    static constexpr std::size_t kMaxDirtyRects = 256;
    static constexpr int kMaxPrecomputedLights = 8;

protected:
    [[nodiscard]] const SDemonCameraOwners &getOwners() const;
    // What a light's own scene begins and ends with in place of the camera's.
    void setSceneOpen(bool open, bool skip_clear_buffers);
    [[nodiscard]] bool getSkipClearBuffers() const;
    void forgetDirtyRects();

private:
    static constexpr float kDefaultMaxDistance = 999.9F;
    // The tallest frame the software renderer draws; a taller screen is scaled up to.
    static constexpr int kMaxFramebufferHeight = 480;

    // The light-map palette's level at the index, an index past its ends taking the end's.
    [[nodiscard]] int paletteLevel(int index) const;
    // The fog's colour, as the palette has it, to the hardware renderer.
    void passFogColor() const;

    // The camera's depths into the screen's over the rows and columns of the rectangle, which is
    // inside the frame.
    void restoreDepths(const CRect &rect);
    // The front of what saveBackdrop did: the fog's drift started over and its plane count from
    // its drift.
    void saveBackdrop();
    // Where the display pixel falls in the light's view, its depth there before the bias; none for
    // a pixel past the frame's edge, facing away unless the light is the moving screen's, or out
    // of the light's view.
    [[nodiscard]] std::optional<SLightMapPixel> findInLight(CDemonLight &light_source, int x, int y,
                                                            bool moving_screen) const;
    void compositeLightmapToFramebuffer(int frame_time);
    // The coronas' light blurred, the display's edges left dark.
    void blurCoronaBufferAndClearEdges();
    // Each display row of the fog between the plane and the next, alpha of 0xffff being the next.
    void blendFogPlanes(int plane, int alpha);
    // The fog's colour, 8-8-8 as the screen's pixels place it.
    [[nodiscard]] std::uint32_t getFogColor() const;

    // Fills the camera tables' fog grid afresh from the CRT stream.
    void generateFogGrid();
    // inverted_matrix_ from source_matrix_, in 16.16.
    void calculateInverseTransform();
    // The screen and depth buffers cleared for a scene, the hardware renderer's too.
    void clearSceneBuffers();
    // The .fog's grid, and its planes, for a camera whose fog has a density.
    void loadFog(std::string_view filename);
    // Each colour as the screen's pixels have it.
    [[nodiscard]] std::array<std::uint32_t, 256>
    convertPaletteToDisplayFormat(std::span<const std::uint8_t> palette) const;
    // The 640 by 480 image into the frame, at whichever of 240 lines, 480, or between it is.
    void scaleImageToFramebuffer(std::span<const std::uint8_t> image,
                                 const std::array<std::uint32_t, 256> &colors);
    void uploadBackdropTexture(std::span<const std::uint8_t> image,
                               std::span<std::uint8_t> palette);

    SDemonCameraOwners owners_;
    std::string camera_name_;
    float max_distance_ = kDefaultMaxDistance;
    int framebuffer_width_ = 0;
    int framebuffer_height_ = 0;
    int scale_factor_ = 0;
    int display_width_ = 0;
    int display_height_ = 0;
    std::vector<std::uint32_t> framebuffer_;
    std::vector<std::uint32_t> zbuffer_;
    int corona_blend_factor_ = 0;
    common::CMatrix3x3i source_matrix_;
    common::CMatrix3x3i inverted_matrix_;
    common::CVector3i camera_origin_;
    engine::SProjectionParams cached_projection_;
    bool scene_open_ = false;
    bool skip_clear_buffers_ = false;
    std::vector<CRect> dirty_rects_;
    bool dirty_rects_overflowed_ = false;
    std::vector<common::CVector3i> precomputed_world_;
    std::vector<common::CVector3f> precomputed_normals_;
    std::vector<int> precomputed_depths_;
    // Lights precomputed since precomputeNormals, and the maps they take, a light's in turn.
    int precomputed_lights_ = 0;
    std::vector<SLightMapPixel> light_map_pool_;
};

} // namespace nocturne::core
