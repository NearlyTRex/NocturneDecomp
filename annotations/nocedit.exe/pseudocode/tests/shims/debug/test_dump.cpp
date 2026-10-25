// =============================================================================
// DUMP TOOLS — engine state written to disk, from gdb
// =============================================================================
//
// Each tool writes what it reads to the path it is given: images of the frame
// and depth buffers with their statistics, tables of actors, collision cubes,
// lighting and bake checksums, creation gates and flames, and the presented
// frame. What matters is that what is written is what the engine holds, that
// the statistics and the cases they name (an empty buffer, a NaN normal, a
// bone off unit length) come out where they apply, and that nothing is
// written, and -1 answered, when there is nowhere to write it. The engine is
// stood in for by dump_support.h; the cases run in a directory of their own.

#include "debug/dump.h"
#include "dump_support.h"
#include "nocturne.h"
#include "nocturne_test.h"

#include <cmath>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

namespace {

namespace fs = std::filesystem;
using dump_support::stand;

// Nowhere to write: a directory that is not there.
const char kNowhere[] = "no_such_dir/out.txt";

void enter_directory() {
    static bool entered = false;
    if (entered)
        return;
    entered = true;
    std::error_code ec;
    const fs::path root = fs::temp_directory_path(ec) / "nocturne_dump_test";
    fs::remove_all(root, ec);
    fs::create_directories(root, ec);
    fs::current_path(root, ec);
}

void start() {
    enter_directory();
    stand.reset();
}

// A file's bytes, for images and raw sound.
std::string read_bytes(const std::string &path) {
    std::ifstream in(path, std::ios::binary);
    std::stringstream text;
    text << in.rdbuf();
    return text.str();
}

// A text file's lines, whichever line ending the host writes text files with.
std::string read(const std::string &path) {
    std::string text = read_bytes(path);
    std::string lines;
    for (char c : text) {
        if (c != '\r')
            lines += c;
    }
    return lines;
}

bool has(const std::string &text, const std::string &part) {
    return text.find(part) != std::string::npos;
}

// A sidecar that cannot be written, because a directory has its name.
void block(const std::string &path) {
    std::error_code ec;
    fs::create_directories(path, ec);
}

void name(CDemonActor &actor, const char *text) {
    strncpy(actor.actor_name, text, 32);
}

} // namespace

// -----------------------------------------------------------------------------
// The frame and depth buffers
// -----------------------------------------------------------------------------

// A 32-bit frame comes out as RGB, with its brightness histogram and the box
// round what was drawn; a 16-bit one is widened from 565.
NOCTURNE_TEST(the_frame_buffer_is_written_with_its_histogram) {
    start();
    // B, G, R, A: black, bright red, dim blue, mid green.
    unsigned char frame32[4 * 4] = {0, 0, 0, 0, 0, 0, 200, 0, 20, 0, 0, 0, 0, 100, 0, 0};
    g_BackBuffer = frame32;
    g_BitsPerPixel = 32;
    g_WindowWidth = 2;
    g_WindowHeight = 2;
    CHECK_EQ(nocturne_dump_screenshot("frame.ppm"), 0);
    const std::string image = read_bytes("frame.ppm");
    CHECK(has(image, "P6\n2 2\n255\n"));
    CHECK_EQ((unsigned char)image[image.size() - 2], 100); // the last pixel's green
    const std::string meta = read("frame.ppm.txt");
    CHECK(has(meta, "zero (all channels=0):  1"));
    CHECK(has(meta, "dim (max 1..31):        1"));
    CHECK(has(meta, "mid (max 32..127):      1"));
    CHECK(has(meta, "bright (max 128..255):  1"));
    CHECK(has(meta, "max channel value:      200"));
    CHECK(has(meta, "nonzero bbox: x=[0..1] y=[0..1]"));

    // 565 white widens to 255s; all black has no box.
    unsigned short frame16[2] = {0xffff, 0x0000};
    g_BackBuffer = frame16;
    g_BitsPerPixel = 16;
    g_WindowHeight = 1;
    CHECK_EQ(nocturne_dump_screenshot("frame16.ppm"), 0);
    CHECK_EQ((unsigned char)read_bytes("frame16.ppm")[11], 255);
    unsigned short black[2] = {0, 0};
    g_BackBuffer = black;
    CHECK_EQ(nocturne_dump_screenshot("black.ppm"), 0);
    CHECK(has(read("black.ppm.txt"), "<none"));
}

// No path, no buffer, a depth it does not read, or nowhere to write: -1. A
// sidecar that cannot be written leaves the image.
NOCTURNE_TEST(a_frame_buffer_that_cannot_be_written_is_not) {
    start();
    unsigned char pixel[4] = {};
    g_WindowWidth = 1;
    g_WindowHeight = 1;
    g_BitsPerPixel = 32;
    g_BackBuffer = nullptr;
    CHECK_EQ(nocturne_dump_screenshot("x.ppm"), -1);
    g_BackBuffer = pixel;
    CHECK_EQ(nocturne_dump_screenshot(nullptr), -1);
    CHECK_EQ(nocturne_dump_screenshot(kNowhere), -1);
    g_BitsPerPixel = 24;
    CHECK_EQ(nocturne_dump_screenshot("x.ppm"), -1);
    g_BitsPerPixel = 32;
    block("sidecarless.ppm.txt");
    CHECK_EQ(nocturne_dump_screenshot("sidecarless.ppm"), 0);
    CHECK(fs::exists("sidecarless.ppm"));
    // A window of nothing is an image of nothing.
    g_WindowWidth = 0;
    CHECK_EQ(nocturne_dump_screenshot("empty.ppm"), 0);
    CHECK(has(read("empty.ppm.txt"), "total pixels:           0"));
}

