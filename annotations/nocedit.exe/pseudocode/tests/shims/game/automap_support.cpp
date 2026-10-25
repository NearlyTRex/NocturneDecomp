// =============================================================================
// AUTOMAP SUPPORT — see automap_support.h
// =============================================================================

#include "automap_support.h"

#include "class_support.h"
#include "core/ui_scale.h"
#include "game/chapter_select.h"
#include "game/gamepad.h"
#include "game/hero_slot.h"
#include "net/net_session.h"

#include <cstdio>
#include <cstring>
#include <memory>

// --- the globals the map reads -----------------------------------------------

CDemonRaytrace g_CDemonRaytraceInstance = {};
CDemonSet g_CDemonSetInstance = {};
CDemonSet *g_CDemonSetPtr = nullptr;
CDemonMission *g_CDemonMissionPtr = nullptr;
CEventList *g_CEventListPtr = nullptr;
CGame *g_CGamePtr = nullptr;
CBitFont *g_ThemeFont = nullptr;
CHero *g_HeroActors[4] = {};
char g_KeyboardState[4952] = {};
int g_ActiveRenderColor = 0;
int g_BitsPerPixel = 0;
int g_LaserBeamActiveCount = 0;
int g_LocalHeroIndex = 0;
int g_ModalDialogActive = 0;
int g_WindowWidth = 0;
int g_WindowHeight = 0;
uint g_ColorTable32[448] = {};
ushort g_ColorTable16[256] = {};
void *g_ScreenBufferArray[1200] = {};
CDemonActorType g_CBodyPartClassInfo = {};
CDemonActorType g_CCharacterClassInfo = {};
CDemonActorType g_CDoorClassInfo = {};
CDemonActorType g_CEnemyClassInfo = {};
CDemonActorType g_CHeroClassInfo = {};

