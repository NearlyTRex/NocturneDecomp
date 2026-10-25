// =============================================================================
// NET SYNC — the guest compares its world with the host's, frame by frame
// =============================================================================
//
// The host sends a summary of each frame it simulates: the heroes, a hash of
// every actor that is not decoration, the same split into buckets by name, and
// how many sim draws the frame made. A guest compares its own when it reaches
// that frame, reports the first mismatches in full, and on the first one puts
// up the game's error box. Here the host's own report is played back to a
// guest whose world has been changed after it.

#include "net/net_packets.h"
#include "net/net_sync.h"
#include "net/rng.h"
#include "net_support.h"
#include "nocturne.h"
#include "nocturne_test.h"

#include <cmath>
#include <cstdint>
#include <cstring>
#include <string>
#include <vector>

namespace {

using net_support::heroes;
using net_support::net;
using net_support::stand;

#pragma pack(push, 1)
struct SyncCheck {
    SNetPacketHeader header;
    int sequence_number;
    int hero_count;
    float hero_position[4][3];
    int hero_area[4];
    uint actor_hash;
    int actor_count;
    uint bucket_hash[32];
    ushort bucket_count[32];
    uint sim_rng_draws;
};
#pragma pack(pop)
static_assert(sizeof(SyncCheck) == 0x119, "the sync report's wire size");

CDemonActor actors[12];

// Each actor its own class, as far as the cache can tell.
void give_class(CDemonActor *actor, uintptr_t id) {
    actor->vtable._ub = (CDemonActor_vtable *)(0x100000 + id * 0x100);
}

// Two heroes and a room of actors: an empty slot, two flies, one whose name
// fills its field, then nine of one name.
void world() {
    stand.reset();
    nocturne_net_sync_reset();
    nocturne_rng_frame_reset(0);
    net_support::place_heroes(2);
    net_support::start_session(CONNECTION_HOST, 2, 0);
    heroes[1]->base.base.location.position = {1.0f, 2.0f, 3.0f};
    std::memset(actors, 0, sizeof(actors));
    CDemonSet *set = net_support::set;
    set->actors[set->actor_count++] = nullptr;
    for (int i = 9; i < 11; i++) {
        std::strcpy(actors[i].actor_name, "fly");
        give_class(&actors[i], 2);
        stand.classes[&actors[i]].insert(g_CFliesClassInfo.name_hash);
        set->actors[set->actor_count++] = &actors[i];
    }
    std::memset(actors[11].actor_name, 'o', sizeof(actors[11].actor_name));
    give_class(&actors[11], 3);
    set->actors[set->actor_count++] = &actors[11];
    for (int i = 0; i < 9; i++) {
        std::strcpy(actors[i].actor_name, "twin");
        actors[i].location.position = {(float)i, 0.0f, 0.0f};
        give_class(&actors[i], 1);
        set->actors[set->actor_count++] = &actors[i];
    }
}

// The host's report for `frame`, sent and taken off the wire.
SyncCheck host_report(int frame) {
    stand.sent.clear();
    nocturne_net_sync_check(frame);
    SyncCheck report;
    std::memset(&report, 0, sizeof(report));
    if (!stand.sent.empty())
        std::memcpy(&report, stand.sent[0].bytes.data(), sizeof(report));
    return report;
}

// The guest's check of `frame` against `report`.
void guest_checks(const SyncCheck &report, int frame) {
    net.connection_type = CONNECTION_CLIENT;
    net.local_player_index = 1;
    CHECK_EQ(nocturne_net_sync_on_packet(&report, (int)sizeof(report)), 1);
    nocturne_net_sync_check(frame);
}

} // namespace

// The host sends its report each frame, to each guest.
NOCTURNE_TEST(the_host_reports_each_frame) {
    world();
    SyncCheck report = host_report(7);
    CHECK_EQ(stand.sent.size(), (size_t)1);
    CHECK_EQ(net_support::type_of(stand.sent[0]), (int)NOCTURNE_NET_PACKET_SYNC_CHECK);
    CHECK_EQ(report.sequence_number, 7);
    CHECK_EQ(report.hero_count, 2);
    CHECK_EQ(report.hero_position[1][2], 3.0f);
    CHECK_EQ(report.actor_count, 13);
    int counted = 0;
    for (int i = 0; i < 32; i++)
        counted += report.bucket_count[i];
    CHECK_EQ(counted, 10); // the flies are decoration
}

// The same world is no desync.
NOCTURNE_TEST(the_same_world_is_no_desync) {
    world();
    SyncCheck report = host_report(8);
    guest_checks(report, 8);
    CHECK(stand.errors.empty());
}

// A hero moved is a desync, put up in the game's error box with where it is on
// each side; so is a hero in another area, or at -0 where the host has 0.
NOCTURNE_TEST(a_hero_out_of_place_is_a_desync) {
    world();
    SyncCheck report = host_report(9);
    heroes[1]->base.base.location.position.x = 1.5f;
    guest_checks(report, 9);
    CHECK_EQ(stand.errors.size(), (size_t)1);
    if (!stand.errors.empty()) {
        CHECK(stand.errors[0].find("Netplay desync at sim frame 9") != std::string::npos);
        CHECK(stand.errors[0].find("heroes differ, actors match") != std::string::npos);
        CHECK(stand.errors[0].find("hero 1  host (1.000, 2.000, 3.000)") != std::string::npos);
        CHECK(stand.errors[0].find("hero 0") == std::string::npos);
    }

    world();
    report = host_report(10);
    heroes[0]->base.base.location.area_id = 4;
    guest_checks(report, 10);
    CHECK_EQ(stand.errors.size(), (size_t)1);

    world();
    report = host_report(11);
    heroes[0]->base.base.location.position.z = -0.0f;
    guest_checks(report, 11);
    CHECK_EQ(stand.errors.size(), (size_t)1);
}