// Depth is normalised between the nearest and farthest touched, untouched is
// black, and a row with no buffer is black too.
NOCTURNE_TEST(the_depth_buffer_is_written_normalised) {
    start();
    unsigned int row0[3] = {0, 100, 300};
    unsigned int row2[3] = {300, 0, 0};
    g_ZBufferScanlineArray[0] = row0;
    g_ZBufferScanlineArray[1] = nullptr;
    g_ZBufferScanlineArray[2] = row2;
    g_WindowWidth = 3;
    g_WindowHeight = 3;
    CHECK_EQ(nocturne_dump_zbuffer("depth.ppm"), 0);
    const std::string image = read_bytes("depth.ppm");
    const size_t start_at = image.size() - 27;
    CHECK_EQ((unsigned char)image[start_at + 0], 0);  // untouched
    CHECK_EQ((unsigned char)image[start_at + 3], 85); // 100 of 0..300
    CHECK_EQ((unsigned char)image[start_at + 6], 255);
    CHECK_EQ((unsigned char)image[start_at + 9], 0); // a row with no buffer
    const std::string meta = read("depth.ppm.txt");
    CHECK(has(meta, "touched (d!=0):  3"));
    CHECK(has(meta, "touched bbox: x=[0..2] y=[0..2]"));
    g_ZBufferScanlineArray[2] = nullptr;
    CHECK(has(meta, "max depth: 0x0000012c"));

    // Every pixel at one depth: nothing to spread between.
    unsigned int flat[3] = {7, 7, 7};
    g_ZBufferScanlineArray[0] = flat;
    g_WindowHeight = 1;
    CHECK_EQ(nocturne_dump_zbuffer("flat.ppm"), 0);
    unsigned int none[3] = {0, 0, 0};
    g_ZBufferScanlineArray[0] = none;
    CHECK_EQ(nocturne_dump_zbuffer("none.ppm"), 0);
    CHECK(has(read("none.ppm.txt"), "<entire z-buffer is zero"));
    block("noside.ppm.txt");
    CHECK_EQ(nocturne_dump_zbuffer("noside.ppm"), 0);

    CHECK_EQ(nocturne_dump_zbuffer(nullptr), -1);
    CHECK_EQ(nocturne_dump_zbuffer(kNowhere), -1);
    g_WindowWidth = 0;
    CHECK_EQ(nocturne_dump_zbuffer("x.ppm"), -1);
    g_WindowWidth = 3;
    g_WindowHeight = 0;
    CHECK_EQ(nocturne_dump_zbuffer("x.ppm"), -1);
    g_ZBufferScanlineArray[0] = nullptr;
}

// -----------------------------------------------------------------------------
// Actors
// -----------------------------------------------------------------------------

// Every actor queued for render, by name and place; an empty slot says so; an
// empty list says why it might be.
NOCTURNE_TEST(the_display_list_names_what_is_queued) {
    start();
    static CDemonActor door = {};
    name(door, "door");
    door.location.position.x = 1.5f;
    g_CDemonSetInstance.sorted_render_actor_count = 2;
    g_CDemonSetInstance.sorted_render_actors[0] = &door;
    g_CDemonSetInstance.sorted_render_actors[1] = nullptr;
    CHECK_EQ(nocturne_dump_display_list("list.txt"), 0);
    const std::string text = read("list.txt");
    CHECK(has(text, "door"));
    CHECK(has(text, "(1.50, 0.00, 0.00)"));
    CHECK(has(text, "<null>"));

    // More than the array holds lists the array.
    g_CDemonSetInstance.sorted_render_actor_count = 2001;
    CHECK_EQ(nocturne_dump_display_list("long.txt"), 0);
    g_CDemonSetInstance.sorted_render_actor_count = 0;
    CHECK_EQ(nocturne_dump_display_list("empty.txt"), 0);
    CHECK(has(read("empty.txt"), "<display list is empty"));
    CHECK_EQ(nocturne_dump_display_list(nullptr), -1);
    CHECK_EQ(nocturne_dump_display_list(kNowhere), -1);
}

