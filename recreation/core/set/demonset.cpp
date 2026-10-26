#include "core/set/demonset.h"

#include "common/math/vector3i.h"
#include "common/text/ascii.h"

#include <algorithm>
#include <cstddef>
#include <optional>
#include <span>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::core {

// The original constructor's scene setup arrives with the fields it fills.
CDemonSet::CDemonSet(const SDemonSetOwners &owners) : owners_(owners) {}

void CDemonSet::setLightDirection(const common::CVector3i &light_direction) {
    light_direction_ = light_direction;
}

void CDemonSet::setAmbientBaseQuick(int ambient_base_quick) {
    ambient_base_quick_ = ambient_base_quick;
}

const common::CVector3i &CDemonSet::getLightDirection() const {
    return light_direction_;
}

int CDemonSet::getAmbientBaseQuick() const {
    return ambient_base_quick_;
}

const CColor3i &CDemonSet::getFlatColor() const {
    return flat_color_;
}

// nocedit 0x00570ca0
void CDemonSet::setFlatColor(int light_scale, int color_scale, int fog_scale) {
    flat_color_ = {.r = light_scale, .g = color_scale, .b = fog_scale};
}

// nocedit 0x0056b790
std::optional<std::size_t> CDemonSet::findCameraByName(std::string_view name) const {
    const auto camera = std::ranges::find_if(cameras_, [name](const C3DSCamera &candidate) {
        return common::equalsIgnoringAsciiCase(candidate.getName(), name);
    });
    if (camera == cameras_.end()) {
        return std::nullopt;
    }
    return static_cast<std::size_t>(camera - cameras_.begin());
}

int CDemonSet::getSetFileVersion() const {
    return set_file_version_;
}

float CDemonSet::getSetScaleFactor() const {
    return set_scale_factor_;
}

float CDemonSet::getMinAmbientValue() const {
    return min_ambient_value_;
}

const SFog &CDemonSet::getSceneFog() const {
    return scene_fog_;
}

bool CDemonSet::getUseEnviroModel() const {
    return use_enviro_model_;
}

const std::string &CDemonSet::getEnviroModelName() const {
    return enviro_model_name_;
}

bool CDemonSet::getHasSky() const {
    return has_sky_;
}

const std::string &CDemonSet::getSkyTextureName() const {
    return sky_texture_name_;
}

int CDemonSet::getSkyBrightness() const {
    return sky_brightness_;
}

bool CDemonSet::getUseWorldGeometry() const {
    return use_world_geometry_;
}

const std::string &CDemonSet::getWorldGeometryName() const {
    return world_geometry_name_;
}

EWeatherType CDemonSet::getWeatherType() const {
    return weather_type_;
}

bool CDemonSet::getPlayerOnTrain() const {
    return player_on_train_;
}

std::span<const C3DSLight> CDemonSet::getLights() const {
    return lights_;
}

std::span<CDemonActor *const> CDemonSet::getActors() const {
    return actors_;
}

void CDemonSet::setActors(std::vector<CDemonActor *> actors) {
    actors_ = std::move(actors);
}

std::span<const C3DSCamera> CDemonSet::getCameras() const {
    return cameras_;
}

int CDemonSet::getDefaultRoomSize() const {
    return default_room_size_;
}

std::span<const SRoom> CDemonSet::getRooms() const {
    return rooms_;
}

int CDemonSet::getDefaultGroundType() const {
    return default_ground_type_;
}

int CDemonSet::getDefaultMasterReverb() const {
    return default_master_reverb_;
}

std::span<const SVDBox> CDemonSet::getVdirBoxes() const {
    return vdir_boxes_;
}

const std::string &CDemonSet::getGeometryFilename() const {
    return geometry_filename_;
}

std::span<const std::uint32_t> CDemonSet::getThumb(std::size_t camera_index) const {
    return std::span<const std::uint32_t>(thumbs_).subspan(
        camera_index * kThumbWidth * kThumbHeight, kThumbWidth * kThumbHeight);
}

} // namespace nocturne::core
