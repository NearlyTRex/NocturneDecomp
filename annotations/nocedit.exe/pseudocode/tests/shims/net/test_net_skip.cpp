// =============================================================================
// NET SKIP — a cinematic is skipped when every player has asked, on one frame
// =============================================================================
//
// Each machine sends its player's answer every frame; the host, once every
// answer is yes, schedules the skip a few frames ahead and sends that until it
// is due. Votes and commits from a peer are written as the wire has them.

#include "net/net_packets.h"
#include "net/net_skip.h"
#include "net_support.h"
#include "nocturne.h"
#include "nocturne_test.h"

#include <string>

namespace {

using net_support::game;
using net_support::net;
using net_support::script;
using net_support::stand;

#pragma pack(push, 1)
struct Vote {
    SNetPacketHeader header;
    int voter_player;
    int skip_label;
    int wants_skip;
};
struct Commit {
    SNetPacketHeader header;
    int apply_sequence;
    int skip_label;
};
#pragma pack(pop)

int vote(int voter, int label, int wants) {
    Vote packet;
    nocturne_net_packet_init(&packet, (int)sizeof(packet), NOCTURNE_NET_PACKET_SKIP_VOTE);
    packet.voter_player = voter;
    packet.skip_label = label;
    packet.wants_skip = wants;
    return nocturne_net_skip_on_vote(&packet, (int)sizeof(packet));
}

int commit(int apply, int label) {
    Commit packet;
    nocturne_net_packet_init(&packet, (int)sizeof(packet), NOCTURNE_NET_PACKET_SKIP_COMMIT);
    packet.apply_sequence = apply;
    packet.skip_label = label;
    return nocturne_net_skip_on_commit(&packet, (int)sizeof(packet));
}

// In a skippable cinematic with label `label`, this machine `connection`.
void in_cinematic(EConnectionType connection, int label) {
    stand.reset();
    nocturne_net_skip_reset();
    net_support::start_session(connection, 2, connection == CONNECTION_HOST ? 0 : 1);
    game.letterbox_mode = 1;
    script.saved_cmd_index = label;
    nocturne_net_skip_poll();
}

int sent_of(int type) {
    int count = 0;
    for (const auto &s : stand.sent)
        count += (net_support::type_of(s) == type);
    return count;
}

} // namespace

// Starting a skippable cinematic says so once; a vote goes out every frame.
NOCTURNE_TEST(a_skippable_cinematic_says_so_and_votes_every_frame) {
    in_cinematic(CONNECTION_HOST, 4);
    CHECK_EQ(stand.messages.size(), (size_t)1);
    nocturne_net_skip_poll();
    CHECK_EQ(stand.messages.size(), (size_t)1);
    CHECK_EQ(sent_of(NOCTURNE_NET_PACKET_SKIP_VOTE), 2);
    CHECK_EQ(sent_of(NOCTURNE_NET_PACKET_SKIP_COMMIT), 0);
}

// Both players asking has the host schedule the skip twelve frames on; it runs
// then, with the game's generator chosen for the frame and the flag put back.
NOCTURNE_TEST(when_everyone_asks_the_host_schedules_the_skip) {
    in_cinematic(CONNECTION_HOST, 4);
    net.players[0].sim_frame_index = 100;
    CHECK_EQ(nocturne_net_skip_vote_available(), 1);
    CHECK_EQ(std::string(nocturne_net_skip_vote_label()), std::string("Vote to skip cinematic."));
    nocturne_net_skip_toggle_vote();
    CHECK_EQ(stand.messages.back(), std::string("Skip requested - waiting for the other player"));
    CHECK_EQ(std::string(nocturne_net_skip_vote_label()), std::string("Withdraw skip vote."));

    CHECK_EQ(vote(1, 4, 1), 1);
    nocturne_net_skip_poll();
    CHECK_EQ(sent_of(NOCTURNE_NET_PACKET_SKIP_COMMIT), 1);
    CHECK_EQ(nocturne_net_skip_vote_available(), 0);
    nocturne_net_skip_poll();
    CHECK_EQ(sent_of(NOCTURNE_NET_PACKET_SKIP_COMMIT), 2);

    nocturne_net_skip_apply_if_due(111);
    CHECK(stand.skip_processing.empty());
    game.is_processing = 0;
    nocturne_net_skip_apply_if_due(112);
    CHECK_EQ(stand.skip_processing.size(), (size_t)1);
    CHECK_EQ(stand.skip_processing[0], 1);
    CHECK_EQ(game.is_processing, 0);
    CHECK_EQ(game.cinematic_skip_in_progress, 0);
    nocturne_net_skip_apply_if_due(113);
    CHECK_EQ(stand.skip_processing.size(), (size_t)1);
}

// A guest takes the host's commit, the first copy deciding; a late one still
// runs; a cinematic with no label to jump to fast-forwards instead.
NOCTURNE_TEST(a_guest_runs_the_hosts_skip) {
    in_cinematic(CONNECTION_CLIENT, 6);
    CHECK_EQ(commit(50, 6), 1);
    CHECK_EQ(commit(70, 6), 1);
    stand.skip_jumped = 0;
    nocturne_net_skip_apply_if_due(55);
    CHECK_EQ(stand.skip_processing.size(), (size_t)1);
    CHECK_EQ(game.cinematic_skip_in_progress, 1);

    // Late again: run, not reported twice.
    commit(60, 6);
    nocturne_net_skip_apply_if_due(65);
    CHECK_EQ(stand.skip_processing.size(), (size_t)2);
}

