#pragma once

// =============================================================================
// DUMP SUPPORT — the game state the dump tools read, and what they call
// =============================================================================
//
// The engine globals the dumps print, defined here and zeroed; the decompiled
// functions they call (class casts, ground and box queries, the collision
// grid, event conditions), answering from the stand; and the presenter's
// read-backs, including the two SDL calls this directory's build of dump.cpp
// makes in place of SDL's (CMakeLists.txt beside this). A test sets what it
// needs; reset() puts the stand back, not the globals.

#include <map>
#include <set>
#include <string>
#include <tuple>
#include <vector>

struct CDemonActor;
struct CDemonCube;
struct CHero;

namespace dump_support {

// The class hashes the casts answer to, set into each class info by reset().
enum : unsigned {
    kStranger = 0x11,
    kHero = 0x22,
    kCharacter = 0x33,
    kSvetlana = 0x44,
    kFlame = 0x55,
};

struct Stand {
    // Which class hashes each actor answers castToClassHash for.
    std::map<const CDemonActor *, std::set<unsigned>> classes;

    // CDemonRaytrace::getCubeAt.
    std::map<std::tuple<int, int, int>, CDemonCube *> cubes;

    // CEventList::evaluateCondition, by condition.
    std::map<std::string, int> conditions;

    // CBoundingBox3D::isVisible and isVisibleWithCamera; each call also
    // writes the two globals the real ones do, for the dump to put back.
    int visible = 0;
    int visible_with_camera = 0;
    int render_state_brackets = 0; // setupRenderState less restoreRenderState

    CHero *local_hero = nullptr; // nocturne_hero_local

    // The presenter: GL's read-back, or the DirectDraw renderer's.
    int gl_active = 0;
    int gl_read_result = 0;
    int renderer_present = 0;
    int output_size_result = 0;
    int output_width = 4;
    int output_height = 2;
    int read_pixels_result = 0;

    void reset();
};

extern Stand stand;

// Pretends `actor` is each of `hashes`.
void is_a(const CDemonActor *actor, std::set<unsigned> hashes);

} // namespace dump_support
