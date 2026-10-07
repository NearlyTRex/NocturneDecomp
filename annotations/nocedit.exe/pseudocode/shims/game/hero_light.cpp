// =============================================================================
// PER-HERO FLASHLIGHT, GOGGLES AND BATTERY — see hero_light.h
// =============================================================================

#include "game/hero_light.h"
#include "nocturne.h"

namespace {

int s_flashlight[NOCTURNE_HERO_SLOTS];
int s_npc_flashlight;

int s_goggles[NOCTURNE_HERO_SLOTS];
int s_published_goggles;

// Beams for the heroes that are not local, built on first use and kept.
CDemonLight s_lights[NOCTURNE_HERO_SLOTS];
CDemonGlobe s_coronas[NOCTURNE_HERO_SLOTS];
bool s_light_built[NOCTURNE_HERO_SLOTS];

// A non-local hero's slot, or -1 for the local hero and anyone else.
int remote_slot(CHero *hero)
{
    if (hero == g_HeroActors[g_LocalHeroIndex]) {
        return -1;
    }
    return nocturne_hero_slot(hero);
}

// As CGame::runGameSession sets up g_CDemonLightInstance.
CDemonLight *built_light(int slot)
{
    CDemonLight *light = &s_lights[slot];

    if (!s_light_built[slot]) {
        core_dlight_cpp_CDemonLight_ctor_FUN_004726a0(light, 0x100, 0x100);
        core_dlight_cpp_CDemonLight_init_FUN_004727c0(light);
        strcpy(light->base.camera_name, "Flashlight");
        light->light_enabled_flag = 0;
        light->base.max_distance = 64.0f;
        s_light_built[slot] = true;
    }
    return light;
}

bool is_remote_light(const CDemonLight *light)
{
    for (int i = 0; i < NOCTURNE_HERO_SLOTS; i++) {
        if (s_light_built[i] && (light == &s_lights[i])) {
            return true;
        }
    }
    return false;
}

} // namespace

extern "C" int *nocturne_hero_flashlight(CHero *hero)
{
    if (hero == g_HeroActors[g_LocalHeroIndex]) {
        return &g_CGamePtr->flashlight_active;
    }
    int slot = nocturne_hero_slot(hero);
    if (slot < 0) {
        s_npc_flashlight = 0;
        return &s_npc_flashlight;
    }
    return &s_flashlight[slot];
}

extern "C" int nocturne_hero_flashlight_lit(CDemonActor *carrier)
{
    int slot = nocturne_hero_slot(carrier);
    if (slot < 0) {
        return 0;
    }
    return *nocturne_hero_flashlight(g_HeroActors[slot]) != 0;
}

extern "C" CDemonLight *nocturne_hero_light(CHero *hero)
{
    int slot = remote_slot(hero);
    return (slot < 0) ? &g_CDemonLightInstance : built_light(slot);
}

extern "C" CDemonGlobe *nocturne_hero_corona(CHero *hero)
{
    int slot = remote_slot(hero);
    return (slot < 0) ? &g_WeaponCoronaGlobe : &s_coronas[slot];
}

extern "C" int nocturne_hero_goggles(CHero *hero)
{
    if (!nocturne_net_session_playing()) {
        return (hero == g_HeroActors[g_LocalHeroIndex]) && (g_CGamePtr->goggles_active != 0);
    }
    int slot = nocturne_hero_slot(hero);
    return (slot < 0) ? 0 : s_goggles[slot];
}

extern "C" void nocturne_hero_goggles_set(CHero *hero, int on)
{
    int slot = nocturne_hero_slot(hero);
    if (slot >= 0) {
        s_goggles[slot] = (on != 0);
    }
}

extern "C" void nocturne_hero_goggles_publish(void)
{
    if (!nocturne_net_session_playing()) {
        return;
    }
    int on = (g_CGamePtr->goggles_active != 0);
    if (on != s_published_goggles) {
        s_published_goggles = on;
        nocturne_net_weapon_request(NOCTURNE_NET_WEAPON_GOGGLES, 0, on);
    }
}

extern "C" void nocturne_hero_goggles_reset(void)
{
    for (int i = 0; i < NOCTURNE_HERO_SLOTS; i++) {
        s_goggles[i] = 0;
    }
    s_published_goggles = 0;
}

extern "C" int nocturne_hero_light_make_room(CDemonLight *light)
{
    if (is_remote_light(light)) {
        return 0;
    }
    for (int i = 0; i < g_DynamicLightCount; i++) {
        if (is_remote_light(g_DynamicLights[i])) {
            for (int k = i + 1; k < g_DynamicLightCount; k++) {
                g_DynamicLights[k - 1] = g_DynamicLights[k];
            }
            g_DynamicLightCount = g_DynamicLightCount - 1;
            return 1;
        }
    }
    return 1;
}

extern "C" void nocturne_hero_light_reset(void)
{
    for (int i = 0; i < NOCTURNE_HERO_SLOTS; i++) {
        s_flashlight[i] = 0;
        if (s_light_built[i]) {
            s_lights[i].light_enabled_flag = 0;
        }
    }
    s_npc_flashlight = 0;
}