// An actor is written as far down its classes as it goes; a character's bones
// off unit length, or NaN in any part, are listed.
NOCTURNE_TEST(an_actor_is_written_class_by_class) {
    start();
    static CStranger stranger = {};
    CDemonActor *actor = &stranger.base.base.base;
    name(*actor, "svetlana");
    CQuaternion4f *bones = stranger.base.base.model.bone_transform.pose_data.bone_rotations;
    for (int b = 0; b < 100; ++b)
        bones[b].w = 1.0f;
    bones[3].w = 2.0f;
    bones[4].w = NAN;
    bones[5].x = NAN;
    bones[6].y = NAN;
    bones[7].z = NAN;
    dump_support::is_a(actor,
                       {dump_support::kStranger, dump_support::kHero, dump_support::kCharacter});
    CHECK_EQ(nocturne_dump_actor_state("stranger.txt", actor), 0);
    std::string text = read("stranger.txt");
    CHECK(has(text, "[CDemonActor]"));
    CHECK(has(text, "name:       svetlana"));
    CHECK(has(text, "[CCharacter]"));
    CHECK(has(text, "[CHero]"));
    CHECK(has(text, "[CStranger]"));
    CHECK(has(text, "bone[  3]"));
    CHECK(has(text, "total anomalous: 5 / 100"));

    // All unit length: none listed. A plain actor stops at its own fields.
    bones[3].w = bones[4].w = 1.0f;
    bones[5].x = bones[6].y = bones[7].z = 0.0f;
    dump_support::is_a(actor, {dump_support::kCharacter});
    CHECK_EQ(nocturne_dump_actor_state("character.txt", actor), 0);
    text = read("character.txt");
    CHECK(has(text, "(none — all bone quaternions are unit-length)"));
    CHECK(!has(text, "[CHero]"));
    dump_support::is_a(actor, {});
    CHECK_EQ(nocturne_dump_actor_state("plain.txt", actor), 0);
    CHECK(!has(read("plain.txt"), "[CCharacter]"));

    CHECK_EQ(nocturne_dump_actor_state("none.txt", nullptr), 0);
    CHECK(has(read("none.txt"), "<actor is null>"));
    CHECK_EQ(nocturne_dump_actor_state(nullptr, actor), -1);
    CHECK_EQ(nocturne_dump_actor_state(kNowhere, actor), -1);
}

// -----------------------------------------------------------------------------
// The level's collision
// -----------------------------------------------------------------------------

// The ground under a point, by the point query and by cylinders of each radius.
NOCTURNE_TEST(the_ground_is_probed_at_each_radius) {
    start();
    CVector3f at = {0.0f, 10.0f, 0.0f};
    CHECK_EQ(nocturne_dump_ground_probes("ground.txt", &at), 0);
    const std::string text = read("ground.txt");
    CHECK(has(text, "radius=0.0  ground=9.0000  (delta=1.0000)"));
    CHECK(has(text, "radius=5.0  ground=4.0000"));
    CHECK_EQ(nocturne_dump_ground_probes(nullptr, &at), -1);
    CHECK_EQ(nocturne_dump_ground_probes("ground.txt", nullptr), -1);
    CHECK_EQ(nocturne_dump_ground_probes(kNowhere, &at), -1);
}

namespace {

CVector3f g_corners[3] = {{0, 0, 0}, {1, 0, 0}, {0, 0, 1}};

// A cube of `count` triangles facing `ny` up.
CDemonCube make_cube(std::vector<CDemonCubeTriangle> &storage, int count, float ny) {
    storage.assign((size_t)count, CDemonCubeTriangle{});
    for (CDemonCubeTriangle &t : storage) {
        for (int v = 0; v < 3; ++v)
            t.triangle.vertices[v] = &g_corners[v];
        t.triangle.normal.y = ny;
    }
    CDemonCube cube = {};
    cube.triangle_count = count;
    cube.triangle_buffer = storage.data();
    return cube;
}

} // namespace

// The grid's extent always; at a point, where it falls, the triangles up its
// column, the triangles of its cube and the four beside it, and the densest
// cube in the column when that is another.
NOCTURNE_TEST(the_collision_grid_is_written_round_a_point) {
    start();
    CDemonRaytrace &rt = g_CDemonRaytraceInstance;
    rt.cell_size = {1.0f, 1.0f, 1.0f};
    rt.grid_coord = {4, 4, 4};
    std::vector<CDemonCubeTriangle> t_floor, t_ceiling, t_wall, t_dense;
    CDemonCube floor = make_cube(t_floor, 1, 1.0f);
    CDemonCube ceiling = make_cube(t_ceiling, 1, -1.0f);
    CDemonCube wall = make_cube(t_wall, 1, 0.0f);
    CDemonCube dense = make_cube(t_dense, 3, 1.0f);
    CDemonCube empty = {};
    stand.cubes[{1, 1, 1}] = &floor;   // the probe's
    stand.cubes[{0, 1, 1}] = &ceiling; // x-1
    stand.cubes[{2, 1, 1}] = &wall;    // x+1
    stand.cubes[{1, 1, 0}] = &empty;   // z-1: nothing in it
    stand.cubes[{1, 3, 1}] = &dense;   // up the column
    stand.cubes[{1, 2, 1}] = &empty;

    CHECK_EQ(nocturne_dump_collision_grid("extent.txt", nullptr), 0);
    CHECK(!has(read("extent.txt"), "[Position lookup]"));

    CVector3f at = {1.0f, 1.0f, 1.0f};
    CHECK_EQ(nocturne_dump_collision_grid("grid.txt", &at), 0);
    std::string text = read("grid.txt");
    CHECK(has(text, "grid index:     (1, 1, 1)"));
    CHECK(has(text, "(in_bounds: x=1 y=1 z=1)"));
    CHECK(has(text, "<-- probe here"));
    CHECK(has(text, "FLOOR-up"));
    CHECK(has(text, "FLOOR-dn"));
    CHECK(has(text, "wall"));
    CHECK(has(text, "Densest cube in column (x=1, y=3, z=1, 3 tris)"));

    // At the densest cube itself it is not repeated; outside the grid there
    // is no cube to list, and each axis says which side it left by.
    at.y = 3.0f;
    CHECK_EQ(nocturne_dump_collision_grid("dense.txt", &at), 0);
    CHECK(!has(read("dense.txt"), "Densest"));
    CVector3f below = {-1.0f, -2.0f, 9.0f};
    CHECK_EQ(nocturne_dump_collision_grid("out.txt", &below), 0);
    CHECK(has(read("out.txt"), "(in_bounds: x=0 y=0 z=0)"));
    CVector3f above = {9.0f, 9.0f, -1.0f};
    CHECK_EQ(nocturne_dump_collision_grid("above.txt", &above), 0);
    stand.cubes.clear();
    CHECK_EQ(nocturne_dump_collision_grid("bare.txt", &at), 0);

    CHECK_EQ(nocturne_dump_collision_grid(nullptr, &at), -1);
    CHECK_EQ(nocturne_dump_collision_grid(kNowhere, &at), -1);
    rt = CDemonRaytrace{};
}

