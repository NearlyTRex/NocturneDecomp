// =============================================================================
// NET RESPAWN — the host revives the party on safe floor, on one frame everywhere
// =============================================================================
//
// The host picks a spot for each hero: its own where it stands, the others on
// rings around it, on floor, level with it, out of hazards, apart, in sight and
// well framed. The spots go out for a frame thirty on, where every machine
// revives and moves the heroes.
//
// The world here is flat floor at y = 0, nothing in the way, and a 640 x 480
// camera that puts world x and z twenty pixels a unit from the middle of the
// frame.

#include "net/net_packets.h"
#include "net/net_respawn.h"
#include "net_support.h"
#include "nocturne.h"
#include "nocturne_test.h"

#include <cmath>
#include <cstring>
#include <string>

namespace {

using net_support::game;
using net_support::heroes;
using net_support::net;
using net_support::stand;

#pragma pack(push, 1)
struct Respawn {
    SNetPacketHeader header;
    int apply_sequence;
    int hero_count;
    int area_id;
    float position[4][3];
    float orient[3];
    int hero_mask;
};
#pragma pack(pop)

const float kNoFloor = -1000.0f;

CVector3i on_screen(const CVector3i &world) {
    const float x = (float)world.x / 256.0f;
    const float z = (float)world.z / 256.0f;
    return {(int)((320.0f + x * 20.0f) * 65536.0f), (int)((240.0f + z * 20.0f) * 65536.0f), 1};
}

// The host and a guest, both alive at the origin's side, the host at frame 100.
void party(int count) {
    stand.reset();
    nocturne_net_respawn_clear_placeholder();
    net_support::place_heroes(count);
    net_support::start_session(CONNECTION_HOST, 2, 0);
    net.players[0].sim_frame_index = 100;
    g_CDemonCameraInstance.framebuffer_width = 640;
    g_CDemonCameraInstance.framebuffer_height = 480;
    stand.ground = [](const CVector3f &, float) { return 0.0f; };
    stand.screen = on_screen;
    for (int i = 0; i < count; i++)
        heroes[i]->base.base.location.position = {0, 0, 0};
}

// The packet the last request sent.
Respawn last_respawn() {
    Respawn packet;
    std::memset(&packet, 0, sizeof(packet));
    for (const auto &s : stand.sent) {
        if (net_support::type_of(s) == NOCTURNE_NET_PACKET_RESPAWN) {
            std::memcpy(&packet, s.bytes.data(), sizeof(packet));
        }
    }
    return packet;
}

bool near(float a, float b) {
    return std::fabs(a - b) < 1e-3f;
}

} // namespace

// Only the host, in play, out of a cinematic, with someone to play with.
NOCTURNE_TEST(only_the_host_in_play_can_respawn_the_party) {
    party(2);
    CHECK_EQ(nocturne_net_respawn_available(), 1);
    game.letterbox_mode = 1;
    CHECK_EQ(nocturne_net_respawn_available(), 0);
    game.letterbox_mode = 0;
    g_CGamePtr = nullptr;
    CHECK_EQ(nocturne_net_respawn_available(), 1);
    g_CGamePtr = &game;
    net.player_count = 1;
    CHECK_EQ(nocturne_net_respawn_available(), 0);
    net.player_count = 2;
    net.network_mode = NET_MODE_LOBBY;
    CHECK_EQ(nocturne_net_respawn_available(), 0);
    net.network_mode = NET_MODE_PLAYING;
    net.connection_type = CONNECTION_CLIENT;
    CHECK_EQ(nocturne_net_respawn_available(), 0);
    CHECK_EQ(nocturne_net_respawn_request(1), 0);
}

// The area this machine's world is: its hero's, or while held out of it the
// first hero's that is in it.
NOCTURNE_TEST(the_world_is_the_local_heros_area_or_whoevers_is_in_it) {
    party(3);
    heroes[0]->base.base.location.area_id = 4;
    CHECK_EQ(nocturne_net_respawn_world_area(), 4);
    heroes[0]->base.base.location.area_id = -1;
    g_HeroActors[1] = nullptr;
    heroes[2]->base.base.location.area_id = 6;
    CHECK_EQ(nocturne_net_respawn_world_area(), 6);
    heroes[2]->base.base.location.area_id = -1;
    CHECK_EQ(nocturne_net_respawn_world_area(), 0);
    g_HeroActors[0] = nullptr;
    CHECK_EQ(nocturne_net_respawn_world_area(), 0);
    g_LocalHeroIndex = -1;
    CHECK_EQ(nocturne_net_respawn_world_area(), 0);
    g_LocalHeroIndex = 4;
    CHECK_EQ(nocturne_net_respawn_world_area(), 0);
}

