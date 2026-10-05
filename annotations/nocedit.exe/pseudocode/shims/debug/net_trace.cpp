// =============================================================================
// NETPLAY TRACES — see net_trace.h
// =============================================================================

#include "debug/net_trace.h"
#include "shim_config.h"

#if NOCTURNE_NETPLAY_RNG_TRACE

#include "nocturne.h"
#include "core/debug_log.h"

#include <SDL2/SDL.h>

namespace {

void trace_waiting(int was_waiting, int waiting, int death_state)
{
    CHero *own = g_HeroActors[g_LocalHeroIndex];
    int    host = g_CNetGamePtr->server_player_index;

    if (waiting == was_waiting) {
        return;
    }
    if ((host < 0) || (3 < host)) {
        host = g_LocalHeroIndex;
    }
    DLOG("netplay",
         "waiting %d->%d conn=%d localHero=%d area=%d death=%d own=%p host=%p focus=%p",
         was_waiting, waiting, (int)g_CNetGamePtr->connection_type, g_LocalHeroIndex,
         (own != (CHero *)0x0) ? (own->base).base.location.area_id : -1, death_state,
         (void *)own, (void *)g_HeroActors[host], (void *)g_CScriptPtr->focus_actor);
}

void trace_focus(void)
{
    static CDemonActor *s_traced_focus = (CDemonActor *)0x0;

    if (g_CScriptPtr->focus_actor == s_traced_focus) {
        return;
    }
    s_traced_focus = g_CScriptPtr->focus_actor;
    DLOG("netplay", "focus_actor now %p (own=%p) locked=%d speaking=%p",
         (void *)s_traced_focus, (void *)g_HeroActors[g_LocalHeroIndex],
         g_CScriptPtr->focus_actor_locked, (void *)g_CScriptPtr->who_is_speaking);
}

void trace_camera(void)
{
    static int s_traced_camera  = -2;
    static int s_traced_zone    = -2;
    static int s_traced_goggles = -1;
    CDemonSet   *set   = g_CDemonSetPtr;
    CNetGame    *net   = g_CNetGamePtr;
    CDemonActor *focus = g_CScriptPtr->focus_actor;
    CVector3f    world = {0.0f, 0.0f, 0.0f};
    int          zone  = -1;

    if (set == (CDemonSet *)0x0) {
        return;
    }
    if (focus != (CDemonActor *)0x0) {
        CBoundingBox3D box;
        CVector3f      centre;

        (*((focus->vtable)._ub)->getBoundingBox)(focus, &box);
        centre.x = (box.min.x + box.max.x) * 0.5f;
        centre.y = (box.min.y + box.max.y) * 0.5f;
        centre.z = (box.min.z + box.max.z) * 0.5f;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(focus, &world, &centre);
        zone = core_setdir_cpp_CDemonSet_findVdirBoxAtPosition_FUN_00576870(set, &world);
    }
    int camera  = set->selected_camera_index;
    int goggles = g_CGamePtr->goggles_active;
    if ((camera == s_traced_camera) && (zone == s_traced_zone) &&
        (goggles == s_traced_goggles)) {
        return;
    }
    s_traced_camera  = camera;
    s_traced_zone    = zone;
    s_traced_goggles = goggles;
    DLOG("netplay",
         "t=%u ms sim=%d pending_sim=%d camera %d '%s' (zone %d) focus=%p (own=%p) zone=%d "
         "at %.2f %.2f %.2f hold=%g pending=%d goggles=%d letterbox=%d",
         (unsigned)SDL_GetTicks(), net->players[net->local_player_index].sim_frame_index,
         net->has_pending_sim_frame,
         camera, (0 <= camera) ? set->cameras[camera].name : "",
         (0 <= camera) ? set->cameras[camera].vdir_zone : -1,
         (void *)focus, (void *)g_HeroActors[g_LocalHeroIndex], zone,
         (double)world.x, (double)world.y, (double)world.z,
         (double)set->camera_switch_cooldown, set->pending_camera_index,
         goggles, g_CGamePtr->letterbox_mode);
}

} // namespace

extern "C" void nocturne_net_trace_view(int was_waiting, int waiting, int death_state)
{
    trace_waiting(was_waiting, waiting, death_state);
    trace_focus();
    trace_camera();
}

#else

extern "C" void nocturne_net_trace_view(int, int, int) {}

#endif
