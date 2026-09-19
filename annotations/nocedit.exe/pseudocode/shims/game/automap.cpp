// =============================================================================
// AUTOMAP — implementation
// =============================================================================
//
// See automap.h for the contract and research/19-automap/ for why the rules are
// what they are.

#include "game/automap.h"
#include "shim_config.h"

#if !NOCTURNE_AUTHENTIC_AUTOMAP

#include "game/chapter_select.h"   // the mission's own name for where this is
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

// Colours are requested as RGB and resolved against the palette, not written as
// indices. plotPixel masks g_ActiveRenderColor to 0..255 and looks it up in
// g_ColorTable16/32, so the meaning of any given index depends on the loaded
// palette. A hardcoded index renders as whatever that palette holds there.
const int kWallRGB[3]   = { 170, 205, 235 };
const int kFadedRGB[3]  = {  74,  92, 116 };
const int kPlayerRGB[3] = { 255,  64,  48 };
const int kHaloRGB[3]   = {  10,  10,  14 };
const int kCoreRGB[3]   = { 255, 220, 200 };

// Door coloring
const int kDoorOpenRGB[3]   = { 110, 130, 110 };
const int kDoorFreeRGB[3]   = {  60, 220,  90 };
const int kDoorLockedRGB[3] = { 235,  60,  55 };

// Character coloring. Enemies take a distinct hue rather than another red: the
// player marker and a locked door are both red, and pick_color resolves to the
// nearest palette entry, so a third red can collapse onto one of them at 8bpp.
const int kHeroRGB[3]       = {  90, 170, 255 };
const int kNpcRGB[3]        = { 250, 200,  60 };
const int kEnemyRGB[3]      = { 255,  60, 130 };

// Item coloring. Body parts are pickups but not equipment, so they take a
// separate colour and shape. Kept deliberately dim: they are minor information
// and should not compete with equipment for attention.
const int kItemRGB[3]       = {  90, 235, 215 };
const int kChestRGB[3]      = { 205, 125, 240 };
const int kBodyPartRGB[3]   = { 150,  45,  45 };

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

// Marker radii, authored at 640x480. Every use multiplies by
// nocturne_ui_scale(), as the two text lines do; these are authored sizes, not
// pixel counts. Without the multiply, markers are the only element that does
// not grow with the display mode -- at 1080p ui is 2, so the text and the map
// double while a 3-pixel dot stays 3 pixels.
//
// Sizes are chosen against the geometry, not against each other: the map scales
// a whole level into the window, so a marker competes with long wall runs and
// large rooms before the differences between markers matter.
//
// The hero is the largest of the actor markers and adds a halo ring. The player
// marker is larger still and is the only one with a pale core, keeping it the
// most prominent element.
const int kDoorRadius     = 5;
const int kHeroRadius     = 7;
const int kHeroHaloExtra  = 3;
const int kNpcRadius      = 5;
const int kItemRadius     = 5;
const int kChestRadius    = 5;
const int kBodyPartRadius = 5;

// The player marker's three rings, outermost first: dark halo, body, pale core.
const int kPlayerRings[3] = { 11, 8, 3 };

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

// Visibility of the storeys the band does not cover, 0 leaving them unlit and 1
// drawing them as brightly as the band itself. Held at half, where they read as
// context under the current floor rather than as part of the room the player is
// standing in, and swept between the two by the triggers.
//
// It scales the line colour rather than selecting a second palette entry, so a
// dimmed wall keeps its material's hue and the floor fill stays one drawing
// instead of gaining a layer to look through.
const float kDimDefault = 0.5f;
const float kDimRate    = 0.9f;   // full sweep in a little over a second

// Below this a trigger counts as released. nocturne_gamepad_axes hands the
// triggers over raw -- the radial deadzone is for the sticks, which have a
// negative half, and a trigger does not -- so a resting one can report a little
// above zero and would otherwise creep the setting on its own.
// NOCTURNE_PAD_TRIGGER_THRESHOLD is not the figure for this: that is where a
// trigger counts as a digital press, and an analogue sweep starts long before.
const float kDimDeadzone = 0.08f;

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
bool  g_recentre_was_down = false;
float g_zoom = 1.0f;
float g_pan_x = 0.0f, g_pan_z = 0.0f;

// Visibility of the storeys outside the drawn band. A preference rather than a
// position, so it survives closing the map, and it is not written to the ini --
// the one map setting the ini carries is the zoom.
float g_other_dim = kDimDefault;

// Whether the marker key is showing in place of the heading. Edge-triggered off
// its own binding, so holding the button does not flap it. Reset when the map
// opens, along with the pan.
bool g_legend = false;
bool g_legend_was_down = false;

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

