#pragma once

#include "core/color3i.h"
#include "core/dcamera/foggrid.h"
#include "core/fwd.h"
#include "engine/screendevice.h"
#include "platform/mrgltexturebasic.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <vector>

namespace nocturne::core {

// What the screen drew with before a background scene took it over for a camera's frame.
struct SBackgroundSave {
    int bits_per_pixel = 0;
    bool use_external_renderer = false;
    std::vector<void *> screen_rows;
    engine::SColorChannels channels;
};

// What every camera and light draws with, which the scene camera fills.
struct SCameraTables {
    static constexpr std::size_t kLookupSize = 64;
    static constexpr int kDefaultFogColorIndex = 0x40;
    static constexpr std::size_t kFogPlaneWidth = 320;
    static constexpr std::size_t kFogPlaneHeight = 240;
    static constexpr std::size_t kFogPlaneSize = kFogPlaneWidth * kFogPlaneHeight;
    static constexpr std::size_t kMaxFogPlanes = 16;

    // The screen the scene camera was last set up for: four thirds of its height wide.
    int screen_width = 0;
    int screen_height = 0;
    // How many times the camera's display was halved to fit 320 wide.
    int downscale_iterations = 0;
    // [a][b] is a times b over 64.
    std::array<std::uint8_t, kLookupSize * kLookupSize> lookup_table{};
    SFogGrid fog_grid;
    // The camera's fog over its view, a plane per step of its drift, row by row.
    std::vector<std::uint8_t> fog_planes = std::vector<std::uint8_t>(kFogPlaneSize * kMaxFogPlanes);
    // 16 for a fog that drifts, 1 for one that doesn't.
    int fog_plane_count = 0;
    // The texture the backdrop's image is copied into for the hardware renderer.
    platform::SMRGLTextureBasic backdrop_texture{.texture_name = "BACKGND.RAW"};
    // Each light-map level after gamma, the level repeated in all four bytes.
    std::array<std::uint32_t, 256> lightmap_palette{};
    // The palette levels the fog's colour is made of.
    CColor3i fog_color_index{
        .r = kDefaultFogColorIndex, .g = kDefaultFogColorIndex, .b = kDefaultFogColorIndex};
    // How many background scenes are open, any camera's or light's, and what the first saved.
    int background_scene_depth = 0;
    SBackgroundSave background_save;
    // The camera or light whose scene is open; none between scenes.
    CDemonCamera *scene_camera = nullptr;
    // The fog in front of what is drawn next, 0 to 0xffff; none in a background scene.
    int perspective_reciprocal = 0;
};

} // namespace nocturne::core
