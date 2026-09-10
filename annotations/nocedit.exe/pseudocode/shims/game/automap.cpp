// =============================================================================
// AUTOMAP — implementation
// =============================================================================
//
// See automap.h for the contract and research/20-automap/ for why the rules are
// what they are.

#include "game/automap.h"
#include "shim_config.h"

#if !NOCTURNE_AUTHENTIC_AUTOMAP

#include "nocturne.h"

#include <cmath>
#include <cstdio>
#include <cstring>
#include <unordered_map>
#include <vector>

namespace {

// ---- tunables ---------------------------------------------------------------

// One storey. Asymmetric because the player's position is his feet: almost
// nothing below the floor belongs on the map, a storey's height above it does.
// Measured against CASTLE.geo; content-dependent, see research/20's open items.
const float kBandBelow = 2.0f;
const float kBandAbove = 11.0f;

// Endpoints snap to this before shared edges are matched. Adjacent triangles do
// not agree to the last float bit, and an edge that fails to match its twin
// survives as a stray diagonal. A whole unit is too coarse and welds away real
// structure.
const float kWeld = 0.5f;

// A surface flatter than this counts as floor, on top of dominant_axis.
const float kMaxNormalY = 0.5f;

// World units around the player revealed as he moves. Line of sight applies
// within it, so this is the limit of what he could map, not what he does.
const float kRevealRadius = 22.0f;

// Where the sight rays start, above the feet the position records.
const float kEyeHeight = 5.0f;

// How far short of a cell's centre its sight ray stops, so it lands on the face
// turned toward the player rather than inside whatever the cell contains. A bit
// over half a cell: cells are ~9.7 units on this level's grid.
const float kCellPullback = 5.5f;

// Explored share at which the fog lifts, measured against cubes holding walls.
const int kCompletionPercent = 75;

// Colours are asked of the palette rather than hardcoded as indices. plotPixel
// masks g_ActiveRenderColor to 0..255 and looks it up in g_ColorTable16/32, so
// which index is "red" depends entirely on the loaded palette -- guessing one
// gets you whatever happens to live there, which is how the player marker came
// out green.
const int kWallRGB[3]   = { 170, 205, 235 };
const int kFadedRGB[3]  = {  74,  92, 116 };
const int kPlayerRGB[3] = { 255,  64,  48 };
const int kHaloRGB[3]   = {  10,  10,  14 };
const int kCoreRGB[3]   = { 255, 220, 200 };

// How much the frame under the map is knocked back, as a shift. 1 is half
// brightness: enough that the line work reads against it, not so much that the
// player loses the scene he is standing in.
const int kBackdropShift = 1;

const float kZoomMin  = 0.5f;
const float kZoomMax  = 8.0f;
const float kZoomRate = 2.2f;     // multiplicative, per second
const float kPanRate  = 260.0f;   // world units per second, at zoom 1

// How far past the level's own bounds panning may go, so the edge of the map
// can sit somewhere other than hard against the screen edge.
const float kPanMargin = 40.0f;

const int kMargin = 24;           // screen inset of the map window

// ---- extracted geometry -----------------------------------------------------

// One drawable wall line: a footprint plus the height it sits at, so the band
// can be re-applied every frame as the player changes storey without
// re-extracting anything.
struct Segment {
    float x1, z1, x2, z2;
    float y;
    int   cube;        // owning cell -- the unit the fog reveals
    unsigned char lone;  // edge used by exactly one wall triangle
};

struct Edge {
    int ax, az, bx, bz;
    bool operator==(const Edge &o) const {
        return ax == o.ax && az == o.az && bx == o.bx && bz == o.bz;
    }
};

struct EdgeHash {
    size_t operator()(const Edge &e) const {
        size_t h = 1469598103934665603ull;
        const int v[4] = { e.ax, e.az, e.bx, e.bz };
        for (int i = 0; i < 4; i++) {
            h ^= (size_t)(unsigned)v[i];
            h *= 1099511628211ull;
        }
        return h;
    }
};

std::vector<Segment> g_segments;
std::vector<unsigned char> g_revealed;    // 1 bit per cube
std::vector<unsigned char> g_has_wall;    // 1 byte per cube, for the denominator

int  g_cube_count = 0;
int  g_geometry_cubes = 0;
int  g_percent = 0;
bool g_complete = false;

bool  g_open = false;
bool  g_key_was_down = false;
float g_zoom = 1.0f;
float g_pan_x = 0.0f, g_pan_z = 0.0f;
bool  g_follow = true;      // recentre on the player until he pans by hand
bool  g_pan_mode = false;   // movement pans the map instead of moving the hero
bool  g_mode_was_down = false;

// M for map. Tab is the older convention but the game already uses it. The ini
// overwrites this on load once the player has bound anything.
int g_key_binding = DIK_M;

// Zoom survives closing the map, and the ini carries it between sessions --
// a player who prefers a wide view should not have to re-find it every time.
// Held as a percentage because the ini stores integers.
//
// The default is where a player actually settled after using it, rather than
// the 100% that merely means "fit the level to the window": a whole castle
// scaled into one screen is a diagram, not a map you navigate by.
int g_zoom_percent = 320;

inline bool revealed(int cube) {
    return cube >= 0 && cube < g_cube_count &&
           (g_revealed[(size_t)cube >> 3] & (1u << (cube & 7))) != 0;
}

inline bool down(int code) {
    return code >= 0 && code < (int)sizeof(g_KeyboardState) &&
           g_KeyboardState[code] != '\0';
}

CDemonActor *local_hero(void) {
    if (g_LocalHeroIndex < 0 || g_LocalHeroIndex >= 4) return nullptr;
    return (CDemonActor *)g_HeroActors[g_LocalHeroIndex];
}

// Nearest palette entry to a colour, in whatever mode the game is running.
// Resolved on use rather than at load, because the palette is not populated
// until a scene is.
int pick_color(const int rgb[3], int fallback)
{
    long best = -1;
    int  best_i = fallback;
    for (int i = 0; i < 256; i++) {
        int r, g, b;
        if (g_BitsPerPixel == 0x10) {
            const unsigned short c = g_ColorTable16[i];
            r = ((c >> 11) & 0x1f) << 3;
            g = ((c >>  5) & 0x3f) << 2;
            b = ( c        & 0x1f) << 3;
        } else if (g_BitsPerPixel == 0x20) {
            const unsigned int c = g_ColorTable32[i];
            r = (int)((c >> 16) & 0xff);
            g = (int)((c >>  8) & 0xff);
            b = (int)( c        & 0xff);
        } else {
            return fallback;          // 8bpp: the index IS the colour
        }
        const long dr = r - rgb[0], dg = g - rgb[1], db = b - rgb[2];
        const long d = dr * dr + dg * dg + db * db;
        if (best < 0 || d < best) { best = d; best_i = i; }
    }
    return best_i;
}

// Knock the frame back under the map so the line work is not competing with a
// lit scene. Done in place on the framebuffer, which is what every 2D path here
// draws into anyway.
void dim_backdrop(int x0, int y0, int x1, int y1)
{
    if (g_BitsPerPixel == 0x20) {
        for (int y = y0; y < y1; y++) {
            unsigned int *row = (unsigned int *)g_ScreenBufferArray[y];
            if (row == nullptr) continue;
            for (int x = x0; x < x1; x++) {
                row[x] = (row[x] >> kBackdropShift) & 0x7f7f7fu;
            }
        }
    } else if (g_BitsPerPixel == 0x10) {
        for (int y = y0; y < y1; y++) {
            unsigned short *row = (unsigned short *)g_ScreenBufferArray[y];
            if (row == nullptr) continue;
            for (int x = x0; x < x1; x++) {
                // 5:6:5, so the mask has to clear the top bit of each field
                // rather than every eighth bit.
                row[x] = (unsigned short)((row[x] >> kBackdropShift) & 0x7bef);
            }
        }
    }
    // 8bpp is a palette index; halving it is not a darker colour, so it is
    // left alone rather than scrambled.
}

}  // namespace

