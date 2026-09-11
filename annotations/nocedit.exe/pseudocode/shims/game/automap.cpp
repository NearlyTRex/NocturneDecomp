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

// Doors and characters. A door is asked of the engine's own lock test rather
// than of key_mask alone, so one you are already carrying the key for reads as
// openable -- "can I get through this" is the question being answered, not
// "was this authored with a lock".
const int kDoorOpenRGB[3]   = { 110, 130, 110 };
const int kDoorFreeRGB[3]   = {  60, 220,  90 };
const int kDoorLockedRGB[3] = { 235,  60,  55 };

// Other heroes are teammates in a network game. Characters get one colour
// between them because the engine has no friend/foe field to ask -- nothing on
// CCharacter distinguishes a hostage from a mobster, and inventing a class list
// here would be our fiction rather than the game's.
const int kHeroRGB[3] = {  90, 170, 255 };
const int kNpcRGB[3]  = { 250, 200,  60 };

// One line colour per EGroundType, indexed by the enum. A wall is drawn in the
// colour of its own material, which is carried per triangle in the owning
// cube's ground_type_memory. These are line colours over a dimmed scene, so
// they are bright and close in value to each other -- the material is a hint
// on top of the drawing, and a map whose lines vary wildly in brightness reads
// as a map with some walls more important than others.
//
// DEFAULT is the ordinary wall colour, since most of a level is untyped and
// that case has to look like the map's normal line rather than a material.
const int kGroundRGB[14][3] = {
    { 170, 205, 235 },   // DEFAULT   -- same as kWallRGB, the ordinary line
    { 170, 205, 235 },   // NONE      -- untyped in practice; treated the same
    { 168, 186, 200 },   // CONCRETE
    { 198, 168, 124 },   // DIRT
    { 132, 208, 138 },   // GRASS
    { 152, 186, 214 },   // METAL
    {  96, 172, 240 },   // WATER
    { 214, 164, 104 },   // WOOD
    { 222, 220, 232 },   // MARBLE
    { 164, 146, 110 },   // MUD
    { 212, 150, 186 },   // CARPET
    { 230, 106, 104 },   // BLOOD
    { 150, 224, 230 },   // GLASS
    { 186, 182, 166 },   // GRAVEL
};
const int kGroundTypeCount = (int)(sizeof(kGroundRGB) / sizeof(kGroundRGB[0]));

// Marker radii, in unscaled screen pixels. The hero is deliberately the largest
// of the three and carries a halo ring on top of that: at this size a one-pixel
// difference in radius is not a difference anyone sees.
// Sized to sit between the two: bigger and ringed against a character's flat
// dot, smaller and coreless against the player's halo 7 / body 5 / core 2, so
// the player is still the most prominent thing on his own map.
const int kDoorRadius     = 3;
const int kHeroRadius     = 4;
const int kHeroHaloExtra  = 2;
const int kNpcRadius      = 3;

// Where a character's sight ray lands, above the feet its position records.
// Aimed at the chest so the ray is not buried in the floor at either end.
const float kMarkerEyeOffset = 3.0f;

// How far short of a character the sight ray stops. testLineOcclusion raycasts
// against every actor in the set, so a ray that ends ON the character it is
// asking about is occluded BY that character and no character ever draws. Same
// correction the reveal makes for cells, and for the same reason. Wide enough
// to clear a character's own collision box.
const float kMarkerPullback = 3.5f;

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
    int   cube;          // owning cell -- the unit the fog reveals
    unsigned char lone;  // edge used by exactly one wall triangle
    unsigned char ground;  // EGroundType of the wall this edge came from
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

