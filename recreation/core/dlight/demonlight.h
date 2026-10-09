#pragma once

#include "common/fwd.h"
#include "core/dcamera/demoncamera.h"
#include "core/fwd.h"

#include <cstdint>

namespace nocturne::core {

class CDemonLight : public CDemonCamera {
public:
    CDemonLight(int shadow_map_width, int shadow_map_height);
    ~CDemonLight() override;

    void init();
    void allocMasterZBuffer();
    void freeMasterZBuffer();
    void beginScene(int skip_clear_buffers);
    void endScene(int restore_viewport_state);
    void beginBackgroundScene();
    void endBackgroundScene();
    void restoreDirtyRegions();
    std::uint16_t *projectLightAndMarkVisibility(common::CVector3i *projected_coord,
                                                 std::uint8_t x_round_flag,
                                                 std::uint8_t y_round_flag);
    void renderShadowMapDebugView(int screen_x, int screen_y, int display_size);
    void clearCircularShadowMapEdges();
    void renderCoronaGeometry();
    void renderLightBloomQuad();
    void renderLightGlowSprites();
    void allocateFilter();
    void applyFilter(CDemonFilter *filter_ptr, int filter_index, int filter_pos_x,
                     int filter_pos_y);
    void initializeVisibilityBuffer();
    int testShadowMapRegion(CRect *rect);
    void setVolumetricIntensity(float intensity);
    void drawShadowDepthBuffer(int screen_x, int screen_y, int brightness_offset);
};

} // namespace nocturne::core
