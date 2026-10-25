// =============================================================================
// NET MISSION — every machine moves to the same next mission on the same frame
// =============================================================================
//
// The host names the mission, the seed and the frame it left on, sending the
// frames a guest still needs alongside; a guest follows, waiting for the
// announcement if it got there first. Both meet at the barrier, start from the
// same seed, and drop the frame the host had applied but not simulated.
//
// What was announced lasts the run, so the cases run in order: a guest with
// nothing yet, then the host's announcement, then a guest that has it.

#include "net/net_mission.h"
#include "net/net_packets.h"
#include "net_support.h"
#include "nocturne.h"
#include "nocturne_test.h"

#include <cstring>
#include <string>
#include <vector>

namespace {

using net_support::net;
using net_support::stand;

#pragma pack(push, 1)
struct Announcement {
    SNetPacketHeader header;
    uint seed;
    int serial;
    int end_frame;
    char mission[NOCTURNE_NET_MISSION_NAME_MAX];
};
#pragma pack(pop)

Announcement announcement(int serial, int end_frame, const char *mission) {
    Announcement packet;
    nocturne_net_packet_init(&packet, (int)sizeof(packet), NOCTURNE_NET_PACKET_MISSION);
    packet.seed = 0x1234;
    packet.serial = serial;
    packet.end_frame = end_frame;
    std::memset(packet.mission, 0, sizeof(packet.mission));
    std::strncpy(packet.mission, mission, sizeof(packet.mission));
    return packet;
}

int deliver(const Announcement &packet) {
    return nocturne_net_mission_on_packet(&packet, (int)sizeof(packet));
}

int sent_of(int type) {
    int count = 0;
    for (const auto &s : stand.sent)
        count += (net_support::type_of(s) == type);
    return count;
}

void history(std::vector<int> sequences) {
    g_SimFrameCount = (int)sequences.size();
    for (size_t i = 0; i < sequences.size(); i++) {
        g_SimFrameHistory[i].sequence_number = sequences[i];
    }
}

} // namespace

// Outside a session there is nothing to agree on.
NOCTURNE_TEST(outside_a_session_a_mission_change_is_the_games_own) {
    stand.reset();
    char name[16] = "MISSION1";
    nocturne_net_mission_resolve(name, (int)sizeof(name));
    nocturne_net_mission_resolve(nullptr, 16);
    nocturne_net_mission_resolve(name, 0);
    CHECK_EQ(std::string(name), std::string("MISSION1"));
    CHECK_EQ(nocturne_net_mission_pending(), 0);
    CHECK_EQ(nocturne_net_mission_begin(), 1);
    CHECK_EQ(nocturne_net_mission_finish(), 1);
    CHECK_EQ(nocturne_net_mission_skip_prompt(), 0);
    CHECK(stand.sync_stages.empty());
}

// A guest that gets there first keeps its own name, and waits for the host: it
// can give up with Escape, or after ten seconds of nothing.
NOCTURNE_TEST(a_guest_with_no_announcement_waits_for_one) {
    stand.reset();
    net_support::start_session(CONNECTION_CLIENT, 2, 1);
    CHECK_EQ(nocturne_net_mission_skip_prompt(), 1);
    CHECK_EQ(nocturne_net_mission_pending(), 0);
    char name[16] = "MISSION1";
    nocturne_net_mission_resolve(name, (int)sizeof(name));
    CHECK_EQ(std::string(name), std::string("MISSION1"));

    stand.pressed = {DIK_ESCAPE};
    CHECK_EQ(nocturne_net_mission_begin(), 0);
    CHECK_EQ(stand.input_waits, 1);
    CHECK_EQ(stand.drawn.size(), (size_t)1);

    stand.time_step = 0x12 * 65536 * 6;
    CHECK_EQ(nocturne_net_mission_begin(), 0);
    CHECK_EQ(stand.receives, 3);
    CHECK(stand.sync_stages.empty());
}

// The announcement arriving during the wait ends it, and the guest meets the
// host at the barrier with every sync stage cleared, then takes its seed.
NOCTURNE_TEST(an_announcement_during_the_wait_ends_it) {
    stand.reset();
    net_support::start_session(CONNECTION_CLIENT, 2, 1);
    net.players[0].local_sync_stage = 4;
    g_RemoteSyncStage = 4;
    stand.on_receive = [] { deliver(announcement(1, 30, "MISSION2")); };
    CHECK_EQ(nocturne_net_mission_begin(), 1);
    CHECK_EQ(stand.receives, 1);
    CHECK_EQ(g_RemoteSyncStage, 0);
    CHECK_EQ(net.players[0].local_sync_stage, 0);
    CHECK_EQ(stand.sync_stages.size(), (size_t)1);
    CHECK_EQ(stand.sync_stages[0], 1);
    CHECK_EQ(stand.seeds.size(), (size_t)1);
    CHECK_EQ(stand.seeds[0], 0x1234u);
}