// The whole mesh, triangle by triangle in world space, with where the hero
// stands; an empty grid answers 1, distinct from written.
NOCTURNE_TEST(the_world_geometry_is_written_whole) {
    start();
    CDemonRaytrace &rt = g_CDemonRaytraceInstance;
    rt.grid_coord = {3, 1, 1};
    std::vector<CDemonCubeTriangle> tris;
    CDemonCube cubes[3] = {};
    cubes[0] = make_cube(tris, 4, 1.0f);
    // A triangle short of a corner is skipped, whichever corner.
    tris[1].triangle.vertices[0] = nullptr;
    tris[2].triangle.vertices[1] = nullptr;
    tris[3].triangle.vertices[2] = nullptr;
    cubes[1].triangle_count = 2; // a count with no buffer
    std::vector<CDemonCubeTriangle> unused;
    cubes[2] = make_cube(unused, 1, 0.0f);
    cubes[2].triangle_count = 0; // a buffer with no count
    rt.cube_data = cubes;
    static CHero hero = {};
    hero.base.base.location.area_id = 7;
    g_HeroActors[0] = &hero;
    g_LocalHeroIndex = 0;
    CHECK_EQ(nocturne_dump_geometry("geo.txt"), 0);
    std::string text = read("geo.txt");
    CHECK(has(text, "hero 0.0000 0.0000 0.0000 area 7"));
    CHECK(has(text, "cube_data present"));
    CHECK(has(text, "cube_list NULL"));
    CHECK(has(text, "cubes_with_triangles 1"));
    CHECK(has(text, "resident_triangles 4"));
    CHECK(has(text, "0.0000 1.0000 0.0000  0 0 0\n"));

    // No hero in the slot, or a slot out of range: none. No cubes: 1.
    g_HeroActors[0] = nullptr;
    CHECK_EQ(nocturne_dump_geometry("nohero.txt"), 0);
    CHECK(has(read("nohero.txt"), "hero none"));
    for (int index : {-1, 4}) {
        g_LocalHeroIndex = index;
        CHECK_EQ(nocturne_dump_geometry("range.txt"), 0);
        CHECK(has(read("range.txt"), "hero none"));
    }
    g_LocalHeroIndex = 0;
    static SVoxelCubeMetadata metadata = {};
    rt.cube_data = nullptr;
    rt.cube_list = &metadata;
    CHECK_EQ(nocturne_dump_geometry("empty.txt"), 1);
    text = read("empty.txt");
    CHECK(has(text, "cube_list present"));
    CHECK(has(text, "NO GEOMETRY RESIDENT"));
    CHECK_EQ(nocturne_dump_geometry(nullptr), -1);
    CHECK_EQ(nocturne_dump_geometry(kNowhere), -1);
    rt = CDemonRaytrace{};
}

// -----------------------------------------------------------------------------
// Lighting
// -----------------------------------------------------------------------------

