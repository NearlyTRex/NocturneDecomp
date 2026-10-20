#include "common/error/error.h"
#include "common/math/matrix3x3f.h"
#include "common/math/vector3f.h"
#include "common/text/ascii.h"
#include "common/text/scanformat.h"
#include "common/text/textscanner.h"
#include "core/dcamera/dcamera.h"
#include "core/dmodel/keyframedmodel.h"
#include "core/dtrace/demonraytrace.h"
#include "core/loadingscreen.h"
#include "core/set/demonset.h"
#include "core/setutil/setfileversion.h"
#include "core/terrain/terrain.h"
#include "core/water/water.h"
#include "engine/2d/2d.h"
#include "engine/dosio/dosio.h"
#include "engine/rawinput.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "support/newmsg/newmsg.h"

#include <algorithm>
#include <array>
#include <cstddef>
#include <format>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {
namespace {

using common::CTextScanner;
using common::scanFormat;

// The versions that first held each part of the file.
constexpr int kRoomsVersion = 1;
constexpr int kGroundTypeVersion = 3;
constexpr int kWaveFlagVersion = 5;
constexpr int kVdirBoxesVersion = 5;
// Versions 4 to 9 held the old virtual director's data, which nothing reads.
constexpr int kOldDirectorFirstVersion = 4;
constexpr int kOldDirectorEndVersion = 10;
constexpr int kSkyFlagVersion = 6;
constexpr int kSkyTextureVersion = 12;
constexpr int kWorldGeometryVersion = 13;
constexpr int kCameraFogVersion = 17;
constexpr int kPVSVersion = 20;
constexpr int kMasterReverbVersion = 24;
constexpr int kWeatherVersion = 25;
// Version 14 alone has two more lines before the visibility lists.
constexpr int kStrayLinesVersion = 14;
constexpr int kOldestHeaderExtraLines = 3;
constexpr int kDefaultSkyBrightness = 0x4000;
constexpr std::string_view kDefaultSkyTexture = "NITESKY.RAW";
constexpr std::string_view kNoWorldGeometry = "none";

// Before a field had its own line, sets took it from the geometry file's name.
struct SNamedValue {
    std::string_view prefix;
    int value = 0;
};

constexpr std::array<SNamedValue, 5> kRoomSizesByName = {{{.prefix = "mauso", .value = 2},
                                                          {.prefix = "h109", .value = 0},
                                                          {.prefix = "smill", .value = 3},
                                                          {.prefix = "pier59", .value = 0},
                                                          {.prefix = "ndun", .value = 3}}};
constexpr std::array<SNamedValue, 6> kGroundTypesByName = {{{.prefix = "mauso", .value = 8},
                                                            {.prefix = "h109", .value = 3},
                                                            {.prefix = "smill", .value = 2},
                                                            {.prefix = "pier59", .value = 7},
                                                            {.prefix = "castle", .value = 2},
                                                            {.prefix = "ndun", .value = 8}}};

int valueByName(std::span<const SNamedValue> values, std::string_view geometry_name, int fallback) {
    const auto match = std::ranges::find_if(values, [geometry_name](const SNamedValue &named) {
        return common::startsWithIgnoringAsciiCase(geometry_name, named.prefix);
    });
    return match == values.end() ? fallback : match->value;
}

// "%d\n" into a flag, which keeps its value when there is no number.
void scanFlag(CTextScanner &scanner, bool &flag) {
    int value = flag ? 1 : 0;
    scanFormat(scanner, "%d\n", value);
    flag = value != 0;
}

// "%d\n", keeping the fallback when there is no number. The weather tells only none and rain
// apart, so any other number is snow.
EWeatherType scanWeatherType(CTextScanner &scanner, EWeatherType fallback) {
    int value = static_cast<int>(fallback);
    scanFormat(scanner, "%d\n", value);
    switch (value) {
    case static_cast<int>(EWeatherType::WEATHER_TYPE_NONE):
        return EWeatherType::WEATHER_TYPE_NONE;
    case static_cast<int>(EWeatherType::WEATHER_TYPE_RAIN):
        return EWeatherType::WEATHER_TYPE_RAIN;
    default:
        return EWeatherType::WEATHER_TYPE_SNOW;
    }
}

// A count for a list, which keeps its length when there is no number.
template <typename T>
void scanCount(CTextScanner &scanner, std::vector<T> &list) {
    int count = static_cast<int>(list.size());
    scanFormat(scanner, "%d\n", count);
    list.resize(static_cast<std::size_t>(std::max(count, 0)));
}

// A turned box: its centre, its extents, and its angles, which the file gives as x, z, y.
void scanBox(CTextScanner &scanner, common::CVector3f &position, common::CVector3f &extents,
             common::CMatrix3x3f &rotation_matrix) {
    scanFormat(scanner, "%f,%f,%f\n", position.x, position.y, position.z);
    scanFormat(scanner, "%f,%f,%f\n", extents.x, extents.y, extents.z);
    common::CVector3f angles;
    scanFormat(scanner, "%f,%f,%f\n", angles.x, angles.z, angles.y);
    rotation_matrix.buildRotationMatrix(angles);
}

// The geometry's name with everything from its first '.' replaced.
std::string thumbsFilename(std::string_view geometry_filename) {
    return std::format("{}.zth", geometry_filename.substr(0, geometry_filename.find('.')));
}

} // namespace