// Whether the hero is dying or dead. Through the vtable rather than
// CCharacter::getDeathState directly: ten classes override it, CStranger among
// them, so the base would answer for the wrong one.
//
// Hit points are consulted as well, because getDeathState does not read them:
// it compares the motion controller's current state NAME against "DIE" and
// "DEAD", so a death whose animation state is named anything else answers
// ALIVE for as long as that state is playing. A fatal fall is one such -- it
// drives the controller to state 0x12 and leaves the hero at or below zero --
// and a map that believes him alive stays open through the death and is still
// the last thing painted when the Game Over list is drawn over it.
//
// strangerCannotDie is asked first, because it is the mission script saying
// this hero does not die: CStranger::getDeathState answers ALIVE on it
// regardless of the controller, and a hero held at zero in such a mission is
// still playing.
bool hero_is_down(CDemonActor *hero) {
    if (hero == nullptr) return false;
    CCharacter_full_vtable *vt = hero->vtable._uc;
    if (vt == nullptr) return false;
    if ((*(vt->_uc).getDeathState)((CCharacter *)hero) != DEATH_STATE_ALIVE) {
        return true;
    }
    if (g_CEventListPtr != (CEventList *)nullptr &&
        core_event_cpp_CEventList_evaluateCondition_FUN_004adca0(
            g_CEventListPtr, (char *)"strangerCannotDie") != 0) {
        return false;
    }
    return ((CCharacter *)hero)->hit_points <= 0.0f;
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

// An item, as a diamond. Shape and not just colour, because the map is read at
// a glance and a dot the size of a character's is a character until you look.
void fill_diamond(int cx, int cy, int r, int x0, int y0, int x1, int y1)
{
    for (int dy = -r; dy <= r; dy++) {
        const int half = r - ((dy < 0) ? -dy : dy);
        engine_2d_c_clipAndDrawLine_FUN_00402ca0(cx - half, cy + dy,
                                                 cx + half, cy + dy,
                                                 x0, y0, x1, y1);
    }
}

// Remains, as an X. Two strokes rather than a fill, so it reads as a mark on the
// map rather than as an object standing on it.
void fill_cross(int cx, int cy, int r, int x0, int y0, int x1, int y1)
{
    engine_2d_c_clipAndDrawLine_FUN_00402ca0(cx - r, cy - r, cx + r, cy + r,
                                             x0, y0, x1, y1);
    engine_2d_c_clipAndDrawLine_FUN_00402ca0(cx - r, cy + r, cx + r, cy - r,
                                             x0, y0, x1, y1);
}

// The marker vocabulary. Shape carries as much information as colour at map
// scale, so a class selects both; adding a class means picking from this list
// rather than writing new drawing code.
enum MarkerShape {
    MARK_DISC,      // a character: the default living thing
    MARK_RING,      // a hero: a dark halo with the body inside it
    MARK_DIAMOND,   // something to carry off
    MARK_BOX,       // a door
    MARK_CHEST,     // a container to search: a box with a lid seam
    MARK_CROSS,     // remains
};

// Draw one marker. `color_halo` is used only by the shapes with a second stroke
// (MARK_RING, MARK_CHEST); it is resolved once per frame with the other colours,
// so passing it unconditionally costs nothing.
void draw_marker(MarkerShape shape, int color, int color_halo,
                 int cx, int cy, int r, int x0, int y0, int x1, int y1)
{
    switch (shape) {
    case MARK_RING:
        // A ringed dot, the player marker's construction one size down. Colour
        // alone does not separate a hero from a character at map scale, since
        // both are a few pixels of flat fill, so heroes carry a shape as well.
        g_ActiveRenderColor = color_halo;
        fill_disc(cx, cy, r + kHeroHaloExtra, x0, y0, x1, y1);
        g_ActiveRenderColor = color;
        fill_disc(cx, cy, r, x0, y0, x1, y1);
        break;

    case MARK_CHEST:
        // A door is also a box, so the seam distinguishes "walk through" from
        // "search" at a size where colour is only a pixel or two of difference.
        g_ActiveRenderColor = color;
        fill_box(cx, cy, r, x0, y0, x1, y1);
        g_ActiveRenderColor = color_halo;
        engine_2d_c_clipAndDrawLine_FUN_00402ca0(cx - r, cy, cx + r, cy,
                                                 x0, y0, x1, y1);
        break;

    case MARK_DIAMOND:
        g_ActiveRenderColor = color;
        fill_diamond(cx, cy, r, x0, y0, x1, y1);
        break;

    case MARK_BOX:
        g_ActiveRenderColor = color;
        fill_box(cx, cy, r, x0, y0, x1, y1);
        break;

    case MARK_CROSS:
        g_ActiveRenderColor = color;
        fill_cross(cx, cy, r, x0, y0, x1, y1);
        break;

    case MARK_DISC:
    default:
        g_ActiveRenderColor = color;
        fill_disc(cx, cy, r, x0, y0, x1, y1);
        break;
    }
}

// ---- what each class of actor looks like ------------------------------------
//
// One row per class with a marker of its own; adding a class means adding a row.
// `type` points at the engine's own CDemonActorType for the class, so this is a
// lookup against registered types rather than a list of class-name strings.
//
// Table order is not significant, and the most-derived class wins. The lookup
// walks the actor's own type chain outward -- its class, then each base in turn
// -- and returns the first row any of them matches. So CEnemy's row applies to a
// CMobster without CEnemy needing to precede CCharacter here, and a row added
// for a leaf class takes precedence over its bases automatically.
//
// Colour and shape only. State-dependent presentation -- a locked door's colour,
// or whether a character is drawn from line of sight or from the fog -- stays at
// the call site, since it is not a property of the class.
struct MarkerStyle {
    CDemonActorType *type;
    const int       *rgb;
    MarkerShape      shape;
    int              radius;
};

const MarkerStyle k_markers[] = {
    // Pickups. Grouped first for readability only; order is not significant.
    { &g_CBodyPartClassInfo,  kBodyPartRGB, MARK_CROSS,   kBodyPartRadius },

    // Characters. CHero is a class, not the party: CMoloch, CHaystack and the
    // rest derive from it and are placed in levels as ordinary actors.
    { &g_CHeroClassInfo,      kHeroRGB,     MARK_RING,    kHeroRadius     },
    { &g_CEnemyClassInfo,     kEnemyRGB,    MARK_DISC,    kNpcRadius      },
    { &g_CCharacterClassInfo, kNpcRGB,      MARK_DISC,    kNpcRadius      },
};

const int kMarkerCount = (int)(sizeof(k_markers) / sizeof(k_markers[0]));

// ---- the marker key --------------------------------------------------------
//
// What each marker means, shown in place of the heading on request. Swatches are
// drawn through the same draw_marker the map uses, so a change to a colour or a
// shape above is reflected here without a second edit.
//
// Ordered by expected lookup frequency: the player and other characters, then
// items, then doors.
struct LegendItem {
    MarkerShape shape;
    const int  *rgb;
    int         radius;
    const char *label;
};

const LegendItem k_legend[] = {
    { MARK_RING,    kPlayerRGB,     kHeroRadius,     "YOU"       },
    { MARK_RING,    kHeroRGB,       kHeroRadius,     "ALLY"      },
    { MARK_DISC,    kEnemyRGB,      kNpcRadius,      "ENEMY"     },
    { MARK_DISC,    kNpcRGB,        kNpcRadius,      "NEUTRAL"   },
    { MARK_DIAMOND, kItemRGB,       kItemRadius,     "ITEM"      },
    { MARK_CHEST,   kChestRGB,      kChestRadius,    "SEARCH"    },
    { MARK_CROSS,   kBodyPartRGB,   kBodyPartRadius, "REMAINS"   },
    { MARK_BOX,     kDoorFreeRGB,   kDoorRadius,     "DOOR"      },
    { MARK_BOX,     kDoorLockedRGB, kDoorRadius,     "LOCKED"    },
    { MARK_BOX,     kDoorOpenRGB,   kDoorRadius,     "OPEN"      },
};

const int kLegendCount = (int)(sizeof(k_legend) / sizeof(k_legend[0]));

// Gaps around a key item, at 640x480 and scaled by ui like the radii are.
const int kLegendGlyphGap = 3;    // between a swatch and its label
const int kLegendItemGap  = 10;   // between one item and the next

// Where each item starts and which row it landed on. Computed before the map
// window so the heading band can be sized from the row count, matching the
// ordering the two text lines rely on.
struct LegendLayout {
    int count;
    int rows;
    int row_h;
    int x[kLegendCount];
    int row[kLegendCount];
    const LegendItem *item[kLegendCount];
};

// Flow the key into as many rows as it needs at the given width. Labels vary in
// length and the window may be 640 or 3840 wide, so a fixed column count either
// wastes a wide screen or overruns a narrow one.
void legend_layout(LegendLayout *out, int ui, int avail)
{
    int i;
    int pen = 0;

    out->count = 0;
    out->rows  = 1;

    // Row height is the taller of the text and the largest swatch at this
    // scale.
    const int text_h = nocturne_ui_text_height(g_ThemeFont, (char *)"YOU", ui);
    int glyph_h = 0;
    for (i = 0; i < kLegendCount; i++) {
        const int d = 2 * k_legend[i].radius * ui + 1;
        if (d > glyph_h) { glyph_h = d; }
    }
    out->row_h = (text_h > glyph_h) ? text_h : glyph_h;
    if (out->row_h <= 0) { out->row_h = 12 * ui; }

    for (i = 0; i < kLegendCount; i++) {
        const LegendItem *it = &k_legend[i];
        const int glyph_w = 2 * it->radius * ui + 1 + kLegendGlyphGap * ui;
        const int w = glyph_w +
                      nocturne_ui_text_width(g_ThemeFont, (char *)it->label, ui);

        // Wrap, but never leave a row empty: an item wider than the available
        // width still needs placing, and gets a row to itself.
        if (pen > 0 && pen + w > avail) {
            out->rows++;
            pen = 0;
        }
        out->item[out->count] = it;
        out->x[out->count]    = pen;
        out->row[out->count]  = out->rows - 1;
        out->count++;
        pen += w + kLegendItemGap * ui;
    }
}

// ---- fitting the overlay text ----------------------------------------------
//
// The two overlay blocks are the one part of this screen whose constraint is
// width, and nocturne_ui_scale answers a question about height: it is
// round(g_WindowHeight / 480), so it steps in whole integers as the mode gets
// taller while the width the text must fit into grows continuously. Each step
// costs a block half or a third of its room at once, and a 4:3 mode's width
// does not grow fast enough to pay that back before the next step.
//
// Measured in unscaled font pixels, (g_WindowWidth - 2 * kMargin) / scale:
//
//   640x480    scale 1    592
//   800x600    scale 1    752   <- the most room any mode has
//   1024x768   scale 2    488   <- less than 640x480, on a larger screen
//   1280x1024  scale 2    616
//   1600x1200  scale 3    517
//
// So every mode above 800x600 has less room for text than 800x600 does, and the
// sequence is not even monotonic. A block sized at the HUD scale therefore wraps
// on every large mode and on none of the small ones, which reads as the text
// growing rather than the room shrinking.
//
// Each block takes the largest scale at or below the HUD's that lays it out on
// one row. Self-limiting rather than a fixed reduction: a block that fits at the
// HUD scale keeps it, and one that does not gives up as little as it can -- at
// 1600x1200 a line that overflows at 3 usually fits at 2 rather than dropping to
// 1. When even scale 1 needs two rows the HUD scale is kept and the block wraps,
// since small *and* wrapped is worse than either alone.

int legend_fitting_scale(int ui, int avail)
{
    LegendLayout probe;
    for (int scale = ui; scale >= 1; scale--) {
        legend_layout(&probe, scale, avail);
        if (probe.rows <= 1) { return scale; }
    }
    return ui;
}

// Which row of k_markers describes this actor, or -1 for one with no marker of
// its own. Walks the actor's type chain from its own class outward, so the
// most-derived row wins whatever order the table is written in.
int marker_index(CDemonActor *actor)
{
    CDemonActorType *type;
    int              i;

    if (actor == (CDemonActor *)nullptr) { return -1; }

    type = (*((actor->vtable)._ub)->getActorType)(actor);
    for (; type != (CDemonActorType *)nullptr; type = type->parent_type) {
        // A class registers its hash on first construction, so a class no level
        // has used yet reads 0. Skipped, or every unregistered row would match.
        if (type->name_hash == 0) { continue; }
        for (i = 0; i < kMarkerCount; i++) {
            if (k_markers[i].type->name_hash == type->name_hash) { return i; }
        }
    }
    return -1;
}

// One run of the borrowed-control legend. Labels and binding names are separated
// so the two can be drawn in different colours, which is the only thing that
// makes a long line of borrowed controls scannable.
//
// `starts_control` marks the label that opens a control. It is where a row may
// break and where the gap between two controls goes, so a control's label is
// never left on one row with its binding names on the next.
struct HelpSeg {
    char text[48];
    bool is_key;
    bool starts_control;
};

// Headroom over what the full line uses: 22, being a label and its names for
// each of pan, zoom, the other floors, recentring, the legend and CLOSE, plus
// the spaces inside a control that has more than one name.
//
// help_push drops segments silently once the cap is reached, so a cap the line
// can reach loses controls off the end without saying so. Recount when adding
// one.
const int kHelpSegMax = 40;

// Gap between two controls sharing a row, at 640x480 and scaled by ui. A pixel
// gap rather than spaces in the label, so a control that starts a row starts at
// the row's own left edge.
const int kHelpControlGap = 14;

// Longest common prefix of a set of binding names, cut back to a word boundary.
//
// A device that names each direction of one control in full gives four pan
// bindings that share a prefix, and the legend can say that once instead of
// four times. Nothing here asks what the device is: the names come from
// getKeyDisplayName and the saving is discovered in them. A keyboard's names
// share nothing, so the collapse simply does not apply and the full form is
// used -- which is the behaviour a keyboard wants anyway.
int common_prefix_len(const char names[][40], int count)
{
    int n = 0;
    bool same = true;

    if (count < 2) { return 0; }
    while (names[0][n] != '\0' && same) {
        for (int i = 1; i < count; i++) {
            if (names[i][n] != names[0][n]) { same = false; break; }
        }
        if (same) { n++; }
    }
    // Whole words only, and without the separating space.
    while (n > 0 && names[0][n - 1] != ' ') { n--; }
    while (n > 0 && names[0][n - 1] == ' ') { n--; }
    return n;
}

void help_push(HelpSeg *segs, int *count, const char *text, bool is_key,
               bool starts_control)
{
    if (*count >= kHelpSegMax || text[0] == '\0') { return; }
    std::snprintf(segs[*count].text, sizeof(segs[*count].text), "%s", text);
    segs[*count].is_key = is_key;
    segs[*count].starts_control = starts_control;
    (*count)++;
}

// One borrowed control: its label, then the binding names that drive it.
//
// Two or more names collapse to the prefix they share when there is one --
// which is how a pad's four pan bindings become a single "Left Stick". Names
// that share nothing print in full, since there is no shorter true form of
// "LB RB", and a keyboard shares nothing anywhere, which is the behaviour a
// keyboard wants.
void help_push_control(HelpSeg *segs, int *count, const char *label,
                       const char names[][40], int name_count)
{
    help_push(segs, count, label, false, true);

    const int shared = common_prefix_len(names, name_count);
    if (shared > 0) {
        char shortened[40];
        std::snprintf(shortened, sizeof(shortened), "%.*s", shared, names[0]);
        help_push(segs, count, shortened, true, false);
        return;
    }
    for (int i = 0; i < name_count; i++) {
        if (i > 0) { help_push(segs, count, " ", false, false); }
        help_push(segs, count, names[i], true, false);
    }
}

// Every borrowed control, in full. Nothing is dropped for width -- the layout
// wraps instead, so a 640x480 screen gets the same controls a 3840 one does
// over however many rows it takes. A line that drops controls to fit hides the
// ones a player is least likely to guess, which is the wrong end to lose.
int build_help_segments(HelpSeg *segs)
{
    CGame *g = g_CGamePtr;
    int count = 0;

    if (g == (CGame *)nullptr) { return 0; }

    // getKeyDisplayName hands back one shared buffer, so each name has to be
    // taken before the next call overwrites it.
    char pan[4][40], zoom[2][40], floors[2][40];
    char centre[1][40], key[1][40], open[1][40];
    strcpy(pan[0], core_menu_cpp_getKeyDisplayName_FUN_005134e0(g->key_walk));
    strcpy(pan[1], core_menu_cpp_getKeyDisplayName_FUN_005134e0(g->key_backup));
    strcpy(pan[2], core_menu_cpp_getKeyDisplayName_FUN_005134e0(g->key_strafe_left));
    strcpy(pan[3], core_menu_cpp_getKeyDisplayName_FUN_005134e0(g->key_strafe_right));
    strcpy(zoom[0], core_menu_cpp_getKeyDisplayName_FUN_005134e0(g->key_next_weapon));
    strcpy(zoom[1], core_menu_cpp_getKeyDisplayName_FUN_005134e0(g->key_prev_weapon));
    strcpy(floors[0], core_menu_cpp_getKeyDisplayName_FUN_005134e0(g->key_fire));
    strcpy(floors[1], core_menu_cpp_getKeyDisplayName_FUN_005134e0(g->key_draw));
    strcpy(centre[0], core_menu_cpp_getKeyDisplayName_FUN_005134e0(g->key_run));
    strcpy(key[0], core_menu_cpp_getKeyDisplayName_FUN_005134e0(g->key_item_desc));
    strcpy(open[0], core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_key_binding));

    help_push_control(segs, &count, "PAN ",    pan,    4);
    help_push_control(segs, &count, "ZOOM ",   zoom,   2);
    help_push_control(segs, &count, "FLOORS ", floors, 2);
    help_push_control(segs, &count, "CENTRE ", centre, 1);
    help_push_control(segs, &count, "LEGEND ", key,    1);
    help_push_control(segs, &count, "CLOSE ",  open,   1);
    return count;
}