// In a session a hero held out of the world, or blown apart, is not drawn.
NOCTURNE_TEST(a_held_or_destroyed_hero_is_not_in_the_world) {
    party(1);
    CHECK_EQ(nocturne_net_respawn_hero_in_world(nullptr), 0);
    CHECK_EQ(nocturne_net_respawn_hero_in_world(heroes[0]), 1);
    heroes[0]->base.base.location.area_id = -1;
    CHECK_EQ(nocturne_net_respawn_hero_in_world(heroes[0]), 0);
    heroes[0]->base.base.location.area_id = 0;
    heroes[0]->base.base.lifecycle_state = ACTOR_DESTROYED;
    CHECK_EQ(nocturne_net_respawn_hero_in_world(heroes[0]), 0);
    g_CNetGamePtr = nullptr;
    CHECK_EQ(nocturne_net_respawn_hero_in_world(heroes[0]), 1);
}

// The host stays where it is and the guest lands on the nearest ring that
// clears it, at the best-framed spot; the move is scheduled thirty frames on
// with the host's facing.
NOCTURNE_TEST(the_guest_lands_beside_the_host) {
    party(2);
    heroes[0]->base.base.location.area_id = 3;
    heroes[0]->base.base.orient.vec = {0.0f, 1.5f, 0.0f};
    CHECK_EQ(nocturne_net_respawn_request(1), 1);
    Respawn packet = last_respawn();
    CHECK_EQ(packet.apply_sequence, 130);
    CHECK_EQ(packet.hero_count, 2);
    CHECK_EQ(packet.area_id, 3);
    CHECK_EQ(packet.hero_mask, 3);
    CHECK(near(packet.position[0][0], 0.0f));
    CHECK(near(packet.position[1][0], 3.0f));
    CHECK(near(packet.position[1][2], 0.0f));
    CHECK(near(packet.orient[1], 1.5f));
}

// Without the guests, only the host moves, and clear of where they stand.
NOCTURNE_TEST(a_host_alone_is_placed_clear_of_the_guests) {
    party(2);
    heroes[0]->base.hit_points = 0.0f;
    heroes[1]->base.base.location.position = {3.0f, 0.0f, 0.0f};
    CHECK_EQ(nocturne_net_respawn_request(0), 1);
    Respawn packet = last_respawn();
    CHECK_EQ(packet.hero_mask, 1);
    // The guest is the anchor now: the host goes on a ring round it, clear of it.
    const float dx = packet.position[0][0] - 3.0f;
    const float dz = packet.position[0][2];
    CHECK(dx * dx + dz * dz >= 2.25f * 2.25f);

    // Nobody alive and no safe floor yet: the host where it is.
    party(2);
    heroes[0]->base.hit_points = 0.0f;
    heroes[1]->base.base.location.area_id = -1;
    heroes[0]->base.base.location.position = {1.0f, 0.0f, 2.0f};
    CHECK_EQ(nocturne_net_respawn_request(0), 1);
    packet = last_respawn();
    CHECK(near(packet.position[0][0], 1.0f));
    CHECK(near(packet.position[0][2], 2.0f));
}