// ---- extraction -------------------------------------------------------------

extern "C" void nocturne_automap_reset(void)
{
    g_segments.clear();
    g_revealed.clear();
    g_has_wall.clear();
    g_cube_count = g_geometry_cubes = 0;
    g_percent = 0;
    g_complete = false;
    g_open = false;
    g_key_was_down = false;
    // Zoom is deliberately NOT reset: it is the player's preference, not this
    // level's state, and a new level is exactly when losing it would be most
    // annoying.
    g_pan_x = g_pan_z = 0.0f;
    g_follow = true;

    CDemonRaytrace *rt = &g_CDemonRaytraceInstance;
    if (rt->cube_data == nullptr) return;

    g_cube_count = rt->grid_coord.x * rt->grid_coord.y * rt->grid_coord.z;
    if (g_cube_count <= 0) { g_cube_count = 0; return; }
    g_revealed.assign((size_t)(g_cube_count + 7) / 8, 0);
    g_has_wall.assign((size_t)g_cube_count, 0);

    // Count each welded edge across the whole level. An edge used by exactly
    // one wall triangle is a surface boundary; one used twice is an interior
    // seam -- a quad's own diagonal, or the join between two coplanar quads --
    // and whether those are drawn is the difference between a floorplan and a
    // wireframe. Both are kept, and chosen between at draw time.
    std::unordered_map<Edge, int, EdgeHash> counts;
    counts.reserve(1u << 16);

    for (int c = 0; c < g_cube_count; c++) {
        const CDemonCube *cube = &rt->cube_data[c];
        if (cube->triangle_buffer == nullptr || cube->triangle_count <= 0) continue;

        for (int t = 0; t < cube->triangle_count; t++) {
            const CDemonCubeTriangle *ct = &cube->triangle_buffer[t];
            if (ct->dominant_axis == 1) continue;
            if (std::fabs(ct->triangle.normal.y) > kMaxNormalY) continue;

            const CVector3f *v[3] = { ct->triangle.vertices[0],
                                      ct->triangle.vertices[1],
                                      ct->triangle.vertices[2] };
            if (v[0] == nullptr || v[1] == nullptr || v[2] == nullptr) continue;
            g_has_wall[(size_t)c] = 1;

            for (int e = 0; e < 3; e++) {
                const CVector3f *a = v[e], *b = v[(e + 1) % 3];
                int ax = (int)std::lround(a->x / kWeld);
                int az = (int)std::lround(a->z / kWeld);
                int bx = (int)std::lround(b->x / kWeld);
                int bz = (int)std::lround(b->z / kWeld);
                if (ax == bx && az == bz) continue;
                if (bx < ax || (bx == ax && bz < az)) {
                    int tx = ax, tz = az; ax = bx; az = bz; bx = tx; bz = tz;
                }
                Edge k = { ax, az, bx, bz };

                std::unordered_map<Edge, int, EdgeHash>::iterator it =
                    counts.emplace(k, 0).first;
                if (it->second == 0) {
                    Segment s;
                    s.x1 = ax * kWeld;  s.z1 = az * kWeld;
                    s.x2 = bx * kWeld;  s.z2 = bz * kWeld;
                    s.y  = (a->y + b->y) * 0.5f;
                    s.cube = c;
                    s.lone = 1;
                    g_segments.push_back(s);
                    it->second = (int)g_segments.size();   // 1-based index
                } else {
                    g_segments[(size_t)it->second - 1].lone = 0;
                }
            }
        }
    }

    for (int c = 0; c < g_cube_count; c++) {
        if (g_has_wall[(size_t)c]) g_geometry_cubes++;
    }
}