namespace automap_support {

Stand stand;

CDemonActorType mobster_type = {};
CDemonActorType item_type = {};
CDemonActorType unregistered_type = {};

namespace {

CGame s_game;
CEventList s_events;
CDemonMission s_mission;
std::unique_ptr<CHero> s_heroes[2] = {std::unique_ptr<CHero>(new CHero()),
                                      std::unique_ptr<CHero>(new CHero())};
std::unique_ptr<CDoor> s_door(new CDoor());
std::unique_ptr<CCharacter> s_actors[8];
std::vector<unsigned char> s_screen;
char s_key_name[40];

int can_pickup(CDemonActor *a, CDemonActor *) {
    std::map<const void *, int>::const_iterator it = stand.pickup.find(a);
    return (it != stand.pickup.end()) ? it->second : 0;
}

EDeathState death_state(CCharacter *c) {
    std::map<const void *, EDeathState>::const_iterator it = stand.death.find(c);
    return (it != stand.death.end()) ? it->second : DEATH_STATE_ALIVE;
}

CCharacter_full_vtable s_vtable;

} // namespace

CHero *hero = s_heroes[0].get();
CHero *mate = s_heroes[1].get();

CDemonActor *actor(int i) {
    if (!s_actors[i])
        s_actors[i].reset(new CCharacter());
    return &s_actors[i]->base;
}

CDoor *door() {
    return s_door.get();
}

void place(CDemonActor *a, CDemonActorType *type, CVector3f at) {
    a->vtable._uc = &s_vtable;
    a->location.position = at;
    class_support::types[a] = type;
    g_CDemonSetInstance.actors[g_CDemonSetInstance.actor_count++] = a;
}

void Stand::reset() {
    *this = Stand();
    std::memset(&s_game, 0, sizeof(s_game));
    std::memset(&s_events, 0, sizeof(s_events));
    std::memset(&s_mission, 0, sizeof(s_mission));
    for (std::unique_ptr<CHero> &h : s_heroes)
        std::memset(h.get(), 0, sizeof(*h));
    std::memset(s_door.get(), 0, sizeof(*s_door));
    for (std::unique_ptr<CCharacter> &a : s_actors) {
        if (a)
            std::memset(a.get(), 0, sizeof(*a));
    }
    std::memset(&g_CDemonRaytraceInstance, 0, sizeof(g_CDemonRaytraceInstance));
    std::memset(&g_CDemonSetInstance, 0, sizeof(g_CDemonSetInstance));
    std::memset(g_KeyboardState, 0, sizeof(g_KeyboardState));
    std::memset(g_ColorTable16, 0, sizeof(g_ColorTable16));
    std::memset(g_ColorTable32, 0, sizeof(g_ColorTable32));

    std::memset(&s_vtable, 0, sizeof(s_vtable));
    s_vtable._ub.getActorType = class_support::actor_type;
    s_vtable._ub.canPickup = can_pickup;
    s_vtable._uc.getDeathState = death_state;

    // Each class registered, the way a first construction does it.
    using class_support::make;
    class_support::types.clear();
    g_CCharacterClassInfo = make("CCharacter", 0x100);
    g_CEnemyClassInfo = make("CEnemy", 0x200, &g_CCharacterClassInfo);
    g_CHeroClassInfo = make("CHero", 0x300, &g_CCharacterClassInfo);
    g_CDoorClassInfo = make("CDoor", 0x400);
    g_CBodyPartClassInfo = make("CBodyPart", 0x500);
    mobster_type = make("CMobster", 0x600, &g_CEnemyClassInfo);
    item_type = make("CGun", 0x700);
    unregistered_type = make("CWerewolf", 0, &g_CEnemyClassInfo);

    g_CDemonSetPtr = &g_CDemonSetInstance;
    g_CDemonMissionPtr = &s_mission;
    g_CEventListPtr = &s_events;
    g_CGamePtr = &s_game;
    g_ThemeFont = nullptr;
    for (CHero *&h : g_HeroActors)
        h = nullptr;
    g_ActiveRenderColor = 0;
    g_BitsPerPixel = 0x20;
    g_LaserBeamActiveCount = 0;
    g_LocalHeroIndex = 0;
    g_ModalDialogActive = 0;
    g_WindowWidth = 640;
    g_WindowHeight = 480;

    // A screen of rows, the black fill's to clear.
    s_screen.assign((size_t)640 * 480 * 4, 0xff);
    for (int y = 0; y < 1200; y++) {
        g_ScreenBufferArray[y] = (y < 480) ? &s_screen[(size_t)y * 640 * 4] : nullptr;
    }

    // Bindings the controls are read from, each its own code.
    s_game.key_walk = 1;
    s_game.key_backup = 2;
    s_game.key_left = 3;
    s_game.key_right = 4;
    s_game.key_strafe_left = 5;
    s_game.key_strafe_right = 6;
    s_game.key_next_weapon = 7;
    s_game.key_prev_weapon = 8;
    s_game.key_fire = 9;
    s_game.key_draw = 10;
    s_game.key_run = 11;
    s_game.key_item_desc = 12;
    s_game.delta_time_float = 0.1f;

    // The local hero, in the party's first slot and not in the set's list.
    for (CHero *h : {hero, mate}) {
        h->base.base.vtable._uc = &s_vtable;
        h->base.hit_points = 100.0f;
        class_support::types[&h->base.base] = &g_CHeroClassInfo;
    }
    hero->base.base.location.position = CVector3f{5.0f, 0.0f, 5.0f};
    g_HeroActors[0] = hero;
    local = hero;
}

// --- the level -----------------------------------------------------------------

Level::Level(int x, int y, int z, float size)
    : dimx(x), dimy(y), dimz(z), cell(size), triangles_((size_t)(x * y * z)),
      grounds_((size_t)(x * y * z)), no_materials_((size_t)(x * y * z), false),
      cubes_((size_t)(x * y * z)) {}

int Level::cube_of(float x, float y, float z) const {
    const int gx = (int)(x / cell), gy = (int)(y / cell), gz = (int)(z / cell);
    return gx * dimy * dimz + gy * dimz + gz;
}

void Level::triangle(int cube, CVector3f a, CVector3f b, CVector3f c, CVector3f normal,
                     uint dominant_axis, int ground) {
    CDemonCubeTriangle t = {};
    vertices_.push_back(a);
    t.triangle.vertices[0] = &vertices_.back();
    vertices_.push_back(b);
    t.triangle.vertices[1] = &vertices_.back();
    vertices_.push_back(c);
    t.triangle.vertices[2] = &vertices_.back();
    t.triangle.normal = normal;
    t.dominant_axis = dominant_axis;
    triangles_[(size_t)cube].push_back(t);
    grounds_[(size_t)cube].push_back((unsigned char)ground);
}

void Level::broken_triangle(int cube, int missing) {
    CDemonCubeTriangle t = {};
    vertices_.push_back(CVector3f{0.0f, 0.0f, 0.0f});
    for (int v = 0; v < 3; v++) {
        t.triangle.vertices[v] = (v == missing) ? nullptr : &vertices_.back();
    }
    t.dominant_axis = 0;
    triangles_[(size_t)cube].push_back(t);
    grounds_[(size_t)cube].push_back(0);
}

void Level::no_materials(int cube) {
    no_materials_[(size_t)cube] = true;
}

void Level::wall(float x1, float z1, float x2, float z2, float y0, float y1, int ground) {
    const int cube = cube_of(x1, y0, z1);
    const CVector3f normal = {z2 - z1, 0.0f, x1 - x2};
    triangle(cube, CVector3f{x1, y0, z1}, CVector3f{x2, y0, z2}, CVector3f{x2, y1, z2}, normal, 0,
             ground);
    triangle(cube, CVector3f{x1, y0, z1}, CVector3f{x2, y1, z2}, CVector3f{x1, y1, z1}, normal, 0,
             ground);
}

void Level::install() {
    for (size_t c = 0; c < cubes_.size(); c++) {
        cubes_[c] = CDemonCube();
        cubes_[c].triangle_count = (int)triangles_[c].size();
        cubes_[c].triangle_buffer = triangles_[c].empty() ? nullptr : triangles_[c].data();
        cubes_[c].ground_type_memory =
            (triangles_[c].empty() || no_materials_[c]) ? nullptr : grounds_[c].data();
    }
    CDemonRaytrace *rt = &g_CDemonRaytraceInstance;
    rt->bbox_min = CVector3f{0.0f, 0.0f, 0.0f};
    rt->bbox_max = CVector3f{dimx * cell, dimy * cell, dimz * cell};
    rt->cell_size = CVector3f{cell, cell, cell};
    rt->grid_coord.x = dimx;
    rt->grid_coord.y = dimy;
    rt->grid_coord.z = dimz;
    rt->cube_data = cubes_.data();
    nocturne_automap_reset();
}

void hold(int code, bool down) {
    g_KeyboardState[code] = down ? 1 : 0;
}

std::vector<Line> lines_in(int color) {
    std::vector<Line> out;
    for (const Line &l : stand.lines) {
        if (l.color == color)
            out.push_back(l);
    }
    return out;
}

const Text *text_starting(const std::string &prefix) {
    for (const Text &t : stand.texts) {
        if (t.text.compare(0, prefix.size(), prefix) == 0)
            return &t;
    }
    return nullptr;
}

} // namespace automap_support