// The vertex colour gradient, the lights, a sample of normals and transformed
// vertices, and a histogram of every normal's length, NaN in any part apart.
NOCTURNE_TEST(the_lighting_state_is_written_with_its_normals) {
    start();
    const CVector3f normals[] = {{0, 0, 0},   {0.1f, 0, 0}, {1, 0, 0},   {3, 0, 0},
                                 {NAN, 0, 0}, {0, NAN, 0},  {0, 0, NAN}, {0, 1, 0}};
    for (int i = 0; i < 8; ++i)
        g_VertexNormalArray[i] = normals[i];
    g_VertexCount = 8;
    g_TransformedVertexArray[0].x = 321;
    CHECK_EQ(nocturne_dump_lighting_state("light.txt"), 0);
    const std::string text = read("light.txt");
    CHECK(has(text, "[g_VertexCount = 8]"));
    CHECK(has(text, "  zero  : 1"));
    CHECK(has(text, "  <0.5  : 1"));
    CHECK(has(text, "  ~unit : 2"));
    CHECK(has(text, "  >=2.0 : 1"));
    CHECK(has(text, "  NaN   : 3"));
    CHECK(has(text, "  max   : 3.0000"));
    CHECK(has(text, "321"));

    // More than the arrays hold is the arrays; none, no histogram.
    g_VertexCount = 30000;
    CHECK_EQ(nocturne_dump_lighting_state("many.txt"), 0);
    CHECK(has(read("many.txt"), "[g_VertexCount = 20000]"));
    g_VertexCount = 0;
    CHECK_EQ(nocturne_dump_lighting_state("none.txt"), 0);
    CHECK(!has(read("none.txt"), "histogram"));
    CHECK_EQ(nocturne_dump_lighting_state(nullptr), -1);
    CHECK_EQ(nocturne_dump_lighting_state(kNowhere), -1);
    for (int i = 0; i < 8; ++i)
        g_VertexNormalArray[i] = CVector3f{};
}

// One line per bake, appended: checksums of its inputs, the camera buffers
// only when they exist at a size, and per spot light its lit region, corona
// buffers and view.
NOCTURNE_TEST(a_bake_signature_is_appended_per_bake) {
    start();
    std::error_code ec;
    fs::remove("bake.txt", ec);
    CDemonCamera &cam = g_CDemonCameraInstance;
    unsigned int zbuffer[4] = {1, 2, 3, 4};
    unsigned int framebuffer[4] = {0x00ffffff, 0, 0, 0};
    cam.zbuffer_aligned = zbuffer;
    cam.framebuffer_aligned = framebuffer;
    cam.framebuffer_width = 2;
    cam.framebuffer_height = 2;
    g_PrecomputedWorldPositions[0].x = 5; // off the origin on each axis
    g_PrecomputedWorldPositions[1].y = 5;
    g_PrecomputedWorldPositions[2].z = 5;
    static CDemonLight lit = {};
    static CDemonLight dark = {};
    static std::vector<int> visibility(320 * 240, 0);
    static std::vector<int> indices(320 * 240, 0);
    visibility[0] = 1;
    lit.left_extent[0] = 10;
    lit.right_extent[0] = 19;
    lit.corona_visibility_buffers = visibility.data();
    lit.corona_lightmap_indices = indices.data();
    strcpy(lit.filter_name, "warm");
    g_SpotLightList[0] = &lit;
    g_SpotLightList[1] = nullptr;
    g_SpotLightList[2] = &dark;
    g_SpotLightCount = 3;
    CHECK_EQ(nocturne_dump_bake_signature("bake.txt", 1), 0);
    std::string text = read("bake.txt");
    CHECK(has(text, "tag=1 dw=0 dh=0 fw=2 fh=2"));
    CHECK(has(text, "fbmean=63.750"));
    CHECK(has(text, "L0 en=0 px=10 lines=1"));
    CHECK(has(text, "visnz=1"));
    CHECK(has(text, "filt=warm"));
    CHECK(has(text, "| L1=null"));
    CHECK(has(text, "L2 en=0 px=0 lines=0"));

    // More lights than it reports stops at eight. No buffers, or a camera of
    // no width or height: no checksum of them.
    g_SpotLightCount = 9;
    for (int i = 0; i < 9; ++i)
        g_SpotLightList[i] = &dark;
    cam.zbuffer_aligned = nullptr;
    cam.framebuffer_aligned = nullptr;
    CHECK_EQ(nocturne_dump_bake_signature("bake.txt", 2), 0);
    cam.zbuffer_aligned = zbuffer;
    cam.framebuffer_aligned = framebuffer;
    cam.framebuffer_width = 0;
    CHECK_EQ(nocturne_dump_bake_signature("bake.txt", 3), 0);
    cam.framebuffer_width = 2;
    cam.framebuffer_height = 0;
    CHECK_EQ(nocturne_dump_bake_signature("bake.txt", 4), 0);
    text = read("bake.txt");
    CHECK(has(text, "tag=2"));
    CHECK(!has(text, "L8 "));
    CHECK(has(text, "tag=4"));
    CHECK_EQ(nocturne_dump_bake_signature(nullptr, 5), -1);
    CHECK_EQ(nocturne_dump_bake_signature(kNowhere, 5), -1);
    CHECK(has(text, "wpzero=76797"));
    cam = CDemonCamera{};
    g_SpotLightCount = 0;
    g_PrecomputedWorldPositions[0].x = 0;
    g_PrecomputedWorldPositions[1].y = 0;
    g_PrecomputedWorldPositions[2].z = 0;
}

// -----------------------------------------------------------------------------
// Sequences from gdb
// -----------------------------------------------------------------------------