// ---- per-frame --------------------------------------------------------------

namespace {

void reveal_around(const CVector3f &p)
{
    CDemonRaytrace *rt = &g_CDemonRaytraceInstance;
    const int dimx = rt->grid_coord.x, dimy = rt->grid_coord.y,
              dimz = rt->grid_coord.z;

    const int gx = (int)((p.x - rt->bbox_min.x) / rt->cell_size.x);
    const int gy = (int)((p.y - rt->bbox_min.y) / rt->cell_size.y);
    const int gz = (int)((p.z - rt->bbox_min.z) / rt->cell_size.z);

    const int sx = (int)(kRevealRadius / rt->cell_size.x) + 1;
    const int sy = (int)((kBandBelow + kBandAbove) / rt->cell_size.y) + 1;
    const int sz = (int)(kRevealRadius / rt->cell_size.z) + 1;

    // Cast from eye height rather than the feet, which are on the floor: a ray
    // that starts inside the surface the player is standing on is occluded
    // immediately and nothing would ever be revealed.
    CVector3f eye = p;
    eye.y += kEyeHeight;

    for (int dx = -sx; dx <= sx; dx++) {
        const int x = gx + dx;
        if (x < 0 || x >= dimx) continue;
        for (int dz = -sz; dz <= sz; dz++) {
            if (dx * dx + dz * dz > sx * sx) continue;
            const int z = gz + dz;
            if (z < 0 || z >= dimz) continue;
            for (int dy = -sy; dy <= sy; dy++) {
                const int y = gy + dy;
                if (y < 0 || y >= dimy) continue;
                // getCubeAt's own index arithmetic, so a cell here is the same
                // cell the collision system means.
                const int c = x * dimy * dimz + y * dimz + z;
                if (c < 0 || c >= g_cube_count) continue;
                if (revealed(c)) continue;

                // Line of sight, so a room is not mapped through the wall or
                // the shut door between it and the player. Only unrevealed
                // cells are tested, so this costs nothing on the overwhelming
                // majority of frames, where the player has moved a few units
                // and everything nearby is already known.
                //
                // testLineOcclusion rather than the bare voxel test because it
                // also considers actors, and a closed door is an actor. A
                // wandering enemy blocking a ray is harmless: reveal is
                // permanent and it will move.
                CVector3f mid;
                mid.x = rt->bbox_min.x + ((float)x + 0.5f) * rt->cell_size.x;
                mid.y = rt->bbox_min.y + ((float)y + 0.5f) * rt->cell_size.y;
                mid.z = rt->bbox_min.z + ((float)z + 0.5f) * rt->cell_size.z;

                // Aim at the face turned toward the player, not the centre. A
                // cell holding a wall has its centre INSIDE that wall, so a ray
                // to it is always occluded and the cells carrying the walls are
                // exactly the ones that would never reveal -- a sealed room
                // draws with gaps in it. Pulling the target back along the ray
                // by half a cell puts it on the near face, which is the surface
                // the player can actually see.
                float dx3 = mid.x - eye.x, dy3 = mid.y - eye.y, dz3 = mid.z - eye.z;
                const float len = std::sqrt(dx3 * dx3 + dy3 * dy3 + dz3 * dz3);
                if (len > kCellPullback) {
                    const float k = (len - kCellPullback) / len;
                    mid.x = eye.x + dx3 * k;
                    mid.y = eye.y + dy3 * k;
                    mid.z = eye.z + dz3 * k;
                }

                if (core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460(
                        g_CDemonSetPtr, &eye, &mid) != 0) {
                    continue;
                }

                g_revealed[(size_t)c >> 3] |= (unsigned char)(1u << (c & 7));
            }
        }
    }
}

void recount_explored(void)
{
    if (g_geometry_cubes <= 0) return;
    int seen = 0;
    for (int c = 0; c < g_cube_count; c++) {
        if (g_has_wall[(size_t)c] && revealed(c)) seen++;
    }
    g_percent = (int)((100.0f * (float)seen) / (float)g_geometry_cubes);
    if (g_percent >= kCompletionPercent) g_complete = true;
}

}  // namespace