// The spot is only on floor, level with the anchor, out of the gas, in sight
// and in frame. With nowhere left, the host's last safe footing, then the
// mission's placeholder, then the anchor itself.
//
// Here every spot on the rings round the origin fails, each sixteenth of the
// circle for its own reason; the origin itself and anywhere far off are floor.
NOCTURNE_TEST(with_nowhere_to_stand_the_fallbacks_are_taken_in_turn) {
    party(3);
    // Which of the sixteen ring steps round the origin a point is on, or -1
    // at the origin or far from it.
    static auto step_of = [](float x, float z) {
        const float r = std::sqrt(x * x + z * z);
        if (r < 1.0f || 8.0f < r)
            return -1;
        float degrees = std::atan2(z, x) * 57.29578f;
        if (degrees < 0.0f)
            degrees += 360.0f;
        return (int)((degrees + 11.25f) / 22.5f) % 16;
    };
    stand.ground = [](const CVector3f &p, float) {
        const int step = step_of(p.x, p.z);
        if (step == 0 || step == 1)
            return p.y - 10.0f; // a hole
        if (step == 2 || step == 3)
            return NAN;
        if (step == 4 || step == 5)
            return 4.0f; // a ledge
        return 0.0f;
    };
    stand.blocked = [](const CVector3f &, const CVector3f &to) {
        const int step = step_of(to.x, to.z);
        return (step == 6 || step == 7) ? 1 : 0; // behind a wall
    };
    stand.screen = [](const CVector3i &world) {
        CVector3i screen = on_screen(world);
        const int step = step_of((float)world.x / 256.0f, (float)world.z / 256.0f);
        if (step == 8 || step == 9)
            screen.z = 0; // behind the camera
        if (step == 10 || step == 11)
            screen.x = 900 << 16;
        if (step == 12 || step == 13)
            screen.x = -900 << 16;
        if (step == 14)
            screen.y = 900 << 16;
        if (step == 15)
            screen.y = -900 << 16;
        return screen;
    };

    // Nothing else: the anchor.
    CHECK_EQ(nocturne_net_respawn_request(1), 1);
    Respawn packet = last_respawn();
    CHECK(near(packet.position[1][0], 0.0f));
    CHECK(near(packet.position[2][2], 0.0f));

    // A placeholder is the next best; the first one noted is the one.
    nocturne_net_respawn_note_placeholder(20.0f, 0.0f, 20.0f, 9);
    nocturne_net_respawn_note_placeholder(30.0f, 0.0f, 30.0f, 8);
    CHECK_EQ(nocturne_net_respawn_request(1), 1);
    packet = last_respawn();
    CHECK(near(packet.position[1][0], 20.0f));
    CHECK(near(packet.position[2][0], 20.0f));
    CHECK_EQ(packet.area_id, 9);

    // A safe footing on the anchor is too close to it to give anyone else.
    nocturne_net_respawn_apply_if_due(110);
    CHECK_EQ(nocturne_net_respawn_request(1), 1);
    CHECK(near(last_respawn().position[1][0], 20.0f));

    // One clear of everyone beats the placeholder, for the first hero to take
    // it; the next would stand on the first.
    heroes[0]->base.base.location.position = {10.0f, 0.0f, 10.0f};
    heroes[0]->base.base.location.area_id = 2;
    nocturne_net_respawn_apply_if_due(120);
    heroes[0]->base.base.location.position = {0.0f, 0.0f, 0.0f};
    heroes[0]->base.base.location.area_id = 0;
    CHECK_EQ(nocturne_net_respawn_request(1), 1);
    packet = last_respawn();
    CHECK(near(packet.position[1][0], 10.0f));
    CHECK(near(packet.position[2][0], 20.0f));

    // A dead host behind a living guest takes its own safe footing regardless.
    heroes[0]->base.hit_points = 0.0f;
    CHECK_EQ(nocturne_net_respawn_request(1), 1);
    packet = last_respawn();
    CHECK(near(packet.position[0][0], 10.0f));
    CHECK(near(packet.position[1][0], 0.0f));
}

// A dead party goes back to the host's last safe footing, then the placeholder.
NOCTURNE_TEST(a_dead_party_returns_to_safe_floor) {
    party(2);
    heroes[0]->base.base.location.position = {4.0f, 0.0f, 4.0f};
    heroes[0]->base.base.location.area_id = 5;
    nocturne_net_respawn_apply_if_due(10);
    heroes[0]->base.hit_points = 0.0f;
    heroes[1]->base.hit_points = 0.0f;
    heroes[0]->base.base.location.position = {50.0f, -30.0f, 50.0f};
    stand.ground = [](const CVector3f &p, float) { return p.y < -20.0f ? p.y - 10.0f : 0.0f; };
    CHECK_EQ(nocturne_net_respawn_request(1), 1);
    Respawn packet = last_respawn();
    CHECK(near(packet.position[0][0], 4.0f));
    CHECK_EQ(packet.area_id, 5);

    nocturne_net_respawn_clear_placeholder();
    nocturne_net_respawn_note_placeholder(7.0f, 0.0f, 7.0f, 6);
    CHECK_EQ(nocturne_net_respawn_request(0), 1);
    packet = last_respawn();
    CHECK(near(packet.position[0][0], 7.0f));

    // No floor under where it is going: it is placed as it was given.
    nocturne_net_respawn_clear_placeholder();
    stand.ground = [](const CVector3f &, float) { return NAN; };
    CHECK_EQ(nocturne_net_respawn_request(0), 1);
    CHECK(near(last_respawn().position[0][1], -30.0f));
}