// Every Nth call writes the next numbered screenshot and its display list,
// the list beside it as .txt, up to the count asked for; disarmed, nothing.
NOCTURNE_TEST(auto_capture_writes_every_nth_frame_up_to_a_count) {
    start();
    unsigned char pixel[4] = {};
    g_BackBuffer = pixel;
    g_BitsPerPixel = 32;
    g_WindowWidth = 1;
    g_WindowHeight = 1;
    for (int i = 0; i < 5; ++i)
        nocturne_auto_capture("cap_%d.ppm", 2, 2, i == 0);
    CHECK(fs::exists("cap_0.ppm"));
    CHECK(fs::exists("cap_0.txt"));
    CHECK(fs::exists("cap_1.ppm"));
    CHECK(!fs::exists("cap_2.ppm")); // the count was two
    // Every call, with any other extension or none, the list beside it.
    for (int i = 0; i < 2; ++i)
        nocturne_auto_capture("raw_%d.bin", 0, 9, i == 0);
    CHECK(fs::exists("raw_1.bin.txt"));
    nocturne_auto_capture("plain%d", 1, 9, 1);
    CHECK(fs::exists("plain0.txt"));
    nocturne_auto_capture(nullptr, 1, 9, 1);
    CHECK(!fs::exists("plain1.txt"));
}

// A slot armed with an actor writes a numbered state each tick until
// disarmed; a slot out of range is ignored and never armed.
NOCTURNE_TEST(an_auto_dump_slot_writes_a_state_each_tick) {
    start();
    static CDemonActor actor = {};
    name(actor, "baron");
    nocturne_auto_dump_set_slot(0, "slot0_%d.txt", &actor);
    CHECK_EQ(nocturne_auto_dump_is_armed(0), 1);
    CHECK_EQ(nocturne_auto_dump_is_armed(1), 0);
    nocturne_auto_dump_tick();
    nocturne_auto_dump_tick();
    CHECK(has(read("slot0_1.txt"), "baron"));
    nocturne_auto_dump_set_slot(0, nullptr, nullptr);
    nocturne_auto_dump_set_slot(0, nullptr, nullptr); // already disarmed
    CHECK_EQ(nocturne_auto_dump_is_armed(0), 0);
    nocturne_auto_dump_set_slot(-1, "x_%d.txt", &actor);
    nocturne_auto_dump_set_slot(2, "x_%d.txt", &actor);
    CHECK_EQ(nocturne_auto_dump_is_armed(-1), 0);
    CHECK_EQ(nocturne_auto_dump_is_armed(2), 0);
}

// The toggles arm the player's slot and Svetlana's, found among what is
// rendered, and disarm them on the next press; with no such actor, -1.
NOCTURNE_TEST(the_toggles_find_their_actor_or_say_not) {
    start();
    CHECK_EQ(nocturne_auto_dump_toggle_player(), -1);
    static CHero player = {};
    stand.local_hero = &player;
    CHECK_EQ(nocturne_auto_dump_toggle_player(), 1);
    CHECK_EQ(nocturne_auto_dump_toggle_player(), 0);

    static CDemonActor other = {};
    static CDemonActor svetlana = {};
    dump_support::is_a(&svetlana, {dump_support::kSvetlana});
    g_CDemonSetInstance.sorted_render_actor_count = 2;
    g_CDemonSetInstance.sorted_render_actors[0] = &other;
    g_CDemonSetInstance.sorted_render_actors[1] = nullptr;
    CHECK_EQ(nocturne_auto_dump_toggle_svetlana(), -1);
    g_CDemonSetInstance.sorted_render_actor_count = 3;
    g_CDemonSetInstance.sorted_render_actors[2] = &svetlana;
    CHECK_EQ(nocturne_auto_dump_toggle_svetlana(), 1);
    CHECK_EQ(nocturne_auto_dump_toggle_svetlana(), 0);
    g_CDemonSetInstance.sorted_render_actor_count = 0;
}

// -----------------------------------------------------------------------------
// Streamed sound
// -----------------------------------------------------------------------------

namespace {

// Null unsets it; Windows unsets it for empty too.
void set_pcm_dir(const char *dir) {
#if defined(_WIN32)
    _putenv_s("NOCTURNE_DUMP_STREAM_PCM", dir != nullptr ? dir : "");
#else
    if (dir == nullptr)
        unsetenv("NOCTURNE_DUMP_STREAM_PCM");
    else
        setenv("NOCTURNE_DUMP_STREAM_PCM", dir, 1);
#endif
}

} // namespace