extern "C" void nocturne_automap_update(void)
{
    if (g_cube_count == 0) return;
    CDemonActor *hero = local_hero();
    if (hero == nullptr) return;

    const CVector3f p = hero->location.position;
    reveal_around(p);
    recount_explored();

    // Not while the player does not have control: a cutscene, a modal dialog,
    // or the pause menu. All are moments where the game is showing him
    // something else and a map over the top is in the way. Closing an
    // already-open map matters as much as refusing to open one, since a
    // cutscene can start while it is up.
    //
    // The test is CGame::playerControls' own. hero_controls_blocked is set from
    // the allowHeroControls script command, which stores the negation of its
    // argument, so non-zero is what "the player is not driving" looks like.
    CGame *gate = g_CGamePtr;
    if (gate != nullptr &&
        (g_ModalDialogActive != 0 || gate->is_paused != 0 ||
         gate->hero_controls_blocked != 0)) {
        g_open = false;
        g_key_was_down = down(g_key_binding);   // so releasing does not reopen
        return;
    }

    // Edge-triggered, so holding the button does not flap the map open and shut.
    const bool key_now = down(g_key_binding);
    if (key_now && !g_key_was_down) {
        g_open = !g_open;
        if (g_open) {
            // Opens centred on the player wherever he last left the view, but
            // at the zoom he chose: where he is, is the question he is asking;
            // how far out he likes to see is a preference.
            g_follow = true;
            g_pan_x = p.x;
            g_pan_z = p.z;
            g_zoom = (float)g_zoom_percent * 0.01f;
            if (g_zoom < kZoomMin) g_zoom = kZoomMin;
            if (g_zoom > kZoomMax) g_zoom = kZoomMax;
        }
    }
    g_key_was_down = key_now;
    if (!g_open) return;

    CGame *g = g_CGamePtr;
    const float dt = g->delta_time_float;

    // Two modes. The default is to follow the player, so the map is something
    // he reads while still walking around -- which is what it is for. Panning
    // is the exception, entered deliberately, and freezes him while he looks
    // somewhere else.
    const bool mode_now = down(g->key_draw);
    if (mode_now && !g_mode_was_down) {
        g_pan_mode = !g_pan_mode;
        if (!g_pan_mode) g_follow = true;
    }
    g_mode_was_down = mode_now;

    if (g_pan_mode) {
        // Only here do the movement bindings mean the map instead of the hero.
        float mx = 0.0f, mz = 0.0f;
        if (down(g->key_left))   mx -= 1.0f;
        if (down(g->key_right))  mx += 1.0f;
        if (down(g->key_walk))   mz += 1.0f;
        if (down(g->key_backup)) mz -= 1.0f;

        if (mx != 0.0f || mz != 0.0f) {
            g_follow = false;
            const float rate = kPanRate * dt / g_zoom;
            g_pan_x += mx * rate;
            g_pan_z += mz * rate;

            // Held inside the level, plus a margin, so scrolling cannot wander
            // off into empty space with nothing on screen and no clue which way
            // back.
            CDemonRaytrace *rt = &g_CDemonRaytraceInstance;
            const float bx0 = rt->bbox_min.x - kPanMargin;
            const float bx1 = rt->bbox_max.x + kPanMargin;
            const float bz0 = rt->bbox_min.z - kPanMargin;
            const float bz1 = rt->bbox_max.z + kPanMargin;
            if (g_pan_x < bx0) g_pan_x = bx0;
            if (g_pan_x > bx1) g_pan_x = bx1;
            if (g_pan_z < bz0) g_pan_z = bz0;
            if (g_pan_z > bz1) g_pan_z = bz1;
        }
    } else {
        g_follow = true;
    }

    // Zoom on the strafe bindings, so a pad reaches it without a new binding,
    // AND on three fixed pairs, because a player who has not bound strafe would
    // otherwise have no way to zoom at all. PageUp/PageDown are extended codes
    // and only reachable while the input mask is wide, which it is during play;
    // the other two pairs are not, and work regardless.
    // The strafe bindings only mean zoom in pan mode; in follow mode the hero
    // is still walking and they have to mean strafing.
    const bool zoom_in  = (g_pan_mode && down(g->key_strafe_right)) ||
                          down(DIK_EQUALS) || down(DIK_ADD) || down(DIK_PRIOR);
    const bool zoom_out = (g_pan_mode && down(g->key_strafe_left)) ||
                          down(DIK_MINUS) || down(DIK_SUBTRACT) || down(DIK_NEXT);
    if (zoom_in)  g_zoom *= 1.0f + kZoomRate * dt;
    if (zoom_out) g_zoom /= 1.0f + kZoomRate * dt;
    if (g_zoom < kZoomMin) g_zoom = kZoomMin;
    if (g_zoom > kZoomMax) g_zoom = kZoomMax;
    g_zoom_percent = (int)(g_zoom * 100.0f + 0.5f);

    if (g_follow) { g_pan_x = p.x; g_pan_z = p.z; }
}

