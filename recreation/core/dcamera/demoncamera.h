#pragma once

#include "common/fwd.h"
#include "core/dlight/cameraview.h"
#include "core/fwd.h"
#include "engine/fwd.h"
#include "platform/fwd.h"

#include <cstdint>
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
};

// The software renderer's camera: a frame and depth buffer at most 480 lines tall, and the
// tables and fog it draws the scene with.
class CDemonCamera : public CCameraView {
public:
    // deferred: the precomputed surface normals, with precomputeNormals
    // deferred: the image decompressor, 0x10000 bytes from 6 bits, with loadImage
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
    void beginScene(int skip_clear_buffers);
    void pushRect(int left, int top, int right, int bottom);
    void restoreZBufferRectArray();
    void endScene(int skip_zbuffer_copy);
    void beginBackgroundScene();
    void endBackgroundScene(int restore_zbuffer);
    void updateTransformMatrices();
    int screenToWorldCoord(int screen_x, int screen_y, common::CVector3i *output_ptr);
    common::CVector3i *screenToWorldTransform(common::CVector3i *input_ptr,
                                              common::CVector3i *output_ptr);
    common::CVector3i *worldToScreenWithFrustumCull(common::CVector3i *input_ptr,
                                                    common::CVector3i *output_ptr);
    void precomputeLight(CDemonLight *light_source, CRect *rect);
    void precomputeNormals();
    int calculateAttenuatedDirectionalLight(common::CVector3i *world_pos, CDemonLight *light_source,
                                            common::CVector3i *light_direction);
    void loadImage(char *filename);
    void renderLightCoronas(CDemonLight *light_source);
    void addLightmapToCorona(CDemonLight *light_source);
    int isCoronaSufficientlyVisible(CDemonLight *light_source);
    CRect *computeLightExtentBounds(CDemonLight *light, CRect *out_bounds);
    void processCorona();
    int lockAndRenderToBuffer();
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

private:
    static constexpr float kDefaultMaxDistance = 999.9F;

    // Fills the camera tables' fog grid afresh from the CRT stream.
    void generateFogGrid();

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
};

} // namespace nocturne::core
