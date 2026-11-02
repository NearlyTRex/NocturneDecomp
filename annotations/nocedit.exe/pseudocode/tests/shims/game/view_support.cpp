// =============================================================================
// VIEW SUPPORT — see view_support.h
// =============================================================================

#include "view_support.h"

#include <cmath>
#include <cstring>

CGame *g_CGamePtr = nullptr;
CDemonSet *g_CDemonSetPtr = nullptr;
CScript *g_CScriptPtr = nullptr;
CDemonCamera g_CDemonCameraInstance = {};
char g_KeyboardState[4952] = {};
int g_WindowWidth = 0;
int g_WindowHeight = 0;

namespace view_support {

Stand stand;
std::unique_ptr<CGame> game(new CGame());
std::unique_ptr<CDemonSet> set(new CDemonSet());
std::unique_ptr<CScript> script(new CScript());

namespace {

const int kUnit = 0x10000;

} // namespace

void camera_axes(CVector3i right, CVector3i up, CVector3i depth) {
    CVector3i *m = g_CDemonCameraInstance.source_matrix.m;
    m[0] = CVector3i{right.x, up.x, depth.x};
    m[1] = CVector3i{right.y, up.y, depth.y};
    m[2] = CVector3i{right.z, up.z, depth.z};
}

void Stand::reset() {
    *this = Stand();
    hero_support::reset();
    std::memset(game.get(), 0, sizeof(*game));
    std::memset(set.get(), 0, sizeof(*set));
    std::memset(script.get(), 0, sizeof(*script));
    std::memset(&g_CDemonCameraInstance, 0, sizeof(g_CDemonCameraInstance));
    std::memset(g_KeyboardState, 0, sizeof(g_KeyboardState));
    g_CGamePtr = game.get();
    g_CDemonSetPtr = set.get();
    g_CScriptPtr = script.get();
    g_WindowWidth = 1280;
    g_WindowHeight = 720;
    camera_axes({kUnit, 0, 0}, {0, kUnit, 0}, {0, 0, kUnit});
    g_CDemonCameraInstance.cached_projection.half_width_fixed = 320 * kUnit;
    g_CDemonCameraInstance.cached_projection.neg_half_height_fixed = -240 * kUnit;
}

} // namespace view_support

using view_support::stand;

CVector3f *__cdecl core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(
    CDemonActor *this_ptr, CVector3f *output_world_point, CVector3f *input_local_point) {
    const float c = std::cos(stand.yaw), s = std::sin(stand.yaw);
    const CVector3f &l = *input_local_point;
    const CVector3f &at = this_ptr->location.position;
    *output_world_point = CVector3f{at.x + l.x * c + l.z * s, at.y + l.y, at.z - l.x * s + l.z * c};
    return output_world_point;
}

CVector3f *__cdecl core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(
    CDemonActor *this_ptr, CVector3f *output_local_point, CVector3f *input_world_point) {
    const float c = std::cos(stand.yaw), s = std::sin(stand.yaw);
    const CVector3f &at = this_ptr->location.position;
    const float dx = input_world_point->x - at.x;
    const float dz = input_world_point->z - at.z;
    *output_local_point = CVector3f{dx * c - dz * s, input_world_point->y - at.y, dx * s + dz * c};
    return output_local_point;
}

CVector3f *__cdecl core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(
    CVector3f *out_euler_angles, CVector3f *in_direction_vector) {
    const CVector3f &d = *in_direction_vector;
    *out_euler_angles = CVector3f{0.0f, std::atan2(d.x, d.z), 0.0f};
    return out_euler_angles;
}

CVector3i *__stack2_esi core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0(
    CDemonCamera *, CVector3i *input_ptr, CVector3i *output_ptr) {
    stand.projected = *input_ptr;
    *output_ptr = stand.screen;
    return output_ptr;
}

extern "C" {

void nocturne_gamepad_axes(float *move_x, float *move_y, float *look_x, float *look_y, float *,
                           float *) {
    if (move_x != nullptr)
        *move_x = stand.move_x;
    if (move_y != nullptr)
        *move_y = stand.move_y;
    if (look_x != nullptr)
        *look_x = stand.look_x;
    if (look_y != nullptr)
        *look_y = stand.look_y;
}

int nocturne_automap_owns_controls(void) {
    return stand.map_owns;
}

void nocturne_widescreen_track(int width, int height, int camera, int focus_visible, float focus_y,
                               int cinematic, float look, float seconds) {
    stand.tracked.push_back(view_support::Track{width, height, camera, focus_visible, focus_y,
                                                cinematic, look, seconds});
}

} // extern "C"