// Complete means the whole map is shown, so anything short of 100 is a lie
// about what the player is looking at. The threshold is a reward, not a
// measurement, and the number should agree with the picture.
extern "C" int nocturne_automap_explored_percent(void)
{
    return g_complete ? 100 : g_percent;
}

extern "C" int nocturne_automap_active(void) { return g_open ? 1 : 0; }

// Only pan mode takes the controls. In follow mode the map is up and the hero
// still walks, which is the point of it.
extern "C" int nocturne_automap_owns_controls(void)
{
    return (g_open && g_pan_mode) ? 1 : 0;
}
extern "C" int *nocturne_automap_key_binding(void) { return &g_key_binding; }
extern "C" int *nocturne_automap_zoom_setting(void) { return &g_zoom_percent; }

extern "C" char *nocturne_automap_key_label(void)
{
    return support_newmsg_cpp_getLocalizedString_FUN_005441f0("Map");
}

// ---- render -----------------------------------------------------------------

extern "C" void nocturne_automap_render(void)
{
    if (!g_open || g_segments.empty()) return;

    CDemonActor *hero = local_hero();
    if (hero == nullptr) return;
    const CVector3f p = hero->location.position;

    const int x0 = kMargin, y0 = kMargin;
    const int x1 = g_WindowWidth - kMargin, y1 = g_WindowHeight - kMargin;
    if (x1 <= x0 || y1 <= y0) return;

    CDemonRaytrace *rt = &g_CDemonRaytraceInstance;
    const float spanx = rt->bbox_max.x - rt->bbox_min.x;
    const float spanz = rt->bbox_max.z - rt->bbox_min.z;
    const float span = (spanx > spanz ? spanx : spanz);
    if (span <= 0.0f) return;

    // Zoom 1 fits the level in the window; the rest is a multiplier on that.
    const int w = x1 - x0, h = y1 - y0;
    const float fit = (float)(w < h ? w : h) / span;
    const float scale = fit * g_zoom;
    const int cx = x0 + w / 2, cy = y0 + h / 2;

    dim_backdrop(x0, y0, x1, y1);

    const int color_wall   = pick_color(kWallRGB,   0xf8);
    const int color_faded  = pick_color(kFadedRGB,  0xf8);
    const int color_player = pick_color(kPlayerRGB, 0xf8);

    const float lo = p.y - kBandBelow, hi = p.y + kBandAbove;

    // +Z away from the viewer, so it is flipped: a map reads north-up.
    #define AM_PX(wx) (cx + (int)(((wx) - g_pan_x) * scale))
    #define AM_PY(wz) (cy - (int)(((wz) - g_pan_z) * scale))

    // The player's own storey only. Other floors were drawn dimmed at one
    // point, and at a castle's density that is not context but clutter: enough
    // grey boxes to read as part of the room you are in. What is off your level
    // stays remembered and stays hidden until you are on it.
    g_ActiveRenderColor = color_wall;
    for (size_t i = 0; i < g_segments.size(); i++) {
        const Segment &s = g_segments[i];
        if (!g_complete && !revealed(s.cube)) continue;
        if (s.y < lo || s.y > hi) continue;
        engine_2d_c_clipAndDrawLine_FUN_00402ca0(
            AM_PX(s.x1), AM_PY(s.z1), AM_PX(s.x2), AM_PY(s.z2),
            x0, y0, x1, y1);
    }
    (void)color_faded;

    // The player last, as a filled disc with a dark halo under it and a pale
    // core. A bare dot the colour of a wall is exactly what goes missing in a
    // dense room, and a thin cross is barely better.
    const int hx = AM_PX(p.x), hy = AM_PY(p.z);
    for (int ring = 0; ring < 3; ring++) {
        const int r = (ring == 0) ? 7 : (ring == 1) ? 5 : 2;
        g_ActiveRenderColor = (ring == 0) ? pick_color(kHaloRGB, color_wall)
                            : (ring == 1) ? color_player
                                          : pick_color(kCoreRGB, color_player);
        for (int dy = -r; dy <= r; dy++) {
            const int half = (int)(std::sqrt((float)(r * r - dy * dy)) + 0.5f);
            if (half <= 0) continue;
            engine_2d_c_clipAndDrawLine_FUN_00402ca0(
                hx - half, hy + dy, hx + half, hy + dy, x0, y0, x1, y1);
        }
    }

    #undef AM_PX
    #undef AM_PY

    // Through the scaled path, not drawText: the engine's own is 640x480 pixel
    // art one screen pixel per art pixel, so at a real resolution the readout
    // is a few pixels tall and unreadable.
    char line[64];
    std::snprintf(line, sizeof(line), "MAP  %d%%%s%s",
                  nocturne_automap_explored_percent(),
                  g_complete ? "  COMPLETE" : "",
                  g_pan_mode ? "  [PAN]" : "");
    // The colour is the map's own, NOT g_UITextColor: that is an editor global
    // and reads 0 during play, which is black on a dimmed backdrop.
    const int ui = nocturne_ui_scale();
    nocturne_ui_draw_text(g_ThemeFont, line, x0, y0 - 12 * ui,
                          color_wall, -1, ui);
}