// Where each segment lands once the controls are wrapped to the width.
struct HelpLayout {
    int rows;
    int row[kHelpSegMax];
    int x[kHelpSegMax];
};

// Flow the controls into as many rows as they need, breaking only between
// controls so a label never ends a row with its binding names starting the
// next. Each row is centred on its own width, and a control wider than the
// whole screen still gets a row rather than being dropped.
void help_layout(HelpLayout *out, const HelpSeg *segs, int count, int ui,
                 int avail)
{
    int i;
    int pen = 0;

    out->rows = (count > 0) ? 1 : 0;

    for (i = 0; i < count; i++) {
        if (segs[i].starts_control && i > 0) {
            // Width of the control opening here, so the decision to wrap is
            // made once for the whole of it rather than part way through.
            int w = 0;
            int j;
            for (j = i; j < count && (j == i || !segs[j].starts_control); j++) {
                w += nocturne_ui_text_width(g_ThemeFont, (char *)segs[j].text, ui);
            }
            if (pen + kHelpControlGap * ui + w > avail) {
                out->rows++;
                pen = 0;
            } else {
                pen += kHelpControlGap * ui;
            }
        }
        out->row[i] = out->rows - 1;
        out->x[i]   = pen;
        pen += nocturne_ui_text_width(g_ThemeFont, (char *)segs[i].text, ui);
    }

    // Centre each row on its own width. Done as a second pass because a row's
    // width is not known until the row after it has begun.
    for (i = 0; i < count; ) {
        int end = i;
        int width;
        int shift;
        while (end < count && out->row[end] == out->row[i]) { end++; }
        width = out->x[end - 1] +
                nocturne_ui_text_width(g_ThemeFont, (char *)segs[end - 1].text, ui);
        shift = (avail - width) / 2;
        if (shift < 0) { shift = 0; }
        for (; i < end; i++) { out->x[i] += shift; }
    }
}