// Paint the whole frame out. The map is a screen, not an overlay: the scene
// behind it is not context the player needs while he is reading it, and a
// half-lit room under the line work is the thing that made it read as a HUD.
//
// The frame underneath is still rendered -- skipping renderScene would be
// cheaper but reaches into renderer state this has no business touching -- so
// this covers it rather than preventing it.
void black_screen(void)
{
    const int w = g_WindowWidth, h = g_WindowHeight;
    if (w <= 0 || h <= 0) return;

    // Black is 0 in all three: zero bits at 16 and 32bpp, and palette entry 0
    // at 8bpp, which every palette in the game carries as black.
    const int bytes = (g_BitsPerPixel == 0x20) ? 4
                    : (g_BitsPerPixel == 0x10) ? 2
                                               : 1;
    for (int y = 0; y < h; y++) {
        void *row = g_ScreenBufferArray[y];
        if (row == nullptr) continue;
        std::memset(row, 0, (size_t)w * (size_t)bytes);
    }
}

// Markers are filled shapes rather than outlines: at map scale an outlined
// glyph a few pixels across is a smudge, and the map is read at a glance.
// Colour comes from g_ActiveRenderColor, set by the caller.
void fill_disc(int cx, int cy, int r, int x0, int y0, int x1, int y1)
{
    for (int dy = -r; dy <= r; dy++) {
        const int half = (int)(std::sqrt((float)(r * r - dy * dy)) + 0.5f);
        if (half <= 0) continue;
        engine_2d_c_clipAndDrawLine_FUN_00402ca0(cx - half, cy + dy,
                                                 cx + half, cy + dy,
                                                 x0, y0, x1, y1);
    }
}

void fill_box(int cx, int cy, int r, int x0, int y0, int x1, int y1)
{
    for (int dy = -r; dy <= r; dy++) {
        engine_2d_c_clipAndDrawLine_FUN_00402ca0(cx - r, cy + dy,
                                                 cx + r, cy + dy,
                                                 x0, y0, x1, y1);
    }
}

// The borrowed-control legend, shortened until it fits the screen.
//
// The map takes no bindings of its own for pan and zoom, so the only way the
// player can know which of his controls do what here is to be told -- and told
// in the names he actually bound, which getKeyDisplayName gives for pad codes
// as well as keys. A pad makes the full line long ("Left Stick Up" six times
// over), hence the two fallbacks rather than one line that runs off the edge.
void build_help_line(char *out, int out_size, int ui)
{
    CGame *g = g_CGamePtr;
    if (g == (CGame *)nullptr) { out[0] = '\0'; return; }

    // getKeyDisplayName hands back one shared buffer, so each name has to be
    // taken before the next call overwrites it.
    char pan_z0[40], pan_z1[40], pan_x0[40], pan_x1[40], zin[40], zout[40], open[40];
    strcpy(pan_z0, core_menu_cpp_getKeyDisplayName_FUN_005134e0(g->key_walk));
    strcpy(pan_z1, core_menu_cpp_getKeyDisplayName_FUN_005134e0(g->key_backup));
    strcpy(pan_x0, core_menu_cpp_getKeyDisplayName_FUN_005134e0(g->key_strafe_left));
    strcpy(pan_x1, core_menu_cpp_getKeyDisplayName_FUN_005134e0(g->key_strafe_right));
    strcpy(zin,    core_menu_cpp_getKeyDisplayName_FUN_005134e0(g->key_point_up));
    strcpy(zout,   core_menu_cpp_getKeyDisplayName_FUN_005134e0(g->key_point_down));
    strcpy(open,   core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_key_binding));

    const int fits = g_WindowWidth - kMargin * 2;

    std::snprintf(out, (size_t)out_size, "PAN %s %s %s %s    ZOOM %s %s    CLOSE %s",
                  pan_z0, pan_z1, pan_x0, pan_x1, zin, zout, open);
    if (nocturne_ui_text_width(g_ThemeFont, out, ui) <= fits) return;

    std::snprintf(out, (size_t)out_size, "PAN %s %s %s %s   ZOOM %s %s",
                  pan_z0, pan_z1, pan_x0, pan_x1, zin, zout);
    if (nocturne_ui_text_width(g_ThemeFont, out, ui) <= fits) return;

    std::snprintf(out, (size_t)out_size, "LEFT PAN   RIGHT ZOOM");
}

