#pragma once

// =============================================================================
// AUTOMAP SUPPORT — the level, the actors and the engine calls the map reaches
// =============================================================================
//
// The globals the automap reads, defined here; the engine's line drawing,
// sight test and text calls stood in for, recording what they were handed. A
// level is a grid of cubes holding wall quads, built by Level; actors answer
// their class through class_support.h. reset() puts everything back.

#include "nocturne.h"

#include <deque>
#include <functional>
#include <map>
#include <string>
#include <vector>

namespace automap_support {

// A clipAndDrawLine call, with the colour it drew in.
struct Line {
    int x1, y1, x2, y2;
    int x_min, y_min, x_max, y_max;
    int color;
};

// A nocturne_ui_draw_text call.
struct Text {
    std::string text;
    int x, y, color, scale;
};

struct Stand {
    // --- the screen ---------------------------------------------------------
    int ui = 1;      // nocturne_ui_scale
    int char_w = 6;  // text width per character, at scale 1
    int text_h = 10; // text height, at scale 1; 0 for a font with none
    std::vector<Line> lines;
    std::vector<Text> texts;

    // --- the world ------------------------------------------------------------
    // testLineOcclusion: blocked when this answers true; clear when unset.
    std::function<bool(const CVector3f &, const CVector3f &)> blocked;
    int sight_tests = 0;
    std::map<std::string, int> conditions; // evaluateCondition
    CVector3f facing = {0.0f, 0.0f, 1.0f}; // what transformVector hands back
    int has_key = 1;                       // checkHasMatchingKey
    CHero *local = nullptr;                // nocturne_hero_local

    // --- what canPickup answers each actor, and what getDeathState answers a
    // character; their classes are class_support's ----------------------------
    std::map<const void *, int> pickup;
    std::map<const void *, EDeathState> death;

    // --- the rest -------------------------------------------------------------
    std::map<int, std::string> key_names; // getKeyDisplayName; else "K<code>"
    float axes[6] = {};                   // move x/y, look x/y, triggers l/r
    int net_active = 0;
    const char *place = nullptr; // nocturne_chapter_environment_name

    void reset();
};

extern Stand stand;

// Leaf classes with no marker row of their own: an enemy (under CEnemy), an
// item (under nothing), and a class never registered (hash 0, under CEnemy).
extern CDemonActorType mobster_type, item_type, unregistered_type;

// The local hero, a teammate, and actors to place in the set.
extern CHero *hero;
extern CHero *mate;
CDemonActor *actor(int i);
CDoor *door();

// Give an actor the shared vtable and a class, and put it in the set's list.
void place(CDemonActor *a, CDemonActorType *type, CVector3f at);

// A level of dimx * dimy * dimz cubes of `cell` world units, from the origin.
// Walls are vertical quads, two triangles each, written into the cube that
// holds their first corner.
struct Level {
    int dimx, dimy, dimz;
    float cell;

    Level(int x, int y, int z, float size);

    // A wall from (x1, z1) to (x2, z2), standing from y0 to y1, of `ground`.
    void wall(float x1, float z1, float x2, float z2, float y0, float y1, int ground = 0);
    // A triangle as given, with its own normal and dominant axis.
    void triangle(int cube, CVector3f a, CVector3f b, CVector3f c, CVector3f normal,
                  uint dominant_axis, int ground = 0);
    // One with vertex `missing` (0, 1 or 2) not there.
    void broken_triangle(int cube, int missing);
    // Cubes without a material array.
    void no_materials(int cube);
    // Into g_CDemonRaytraceInstance, and the map reset over it.
    void install();

    int cube_of(float x, float y, float z) const;

private:
    std::deque<CVector3f> vertices_;
    std::vector<std::vector<CDemonCubeTriangle>> triangles_;
    std::vector<std::vector<unsigned char>> grounds_;
    std::vector<bool> no_materials_;
    std::vector<CDemonCube> cubes_;
};

// The keyboard: a code held down, or let go.
void hold(int code, bool down = true);

// Every line drawn in `color`.
std::vector<Line> lines_in(int color);

// The drawn text that starts with `prefix`, or nullptr.
const Text *text_starting(const std::string &prefix);

} // namespace automap_support