// See the note above legend_fitting_scale for why the block is not simply drawn
// at the HUD scale.
int help_fitting_scale(const HelpSeg *segs, int count, int ui, int avail)
{
    HelpLayout probe;
    for (int scale = ui; scale >= 1; scale--) {
        help_layout(&probe, segs, count, scale, avail);
        if (probe.rows <= 1) { return scale; }
    }
    return ui;
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
    g_recentre_was_down = false;
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
    // An open map is closed rather than left standing when there is nothing to
    // service it with. Both of these mean the session is being torn down around
    // it, and a map still open at that point is the last thing painted and
    // stays under whatever screen is drawn next.
    if (g_cube_count == 0) { g_open = false; return; }
    CDemonActor *hero = local_hero();
    if (hero == nullptr) { g_open = false; return; }

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
    // Death is not part of that test and has to be its own: hero_controls_blocked
    // is the script's allowHeroControls, which a death never touches, so without
    // this the map opens over the dying animation, the "You're dead" banner and
    // the closing iris -- and stays open into the Game Over menu.
    CGame *gate = g_CGamePtr;
    if (hero_is_down(hero) ||
        (gate != nullptr &&
         (g_ModalDialogActive != 0 || gate->is_paused != 0 ||
          gate->hero_controls_blocked != 0))) {
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
            g_legend = false;        // and the heading, not the marker key
            // Primed from the button's real state, so one already held as the
            // map comes up is not read as a fresh press on the first frame.
            g_legend_was_down = (g_CGamePtr != nullptr) &&
                                down(g_CGamePtr->key_item_desc);
            g_recentre_was_down = (g_CGamePtr != nullptr) &&
                                  down(g_CGamePtr->key_run);
            g_zoom = (float)g_zoom_percent * 0.01f;
            if (g_zoom < kZoomMin) g_zoom = kZoomMin;
            if (g_zoom > kZoomMax) g_zoom = kZoomMax;
        }
    }
    g_key_was_down = key_now;
    if (!g_open) return;

    CGame *g = g_CGamePtr;
    const float dt = g->delta_time_float;

    // Analogue first. The pad shim hands the sticks over already deadzoned and
    // rescaled to -1..1, so a gentle push pans slowly and a hard one fast --
    // which is the whole reason to read a stick as an axis rather than through
    // the four digital codes it also synthesises. The triggers come over raw.
    //
    // Neither right-stick axis is requested: nothing on this screen reads one.
    float move_x = 0.0f, move_y = 0.0f;
    float trig_l = 0.0f, trig_r = 0.0f;
    nocturne_gamepad_axes(&move_x, &move_y, nullptr, nullptr, &trig_l, &trig_r);
    if (trig_l < kDimDeadzone) trig_l = 0.0f;
    if (trig_r < kDimDeadzone) trig_r = 0.0f;

    // Pan is the left stick, which on a pad is walk/backup and strafe, so the
    // digital fallback reads exactly those bindings and nothing else.
    //
    // key_left / key_right and key_point_up / key_point_down are the right
    // stick's two axes, and key_next_ammo / key_weapon_5 are the d-pad's
    // vertical pair. None of them is read anywhere on this screen.
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

    // Recentre the view on the hero, on key_run -- the left stick's own button
    // on a pad, which puts it under the thumb that moved the view away.
    //
    // Pan only. Elevation has a control of its own, and the question this
    // answers is where the hero is on the floor being looked at.
    const bool recentre_now = down(g->key_run);
    if (recentre_now && !g_recentre_was_down) {
        g_pan_x = p.x;
        g_pan_z = p.z;
    }
    g_recentre_was_down = recentre_now;

    // Zoom is the weapon-cycle pair, the two bumpers on a pad: next zooms in,
    // previous zooms out.
    //
    // Digital only. These are buttons, so there is no axis to read and nothing
    // to blend an analogue reading against.
    float zoom_axis = 0.0f;
    if (down(g->key_next_weapon)) zoom_axis += 1.0f;
    if (down(g->key_prev_weapon)) zoom_axis -= 1.0f;

    if (zoom_axis != 0.0f) {
        // Multiplicative, so each step is the same proportion of the current
        // scale and zooming feels even across the whole range.
        g_zoom *= 1.0f + kZoomRate * zoom_axis * dt;
    }
    if (g_zoom < kZoomMin) g_zoom = kZoomMin;
    if (g_zoom > kZoomMax) g_zoom = kZoomMax;
    g_zoom_percent = (int)(g_zoom * 100.0f + 0.5f);

    // How brightly the storeys outside the band draw, on key_fire and key_draw
    // -- the two triggers on a pad. Right brings the other floors up to the
    // band's own brightness, left takes them down to unlit.
    //
    // Analogue, so a part-pulled trigger sweeps slowly, with the digital codes
    // consulted only when both triggers read released. The pad synthesises
    // those codes from the same axes past its own press threshold, so blending
    // the two would turn any pull past that point into a full-speed one.
    float dim_axis = trig_r - trig_l;
    if (dim_axis == 0.0f) {
        if (down(g->key_fire)) dim_axis += 1.0f;
        if (down(g->key_draw)) dim_axis -= 1.0f;
    }
    if (dim_axis != 0.0f) {
        g_other_dim += dim_axis * kDimRate * dt;
        if (g_other_dim < 0.0f) g_other_dim = 0.0f;
        if (g_other_dim > 1.0f) g_other_dim = 1.0f;
    }

    // The marker key, on the item-description binding (Guide on a pad). The
    // action already means "describe what I am looking at", and no item is in
    // hand while the map is up. Borrowed rather than bound, like pan and zoom,
    // since g_CustomKeyNames has no spare row.
    //
    // Edge-triggered, for the same reason the map key is.
    const bool legend_now = down(g->key_item_desc);
    if (legend_now && !g_legend_was_down) { g_legend = !g_legend; }
    g_legend_was_down = legend_now;
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
// See automap.h. Only the laser pool needs this: it is the one piece of the
// effect state that renderScene writes and process clears, so freezing process
// alone leaves it growing. Everything else CFireEffect::process touches is
// advanced there and read there, and stopping both is what freezing means.
extern "C" void nocturne_automap_clear_frame_effects(void)
{
    g_LaserBeamActiveCount = 0;
}

