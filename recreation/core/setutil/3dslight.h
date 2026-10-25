#pragma once

#include "common/fwd.h"
#include "common/math/vector2i.h"
#include "common/math/vector3f.h"
#include "core/color3f.h"
#include "core/fwd.h"
#include "core/rect.h"

#include <array>
#include <cstdint>
#include <span>
#include <string>
#include <vector>

namespace nocturne::core {

// One of a set's lights, as the .SET file describes it.
class C3DSLight {
public:
    // The cameras a light can say it is seen from.
    static constexpr int kMaxCameras = 250;
    // The light type of a spotlight, the lights master lights are made for.
    static constexpr int kSpotlightType = 0;

    C3DSLight();

    // From a .SET file of the version. Fields older files lack get defaults; the rest keep what
    // the light had where the file has no number.
    void load(common::CTextScanner &scanner, int set_file_version);
    CDemonLight *create();
    void apply(CDemonLight *light);
    void doNothing();
    void process(CDemonLight *light, int apply_filter_flag);
    void advanceFilter(CDemonLight *light);
    void setFilterFrame(int frame_index, CDemonLight *light);
    void addFilter(char *filter_name, float duration, int filter_mode);
    int isVisible();

    [[nodiscard]] int getLightType() const;
    [[nodiscard]] const std::string &getName() const;
    [[nodiscard]] const common::CVector3f &getPos() const;
    // Angles in radians about x, y and z.
    [[nodiscard]] const common::CVector3f &getOrient() const;
    [[nodiscard]] float getFov() const;
    [[nodiscard]] float getAspect() const;
    [[nodiscard]] float getIntensity() const;
    // For each camera, whether the light shows in its view, and where.
    [[nodiscard]] std::span<const std::uint8_t> getVisibleFlags() const;
    [[nodiscard]] std::span<const CRect> getCameraLightBounds() const;
    [[nodiscard]] const CColor3f &getColor() const;
    [[nodiscard]] float getAttenStart() const;
    [[nodiscard]] float getAttenEnd() const;
    [[nodiscard]] float getAttenEndSquared() const;
    [[nodiscard]] float getAttenEndReciprocal() const;
    [[nodiscard]] float getOnTime() const;
    [[nodiscard]] float getCycleTime() const;
    // As the file gave it, which may be negative; the filters below number none then.
    [[nodiscard]] int getFilterCount() const;
    [[nodiscard]] int getBlendFilter() const;
    [[nodiscard]] std::span<const std::string> getFilterNames() const;
    [[nodiscard]] std::span<const float> getFilterDurations() const;
    [[nodiscard]] std::span<const int> getFilterIndices() const;
    [[nodiscard]] int getMoveFilter() const;
    [[nodiscard]] const common::CVector2i &getFilterVel() const;
    [[nodiscard]] const common::CVector2i &getFilterPos() const;
    [[nodiscard]] const common::CVector2i &getSize() const;
    [[nodiscard]] int getCurrentFilterFrame() const;

private:
    void loadFilters(common::CTextScanner &scanner, int set_file_version);
    void loadVisibility(common::CTextScanner &scanner, int set_file_version);

    int light_type_ = 0;
    std::string name_;
    common::CVector3f pos_;
    common::CVector3f orient_;
    float fov_ = 28.0F;
    float aspect_ = 1.0F;
    float intensity_ = 1.0F;
    std::array<std::uint8_t, kMaxCameras> visible_flags_{};
    std::array<CRect, kMaxCameras> camera_light_bounds_{};
    CColor3f color_;
    float atten_start_ = 0.0F;
    float atten_end_ = 0.0F;
    float atten_end_squared_ = 0.0F;
    float atten_end_reciprocal_ = 0.0F;
    float on_time_ = 1.0F;
    float cycle_time_ = 1.0F;
    int filter_count_ = 0;
    int blend_filter_ = 0;
    std::vector<std::string> filter_names_;
    std::vector<float> filter_durations_;
    std::vector<int> filter_indices_;
    int move_filter_ = 0;
    common::CVector2i filter_vel_;
    common::CVector2i filter_pos_;
    common::CVector2i size_{.x = 256, .y = 256};
    int current_filter_frame_ = 0;
};

} // namespace nocturne::core