// ---- persistence ------------------------------------------------------------
//
// A trailing block, after the save's last section. A reader that does not know
// about it never reaches it: CGame::loadGame parses sequentially against counts
// it already has, its final section is one fixed-length line, and its version
// gate is a minimum with no upper bound. So no version bump, and older builds
// load new saves unharmed.
//
// Run-length encoded rather than raw bits: 5.6 KB of hex would swamp a save
// that is otherwise readable, and runs of unexplored space compress to nothing.

extern "C" void nocturne_automap_save(void *file)
{
    FILE *f = (FILE *)file;
    if (f == nullptr || g_cube_count == 0) return;

    CDemonRaytrace *rt = &g_CDemonRaytraceInstance;
    std::fprintf(f, "Automap\n");
    std::fprintf(f, "%s\n", g_CDemonSetInstance.geometry_filename);
    std::fprintf(f, "%d,%d,%d,%d\n", rt->grid_coord.x, rt->grid_coord.y,
                 rt->grid_coord.z, g_complete ? 1 : 0);

    int runs = 0;
    for (int c = 0; c < g_cube_count; ) {
        const bool v = revealed(c);
        int n = 0;
        while (c + n < g_cube_count && revealed(c + n) == v) n++;
        std::fprintf(f, "%d ", n);
        c += n;
        if (++runs % 20 == 0) std::fprintf(f, "\n");
    }
    std::fprintf(f, "\n");
}

