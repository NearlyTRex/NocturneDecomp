// =============================================================================
// WIDESCREEN FOCUS — implementation
// =============================================================================
//
// See widescreen_focus.h.

#include "game/widescreen_focus.h"

#include "gl/widescreen.h"
#include "nocturne.h"

namespace {

// World units to the fixed point the camera projects, and its screen
// coordinates back to scene pixels.
const float kWorldToFixed = 256.0f;
const float kFixedToPixels = 1.0f / 65536.0f;

// The focus actor's height in scene pixels; false when there is none or the
// camera does not see it.
bool focus_height(float *out_y) {
    CDemonActor *actor = (g_CScriptPtr != nullptr) ? g_CScriptPtr->focus_actor : nullptr;
    if (actor == nullptr)
        return false;
    CBoundingBox3D box;
    const CBoundingBox3D *bounds = (*((actor->vtable)._ub)->getBoundingBox)(actor, &box);
    CVector3f centre = {(bounds->min.x + bounds->max.x) * 0.5f,
                        (bounds->min.y + bounds->max.y) * 0.5f,
                        (bounds->min.z + bounds->max.z) * 0.5f};
    CVector3f world;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(actor, &world, &centre);
    CVector3i fixed = {(int)(world.x * kWorldToFixed), (int)(world.y * kWorldToFixed),
                       (int)(world.z * kWorldToFixed)};
    CVector3i screen;
    core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0(&g_CDemonCameraInstance,
                                                                            &fixed, &screen);
    if (screen.z == 0)
        return false;
    *out_y = (float)screen.y * kFixedToPixels;
    return true;
}

// The right stick's look, up positive: the pad's under camera movement, which
// gives the stick's vertical to the view rather than to pointing.
float look() {
    if (nocturne_movement_get() != NOCTURNE_MOVEMENT_CAMERA ||
        g_CGamePtr->game_control != CONTROL_MODE_GAMEPAD)
        return 0.0f;
    float look_x = 0.0f, look_y = 0.0f;
    nocturne_gamepad_axes(nullptr, nullptr, &look_x, &look_y, nullptr, nullptr);
    return -look_y;
}

} // namespace

extern "C" void nocturne_widescreen_note_scene(void) {
    float focus_y = 0.0f;
    const bool visible = focus_height(&focus_y);
    nocturne_widescreen_track(g_WindowWidth, g_WindowHeight, g_CDemonSetPtr->selected_camera_index,
                              visible ? 1 : 0, focus_y, g_CGamePtr->letterbox_mode != 0 ? 1 : 0,
                              look(), g_CGamePtr->delta_time_float);
}
