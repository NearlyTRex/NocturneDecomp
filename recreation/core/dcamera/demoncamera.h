#pragma once

#include "common/fwd.h"
#include "core/dlight/cameraview.h"
#include "core/fwd.h"
#include "platform/fwd.h"

namespace nocturne::core {

class CDemonCamera : public CCameraView {
public:
    CDemonCamera();
    ~CDemonCamera() override;

    void setupPerspectiveAndFog(common::CVector3f *position,
                                platform::SProjectedVertex *projected_vertex) override;
    int getFogValueAtPosition(common::CVector3i *world_position,
                              platform::SProjectedVertex *projected_vertex) override;
    void saveAlphaTransform(int alpha_index) override;

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
    void setEffectIntensity(float intensity);
    void initCameraFog(SFog *fog_config);
    void generateGammaPalette(int gamma_value);
    void clearFramebufferAndWorkBuffers(int clear_color);
    void initCameraShake(float peak_intensity, float attack_time, float sustain_duration,
                         float decay_time);
    common::CVector3f *computeVisibleFrustumBounds(common::CVector3f *output_bounds);
    void saveZBufferScanlines();
    void restoreZBufferScanlines();
};

} // namespace nocturne::core