// With a directory set, each batch is appended to the sample's raw file, its
// header written beside it once; a name's directory part cannot escape.
NOCTURNE_TEST(streamed_pcm_is_appended_per_sample) {
    start();
    std::error_code ec;
    fs::create_directories("pcm", ec);
    set_pcm_dir("pcm");
    const short batch[4] = {1, 2, 3, 4};
    nocturne_dump_stream_pcm("music\\theme.mp3", batch, 2, 2, 16, 22050);
    nocturne_dump_stream_pcm("music\\theme.mp3", batch, 1, 2, 16, 22050);
    nocturne_dump_stream_pcm("a/b:c", batch, 1, 1, 16, 22050);
    CHECK_EQ(read_bytes("pcm/music_theme.mp3.raw").size(), (size_t)12);
    CHECK(has(read("pcm/music_theme.mp3.txt"), "channels=2\nbits=16\nrate=22050"));
    CHECK(fs::exists("pcm/a_b_c.raw"));

    // A header that cannot be written leaves the samples; samples that cannot
    // be written are dropped.
    block("pcm/noheader.txt");
    nocturne_dump_stream_pcm("noheader", batch, 1, 1, 16, 22050);
    CHECK(fs::exists("pcm/noheader.raw"));
    block("pcm/noraw.raw");
    nocturne_dump_stream_pcm("noraw", batch, 1, 1, 16, 22050);

    // Nothing to write, or no directory: nothing.
    nocturne_dump_stream_pcm(nullptr, batch, 1, 1, 16, 22050);
    nocturne_dump_stream_pcm("x", nullptr, 1, 1, 16, 22050);
    nocturne_dump_stream_pcm("x", batch, 0, 1, 16, 22050);
    set_pcm_dir("");
    nocturne_dump_stream_pcm("x", batch, 1, 1, 16, 22050);
    set_pcm_dir(nullptr);
    nocturne_dump_stream_pcm("x", batch, 1, 1, 16, 22050);
    CHECK(!fs::exists("pcm/x.raw"));
}

// -----------------------------------------------------------------------------
// The mission
// -----------------------------------------------------------------------------

namespace {

void event_name(SEventNameBlock &block, int i, const char *text) {
    strncpy(block.names[i], text, 32);
}

} // namespace

// Every actor whose creation an event gates, with what the condition answers
// now and whether it reached the active set; then every container the
// condition looks in, a count past an array the array.
NOCTURNE_TEST(the_creation_gates_are_written_with_their_events) {
    start();
    static CDemonMission mission = {};
    static CDemonActor plain = {}, none = {}, gated = {}, waiting = {};
    plain.next_actor = &none;
    strcpy(none.create_event, "NONE");
    none.next_actor = &gated;
    name(gated, "guard");
    strcpy(gated.create_event, "alarm");
    gated.next_actor = &waiting;
    // A name filling its field has no terminator, and prints whole.
    memcpy(waiting.actor_name, "abcdefghijklmnopqrstuvwxyz012345", 32);
    strcpy(waiting.create_event, "later");
    mission.first_actor = &plain;
    g_CDemonMissionPtr = &mission;
    g_CDemonSetInstance.actor_count = 1;
    g_CDemonSetInstance.actors[0] = &gated;
    stand.conditions["alarm"] = 1;
    CHECK_EQ(nocturne_dump_create_gates("gates.txt"), 0);
    std::string text = read("gates.txt");
    CHECK(has(text, "actors in mission: 4"));
    CHECK(has(text, "with a gating create_event: 2"));
    CHECK(has(text, "\"alarm\""));
    CHECK(has(text, "abcdefghijklmnopqrstuvwxyz012345 "));
    CHECK(has(text, "<no event list>"));

    static CEventList events = {};
    events.events.count = -1;
    events.current_events.count = 101;
    event_name(events.game_flags, 0, "door_open");
    events.game_flags.count = 1;
    events.timers.count = 11;
    strcpy(events.timers.names[0], "fuse");
    events.timers.durations[0] = 2.5f;
    g_CEventListPtr = &events;
    g_CDemonSetInstance.actor_count = 2001; // more than the array: the array
    CHECK_EQ(nocturne_dump_create_gates("events.txt"), 0);
    text = read("events.txt");
    CHECK(has(text, "<negative count>"));
    CHECK(has(text, "<count exceeds the 100-entry array; listing the first 100>"));
    CHECK(has(text, "[  0] door_open"));
    // Eleven timers listed as the ten the block holds.
    const std::string timers = text.substr(text.find("timers: count=11"));
    CHECK(has(timers, "fuse"));
    CHECK(has(timers, "[  9]"));
    CHECK(!has(timers, "[ 10]"));

    events.timers.count = 3;
    CHECK_EQ(nocturne_dump_create_gates("threetimers.txt"), 0);
    CHECK(has(read("threetimers.txt"), "[  2]"));
    events.timers.count = 0;
    CHECK_EQ(nocturne_dump_create_gates("notimers.txt"), 0);
    g_CDemonMissionPtr = nullptr;
    CHECK_EQ(nocturne_dump_create_gates("nomission.txt"), 0);
    CHECK(has(read("nomission.txt"), "<no mission>"));
    CHECK_EQ(nocturne_dump_create_gates(nullptr), -1);
    CHECK_EQ(nocturne_dump_create_gates(kNowhere), -1);
    g_CEventListPtr = nullptr;
    g_CDemonSetInstance.actor_count = 0;
}

namespace {

CBoundingBox3D *flame_box(CDemonActor *, CBoundingBox3D *out) {
    out->min = {1, 2, 3};
    out->max = {4, 5, 6};
    return out;
}

} // namespace