// deferred: committing the voxel buffer when the geometry is the last set's, with
//   commitVoxelBuffer and the voxel shadows it commits
// deferred: resetting every path map after new geometry, with resetAllPathMaps and the path maps
// deferred: resetting the automap after new geometry, with the automap
// nocedit 0x00569410
void CDemonSet::load(std::string_view filename) {
    owners_.loading_screen.update(owners_.messages.getLocalizedString("Loading set"), false);
    clear();
    const std::optional<std::string> text = owners_.dosio.readFile("models", filename);
    if (!text) {
        common::displayErrorAndQuit(std::format("CDemonSet::Unable to open {}", filename));
    }
    CTextScanner scanner(*text);
    const std::string geometry_name = loadHeader(scanner);
    loadFog(scanner);
    loadEnvironment(scanner, geometry_name);
    loadSky(scanner, geometry_name);
    loadLightsAndCameras(scanner);
    loadRoomsAndGround(scanner, geometry_name);
    loadVdirBoxesAndVisibility(scanner);

    owners_.loading_screen.update(owners_.messages.getLocalizedString("Loading set geometry"),
                                  false);
    if (!common::equalsIgnoringAsciiCase(geometry_filename_, geometry_name)) {
        geometry_filename_ = geometry_name;
        if (!owners_.raytrace.loadAndSyncWithGeoFile(geometry_filename_)) {
            showMissingGeometryWarning();
        }
    }
    owners_.loading_screen.update(owners_.messages.getLocalizedString("Loading thumbs"), false);
    refreshThumbs(thumbsFilename(geometry_filename_));
    if (use_enviro_model_) {
        owners_.enviro_model.load(enviro_model_name_);
    }
    for (C3DSCamera &camera : cameras_) {
        camera.setCameraGroup(0);
        camera.setEnabled(true);
        camera.setAmbientValue(min_ambient_value_);
    }
}

// The original also frees each camera's visibility list, which every camera's load empties
// anyway.
// nocedit 0x005693c0
void CDemonSet::clear() {
    owners_.enviro_model.free();
    owners_.terrain.free();
}

// The version, the scale, a name nothing reads, the geometry file's name, which comes back,
// and the least ambient light.
std::string CDemonSet::loadHeader(CTextScanner &scanner) {
    std::string unread_name;
    std::string geometry_name;
    scanFormat(scanner, "%d\n", set_file_version_);
    scanFormat(scanner, "%f\n", set_scale_factor_);
    scanFormat(scanner, "%s\n", unread_name);
    scanFormat(scanner, "%s\n", geometry_name);
    scanFormat(scanner, "%f\n", min_ambient_value_);
    if (set_file_version_ == 0) {
        for (int i = 0; i < kOldestHeaderExtraLines; ++i) {
            scanner.skipLine();
        }
    }
    return geometry_name;
}

void CDemonSet::loadFog(CTextScanner &scanner) {
    if (set_file_version_ >= kCameraFogVersion) {
        loadCameraFog(scene_fog_, scanner, set_file_version_);
        return;
    }
    int unread_index = 0;
    float unread_first = 0.0F;
    float unread_second = 0.0F;
    scanner.skipLine();
    scanFormat(scanner, "%d,%d,%d,%d\n", unread_index, scene_fog_.color_index.r,
               scene_fog_.color_index.g, scene_fog_.color_index.b);
    scanner.skipLine();
    scanFormat(scanner, "%f,%f,%f\n", scene_fog_.scroll.x, scene_fog_.scroll.y,
               scene_fog_.scroll.z);
    scanFormat(scanner, "%f,%f,%f,%f\n", scene_fog_.height_threshold, scene_fog_.density_multiplier,
               unread_first, unread_second);
    scene_fog_.temperature = SFog::kDefaultTemperature;
}

// The water, the enviro model, and whether the water's waves move.
void CDemonSet::loadEnvironment(CTextScanner &scanner, std::string_view geometry_name) {
    float water_level_y = owners_.water.getWaterLevelY();
    float tile_size = owners_.water.getTileSize();
    scanner.skipLine();
    scanFormat(scanner, "%f,%f\n", water_level_y, tile_size);
    owners_.water.setLevel(water_level_y, tile_size);
    int use_enviro_model = use_enviro_model_ ? 1 : 0;
    scanner.skipLine();
    scanFormat(scanner, "%d,%s\n", use_enviro_model, enviro_model_name_);
    use_enviro_model_ = use_enviro_model != 0;
    if (set_file_version_ < kWaveFlagVersion) {
        owners_.water.setWaveAnimationEnabled(
            common::startsWithIgnoringAsciiCase(geometry_name, "ndun"));
        return;
    }
    bool wave_animation_enabled = owners_.water.getWaveAnimationEnabled();
    scanner.skipLine();
    scanFlag(scanner, wave_animation_enabled);
    owners_.water.setWaveAnimationEnabled(wave_animation_enabled);
}

