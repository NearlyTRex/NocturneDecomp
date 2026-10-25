// =============================================================================
// NETPLAY VIEW TRACE — what decides what each player sees, as it changes
// =============================================================================
//
// Compiled in where NOCTURNE_NETPLAY_RNG_TRACE is set, the dev preset's
// setting: each frame it logs to the netplay channel when a guest starts or
// stops waiting, when the script's focus actor changes, and when the camera,
// the focus actor's director zone or the goggles do; nothing when none has.
// Compiled out, it does nothing. The log is read back from the working
// directory, where it goes with no game directories set.

#include "debug/net_trace.h"
#include "debug_support.h"
#include "nocturne.h"
#include "nocturne_test.h"
#include "shim_config.h"

#include <filesystem>
#include <fstream>
#include <sstream>
#include <string>

namespace {

namespace fs = std::filesystem;
using debug_support::stand;

#if NOCTURNE_NETPLAY_RNG_TRACE

std::string netplay_log() {
    std::ifstream in("nocturne_netplay.log");
    std::stringstream text;
    text << in.rdbuf();
    return text.str();
}

size_t count(const std::string &text, const std::string &part) {
    size_t n = 0;
    for (size_t at = text.find(part); at != std::string::npos; at = text.find(part, at + 1)) {
        ++n;
    }
    return n;
}

CBoundingBox3D *unit_box(CDemonActor *, CBoundingBox3D *out) {
    out->min = {0, 0, 0};
    out->max = {2, 4, 6};
    return out;
}

#endif

} // namespace

#if NOCTURNE_NETPLAY_RNG_TRACE

// Each change is logged once, as it happens; a frame where nothing changed
// logs nothing.
NOCTURNE_TEST(each_change_in_the_view_is_logged_once) {
    std::error_code ec;
    const fs::path dir = fs::temp_directory_path(ec) / "nocturne_net_trace_test";
    fs::remove_all(dir, ec);
    fs::create_directories(dir, ec);
    fs::current_path(dir, ec);
    stand.reset();

    static CHero own = {};
    static CNetGame net = {};
    static CScript script = {};
    static CDemonSet set = {};
    static CGame game = {};
    static CDemonActor focus = {};
    static CDemonActor_vtable vtable = {};
    vtable.getBoundingBox = unit_box;
    focus.vtable._ub = &vtable;
    own.base.base.location.area_id = 3;
    g_HeroActors[0] = &own;
    g_LocalHeroIndex = 0;
    net.server_player_index = 9; // no such player: the local one stands in
    g_CNetGamePtr = &net;
    g_CScriptPtr = &script;
    g_CGamePtr = &game;

    // No set yet: the camera is not traced. No focus actor is no change from
    // the none there was.
    nocturne_net_trace_view(0, 1, 2);
    std::string text = netplay_log();
    CHECK(text.find("waiting 0->1") != std::string::npos);
    CHECK(text.find("area=3 death=2") != std::string::npos);
    CHECK(text.find("focus_actor now") == std::string::npos);
    CHECK(text.find("camera") == std::string::npos);

    // A set, a camera and a focus actor in a zone, in a session.
    g_CDemonSetPtr = &set;
    set.selected_camera_index = 0;
    strcpy(set.cameras[0].name, "hall");
    script.focus_actor = &focus;
    stand.vdir_zone = 4;
    stand.session_active = 1;
    stand.session_frame = 77;
    nocturne_net_trace_view(1, 1, 0);
    text = netplay_log();
    CHECK_EQ(count(text, "focus_actor now"), (size_t)1);
    CHECK(text.find("sim=77") != std::string::npos);
    CHECK(text.find("camera 0 'hall'") != std::string::npos);
    CHECK(text.find("at 1.00 2.00 3.00") != std::string::npos);

    // Nothing changed: nothing logged.
    const size_t lines = count(netplay_log(), "\n");
    nocturne_net_trace_view(1, 1, 0);
    CHECK_EQ(count(netplay_log(), "\n"), lines);

    // No camera selected, out of a session, the goggles on, a real host and
    // no hero of our own.
    set.selected_camera_index = -1;
    stand.session_active = 0;
    game.goggles_active = 1;
    net.server_player_index = 0;
    g_HeroActors[0] = nullptr;
    nocturne_net_trace_view(1, 0, 0);
    text = netplay_log();
    CHECK(text.find("sim=-1") != std::string::npos);
    CHECK(text.find("camera -1 '' (zone -1)") != std::string::npos);
    CHECK(text.find("area=-1") != std::string::npos);
    // Only the zone changes.
    stand.vdir_zone = 5;
    nocturne_net_trace_view(0, 0, 0);
    script.focus_actor = nullptr;
    nocturne_net_trace_view(0, 0, 0);
    CHECK(netplay_log().find("zone=-1") != std::string::npos);

    g_CNetGamePtr = nullptr;
    g_CScriptPtr = nullptr;
    g_CGamePtr = nullptr;
    g_CDemonSetPtr = nullptr;
}

#else

NOCTURNE_TEST(compiled_out_the_view_trace_does_nothing) {
    nocturne_net_trace_view(0, 1, 0);
    CHECK(true);
}

#endif

NOCTURNE_TEST_MAIN()
