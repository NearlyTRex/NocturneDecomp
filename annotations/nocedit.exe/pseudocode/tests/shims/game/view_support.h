#pragma once

// =============================================================================
// VIEW SUPPORT — the camera, the controls and the crop the view shims reach
// =============================================================================
//
// The globals the movement and widescreen-focus shims read, defined here: the
// game, the set, the script, the window, the scene camera and the keyboard.
// The engine's actor transforms and projection are stood in for: an actor's
// local frame is its position turned by `yaw` about the vertical, facing +z
// at 0, and the projection records what it was handed and answers `screen`.
// The pad's stick, the map's hold on the controls and the crop's tracking are
// stood in for too. The party is hero_support.h's. reset() puts everything
// back, with the camera looking along +z, right along +x and up along +y.

#include "hero_support.h"
#include "nocturne.h"

#include <memory>
#include <vector>

namespace view_support {

using namespace hero_support;

// One call of nocturne_widescreen_track.
struct Track {
    int width, height, camera, focus_visible;
    float focus_y;
    int cinematic;
    float look;
    float seconds;
};

struct Stand {
    float yaw = 0.0f;         // every actor's facing, radians from +z toward +x
    CVector3i projected = {}; // what worldToScreenWithFrustumCull was last handed
    CVector3i screen = {};    // and what it answers
    float move_x = 0.0f;      // nocturne_gamepad_axes' left stick
    float move_y = 0.0f;
    float look_x = 0.0f; // and its right
    float look_y = 0.0f;
    int map_owns = 0;           // nocturne_automap_owns_controls
    std::vector<Track> tracked; // nocturne_widescreen_track

    void reset();
};

extern Stand stand;

// The game, the set and the script the globals point at.
extern std::unique_ptr<CGame> game;
extern std::unique_ptr<CDemonSet> set;
extern std::unique_ptr<CScript> script;

// The scene camera's axes in the world, as source_matrix columns of unit
// length in 16.16.
void camera_axes(CVector3i right, CVector3i up, CVector3i depth);

} // namespace view_support