// No safe footing is taken while dead, at the wrong frame, in the air, off
// floor, or in the gas; nor by a guest, or with no slot of its own.
NOCTURNE_TEST(safe_footing_is_only_live_floor_on_the_host) {
    party(1);
    static CTrigger gas = {};
    net_support::give_vtable(&gas.base);
    stand.gas_room = &gas.base;
    stand.classes[&gas].insert(g_CTriggerClassInfo.name_hash);
    net_support::box.min = {-1.0f, -1.0f, -1.0f};
    net_support::box.max = {1.0f, 3.0f, 1.0f};
    heroes[0]->base.base.location.position = {0.0f, 0.0f, 0.0f};
    nocturne_net_respawn_apply_if_due(10); // in the gas
    heroes[0]->base.base.location.position = {9.0f, 1.0f, 0.0f};
    nocturne_net_respawn_apply_if_due(10); // in the air
    heroes[0]->base.base.location.position = {9.0f, 0.0f, 0.0f};
    nocturne_net_respawn_apply_if_due(11); // not a sampling frame
    heroes[0]->base.hit_points = 0.0f;
    nocturne_net_respawn_apply_if_due(20);
    heroes[0]->base.hit_points = 100.0f;
    stand.ground = [](const CVector3f &p, float) { return p.y - 10.0f; };
    nocturne_net_respawn_apply_if_due(20);
    stand.ground = [](const CVector3f &, float) { return 0.0f; };
    g_LocalHeroIndex = -1;
    nocturne_net_respawn_apply_if_due(30);
    g_LocalHeroIndex = 4;
    nocturne_net_respawn_apply_if_due(30);
    g_LocalHeroIndex = 0;
    net.connection_type = CONNECTION_CLIENT;
    nocturne_net_respawn_apply_if_due(30);
    net.connection_type = CONNECTION_HOST;
    g_HeroActors[0] = nullptr;
    nocturne_net_respawn_apply_if_due(30);
    g_HeroActors[0] = heroes[0];
    heroes[0]->base.base.lifecycle_state = ACTOR_DESTROYED; // blown apart, hit points or not
    nocturne_net_respawn_apply_if_due(30);
    heroes[0]->base.base.lifecycle_state = (EActorLifecycleState)0;

    // None taken: a dead host with nobody else goes back where it fell.
    heroes[0]->base.hit_points = 0.0f;
    heroes[0]->base.base.location.position = {2.0f, 0.0f, 0.0f};
    net.player_count = 2;
    CHECK_EQ(nocturne_net_respawn_request(0), 1);
    CHECK(near(last_respawn().position[0][0], 2.0f));
}

// The ring search passes over a spot in the gas, and a guest's place is
// guarded even when it is the only one.
NOCTURNE_TEST(the_ring_search_avoids_the_gas) {
    party(2);
    static CTrigger gas = {};
    net_support::give_vtable(&gas.base);
    gas.base.location.position = {3.0f, 0.0f, 0.0f};
    stand.gas_room = &gas.base;
    stand.classes[&gas].insert(g_CTriggerClassInfo.name_hash);
    net_support::box.min = {-0.5f, -1.0f, -0.5f};
    net_support::box.max = {0.5f, 3.0f, 0.5f};
    CHECK_EQ(nocturne_net_respawn_request(1), 1);
    Respawn packet = last_respawn();
    CHECK(!(near(packet.position[1][0], 3.0f) && near(packet.position[1][2], 0.0f)));
}

// More heroes than the packet holds are cut to it; an empty slot is passed
// over; a host with no hero, or no slot, cannot ask.
NOCTURNE_TEST(the_party_is_what_the_packet_holds) {
    party(4);
    g_HeroCount = 6;
    g_HeroActors[2] = nullptr;
    CHECK_EQ(nocturne_net_respawn_request(1), 1);
    Respawn packet = last_respawn();
    CHECK_EQ(packet.hero_count, 4);
    CHECK_EQ(packet.hero_mask, 1 | 2 | 8);

    g_HeroActors[0] = nullptr;
    CHECK_EQ(nocturne_net_respawn_request(1), 0);
    g_LocalHeroIndex = -1;
    CHECK_EQ(nocturne_net_respawn_request(1), 0);
    g_LocalHeroIndex = 4;
    CHECK_EQ(nocturne_net_respawn_request(1), 0);
}

