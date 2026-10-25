// =============================================================================
// GAME SUPPORT — see game_support.h
// =============================================================================

#include "game_support.h"

#include "game/hero_items.h"
#include "game/hero_melee.h"
#include "game/hero_moloch.h"
#include "game/hero_motion.h"
#include "net/net_hero.h"
#include "net/net_session.h"

// --- the globals the shims read ------------------------------------------------

CDemonMission *g_CDemonMissionPtr = nullptr;
CScript *g_CScriptPtr = nullptr;
CSound *g_CSoundPtr = nullptr;
int g_WindowWidth = 0;

namespace game_support {

Stand stand;

void Stand::reset() {
    *this = Stand();
    hero_support::reset();
    g_CDemonMissionPtr = nullptr;
    g_CScriptPtr = nullptr;
    g_CSoundPtr = nullptr;
    g_WindowWidth = 640;
}

} // namespace game_support

using game_support::stand;

// --- the engine ----------------------------------------------------------------

void __cdecl core_charactr_cpp_CCharacter_processSmoking_FUN_0042ea40(CCharacter *this_ptr,
                                                                      float delta_time) {
    stand.smoked.emplace_back(this_ptr, delta_time);
}

int __cdecl core_hero_cpp_CHero_getGrabbed_FUN_004f28d0(CHero *this_ptr, CDemonActor *,
                                                        int grab_type) {
    stand.grabbed.emplace_back(this_ptr, grab_type);
    return stand.grab_result;
}

CDemonActor *__cdecl core_mission_cpp_CDemonMission_findActorByName_FUN_00524030(CDemonMission *,
                                                                                 char *name) {
    std::map<std::string, CDemonActor *>::const_iterator it = stand.named.find(name);
    return (it != stand.named.end()) ? it->second : nullptr;
}

int __cdecl sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle) {
    return stand.playing.count(sfx_handle) != 0 ? 1 : 0;
}

float __cdecl core_sound_cpp_CSound_getSoundDuration_FUN_005b3ba0(CSound *, char *sound_name) {
    std::map<std::string, float>::const_iterator it = stand.durations.find(sound_name);
    return (it != stand.durations.end()) ? it->second : -1.0f;
}

void __cdecl core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_005a0410(
    CDeformableModelInstance *this_ptr) {
    stand.reassembled.push_back(this_ptr);
}

void __cdecl core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0(CMotionController *,
                                                                         int target_motion_index,
                                                                         float) {
    stand.jumped.push_back(target_motion_index);
}

void __cdecl core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController *,
                                                                            int desired_state_index,
                                                                            int force_immediate) {
    stand.desired.emplace_back(desired_state_index, force_immediate);
}

// --- the other shims -----------------------------------------------------------

void nocturne_hero_items_process(CHero *hero) {
    stand.items_processed.push_back(hero);
}

void nocturne_moloch_regenerate(CMoloch *moloch, float delta_time) {
    stand.regenerated.emplace_back(moloch, delta_time);
}

int nocturne_hero_motion_find_state(CCharacter *, const char *name) {
    std::map<std::string, int>::const_iterator it = stand.motion_states.find(name);
    return (it != stand.motion_states.end()) ? it->second : -1;
}

int nocturne_hero_motion_force_state(CCharacter *character, int state) {
    stand.forced.emplace_back(character, state);
    return 1;
}

int nocturne_hero_in_set(CCharacter *target) {
    return stand.in_set.count(target) != 0 ? 1 : 0;
}

void nocturne_hero_move_world(CCharacter *character, const CVector3f *world_delta) {
    stand.moved.emplace_back(character, *world_delta);
}

int nocturne_net_session_active(void) {
    return stand.net_active;
}

int nocturne_net_hero_type_of(const void *actor) {
    std::map<const void *, int>::const_iterator it = stand.hero_types.find(actor);
    return (it != stand.hero_types.end()) ? it->second : -1;
}

const char *nocturne_net_hero_name(int hero_type) {
    return (hero_type == HERO_TYPE_STRANGER) ? "Stranger" : "Svetlana";
}