using automap_support::stand;

// --- the engine ----------------------------------------------------------------

void __cdecl engine_2d_c_clipAndDrawLine_FUN_00402ca0(int x1, int y1, int x2, int y2, int x_min,
                                                      int y_min, int x_max, int y_max) {
    stand.lines.push_back({x1, y1, x2, y2, x_min, y_min, x_max, y_max, g_ActiveRenderColor});
}

int __cdecl core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460(CDemonSet *,
                                                                       CVector3f *start_pos,
                                                                       CVector3f *end_pos) {
    stand.sight_tests++;
    return (stand.blocked && stand.blocked(*start_pos, *end_pos)) ? 1 : 0;
}

int __cdecl core_event_cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList *,
                                                                     char *condition_expression) {
    std::map<std::string, int>::const_iterator it = stand.conditions.find(condition_expression);
    return (it != stand.conditions.end()) ? it->second : 0;
}

CVector3f *__cdecl core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor *,
                                                                           CVector3f *output,
                                                                           CVector3f *) {
    *output = stand.facing;
    return output;
}

int __cdecl core_inv_cpp_CInventory_checkHasMatchingKey_FUN_005013d0(CInventory *, uint, int) {
    return stand.has_key;
}

char *__cdecl core_menu_cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code) {
    std::map<int, std::string>::const_iterator it = stand.key_names.find((int)key_code);
    if (it != stand.key_names.end()) {
        std::snprintf(automap_support::s_key_name, sizeof(automap_support::s_key_name), "%s",
                      it->second.c_str());
    } else {
        std::snprintf(automap_support::s_key_name, sizeof(automap_support::s_key_name), "K%d",
                      (int)key_code);
    }
    return automap_support::s_key_name;
}

char *__cdecl support_newmsg_cpp_getLocalizedString_FUN_005441f0(char *key) {
    return key;
}

// --- the shims ---------------------------------------------------------------

CHero *nocturne_hero_local(void) {
    return stand.local;
}

int nocturne_net_session_active(void) {
    return stand.net_active;
}

void nocturne_gamepad_axes(float *move_x, float *move_y, float *look_x, float *look_y,
                           float *left_trigger, float *right_trigger) {
    float *out[6] = {move_x, move_y, look_x, look_y, left_trigger, right_trigger};
    for (int i = 0; i < 6; i++) {
        if (out[i] != nullptr)
            *out[i] = stand.axes[i];
    }
}

char *nocturne_chapter_environment_name(const char *) {
    return (char *)stand.place;
}

int nocturne_ui_scale(void) {
    return stand.ui;
}

int nocturne_ui_text_width(CBitFont *, char *text, int scale) {
    return (int)std::strlen(text) * stand.char_w * scale;
}

int nocturne_ui_text_height(CBitFont *, char *, int scale) {
    return stand.text_h * scale;
}

int nocturne_ui_draw_text(CBitFont *, char *text, int x, int y, int color_mode, int, int scale) {
    stand.texts.push_back({text, x, y, color_mode, scale});
    return 0;
}