// An actor moved is a desync, and its bucket names the actors in it; an extra
// draw from the sim stream is one too, even with the world still matching.
NOCTURNE_TEST(an_actor_out_of_place_or_an_extra_draw_is_a_desync) {
    world();
    SyncCheck report = host_report(12);
    actors[4].location.position.y = 1.0f;
    guest_checks(report, 12);
    CHECK_EQ(stand.errors.size(), (size_t)1);
    if (!stand.errors.empty()) {
        CHECK(stand.errors[0].find("heroes match, actors differ") != std::string::npos);
    }

    world();
    report = host_report(13);
    nocturne_rng_game(nullptr);
    guest_checks(report, 13);
    CHECK_EQ(stand.errors.size(), (size_t)1);
    if (!stand.errors.empty()) {
        CHECK(stand.errors[0].find("<- diverged inside this frame") != std::string::npos);
    }

    // Only the actor count: a different number of things in the room; and a
    // bucket with the same hash but another count still names its actors.
    world();
    report = host_report(14);
    report.actor_count = 12;
    for (int i = 0; i < 32; i++) {
        if (report.bucket_count[i] == 1)
            report.bucket_count[i] = 2;
    }
    guest_checks(report, 14);
    CHECK_EQ(stand.errors.size(), (size_t)1);

    // The lone actor moved: its bucket is listed to the end of the room.
    world();
    report = host_report(15);
    actors[11].location.position.x = 5.0f;
    guest_checks(report, 15);
    CHECK_EQ(stand.errors.size(), (size_t)1);
}

// The first three are reported in full and then one in three hundred; only the
// first puts up the box.
NOCTURNE_TEST(a_desync_that_stays_is_reported_less) {
    world();
    std::vector<SyncCheck> reports;
    for (int frame = 1; frame <= 300; frame++) {
        net.connection_type = CONNECTION_HOST;
        reports.push_back(host_report(frame));
    }
    heroes[1]->base.base.location.area_id = 9;
    for (int frame = 1; frame <= 300; frame++) {
        guest_checks(reports[(size_t)frame - 1], frame);
    }
    CHECK_EQ(stand.errors.size(), (size_t)1);
}

// A message too long for the box is cut to fit.
NOCTURNE_TEST(a_long_report_is_cut_to_fit_the_box) {
    world();
    net_support::place_heroes(4);
    g_HeroCount = 6; // only four are compared
    SyncCheck report = host_report(20);
    for (int i = 0; i < 4; i++)
        heroes[i]->base.base.location.position = {3e38f, -3e38f, 3e38f};
    guest_checks(report, 20);
    CHECK_EQ(stand.errors.size(), (size_t)1);
    if (!stand.errors.empty())
        CHECK_EQ(stand.errors[0].size(), (size_t)1023);
}

// A frame with no report — never sent, lost, or overwritten — compares nothing;
// an empty hero slot is reported as one.
NOCTURNE_TEST(a_frame_with_no_report_compares_nothing) {
    world();
    net.connection_type = CONNECTION_CLIENT;
    nocturne_net_sync_check(5);
    g_HeroActors[1] = nullptr;
    net.connection_type = CONNECTION_HOST;
    SyncCheck report = host_report(5);
    CHECK_EQ(report.hero_area[1], -2);
    guest_checks(report, 5 + 128);
    CHECK(stand.errors.empty());

    SyncCheck short_report = report;
    CHECK_EQ(nocturne_net_sync_on_packet(&short_report, (int)sizeof(short_report) - 1), 0);
}

// Out of play, with no set, or on a machine that is neither side, nothing is
// sent or compared.
NOCTURNE_TEST(out_of_play_nothing_is_compared) {
    world();
    net.network_mode = NET_MODE_LOBBY;
    nocturne_net_sync_check(1);
    net.network_mode = NET_MODE_PLAYING;
    g_CDemonSetPtr = nullptr;
    nocturne_net_sync_check(1);
    g_CDemonSetPtr = net_support::set;
    net.connection_type = CONNECTION_NONE;
    nocturne_net_sync_check(1);
    g_CNetGamePtr = nullptr;
    nocturne_net_sync_check(1);
    CHECK(stand.sent.empty());
}

// The class cache holds 128; a room with more classes is still asked about
// each one.
NOCTURNE_TEST(more_classes_than_the_cache_holds_are_still_answered) {
    world();
    static CDemonActor many[140];
    CDemonSet *set = net_support::set;
    set->actor_count = 0;
    for (int i = 0; i < 140; i++) {
        std::memset(&many[i], 0, sizeof(many[i]));
        std::strcpy(many[i].actor_name, "crowd");
        give_class(&many[i], (uintptr_t)(10 + i));
        set->actors[set->actor_count++] = &many[i];
    }
    SyncCheck report = host_report(30);
    int counted = 0;
    for (int i = 0; i < 32; i++)
        counted += report.bucket_count[i];
    CHECK_EQ(counted, 140);
}

NOCTURNE_TEST_MAIN()
