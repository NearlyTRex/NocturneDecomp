#include "core/setutil/3dslight.h"

#include "common/error/error.h"
#include "common/text/scanformat.h"
#include "common/text/textscanner.h"
#include "core/setutil/setfileversion.h"

#include <algorithm>
#include <cstddef>

namespace nocturne::core {
namespace {

using common::scanFormat;

// The .SET versions that first had each camera's view of the light bounded, a blend flag, a
// light that could be seen from cameras past the first 100, filter indices, moving filters, an
// aspect and an intensity.
constexpr int kBoundedVisibilityVersion = 2;
constexpr int kBlendFilterVersion = 9;
constexpr int kMoreCamerasVersion = 7;
constexpr int kFilterIndexVersion = 16;
constexpr int kMovingFilterVersion = 19;
constexpr int kAspectVersion = 21;
constexpr int kIntensityVersion = 22;
constexpr int kFewerCameras = 100;
constexpr int kMoreCameras = 200;
// The whole view, where versions before 2 put every light a camera could see.
constexpr CRect kWholeView{.x_min = 1, .x_max = 318, .y_min = 1, .y_max = 238};

void skipLabel(common::CTextScanner &scanner, bool labelled) {
    if (labelled) {
        scanner.skipLine();
    }
}

} // namespace

// nocedit 0x005862f0
C3DSLight::C3DSLight() = default;

// deferred: forgetting each loaded filter's CDemonFilter, with create
// nocedit 0x00586310
void C3DSLight::load(common::CTextScanner &scanner, int set_file_version) {
    const bool labelled = set_file_version >= kLabelledSetFileVersion;
    skipLabel(scanner, labelled);
    scanFormat(scanner, "%[^\n]\n", name_);
    skipLabel(scanner, labelled);
    scanFormat(scanner, "%f,%f,%f\n", pos_.x, pos_.y, pos_.z);
    skipLabel(scanner, labelled);
    scanFormat(scanner, "%f,%f,%f\n", orient_.x, orient_.z, orient_.y);
    skipLabel(scanner, labelled);
    scanFormat(scanner, "%f\n", fov_);
    if (set_file_version < kAspectVersion) {
        aspect_ = 1.0F;
    } else {
        scanner.skipLine();
        scanFormat(scanner, "%f\n", aspect_);
    }
    if (set_file_version < kIntensityVersion) {
        intensity_ = 1.0F;
    } else {
        scanner.skipLine();
        scanFormat(scanner, "%f\n", intensity_);
    }
    skipLabel(scanner, labelled);
    scanFormat(scanner, "%d\n", light_type_);
    skipLabel(scanner, labelled);
    scanFormat(scanner, "%f,%f,%f,%f,%f\n", color_.r, color_.g, color_.b, atten_start_, atten_end_);
    skipLabel(scanner, labelled);
    scanFormat(scanner, "%d,%d\n", size_.x, size_.y);
    skipLabel(scanner, labelled);
    scanFormat(scanner, "%d\n", filter_count_);
    skipLabel(scanner, labelled);
    if (set_file_version < kBlendFilterVersion) {
        blend_filter_ = 1;
    } else {
        scanFormat(scanner, "%d\n", blend_filter_);
    }
    loadFilters(scanner, set_file_version);
    skipLabel(scanner, labelled);
    scanFormat(scanner, "%d\n", current_filter_frame_);
    if (set_file_version < kMovingFilterVersion) {
        filter_vel_ = {};
        filter_pos_ = {};
        move_filter_ = 0;
    } else {
        scanner.skipLine();
        scanFormat(scanner, "%d,%d,%d,%d,%d\n", move_filter_, filter_vel_.x, filter_vel_.y,
                   filter_pos_.x, filter_pos_.y);
    }
    skipLabel(scanner, labelled);
    scanFormat(scanner, "%f,%f\n", on_time_, cycle_time_);
    scanner.skipLine();
    loadVisibility(scanner, set_file_version);
    atten_end_squared_ = atten_end_ * atten_end_;
    atten_end_reciprocal_ = 1.0F / atten_end_;
}

// Each filter's duration, index and name; before 16 a filter had no index, and gets 0.
void C3DSLight::loadFilters(common::CTextScanner &scanner, int set_file_version) {
    const auto count = static_cast<std::size_t>(std::max(filter_count_, 0));
    filter_names_.resize(count);
    filter_durations_.resize(count);
    filter_indices_.resize(count);
    for (std::size_t i = 0; i < count; ++i) {
        if (set_file_version < kFilterIndexVersion) {
            scanFormat(scanner, "%f,%s\n", filter_durations_[i], filter_names_[i]);
            filter_indices_[i] = 0;
        } else {
            scanFormat(scanner, "%f,%d,%s\n", filter_durations_[i], filter_indices_[i],
                       filter_names_[i]);
        }
    }
}

// From 11 the file lists only the cameras that see the light. Before, it held a line for each
// of the first 100 cameras, or 200 from 7, each flag kept as its number's low byte; before 2 a
// line was only the flag, and the light was bounded by the whole view. A negative camera number
// is fatal too; the original wrote before the light's lists.
void C3DSLight::loadVisibility(common::CTextScanner &scanner, int set_file_version) {
    if (set_file_version < kLabelledSetFileVersion) {
        const int count = set_file_version < kMoreCamerasVersion ? kFewerCameras : kMoreCameras;
        int visible = 0;
        for (int camera = 0; camera < count; ++camera) {
            CRect &bounds = camera_light_bounds_.at(static_cast<std::size_t>(camera));
            if (set_file_version < kBoundedVisibilityVersion) {
                scanFormat(scanner, "%d\n", visible);
                bounds = kWholeView;
            } else {
                scanFormat(scanner, "%d,%d,%d,%d,%d\n", visible, bounds.x_min, bounds.x_max,
                           bounds.y_min, bounds.y_max);
            }
            visible_flags_.at(static_cast<std::size_t>(camera)) =
                static_cast<std::uint8_t>(visible);
        }
        return;
    }
    visible_flags_.fill(0);
    camera_light_bounds_.fill({});
    int count = 0;
    scanFormat(scanner, "%d\n", count);
    int camera = 0;
    CRect bounds;
    for (int i = 0; i < count; ++i) {
        scanFormat(scanner, "%d,%d,%d,%d,%d\n", camera, bounds.x_min, bounds.x_max, bounds.y_min,
                   bounds.y_max);
        if (camera < 0 || camera >= kMaxCameras) {
            common::displayErrorAndQuit("Invalid camera number in visiblilty list!");
        }
        visible_flags_.at(static_cast<std::size_t>(camera)) = 1;
        camera_light_bounds_.at(static_cast<std::size_t>(camera)) = bounds;
    }
}

int C3DSLight::getLightType() const {
    return light_type_;
}

const std::string &C3DSLight::getName() const {
    return name_;
}

const common::CVector3f &C3DSLight::getPos() const {
    return pos_;
}

const common::CVector3f &C3DSLight::getOrient() const {
    return orient_;
}

float C3DSLight::getFov() const {
    return fov_;
}

float C3DSLight::getAspect() const {
    return aspect_;
}

float C3DSLight::getIntensity() const {
    return intensity_;
}

std::span<const std::uint8_t> C3DSLight::getVisibleFlags() const {
    return visible_flags_;
}

std::span<const CRect> C3DSLight::getCameraLightBounds() const {
    return camera_light_bounds_;
}

const CColor3f &C3DSLight::getColor() const {
    return color_;
}

float C3DSLight::getAttenStart() const {
    return atten_start_;
}

float C3DSLight::getAttenEnd() const {
    return atten_end_;
}

float C3DSLight::getAttenEndSquared() const {
    return atten_end_squared_;
}

float C3DSLight::getAttenEndReciprocal() const {
    return atten_end_reciprocal_;
}

float C3DSLight::getOnTime() const {
    return on_time_;
}

float C3DSLight::getCycleTime() const {
    return cycle_time_;
}

int C3DSLight::getFilterCount() const {
    return filter_count_;
}

int C3DSLight::getBlendFilter() const {
    return blend_filter_;
}

std::span<const std::string> C3DSLight::getFilterNames() const {
    return filter_names_;
}

std::span<const float> C3DSLight::getFilterDurations() const {
    return filter_durations_;
}

std::span<const int> C3DSLight::getFilterIndices() const {
    return filter_indices_;
}

int C3DSLight::getMoveFilter() const {
    return move_filter_;
}

const common::CVector2i &C3DSLight::getFilterVel() const {
    return filter_vel_;
}

const common::CVector2i &C3DSLight::getFilterPos() const {
    return filter_pos_;
}

const common::CVector2i &C3DSLight::getSize() const {
    return size_;
}

int C3DSLight::getCurrentFilterFrame() const {
    return current_filter_frame_;
}

} // namespace nocturne::core