// Every flame with its stored verdict beside a fresh one, taken inside the
// render-state bracket; the globals the fresh test writes are put back.
NOCTURNE_TEST(each_flames_visibility_is_written_fresh_and_stored) {
    start();
    static CDemonMission mission = {};
    static CDemonActor not_a_flame = {};
    static CFlame flame = {};
    static CDemonActor_vtable vtable = {};
    vtable.getBoundingBox = flame_box;
    flame.base.vtable._ub = &vtable;
    name(flame.base, "torch");
    flame.is_visible = 0;
    stand.visible = 1;
    stand.visible_with_camera = 1;
    dump_support::is_a(&flame.base, {dump_support::kFlame});
    not_a_flame.next_actor = &flame.base;
    mission.first_actor = &not_a_flame;
    g_CDemonMissionPtr = &mission;
    g_PerspectiveReciprocal = 11;
    g_SolidColorMode = 22;
    CHECK_EQ(nocturne_dump_flame_visibility("flames.txt"), 0);
    const std::string text = read("flames.txt");
    CHECK(has(text, "torch"));
    CHECK(has(text, "(1.00,2.00,3.00)..(4.00,5.00,6.00)"));
    CHECK(has(text, "flames in mission: 1"));
    CHECK_EQ(stand.render_state_brackets, 0);
    CHECK_EQ(g_PerspectiveReciprocal, 11);
    CHECK_EQ((int)g_SolidColorMode, 22);

    g_CDemonMissionPtr = nullptr;
    CHECK_EQ(nocturne_dump_flame_visibility("noflames.txt"), 0);
    CHECK(has(read("noflames.txt"), "<no mission>"));
    CHECK_EQ(nocturne_dump_flame_visibility(nullptr), -1);
    CHECK_EQ(nocturne_dump_flame_visibility(kNowhere), -1);
}

// Armed with a row budget, each flame drawn writes a row with its quad on
// screen, until the budget is spent and the file closed; re-arming starts
// over, and an arm that cannot write leaves it disarmed.
NOCTURNE_TEST(the_flame_draw_probe_writes_its_budget_of_rows) {
    start();
    nocturne_probe_flame_draw("early", 0, 0); // not armed
    nocturne_probe_flame_draw_arm("draws.txt", 3);
    nocturne_probe_flame_draw("no_renderer", 100, 65435);
    static CDemonRenderer renderer = {};
    g_CDemonRendererPtr2 = &renderer;
    nocturne_probe_flame_draw("no_vertices", 0, 0);
    static SRenderVertex quad[4] = {};
    quad[0].projected_vertex.screen_x = 10 << 16;
    renderer.vertex_buffer_ptr = quad;
    nocturne_probe_flame_draw("torch", 0, 65535);
    nocturne_probe_flame_draw("spent", 0, 0);
    const std::string text = read("draws.txt");
    CHECK(has(text, "no_renderer"));
    CHECK(has(text, "(10.0,0.0 z=0)"));
    CHECK(has(text, "<row budget spent; probe disarmed>"));
    CHECK(!has(text, "spent "));

    nocturne_probe_flame_draw_arm("again.txt", 5);
    nocturne_probe_flame_draw_arm("again.txt", 5); // re-armed: the old closed
    nocturne_probe_flame_draw_arm(nullptr, 5);
    nocturne_probe_flame_draw_arm("zero.txt", 0);
    nocturne_probe_flame_draw_arm(kNowhere, 5);
    nocturne_probe_flame_draw("after", 0, 0);
    CHECK(!has(read("again.txt"), "after"));
    g_CDemonRendererPtr2 = nullptr;
}

// -----------------------------------------------------------------------------
// The presented frame
// -----------------------------------------------------------------------------

// From GL when it owns the window, else from the DirectDraw renderer; nothing
// presenting, a read that fails or nowhere to write is -1.
NOCTURNE_TEST(the_presented_frame_is_read_from_whatever_presents_it) {
    start();
    stand.gl_active = 1;
    CHECK_EQ(nocturne_dump_frontbuffer("gl.ppm"), 0);
    const std::string gl_image = read_bytes("gl.ppm");
    CHECK(has(gl_image, "P6\n2 1\n255\n"));
    CHECK_EQ((unsigned char)gl_image[gl_image.size() - 1], 255); // blue
    stand.gl_read_result = -1;
    CHECK_EQ(nocturne_dump_frontbuffer("gl.ppm"), -1);
    stand.gl_read_result = 0;
    CHECK_EQ(nocturne_dump_frontbuffer(kNowhere), -1);

    stand.gl_active = 0;
    CHECK_EQ(nocturne_dump_frontbuffer("sdl.ppm"), -1); // no renderer
    stand.renderer_present = 1;
    CHECK_EQ(nocturne_dump_frontbuffer("sdl.ppm"), 0);
    CHECK(has(read_bytes("sdl.ppm"), "P6\n4 2\n255\n"));
    stand.output_size_result = -1;
    CHECK_EQ(nocturne_dump_frontbuffer("sdl.ppm"), -1);
    stand.output_size_result = 0;
    stand.output_width = 0;
    CHECK_EQ(nocturne_dump_frontbuffer("sdl.ppm"), -1);
    stand.output_width = 4;
    stand.output_height = 0;
    CHECK_EQ(nocturne_dump_frontbuffer("sdl.ppm"), -1);
    stand.output_height = 2;
    stand.read_pixels_result = -1;
    CHECK_EQ(nocturne_dump_frontbuffer("sdl.ppm"), -1);
    CHECK_EQ(nocturne_dump_frontbuffer(nullptr), -1);
}

NOCTURNE_TEST_MAIN()