// A hero, drawn as a ringed dot: a dark halo with the hero colour inside it,
// the same construction as the player marker a size down. Colour alone does not
// separate a hero from a character at map scale -- both are a few pixels of
// flat fill and the eye reads them as the same kind of thing -- so heroes carry
// the shape as well, which is what the player marker relies on too.
void draw_hero_marker(int cx, int cy, int color_hero, int color_halo,
                      int x0, int y0, int x1, int y1)
{
    g_ActiveRenderColor = color_halo;
    fill_disc(cx, cy, kHeroRadius + kHeroHaloExtra, x0, y0, x1, y1);
    g_ActiveRenderColor = color_hero;
    fill_disc(cx, cy, kHeroRadius, x0, y0, x1, y1);
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

        // ground_type_memory is a uchar[triangle_count] on the cube, indexed by
        // the triangle's own index: allocGeometryMemory mallocs exactly
        // triangle_count bytes for it, load and save move that many, and
        // rayIntersectTriangles hands entry [t] back as the hit material. So a
        // wall's material is one byte lookup beside the triangle it came from.
        const unsigned char *ground = (const unsigned char *)cube->ground_type_memory;

        for (int t = 0; t < cube->triangle_count; t++) {
            const CDemonCubeTriangle *ct = &cube->triangle_buffer[t];
            if (ct->dominant_axis == 1) continue;
            if (std::fabs(ct->triangle.normal.y) > kMaxNormalY) continue;

            const CVector3f *v[3] = { ct->triangle.vertices[0],
                                      ct->triangle.vertices[1],
                                      ct->triangle.vertices[2] };
            if (v[0] == nullptr || v[1] == nullptr || v[2] == nullptr) continue;
            g_has_wall[(size_t)c] = 1;

            int mat = (ground != nullptr) ? (int)ground[t] : GROUND_TYPE_DEFAULT;
            if (mat < 0 || mat >= kGroundTypeCount) mat = GROUND_TYPE_DEFAULT;

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
                    s.ground = (unsigned char)mat;
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

// The cube holding a world position, by getCubeAt's own index arithmetic so a
// cell here is the same cell the collision system means. -1 when outside.
int cube_at(const CVector3f &p)
{
    CDemonRaytrace *rt = &g_CDemonRaytraceInstance;
    if (rt->cell_size.x <= 0.0f || rt->cell_size.y <= 0.0f || rt->cell_size.z <= 0.0f) {
        return -1;
    }
    const int dimx = rt->grid_coord.x, dimy = rt->grid_coord.y, dimz = rt->grid_coord.z;
    const int x = (int)((p.x - rt->bbox_min.x) / rt->cell_size.x);
    const int y = (int)((p.y - rt->bbox_min.y) / rt->cell_size.y);
    const int z = (int)((p.z - rt->bbox_min.z) / rt->cell_size.z);
    if (x < 0 || x >= dimx || y < 0 || y >= dimy || z < 0 || z >= dimz) return -1;
    const int c = x * dimy * dimz + y * dimz + z;
    return (c >= 0 && c < g_cube_count) ? c : -1;
}

// Can the player see this character right now? The same occlusion test the
// reveal uses, answered per frame and never remembered -- see the marker pass
// in the renderer for why characters do not persist the way walls do.
//
// The ray has to stop SHORT of the character. testLineOcclusion raycasts
// against every actor in the set (rayVoxelGridTest, then raycastAgainstActors),
// so a ray aimed at the character's own chest is occluded by that character and
// the answer is always "no". Pulling the end back along the ray clears its
// collision box while keeping everything in between, including closed doors,
// blocking as it should.
bool in_sight(const CVector3f &eye, const CVector3f &target)
{
    if (g_CDemonSetPtr == nullptr) return false;

    CVector3f from = eye;
    CVector3f to = target;
    to.y += kMarkerEyeOffset;

    const float dx = to.x - from.x, dy = to.y - from.y, dz = to.z - from.z;
    const float len = std::sqrt(dx * dx + dy * dy + dz * dz);
    if (len <= kMarkerPullback) {
        // Close enough to be inside the pullback: he is standing on top of you.
        return true;
    }
    const float k = (len - kMarkerPullback) / len;
    to.x = from.x + dx * k;
    to.y = from.y + dy * k;
    to.z = from.z + dz * k;

    return core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460(
               g_CDemonSetPtr, &from, &to) == 0;
}

// Can the player get through this door from where he is standing?
//
// Two separate locks, and colouring by key_mask alone misses the commoner one.
// CHero::tryOpenNearbyDoor calls CDoor::getMoveType, which refuses outright
// when the player is on a side the door's allowed_sides bitmask does not permit
// ("The door is locked from the other side."), and only doors that clear THAT
// reach the key test in CHero::tryOpenDoor. allowed_sides of 0 permits neither
// side and is a door that never opens to the player at all.
//
// getMoveType itself cannot be called to find out: it plays the locked sound
// and puts a message on screen. So its side gate is reproduced here, and the
// key test is the real call with show_message 0, which is a pure query -- it
// returns 1 immediately for key_mask 0 and neither prints nor plays anything.
bool door_is_passable(CDoor *door, CHero *hero)
{
    CVector3f local;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(
        &door->base, &local, &(hero->base).base.location.position);

    const int side_bit = (local.z <= 0.0f) ? 2 : 1;
    if ((door->allowed_sides & side_bit) == 0) return false;

    return core_inv_cpp_CInventory_checkHasMatchingKey_FUN_005013d0(
               &hero->inventory, (uint)door->key_mask, 0) != 0;
}

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
            // Opens centred on the player, at the zoom he chose: where he is,
            // is the question he is asking; how far out he likes to see is a
            // preference. It does not follow him afterwards, because he does
            // not move -- the map has the controls for as long as it is up.
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

    // Sticks first. The pad shim hands these over already deadzoned and
    // rescaled to -1..1, so a gentle push pans slowly and a hard one fast --
    // which is the whole reason to read the stick as an axis rather than
    // through the four digital codes it also synthesises.
    float move_x = 0.0f, move_y = 0.0f, look_x = 0.0f, look_y = 0.0f;
    nocturne_gamepad_axes(&move_x, &move_y, &look_x, &look_y, nullptr, nullptr);

    // Pan is the left stick, which on a pad IS walk/backup and strafe -- so the
    // digital fallback reads exactly those bindings and nothing else.
    // key_left / key_right are the right stick's other axis and must not be
    // read here, or one stick would drive both pan and zoom.
    //
    // Stick y is positive downwards; on the map, down the screen is -z.
    float mx = move_x, mz = -move_y;
    if (mx == 0.0f) {
        // Only when the stick is centred, so a pad's own analogue reading is
        // never blended with the digital codes it also synthesises -- that
        // would turn any push past the synthesis threshold into a full-speed
        // one and throw away the analogue response.
        if (down(g->key_strafe_left))  mx -= 1.0f;
        if (down(g->key_strafe_right)) mx += 1.0f;
    }
    if (mz == 0.0f) {
        if (down(g->key_walk))   mz += 1.0f;
        if (down(g->key_backup)) mz -= 1.0f;
    }

    if (mx != 0.0f || mz != 0.0f) {
        // Divided by the zoom, so a pan covers the same distance on screen
        // whatever the scale. Panning at a far-out zoom otherwise crawls.
        const float rate = kPanRate * dt / g_zoom;
        g_pan_x += mx * rate;
        g_pan_z += mz * rate;

        // Held inside the level, plus a margin, so scrolling cannot wander off
        // into empty space with nothing on screen and no clue which way back.
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

    // Zoom is the right stick, which on a pad is turn and look -- so the
    // digital fallback is the look bindings, the half of that stick pan does
    // not touch. Pushed up zooms in.
    float zoom_axis = -look_y;
    if (zoom_axis == 0.0f) {
        if (down(g->key_point_up))   zoom_axis += 1.0f;
        if (down(g->key_point_down)) zoom_axis -= 1.0f;
    }

    if (zoom_axis != 0.0f) {
        // Multiplicative, so each step is the same proportion of the current
        // scale and zooming feels even across the whole range.
        g_zoom *= 1.0f + kZoomRate * zoom_axis * dt;
    }
    if (g_zoom < kZoomMin) g_zoom = kZoomMin;
    if (g_zoom > kZoomMax) g_zoom = kZoomMax;
    g_zoom_percent = (int)(g_zoom * 100.0f + 0.5f);
}

// Complete means the whole map is shown, so anything short of 100 is a lie
// about what the player is looking at. The threshold is a reward, not a
// measurement, and the number should agree with the picture.
extern "C" int nocturne_automap_explored_percent(void)
{
    return g_complete ? 100 : g_percent;
}

extern "C" int nocturne_automap_active(void) { return g_open ? 1 : 0; }

// The map takes the controls for as long as it is up. It is a screen, and the
// hero standing still is half of what makes it one.
extern "C" int nocturne_automap_owns_controls(void)
{
    return g_open ? 1 : 0;
}

// Escape belongs to the map while the map is up, so the in-mission menu is
// never built over it. Closing here rather than leaving it to the
// g_ModalDialogActive test in the update means the press is spent on one screen
// instead of dismissing one and raising another in the same frame.
extern "C" int nocturne_automap_handle_cancel(void)
{
    if (!g_open) return 0;
    g_open = false;
    return 1;
}

// The other half: the world stops. NOT in a network game, though -- the
// simulation there is lockstep and every machine steps together, so a player
// who opened his map and stopped calling CGame::process would desync the
// session rather than pause it. He gets the screen; the world keeps running,
// and he is as exposed as he would be standing still.
extern "C" int nocturne_automap_freezes_world(void)
{
    if (!g_open) return 0;
    if (g_CNetGamePtr != (CNetGame *)0x0 &&
        g_CNetGamePtr->connection_type != CONNECTION_NONE) {
        return 0;
    }
    return 1;
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

    // Both overlay lines are built and measured BEFORE the map window, because
    // they decide how tall it is: the top and bottom insets are sized from the
    // text so each line has a band of its own. A flat inset does not work --
    // it is a constant and a line of text is not, so anything above UI scale 1
    // overruns it.
    const int ui = nocturne_ui_scale();

    char title[64];
    std::snprintf(title, sizeof(title), "MAP  %d%%%s",
                  nocturne_automap_explored_percent(),
                  g_complete ? "  COMPLETE" : "");

    char help[192];
    build_help_line(help, (int)sizeof(help), ui);

    int title_h = nocturne_ui_text_height(g_ThemeFont, title, ui);
    if (title_h <= 0) title_h = 12 * ui;
    int help_h = (help[0] != '\0') ? nocturne_ui_text_height(g_ThemeFont, help, ui) : 0;
    if (help[0] != '\0' && help_h <= 0) help_h = 12 * ui;

    // Padding above and below the text inside its band.
    const int pad = 4 * ui;
    int top_band = title_h + pad * 2;
    int bottom_band = (help_h > 0) ? help_h + pad * 2 : kMargin;
    if (top_band < kMargin) top_band = kMargin;
    if (bottom_band < kMargin) bottom_band = kMargin;

    const int x0 = kMargin, y0 = top_band;
    const int x1 = g_WindowWidth - kMargin, y1 = g_WindowHeight - bottom_band;
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

    black_screen();

    const int color_wall   = pick_color(kWallRGB,   0xf8);
    const int color_faded  = pick_color(kFadedRGB,  0xf8);
    const int color_player = pick_color(kPlayerRGB, 0xf8);

    const float lo = p.y - kBandBelow, hi = p.y + kBandAbove;

    // +Z away from the viewer, so it is flipped: a map reads north-up.
    #define AM_PX(wx) (cx + (int)(((wx) - g_pan_x) * scale))
    #define AM_PY(wz) (cy - (int)(((wz) - g_pan_z) * scale))

    // Every material's line colour, resolved once. pick_color searches the
    // whole palette, so asking it per segment would be a 256-entry scan per
    // line drawn.
    int ground_color[kGroundTypeCount];
    for (int g = 0; g < kGroundTypeCount; g++) {
        ground_color[g] = pick_color(kGroundRGB[g], color_wall);
    }

    // The player's own storey only. Drawing other floors dimmed underneath is
    // clutter at a castle's density, not context -- enough grey boxes to read
    // as part of the room you are in. What is off your level stays remembered
    // and stays hidden until you are on it.
    //
    // Each wall draws in its own material's colour, so stone, wood, glass and
    // water read apart without the map gaining a second layer to look through.
    int last_color = -1;
    for (size_t i = 0; i < g_segments.size(); i++) {
        const Segment &s = g_segments[i];
        if (!g_complete && !revealed(s.cube)) continue;
        if (s.y < lo || s.y > hi) continue;

        const int col = ground_color[s.ground];
        if (col != last_color) {
            g_ActiveRenderColor = col;
            last_color = col;
        }
        engine_2d_c_clipAndDrawLine_FUN_00402ca0(
            AM_PX(s.x1), AM_PY(s.z1), AM_PX(s.x2), AM_PY(s.z2),
            x0, y0, x1, y1);
    }

    // Doors and characters, over the line work and under the player.
    //
    // The two follow different rules on purpose. A door keeps to the fog, like
    // the walls do: a door you have seen is a fact about the level and should
    // stay on the map, which is the whole point of colouring the locked ones --
    // it is a note to come back with a key. A character keeps to line of sight
    // and is never remembered, because characters move: drawing one wherever
    // you last had its room revealed would be an x-ray of the level's
    // population rather than a map of the place.
    if (g_CDemonSetPtr != nullptr) {
        CVector3f eye = p;
        eye.y += kEyeHeight;

        const int color_door_open   = pick_color(kDoorOpenRGB,   color_wall);
        const int color_door_free   = pick_color(kDoorFreeRGB,   color_wall);
        const int color_door_locked = pick_color(kDoorLockedRGB, color_wall);
        const int color_hero        = pick_color(kHeroRGB,       color_wall);
        const int color_npc         = pick_color(kNpcRGB,        color_wall);
        const int color_halo        = pick_color(kHaloRGB,       color_wall);

        // Which party slots the set's actor list already accounted for.
        bool drawn_hero[4] = { false, false, false, false };

        CDemonSet *set = g_CDemonSetPtr;
        int count = set->actor_count;
        if (count > (int)(sizeof(set->actors) / sizeof(set->actors[0]))) {
            count = (int)(sizeof(set->actors) / sizeof(set->actors[0]));
        }

        for (int i = 0; i < count; i++) {
            CDemonActor *a = set->actors[i];
            if (a == nullptr || a == hero) continue;

            const CVector3f ap = a->location.position;
            if (ap.y < lo || ap.y > hi) continue;

            const int mx = AM_PX(ap.x), my = AM_PY(ap.z);
            if (mx < x0 || mx >= x1 || my < y0 || my >= y1) continue;

            CDoor *door = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c790(
                                       a, g_CDoorClassInfo.name_hash);
            if (door != (CDoor *)nullptr) {
                if (!g_complete && !revealed(cube_at(ap))) continue;
                g_ActiveRenderColor =
                    (door->door_state != DOOR_STATE_CLOSED) ? color_door_open
                    : door_is_passable(door, (CHero *)hero) ? color_door_free
                                                            : color_door_locked;
                fill_box(mx, my, kDoorRadius, x0, y0, x1, y1);
                continue;
            }

            CCharacter *ch = (CCharacter *)core_actor_cpp_castToClassHash_FUN_0040c790(
                                               a, g_CCharacterClassInfo.name_hash);
            if (ch == (CCharacter *)nullptr) continue;
            if (ch->hit_points <= 0.0f) continue;
            if (!in_sight(eye, ap)) continue;

            // Hero here means the CLASS, not the party. CMoloch, CHaystack and
            // the rest derive from CHero and are placed in levels as ordinary
            // actors, so this pass must NOT skip the class on the grounds that
            // g_HeroActors covers it -- that array holds the party, and every
            // other hero-class actor in the level would go undrawn. Anything
            // the engine calls a hero gets the hero marker; g_HeroActors only
            // decides which ones also need drawing when the set list missed
            // them.
            if (core_actor_cpp_castToClassHash_FUN_0040c790(
                    a, g_CHeroClassInfo.name_hash) != (CDemonActor *)nullptr) {
                for (int h = 0; h < 4; h++) {
                    if ((CDemonActor *)g_HeroActors[h] == a) drawn_hero[h] = true;
                }
                draw_hero_marker(mx, my, color_hero, color_halo, x0, y0, x1, y1);
                continue;
            }

            g_ActiveRenderColor = color_npc;
            fill_disc(mx, my, kNpcRadius, x0, y0, x1, y1);
        }

        // Any party hero the pass above did not reach. The set's actor list is
        // rebuilt per set from actors whose location.area_id matches the
        // current one (CDemonMission::buildSetActorList), and a hero is not
        // guaranteed to carry a matching one -- createOneHero's placeholder
        // fallback sets area_id to -1 outright.
        for (int i = 0; i < 4; i++) {
            CHero *mate = g_HeroActors[i];
            if (mate == (CHero *)nullptr || i == g_LocalHeroIndex) continue;
            if (drawn_hero[i]) continue;
            if ((mate->base).hit_points <= 0.0f) continue;

            const CVector3f mp = (mate->base).base.location.position;
            if (mp.y < lo || mp.y > hi) continue;

            const int mx = AM_PX(mp.x), my = AM_PY(mp.z);
            if (mx < x0 || mx >= x1 || my < y0 || my >= y1) continue;
            if (!in_sight(eye, mp)) continue;

            draw_hero_marker(mx, my, color_hero, color_halo, x0, y0, x1, y1);
        }
    }

    // The player last, as a filled disc with a dark halo under it and a pale
    // core. A bare dot the colour of a wall is exactly what goes missing in a
    // dense room, and a thin cross is barely better.
    const int hx = AM_PX(p.x), hy = AM_PY(p.z);
    for (int ring = 0; ring < 3; ring++) {
        const int r = (ring == 0) ? 7 : (ring == 1) ? 5 : 2;
        g_ActiveRenderColor = (ring == 0) ? pick_color(kHaloRGB, color_wall)
                            : (ring == 1) ? color_player
                                          : pick_color(kCoreRGB, color_player);
        fill_disc(hx, hy, r, x0, y0, x1, y1);
    }

    #undef AM_PX
    #undef AM_PY

    // The two overlay lines, each centred in the band reserved for it above.
    // Through the scaled path, not drawText: the engine's own is 640x480 pixel
    // art one screen pixel per art pixel, so at a real resolution the readout
    // is a few pixels tall and unreadable.
    //
    // The colour is the map's own, NOT g_UITextColor: that is an editor global
    // and reads 0 during play, which is black on a black screen.
    nocturne_ui_draw_text(g_ThemeFont, title, x0, (top_band - title_h) / 2,
                          color_wall, -1, ui);

    if (help[0] != '\0') {
        // Centred across the screen, so whichever form survived the width
        // fallbacks sits under the middle of the map rather than trailing off
        // one side. Drawn dim: it is a reminder, not part of the map.
        int help_w = nocturne_ui_text_width(g_ThemeFont, help, ui);
        int help_x = (g_WindowWidth - help_w) / 2;
        if (help_x < 0) help_x = 0;
        nocturne_ui_draw_text(g_ThemeFont, help, help_x,
                              y1 + (bottom_band - help_h) / 2,
                              color_faded, -1, ui);
    }
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
extern "C" int  nocturne_automap_owns_controls(void) { return 0; }
extern "C" int  nocturne_automap_freezes_world(void) { return 0; }
extern "C" int  nocturne_automap_handle_cancel(void) { return 0; }
extern "C" int *nocturne_automap_key_binding(void) { static int none = 0; return &none; }
extern "C" int *nocturne_automap_zoom_setting(void) { static int none = 100; return &none; }
extern "C" char *nocturne_automap_key_label(void) { static char none[1] = ""; return none; }

#endif  // NOCTURNE_AUTHENTIC_AUTOMAP