extern "C" void nocturne_automap_load(void *file)
{
    FILE *f = (FILE *)file;
    if (f == nullptr || g_cube_count == 0) return;

    char tag[64];
    if (std::fscanf(f, "%63s\n", tag) != 1) return;      // EOF: no map data
    if (std::strcmp(tag, "Automap") != 0) return;

    char geo[64];
    if (std::fscanf(f, "%63s\n", geo) != 1) return;

    int gx = 0, gy = 0, gz = 0, done = 0;
    if (std::fscanf(f, "%d,%d,%d,%d\n", &gx, &gy, &gz, &done) != 4) return;

    // A changed .GEO invalidates cleanly rather than smearing one level's
    // explored cells over another's grid.
    CDemonRaytrace *rt = &g_CDemonRaytraceInstance;
    if (gx != rt->grid_coord.x || gy != rt->grid_coord.y ||
        gz != rt->grid_coord.z ||
        std::strcmp(geo, g_CDemonSetInstance.geometry_filename) != 0) {
        return;
    }

    std::fill(g_revealed.begin(), g_revealed.end(), 0);
    bool v = false;
    int c = 0, n = 0;
    while (c < g_cube_count && std::fscanf(f, "%d", &n) == 1) {
        if (v) {
            for (int i = 0; i < n && c + i < g_cube_count; i++) {
                const int k = c + i;
                g_revealed[(size_t)k >> 3] |= (unsigned char)(1u << (k & 7));
            }
        }
        c += n;
        v = !v;
    }
    g_complete = (done != 0);
    recount_explored();
}

#else   // NOCTURNE_AUTHENTIC_AUTOMAP

extern "C" void nocturne_automap_reset(void) {}
extern "C" void nocturne_automap_update(void) {}
extern "C" int  nocturne_automap_active(void) { return 0; }
extern "C" void nocturne_automap_render(void) {}
extern "C" void nocturne_automap_save(void *file) { (void)file; }
extern "C" void nocturne_automap_load(void *file) { (void)file; }
extern "C" int  nocturne_automap_explored_percent(void) { return 0; }
extern "C" int *nocturne_automap_key_binding(void) { static int none = 0; return &none; }
extern "C" int *nocturne_automap_zoom_setting(void) { static int none = 100; return &none; }
extern "C" char *nocturne_automap_key_label(void) { static char none[1] = ""; return none; }

#endif  // NOCTURNE_AUTHENTIC_AUTOMAP