extern "C" int *nocturne_automap_key_binding(void) { return &g_key_binding; }

extern "C" void nocturne_automap_apply_default_binding(void)
{
    g_key_binding = DIK_M;
}
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

    // Heading: the running mission's chapter title, localized, so it matches
    // what the story screens call the level.
    //
    // Falls back to "MAP" when there is no title to look up -- an editor
    // mission, or any .MSN outside the shipped set.
    char title[128];
    char *place = (g_CDemonMissionPtr != (CDemonMission *)nullptr)
                      ? nocturne_chapter_environment_name(
                            g_CDemonMissionPtr->mission_name)
                      : (char *)nullptr;

    if (place != (char *)nullptr && place[0] != '\0') {
        std::snprintf(title, sizeof(title), "%s   %d%%%s", place,
                      nocturne_automap_explored_percent(),
                      g_complete ? "   COMPLETE" : "");
    } else {
        std::snprintf(title, sizeof(title), "MAP  %d%%%s",
                      nocturne_automap_explored_percent(),
                      g_complete ? "  COMPLETE" : "");
    }

    // Padding above and below the contents of a band.
    const int pad = 4 * ui;

    // Both bands are laid out here, before the map window, because both decide
    // how tall they are and the map takes whatever is left. Each can need more
    // than one row.
    // Each at the largest scale that keeps it on one row, which is not always
    // the HUD's -- see legend_fitting_scale. The title is not fitted down: it is
    // a few words and fits at every mode's HUD scale.
    const int avail = g_WindowWidth - kMargin * 2;

    HelpSeg help[kHelpSegMax];
    HelpLayout help_rows;
    int help_ui = ui;
    const int help_count = build_help_segments(help);
    if (help_count > 0) {
        help_ui = help_fitting_scale(help, help_count, ui, avail);
        help_layout(&help_rows, help, help_count, help_ui, avail);
    }

    LegendLayout legend;
    int legend_ui = ui;
    if (g_legend) {
        legend_ui = legend_fitting_scale(ui, avail);
        legend_layout(&legend, legend_ui, avail);
    }

    int title_h = nocturne_ui_text_height(g_ThemeFont, title, ui);
    if (title_h <= 0) title_h = 12 * ui;
    // Any segment measures a row; the first is always a label.
    int help_h = (help_count > 0)
                     ? nocturne_ui_text_height(g_ThemeFont, help[0].text, help_ui)
                     : 0;
    if (help_count > 0 && help_h <= 0) help_h = 12 * help_ui;

    int top_band = (g_legend ? legend.rows * legend.row_h : title_h) + pad * 2;
    int bottom_band = (help_h > 0) ? help_h * help_rows.rows + pad * 2 : kMargin;
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

    // The drawn band. It is the player's own floor and nothing moves it: every
    // other storey is reachable by brightening it instead.
    const float lo = p.y - kBandBelow, hi = p.y + kBandAbove;

    // +Z away from the viewer, so it is flipped: a map reads north-up.
    #define AM_PX(wx) (cx + (int)(((wx) - g_pan_x) * scale))
    #define AM_PY(wz) (cy - (int)(((wz) - g_pan_z) * scale))

    // Every material's line colour, resolved once. pick_color searches the
    // whole palette, so asking it per segment would be a 256-entry scan per
    // line drawn.
    int ground_color[kGroundTypeCount];
    int ground_dim[kGroundTypeCount];
    for (int g = 0; g < kGroundTypeCount; g++) {
        ground_color[g] = pick_color(kGroundRGB[g], color_wall);
        const int rgb[3] = { (int)((float)kGroundRGB[g][0] * g_other_dim + 0.5f),
                             (int)((float)kGroundRGB[g][1] * g_other_dim + 0.5f),
                             (int)((float)kGroundRGB[g][2] * g_other_dim + 0.5f) };
        ground_dim[g] = pick_color(rgb, color_faded);
    }

    int last_color = -1;

    // The storeys the band does not cover, first and dimmed, so the floor the
    // band is on draws over them and stays the brightest thing on the map.
    //
    // They keep to the fog like everything else -- an unwalked cell is unlit at
    // any brightness -- so this shows what has already been earned from another
    // floor rather than reading the level through it.
    //
    // At zero they are not drawn at all, which is the one storey the map was
    // built around; at one they draw in their own material's full colour and
    // the whole level reads at once. The scaling is on the colour rather than a
    // second palette entry, so a wall keeps its material's hue as it fades.
    if (g_other_dim > 0.0f) {
        for (size_t i = 0; i < g_segments.size(); i++) {
            const Segment &s = g_segments[i];
            if (!g_complete && !revealed(s.cube)) continue;
            if (s.y >= lo && s.y <= hi) continue;

            const int col = ground_dim[s.ground];
            if (col != last_color) {
                g_ActiveRenderColor = col;
                last_color = col;
            }
            engine_2d_c_clipAndDrawLine_FUN_00402ca0(
                AM_PX(s.x1), AM_PY(s.z1), AM_PX(s.x2), AM_PY(s.z2),
                x0, y0, x1, y1);
        }
    }

    // The band's own storey, at full brightness.
    //
    // Each wall draws in its own material's colour, so stone, wood, glass and
    // water read apart without the map gaining a second layer to look through.
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
        const int color_halo        = pick_color(kHaloRGB,       color_wall);
        const int color_item        = pick_color(kItemRGB,       color_wall);
        const int color_chest       = pick_color(kChestRGB,      color_wall);

        // Every class-keyed colour, resolved once. pick_color scans the whole
        // palette, so calling it per actor would be a 256-entry search per
        // marker drawn -- the same reason the material colours are resolved
        // above rather than per segment.
        //
        // Radii come through the same array, pre-multiplied by the UI scale, so
        // no call site below can omit it.
        int marker_color[kMarkerCount];
        int marker_radius[kMarkerCount];
        for (int m = 0; m < kMarkerCount; m++) {
            marker_color[m]  = pick_color(k_markers[m].rgb, color_wall);
            marker_radius[m] = k_markers[m].radius * ui;
        }

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

            // The class's colour and shape, most-derived first. State-dependent
            // presentation is decided below: a locked door and a free one are
            // the same class.
            const int row = marker_index(a);

            CDoor *door = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c790(
                                       a, g_CDoorClassInfo.name_hash);
            if (door != (CDoor *)nullptr) {
                if (!g_complete && !revealed(cube_at(ap))) continue;
                const int door_color =
                    (door->door_state != DOOR_STATE_CLOSED) ? color_door_open
                    : door_is_passable(door, (CHero *)hero) ? color_door_free
                                                            : color_door_locked;
                draw_marker(MARK_BOX, door_color, color_halo,
                            mx, my, kDoorRadius * ui, x0, y0, x1, y1);
                continue;
            }

            CCharacter *ch = (CCharacter *)core_actor_cpp_castToClassHash_FUN_0040c790(
                                               a, g_CCharacterClassInfo.name_hash);
            if (ch == (CCharacter *)nullptr) {
                // Anything the hero could pick up or search, asked of the actor
                // itself rather than matched against a list of class names.
                // canPickup is the same query CHero's interaction path runs and
                // is pure -- the base returns 0 after a pointer check and no
                // override plays a sound or prints anything, unlike the door's
                // getMoveType above. Its answer is the Pickup type enum, shared
                // by every class that implements it: 0 Can't, 1 Rummage,
                // 2 Inventory, 3 Carry, 4 Heavy.
                //
                // Rummage is a container to search (an ammo box, a rummage-type
                // CBoxActor); Inventory and Carry are things that leave with
                // you; Heavy is a crate you shove, which is scenery for map
                // purposes and stays unmarked.
                const int kind = (*((a->vtable)._ub)->canPickup)(a, hero);
                if (kind != 1 && kind != 2 && kind != 3) continue;

                // Static world objects, so they follow the same rule the walls
                // and doors do: once the room has been explored they stay on
                // the map. A dropped item in a room you have never entered is
                // not something the map should be telling you about.
                if (!g_complete && !revealed(cube_at(ap))) continue;

                // A class with a marker of its own uses it. CBodyPart::canPickup
                // returns Carry, the same value a rifle gives, so without a row
                // body parts would draw as equipment.
                //
                // Anything else is drawn from what can be done with it, which is
                // all the map knows about a class with no row: a container to
                // search, or an item to carry off.
                if (row >= 0) {
                    draw_marker(k_markers[row].shape, marker_color[row],
                                color_halo, mx, my, marker_radius[row],
                                x0, y0, x1, y1);
                } else if (kind == 1) {
                    draw_marker(MARK_CHEST, color_chest, color_halo,
                                mx, my, kChestRadius * ui, x0, y0, x1, y1);
                } else {
                    draw_marker(MARK_DIAMOND, color_item, color_halo,
                                mx, my, kItemRadius * ui, x0, y0, x1, y1);
                }
                continue;
            }
            if (ch->hit_points <= 0.0f) continue;

            // CEnemy is a class in its own right, with CMobster, CGhoul and the
            // rest deriving from it, so hostility is the engine's own
            // classification rather than a name list maintained here. Same
            // castToClassHash the door and hero cases use.
            //
            // This decides the visibility rule only -- hostiles draw from line
            // of sight, everything else from the fog. Colour comes from the
            // table.
            //
            // Kept as its own is-a test rather than comparing `row` against
            // CEnemy's row: a row added for a leaf class such as CWerewolf wins
            // the lookup while still being an enemy, and testing the row would
            // then apply the fog rule to it.
            const bool hostile = core_actor_cpp_castToClassHash_FUN_0040c790(
                                     a, g_CEnemyClassInfo.name_hash) != (CDemonActor *)nullptr;
            if (hostile) {
                if (!in_sight(eye, ap)) continue;
            } else if (!g_complete && !revealed(cube_at(ap))) {
                continue;
            }

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
            }

            // Hero, enemy or neither, from the one table. A character always
            // matches CCharacter's row at minimum, since that cast is what
            // reached this branch.
            if (row >= 0) {
                draw_marker(k_markers[row].shape, marker_color[row], color_halo,
                            mx, my, marker_radius[row], x0, y0, x1, y1);
            }
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
            // A teammate, so explored rather than in view -- same rule as the
            // friendly characters above.
            if (!g_complete && !revealed(cube_at(mp))) continue;

            // Resolved per teammate rather than reusing the local hero's row:
            // the party is not all one class, so a row added for one hero class
            // must not be applied to the others.
            const int mate_row = marker_index((CDemonActor *)mate);
            if (mate_row >= 0) {
                draw_marker(k_markers[mate_row].shape, marker_color[mate_row],
                            color_halo, mx, my, marker_radius[mate_row],
                            x0, y0, x1, y1);
            }
        }
    }

    // The player last, as a filled disc with a dark halo beneath it and a pale
    // core. A bare dot in the wall colour is lost in a dense room, and a thin
    // cross is little better. It is the reference every other position on
    // screen is read against.
    const int hx = AM_PX(p.x), hy = AM_PY(p.z);
    for (int ring = 0; ring < 3; ring++) {
        g_ActiveRenderColor = (ring == 0) ? pick_color(kHaloRGB, color_wall)
                            : (ring == 1) ? color_player
                                          : pick_color(kCoreRGB, color_player);
        fill_disc(hx, hy, kPlayerRings[ring] * ui, x0, y0, x1, y1);
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
    if (g_legend) {
        // Swatches go through draw_marker, the call the map itself uses, so a
        // key entry stays consistent with the marker it explains. Clipped to
        // the heading band rather than the map window: the band sits above y0,
        // where the map starts.
        const int band_y1 = (top_band < g_WindowHeight) ? top_band
                                                        : g_WindowHeight;
        // legend_ui throughout, matching the scale the layout was measured at.
        // The swatch radii take it too: a key drawn at the HUD scale beside text
        // fitted down to the width would not be the vocabulary it is explaining.
        const int text_h = nocturne_ui_text_height(g_ThemeFont, (char *)"YOU",
                                                   legend_ui);

        for (int i = 0; i < legend.count; i++) {
            const LegendItem *it = legend.item[i];
            const int row_top = pad + legend.row[i] * legend.row_h;
            const int r = it->radius * legend_ui;
            int pen = x0 + legend.x[i];

            draw_marker(it->shape, pick_color(it->rgb, color_wall),
                        pick_color(kHaloRGB, color_wall),
                        pen + r, row_top + legend.row_h / 2, r,
                        x0, 0, x1, band_y1);
            pen += 2 * r + 1 + kLegendGlyphGap * legend_ui;

            nocturne_ui_draw_text(g_ThemeFont, (char *)it->label, pen,
                                  row_top + (legend.row_h - text_h) / 2,
                                  color_wall, -1, legend_ui);
        }
    } else {
        nocturne_ui_draw_text(g_ThemeFont, title, x0, (top_band - title_h) / 2,
                              color_wall, -1, ui);
    }

    if (help_count > 0) {
        // Each row centred on its own width, so the block sits under the middle
        // of the map rather than trailing off one side. The labels are dim --
        // they are a reminder, not part of the map -- and the binding names take
        // the map's own colour, so the thing the player is actually looking for
        // is the thing that stands out.
        const int help_y = y1 + (bottom_band - help_h * help_rows.rows) / 2;
        for (int i = 0; i < help_count; i++) {
            char *text = help[i].text;
            nocturne_ui_draw_text(g_ThemeFont, text, x0 + help_rows.x[i],
                                  help_y + help_rows.row[i] * help_h,
                                  help[i].is_key ? color_wall : color_faded, -1,
                                  help_ui);
        }
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

extern "C" void nocturne_automap_save(_FILE *f)
{
    if (f == nullptr || g_cube_count == 0) return;

    CDemonRaytrace *rt = &g_CDemonRaytraceInstance;
    _fprintf(f, "Automap\n");
    _fprintf(f, "%s\n", g_CDemonSetInstance.geometry_filename);
    _fprintf(f, "%d,%d,%d,%d\n", rt->grid_coord.x, rt->grid_coord.y,
             rt->grid_coord.z, g_complete ? 1 : 0);

    int runs = 0;
    for (int c = 0; c < g_cube_count; ) {
        const bool v = revealed(c);
        int n = 0;
        while (c + n < g_cube_count && revealed(c + n) == v) n++;
        _fprintf(f, "%d ", n);
        c += n;
        if (++runs % 20 == 0) _fprintf(f, "\n");
    }
    _fprintf(f, "\n");
}

// Reading is split in two because the save file is closed before the level it
// describes exists. CGame::loadGame parses its sections, closes the file, and
// only then calls CDemonMission::run, which reaches CDemonSet::load and the
// reset that rebuilds this grid -- so anything applied at parse time is either
// wiped by that reset or matched against the OUTGOING level's dimensions. The
// block is therefore staged here and applied once the level is up.
struct PendingMap {
    bool valid;
    char geo[64];
    int  gx, gy, gz;
    int  complete;
    std::vector<int> runs;
};

PendingMap g_pending;

extern "C" void nocturne_automap_load(_FILE *f)
{
    // Cleared on every read, so a save with no block cannot be handed the
    // previous save's staged data.
    g_pending.valid = false;
    g_pending.runs.clear();

    if (f == nullptr) { return; }

    char tag[64];
    if (_fscanf(f, "%63s\n", tag) != 1) { return; }   // EOF: pre-Automap save
    if (std::strcmp(tag, "Automap") != 0) { return; }

    if (_fscanf(f, "%63s\n", g_pending.geo) != 1) { return; }
    if (_fscanf(f, "%d,%d,%d,%d\n", &g_pending.gx, &g_pending.gy,
                &g_pending.gz, &g_pending.complete) != 4) {
        return;
    }

    int n = 0;
    while (_fscanf(f, "%d", &n) == 1) {
        g_pending.runs.push_back(n);
    }
    g_pending.valid = true;
}

extern "C" void nocturne_automap_apply_loaded(void)
{
    // Unexplored first, always. A save written before the block existed, a save
    // from another level, and a corrupt block all mean the same thing: this
    // level has not been walked. Leaving the previous state in place is what
    // made a reloaded save look already-explored.
    std::fill(g_revealed.begin(), g_revealed.end(), 0);
    g_complete = false;

    const bool staged = g_pending.valid;
    PendingMap p;
    if (staged) { p = g_pending; }
    g_pending.valid = false;
    g_pending.runs.clear();

    if (!staged || g_cube_count == 0) { recount_explored(); return; }

    // A changed .GEO invalidates cleanly rather than smearing one level's
    // explored cells over another's grid.
    CDemonRaytrace *rt = &g_CDemonRaytraceInstance;
    if (p.gx != rt->grid_coord.x || p.gy != rt->grid_coord.y ||
        p.gz != rt->grid_coord.z ||
        std::strcmp(p.geo, g_CDemonSetInstance.geometry_filename) != 0) {
        recount_explored();
        return;
    }

    bool v = false;
    int c = 0;
    for (size_t r = 0; r < p.runs.size() && c < g_cube_count; r++) {
        const int n = p.runs[r];
        if (v) {
            for (int i = 0; i < n && c + i < g_cube_count; i++) {
                const int k = c + i;
                g_revealed[(size_t)k >> 3] |= (unsigned char)(1u << (k & 7));
            }
        }
        c += n;
        v = !v;
    }
    g_complete = (p.complete != 0);
    recount_explored();
}

#else   // NOCTURNE_AUTHENTIC_AUTOMAP

extern "C" void nocturne_automap_reset(void) {}
extern "C" void nocturne_automap_update(void) {}
extern "C" int  nocturne_automap_active(void) { return 0; }
extern "C" void nocturne_automap_render(void) {}
extern "C" void nocturne_automap_save(_FILE *file) { (void)file; }
extern "C" void nocturne_automap_load(_FILE *file) { (void)file; }
extern "C" void nocturne_automap_apply_loaded(void) {}
extern "C" int  nocturne_automap_explored_percent(void) { return 0; }
extern "C" int  nocturne_automap_owns_controls(void) { return 0; }
extern "C" int  nocturne_automap_freezes_world(void) { return 0; }
extern "C" void nocturne_automap_clear_frame_effects(void) {}
extern "C" int  nocturne_automap_handle_cancel(void) { return 0; }
extern "C" int *nocturne_automap_key_binding(void) { static int none = 0; return &none; }
extern "C" void nocturne_automap_apply_default_binding(void) {}
extern "C" int *nocturne_automap_zoom_setting(void) { static int none = 100; return &none; }
extern "C" char *nocturne_automap_key_label(void) { static char none[1] = ""; return none; }

#endif  // NOCTURNE_AUTHENTIC_AUTOMAP