// The host leaves its mission with one frame applied and not simulated: it
// goes back to that frame, drops it from the history, and announces the
// mission, seed and frame three times to each guest, with the frames the
// guest has not had and the cheat list after.
NOCTURNE_TEST(the_host_announces_the_next_mission) {
    stand.reset();
    net_support::start_session(CONNECTION_HOST, 2, 0);
    net.players[0].sim_frame_index = 11;
    net.players[1].sim_frame_index = 8;
    history({7, 10, 8, 9, 12});
    char name[16] = "MISSION3";
    nocturne_net_mission_resolve(name, (int)sizeof(name));

    CHECK_EQ(net.players[0].sim_frame_index, 10);
    CHECK_EQ(g_SimFrameCount, 3);
    CHECK_EQ(g_SimFrameHistory[1].sequence_number, 8);
    CHECK_EQ(sent_of(NOCTURNE_NET_PACKET_MISSION), 3);
    CHECK_EQ(sent_of(PACKET_SIM_FRAME), 6);
    CHECK_EQ(sent_of(NOCTURNE_NET_PACKET_CHEATS), 3);
    for (const auto &s : stand.sent)
        CHECK_EQ(s.player, 1);

    const Announcement *sent = nullptr;
    for (const auto &s : stand.sent) {
        if (net_support::type_of(s) == NOCTURNE_NET_PACKET_MISSION) {
            sent = (const Announcement *)s.bytes.data();
        }
    }
    CHECK(sent != nullptr);
    if (sent != nullptr) {
        CHECK_EQ(std::string(sent->mission), std::string("MISSION3"));
        CHECK_EQ(sent->end_frame, 10);
    }

    // At the barrier: once more, then both stages; a stage that fails ends it.
    // A frame from the end frame on is the next mission's, not sent.
    stand.sent.clear();
    history({9, 10});
    stand.sync_result = 0;
    CHECK_EQ(nocturne_net_mission_begin(), 0);
    CHECK_EQ(sent_of(NOCTURNE_NET_PACKET_MISSION), 3);
    CHECK_EQ(sent_of(PACKET_SIM_FRAME), 3);
    history({7, 8, 9});
    stand.sync_result = 1;
    CHECK_EQ(nocturne_net_mission_begin(), 1);
    stand.sync_result = 0;
    CHECK_EQ(nocturne_net_mission_finish(), 0);
    stand.sync_result = 1;
    CHECK_EQ(nocturne_net_mission_finish(), 1);
    CHECK_EQ(g_SimFrameCount, 3);
}

// A guest takes the name it was told, once it reaches the host's frame; a
// repeat of an announcement it has is passed over, and one not of this type,
// or cut short, is not taken.
NOCTURNE_TEST(a_guest_follows_the_host) {
    stand.reset();
    net_support::start_session(CONNECTION_CLIENT, 2, 1);
    CHECK_EQ(deliver(announcement(5, 40, "MISSION4")), 1);
    g_RemoteSyncStage = 3;
    CHECK_EQ(deliver(announcement(5, 40, "MISSION9")), 1);
    CHECK_EQ(g_RemoteSyncStage, 3);
    Announcement packet = announcement(6, 40, "MISSION9");
    CHECK_EQ(nocturne_net_mission_on_packet(&packet, (int)sizeof(packet) - 1), 0);

    net.players[1].sim_frame_index = 39;
    CHECK_EQ(nocturne_net_mission_pending(), 0);
    net.players[1].sim_frame_index = 40;
    CHECK_EQ(nocturne_net_mission_pending(), 1);

    char name[16] = "MISSION1";
    nocturne_net_mission_resolve(name, (int)sizeof(name));
    CHECK_EQ(std::string(name), std::string("MISSION4"));
    char tiny[4] = "M1";
    nocturne_net_mission_resolve(tiny, (int)sizeof(tiny));
    CHECK_EQ(std::string(tiny), std::string("MIS"));

    // Begun: no longer pending. Finished: the host's stale frame is dropped.
    CHECK_EQ(nocturne_net_mission_begin(), 1);
    CHECK_EQ(nocturne_net_mission_pending(), 0);
    history({39, 40, 41});
    CHECK_EQ(nocturne_net_mission_finish(), 1);
    CHECK_EQ(g_SimFrameCount, 1);

    // A name that fills the field is cut at its end.
    const std::string long_name(NOCTURNE_NET_MISSION_NAME_MAX, 'M');
    deliver(announcement(7, 50, long_name.c_str()));
    char whole[NOCTURNE_NET_MISSION_NAME_MAX + 8];
    nocturne_net_mission_resolve(whole, (int)sizeof(whole));
    CHECK_EQ(std::string(whole), std::string(NOCTURNE_NET_MISSION_NAME_MAX - 1, 'M'));
}

NOCTURNE_TEST_MAIN()