// Re-sent by the host each frame until due; applied on that frame or after:
// revived, let go of, moved, admitted to the area, and a Stranger whose coat
// was lost gets it back.
NOCTURNE_TEST(on_its_frame_the_party_is_revived_and_moved) {
    party(3);
    heroes[0]->base.base.location.area_id = 7;
    nocturne_net_respawn_request(1);
    Respawn packet = last_respawn();

    stand.sent.clear();
    nocturne_net_respawn_apply_if_due(129);
    CHECK_EQ(stand.sent.size(), (size_t)1);
    CHECK(stand.revived.empty());

    static CDemonActor grabber = {};
    heroes[1]->base.grabbed_by = &grabber;
    heroes[1]->base.base.location.area_id = -1;
    stand.classes[heroes[1]].insert(g_CStrangerClassInfo.name_hash);
    stand.classes[heroes[2]].insert(g_CStrangerClassInfo.name_hash);
    heroes[2]->base.cloth_list.count = 1;
    nocturne_net_respawn_apply_if_due(131);
    CHECK_EQ(stand.revived.size(), (size_t)3);
    CHECK_EQ(net_support::grab_releases.size(), (size_t)1);
    CHECK(near(heroes[1]->base.base.location.position.x, packet.position[1][0]));
    CHECK_EQ(heroes[1]->base.base.location.area_id, 7);
    CHECK_EQ(stand.cloth.size(), (size_t)4);
    CHECK_EQ(stand.cloth[0], std::string("add strcoat.cth"));

    // Done: nothing more to apply.
    nocturne_net_respawn_apply_if_due(132);
    CHECK_EQ(stand.revived.size(), (size_t)3);
}

// A guest takes the host's packet and applies it on the frame without
// re-sending; one that was not revived keeps its clothes as they are.
NOCTURNE_TEST(a_guest_applies_the_hosts_respawn) {
    party(3);
    nocturne_net_respawn_request(0);
    Respawn packet = last_respawn();
    net.connection_type = CONNECTION_CLIENT;
    nocturne_net_respawn_clear_placeholder();
    CHECK_EQ(nocturne_net_respawn_on_packet(&packet, (int)sizeof(packet)), 1);
    CHECK_EQ(nocturne_net_respawn_on_packet(&packet, (int)sizeof(packet) - 1), 0);
    stand.sent.clear();
    nocturne_net_respawn_apply_if_due(129);
    CHECK(stand.sent.empty());
    // Only the host was in it: the guest stays as it is, and an empty slot
    // has nobody to move.
    stand.revive_result = 0;
    stand.classes[heroes[0]].insert(g_CStrangerClassInfo.name_hash);
    g_HeroActors[2] = nullptr;
    nocturne_net_respawn_apply_if_due(130);
    CHECK_EQ(stand.revived.size(), (size_t)1);
    CHECK(stand.revived[0] == heroes[0]);
    CHECK(stand.cloth.empty());
}

// Game over: Continue respawns the party; Quit, or no Continue to offer,
// leaves the game.
NOCTURNE_TEST(the_hosts_game_over_offers_continue) {
    party(2);
    stand.pick_choices = {-1, 0};
    CHECK_EQ(nocturne_net_host_death_menu(), 1);
    CHECK_EQ(stand.pick_lines.size(), (size_t)2);
    CHECK_EQ(stand.pick_title, std::string("Game Over"));
    CHECK_EQ(stand.pick_lists_alive, 0);
    CHECK_EQ(stand.disconnects, 0);

    stand.pick_choices = {1};
    CHECK_EQ(nocturne_net_host_death_menu(), 0);
    CHECK_EQ(stand.disconnects, 1);

    // Continue picked, but no hero of the host's to place: leaving.
    g_HeroActors[0] = nullptr;
    stand.pick_choices = {0};
    CHECK_EQ(nocturne_net_host_death_menu(), 0);
    CHECK_EQ(stand.disconnects, 2);
    g_HeroActors[0] = heroes[0];

    net.player_count = 1;
    stand.pick_choices = {0};
    CHECK_EQ(nocturne_net_host_death_menu(), 0);
    CHECK_EQ(stand.pick_lines.size(), (size_t)1);
    CHECK_EQ(stand.disconnects, 3);
}

// The view: a camera with no frame sees nothing, and a spot outside a frame
// that does is passed over on either side.
NOCTURNE_TEST(a_camera_with_no_frame_sees_nothing) {
    party(2);
    g_CDemonCameraInstance.framebuffer_width = 0;
    CHECK_EQ(nocturne_net_respawn_request(1), 1);
    CHECK(near(last_respawn().position[1][0], 0.0f));
    g_CDemonCameraInstance.framebuffer_width = 640;
    g_CDemonCameraInstance.framebuffer_height = 0;
    CHECK_EQ(nocturne_net_respawn_request(1), 1);
    CHECK(near(last_respawn().position[1][0], 0.0f));
}

NOCTURNE_TEST_MAIN()