// The sky, the world geometry, the weather, and whether the player rides the train.
void CDemonSet::loadSky(CTextScanner &scanner, std::string_view geometry_name) {
    if (set_file_version_ < kSkyFlagVersion) {
        has_sky_ = true;
    } else {
        scanner.skipLine();
        scanFlag(scanner, has_sky_);
    }
    if (set_file_version_ < kSkyTextureVersion) {
        sky_texture_name_ = kDefaultSkyTexture;
        sky_brightness_ = kDefaultSkyBrightness;
    } else {
        scanFormat(scanner, "%d,%s\n", sky_brightness_, sky_texture_name_);
    }
    if (set_file_version_ < kWorldGeometryVersion) {
        use_world_geometry_ = false;
        world_geometry_name_ = kNoWorldGeometry;
    } else {
        int use_world_geometry = use_world_geometry_ ? 1 : 0;
        scanner.skipLine();
        scanFormat(scanner, "%d,%s\n", use_world_geometry, world_geometry_name_);
        use_world_geometry_ = use_world_geometry != 0;
    }
    if (set_file_version_ < kWeatherVersion) {
        weather_type_ = EWeatherType::WEATHER_TYPE_NONE;
    } else {
        scanner.skipLine();
        weather_type_ = scanWeatherType(scanner, weather_type_);
    }
    player_on_train_ = common::startsWithIgnoringAsciiCase(geometry_name, "train");
    if (player_on_train_) {
        owners_.terrain.init();
    } else {
        owners_.terrain.free();
    }
}

void CDemonSet::loadLightsAndCameras(CTextScanner &scanner) {
    const bool labelled = set_file_version_ >= kLabelledSetFileVersion;
    if (labelled) {
        scanner.skipLine();
    }
    scanCount(scanner, lights_);
    for (C3DSLight &light : lights_) {
        light.load(scanner, set_file_version_);
    }
    if (labelled) {
        scanner.skipLine();
    }
    scanCount(scanner, cameras_);
    for (C3DSCamera &camera : cameras_) {
        camera.load(scanner, set_file_version_, scene_fog_);
    }
}

// The reverb rooms, the ground type and the master reverb; older files take the first two from
// the geometry file's name.
void CDemonSet::loadRoomsAndGround(CTextScanner &scanner, std::string_view geometry_name) {
    if (set_file_version_ < kRoomsVersion) {
        default_room_size_ = valueByName(kRoomSizesByName, geometry_name, 0);
        rooms_.clear();
    } else {
        scanner.skipLine();
        scanFormat(scanner, "%d\n", default_room_size_);
        scanCount(scanner, rooms_);
        for (SRoom &room : rooms_) {
            scanBox(scanner, room.position, room.extents, room.rotation_matrix);
            scanFormat(scanner, "%d\n", room.reverb_size);
        }
    }
    if (set_file_version_ < kGroundTypeVersion) {
        default_ground_type_ = valueByName(kGroundTypesByName, geometry_name, 2);
    } else {
        scanner.skipLine();
        scanFormat(scanner, "%d\n", default_ground_type_);
    }
    if (set_file_version_ < kMasterReverbVersion) {
        default_master_reverb_ = 0;
    } else {
        scanner.skipLine();
        scanFormat(scanner, "%d\n", default_master_reverb_);
    }
}

// The virtual director boxes, grouped where they touch, then the cameras' visibility lists.
void CDemonSet::loadVdirBoxesAndVisibility(CTextScanner &scanner) {
    if (set_file_version_ >= kOldDirectorFirstVersion &&
        set_file_version_ < kOldDirectorEndVersion) {
        skipDeprecatedVirtualDirectorData(scanner);
    }
    if (set_file_version_ < kVdirBoxesVersion) {
        vdir_boxes_.clear();
    } else {
        scanner.skipLine();
        scanCount(scanner, vdir_boxes_);
        for (SVDBox &box : vdir_boxes_) {
            scanBox(scanner, box.position, box.extents, box.rotation_matrix);
        }
        buildVdirBoxGroups();
    }
    if (set_file_version_ == kStrayLinesVersion) {
        scanner.skipLine();
        scanner.skipLine();
    }
    if (set_file_version_ >= kPVSVersion) {
        scanner.skipLine();
        for (C3DSCamera &camera : cameras_) {
            camera.loadPVS(scanner);
        }
    }
}

void CDemonSet::showMissingGeometryWarning() {
    owners_.special.clearScreen();
    owners_.two_d.drawText("Warning!  No .GEO file.  Press any key", 0, 0);
    owners_.screen.swapBuffers();
    owners_.two_d.clearInputAndWait();
    static_cast<void>(owners_.raw_input.getNextKeypress(owners_.screen));
}

} // namespace nocturne::core