// A commit for another cinematic is not taken, and one whose cinematic ended
// before its frame is dropped; nor does a skip run once the letterbox is off.
NOCTURNE_TEST(a_skip_for_another_cinematic_does_not_run) {
    in_cinematic(CONNECTION_CLIENT, 6);
    CHECK_EQ(commit(50, 7), 1);
    nocturne_net_skip_apply_if_due(50);
    commit(50, 6);
    script.saved_cmd_index = 7;
    nocturne_net_skip_apply_if_due(50);
    CHECK(stand.skip_processing.empty());

    script.saved_cmd_index = 6;
    commit(50, 6);
    game.letterbox_mode = 2;
    commit(50, 6);
    game.letterbox_mode = 1;
    commit(50, 6);
    game.letterbox_mode = 0;
    script.saved_cmd_index = -2;
    nocturne_net_skip_apply_if_due(50);
    CHECK(stand.skip_processing.empty());
}

// The other player asking is said once, until they withdraw; a vote for
// another cinematic, or from no player, counts for nothing.
NOCTURNE_TEST(the_other_players_request_is_shown_once) {
    in_cinematic(CONNECTION_HOST, 4);
    const size_t before = stand.messages.size();
    vote(1, 4, 1);
    vote(1, 4, 1);
    CHECK_EQ(stand.messages.size(), before + 1);
    vote(1, 4, 0);
    vote(1, 4, 1);
    CHECK_EQ(stand.messages.size(), before + 2);
    vote(1, 4, 0);

    // Already asking ourselves: no need to be told.
    nocturne_net_skip_toggle_vote();
    vote(1, 4, 1);
    CHECK_EQ(stand.messages.back(), std::string("Skip requested - waiting for the other player"));
    nocturne_net_skip_toggle_vote();
    CHECK_EQ(stand.messages.back(), std::string("Skip request withdrawn"));
    // Asking when they already have: nothing to wait for.
    const size_t asked = stand.messages.size();
    nocturne_net_skip_toggle_vote();
    CHECK_EQ(stand.messages.size(), asked);

    CHECK_EQ(vote(1, 5, 1), 1);
    CHECK_EQ(vote(-1, 4, 1), 1);
    CHECK_EQ(vote(4, 4, 1), 1);
    Vote short_vote;
    nocturne_net_packet_init(&short_vote, (int)sizeof(short_vote), NOCTURNE_NET_PACKET_SKIP_VOTE);
    CHECK_EQ(nocturne_net_skip_on_vote(&short_vote, (int)sizeof(short_vote) - 1), 0);
    Commit short_commit;
    nocturne_net_packet_init(&short_commit, (int)sizeof(short_commit),
                             NOCTURNE_NET_PACKET_SKIP_COMMIT);
    CHECK_EQ(nocturne_net_skip_on_commit(&short_commit, (int)sizeof(short_commit) - 1), 0);
}

// Between cinematics, out of play, or with no slot of its own, nothing is
// voted and the votes are dropped.
NOCTURNE_TEST(between_cinematics_there_is_nothing_to_vote_on) {
    in_cinematic(CONNECTION_HOST, 4);
    nocturne_net_skip_toggle_vote();
    game.letterbox_mode = 0;
    nocturne_net_skip_poll();
    nocturne_net_skip_poll();
    CHECK_EQ(nocturne_net_skip_vote_available(), 0);
    nocturne_net_skip_toggle_vote();
    game.letterbox_mode = 1;
    nocturne_net_skip_poll();
    CHECK_EQ(std::string(nocturne_net_skip_vote_label()), std::string("Vote to skip cinematic."));

    // The table follows the cinematic the menu last saw.
    script.saved_cmd_index = 9;
    CHECK_EQ(nocturne_net_skip_vote_available(), 0);
    script.saved_cmd_index = 4;

    net.local_player_index = 4;
    stand.sent.clear();
    nocturne_net_skip_poll();
    CHECK(stand.sent.empty());
    CHECK_EQ(nocturne_net_skip_vote_available(), 0);
    net.local_player_index = -1;
    nocturne_net_skip_poll();
    CHECK(stand.sent.empty());
    CHECK_EQ(nocturne_net_skip_vote_available(), 0);
    net.local_player_index = 0;

    // A commit naming no cinematic matches being in none, and still skips
    // nothing: not with no script, no game, or the letterbox off.
    g_CScriptPtr = nullptr;
    nocturne_net_skip_poll();
    CHECK_EQ(commit(1, -2), 1);
    nocturne_net_skip_apply_if_due(1);
    g_CScriptPtr = &script;
    g_CGamePtr = nullptr;
    CHECK_EQ(commit(1, -2), 1);
    nocturne_net_skip_apply_if_due(1);
    g_CGamePtr = &game;
    game.letterbox_mode = 0;
    CHECK_EQ(commit(1, -2), 1);
    nocturne_net_skip_apply_if_due(1);
    CHECK(stand.skip_processing.empty());
    game.letterbox_mode = 1;

    net.network_mode = NET_MODE_LOBBY;
    nocturne_net_skip_poll();
    CHECK_EQ(nocturne_net_skip_vote_available(), 0);
}

// A count of players the slots cannot hold, or none, is never everyone.
NOCTURNE_TEST(everyone_is_only_ever_the_players_there_are) {
    in_cinematic(CONNECTION_HOST, 4);
    net.player_count = 5;
    for (int i = 1; i < 4; i++)
        vote(i, 4, 1);
    nocturne_net_skip_toggle_vote();
    nocturne_net_skip_poll();
    CHECK_EQ(sent_of(NOCTURNE_NET_PACKET_SKIP_COMMIT), 0);
    net.player_count = 0;
    nocturne_net_skip_poll();
    CHECK_EQ(sent_of(NOCTURNE_NET_PACKET_SKIP_COMMIT), 0);
}

NOCTURNE_TEST_MAIN()
