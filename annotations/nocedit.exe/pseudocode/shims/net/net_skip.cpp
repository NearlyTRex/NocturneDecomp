// =============================================================================
// NETPLAY — AGREED CINEMATIC SKIP — implementation
// =============================================================================
//
// See net_skip.h for why a skip has to cross the wire at all.

#include "net/net_skip.h"
#include "shim_config.h"
#include "nocturne.h"
#include "core/debug_log.h"

#include <cstring>

#if !NOCTURNE_AUTHENTIC_NETPLAY

// How far ahead the host schedules the skip. Only host-originated, so unlike
// the weapon selection's lead this has the whole window to cross: every guest
// trails the host's frame index, so a frame the host picks from its own counter
// is already in the guest's future. Twelve frames is about a quarter of a second
// at the rate sim frames are produced.
#define SKIP_LEAD_FRAMES 12

// Matches the player table the shipped protocol supports.
#define SKIP_MAX_PLAYERS 4

// How long the "waiting" and "wants to skip" notices stay up, in seconds.
#define SKIP_NOTICE_SECONDS 3.0f

#pragma pack(push, 1)
typedef struct SNetPacket_SkipVote {
    SNetPacketHeader header;         // 0x0
    int voter_player;                // 0x5   whose answer this is
    int skip_label;                  // 0x9   which cinematic they mean
    int wants_skip;                  // 0xd   their answer right now, not a change
} SNetPacket_SkipVote;               // 0x11

typedef struct SNetPacket_SkipCommit {
    SNetPacketHeader header;         // 0x0
    int apply_sequence;              // 0x5   sim frame every machine skips on
    int skip_label;                  // 0x9   which cinematic is being skipped
} SNetPacket_SkipCommit;             // 0xd
#pragma pack(pop)

// Each player's current answer for the cinematic s_table_label names. Levels
// rather than events, so a re-broadcast changes nothing and a withdrawal needs
// no message of its own.
static int s_votes[SKIP_MAX_PLAYERS];
static int s_table_label = -2;       // no cinematic; -1 is a real label index

static int s_local_voted    = 0;

static int s_commit_pending = 0;
static int s_commit_sequence = 0;
static int s_commit_label   = 0;

static int s_reported_late  = 0;

// -----------------------------------------------------------------------------

static int skip_is_network_game(void)
{
    return ((g_CNetGamePtr != (CNetGame *)0x0) &&
            (g_CNetGamePtr->connection_type != CONNECTION_NONE) &&
            (g_CNetGamePtr->network_mode == NET_MODE_PLAYING));
}

// The skippable cinematic this machine is in, or -2 when it is in none.
// setSkipLabel leaves -1 behind for a cinematic that declared no target, which
// is a real value: it still skips, through the fast-forward branch.
//
// Mode 1 only, which is the rule the pause menu's own item follows. The
// letterbox script command takes false, true or bottom and stores 0, 1 or 2;
// mode 2 letterboxes the frame without making the sequence skippable, and only
// mode 1 puts "Skip cinematic." on the menu. Both modes block hero controls and
// disable saving, so mode is the only thing separating them.
static int skip_current_label(void)
{
    if ((g_CGamePtr == (CGame *)0x0) || (g_CScriptPtr == (CScript *)0x0)) {
        return -2;
    }
    if (g_CGamePtr->letterbox_mode != 1) {
        return -2;
    }
    return g_CScriptPtr->saved_cmd_index;
}

static void skip_clear_votes(void)
{
    std::memset(s_votes, 0, sizeof(s_votes));
    s_local_voted = 0;
}

static void skip_notice(const char *text)
{
    core_game_cpp_CGame_displayMessage_FUN_004d7f20(
        g_CGamePtr,
        support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)text),
        SKIP_NOTICE_SECONDS);
}

// Said once when a skippable cinematic starts, because nothing else on screen
// says the option is there. It names no control: the vote is cast from the
// Escape dialog, which every control scheme already reaches.
static void skip_announce_control(void)
{
    skip_notice("This cinematic can be skipped - see the pause menu");
}

static void skip_broadcast(SNetPacketHeader *packet)
{
    CNetGame *net_game = g_CNetGamePtr;
    int       i;

    for (i = 0; i < net_game->player_count; i++) {
        if (i != net_game->local_player_index) {
            core_netgame_cpp_CNetGame_send_FUN_005411c0(net_game, i, packet);
        }
    }
}

static void skip_send_vote(int label, int wants_skip)
{
    SNetPacket_SkipVote vote;

    std::memset(&vote, 0, sizeof(vote));
    vote.header.size   = sizeof(SNetPacket_SkipVote);
    vote.header.type   = (ENetPacketType)NOCTURNE_NET_PACKET_SKIP_VOTE;
    vote.voter_player  = g_CNetGamePtr->local_player_index;
    vote.skip_label    = label;
    vote.wants_skip    = wants_skip;
    skip_broadcast(&vote.header);
}

static void skip_send_commit(void)
{
    SNetPacket_SkipCommit commit;

    std::memset(&commit, 0, sizeof(commit));
    commit.header.size    = sizeof(SNetPacket_SkipCommit);
    commit.header.type    = (ENetPacketType)NOCTURNE_NET_PACKET_SKIP_COMMIT;
    commit.apply_sequence = s_commit_sequence;
    commit.skip_label     = s_commit_label;
    skip_broadcast(&commit.header);
}

static int skip_everyone_voted(void)
{
    CNetGame *net_game = g_CNetGamePtr;
    int       i;

    for (i = 0; i < net_game->player_count; i++) {
        if ((SKIP_MAX_PLAYERS <= i) || (s_votes[i] == 0)) {
            return 0;
        }
    }
    return (0 < net_game->player_count) ? 1 : 0;
}

// The skip itself, run at the same sim frame on every machine.
static void skip_run(void)
{
    CGame *game = g_CGamePtr;
    int    saved_is_processing;
    int    jumped;

    // CScript::skipCinematic's loop is bounded by letterbox mode, so with the
    // cinematic already over it would fall straight through the loop and leave
    // next_cmd sitting on the skip label — a jump backwards into a scene that
    // has already played.
    if ((game == (CGame *)0x0) || (g_CScriptPtr == (CScript *)0x0) ||
        (game->letterbox_mode == 0)) {
        return;
    }

    // See net_skip.h: dismember draws from getRandomFloatFromRange, which picks
    // the shared generator only while this flag is set, and this runs outside
    // CGame::process where it is clear.
    saved_is_processing  = game->is_processing;
    game->is_processing  = 1;
    jumped = core_script_cpp_CScript_skipCinematic_FUN_005602e0(g_CScriptPtr);
    game->is_processing  = saved_is_processing;

    // A cinematic with no setSkipLabel cannot be jumped, and the engine's own
    // fast-forward branch carries it instead. The menu path makes the same call.
    game->cinematic_skip_in_progress = (jumped == 0);
}

// -----------------------------------------------------------------------------

extern "C" void nocturne_net_skip_poll(void)
{
    CNetGame *net_game;
    int       label;
    int       local_index;

    if (skip_is_network_game() == 0) {
        skip_clear_votes();
        s_commit_pending = 0;
        s_table_label    = -2;
        return;
    }

    label = skip_current_label();
    if (label == -2) {
        // Between cinematics. Votes cast for the last one must not carry over.
        if (s_table_label != -2) {
            skip_clear_votes();
            s_commit_pending = 0;
            s_table_label    = -2;
        }
        return;
    }
    if (label != s_table_label) {
        skip_clear_votes();
        s_commit_pending = 0;
        s_table_label    = label;
        skip_announce_control();
    }

    net_game    = g_CNetGamePtr;
    local_index = net_game->local_player_index;
    if ((local_index < 0) || (SKIP_MAX_PLAYERS <= local_index)) {
        return;
    }

    // An answer, not a change, sent every frame: that is what lets the menu
    // withdraw one, and it heals a dropped or reordered datagram without acks.
    // This machine's own answer is set from the pause menu — see
    // nocturne_net_skip_toggle_vote — and this is the only thing that carries it.
    skip_send_vote(label, s_local_voted);

    if (net_game->connection_type == CONNECTION_HOST) {
        if ((s_commit_pending == 0) && (skip_everyone_voted() != 0)) {
            s_commit_pending  = 1;
            s_commit_label    = label;
            s_commit_sequence =
                net_game->players[local_index].sim_frame_index + SKIP_LEAD_FRAMES;
        }
        if (s_commit_pending != 0) {
            skip_send_commit();
        }
    }
}

// -----------------------------------------------------------------------------
// The pause menu's entry
// -----------------------------------------------------------------------------

// s_table_label is what poll() last saw, so it is only current while poll() is
// running. It stops while the Escape dialog is up — CGame::processHotkeys sits
// behind a g_ModalDialogActive guard — which is exactly when these three are
// called, so they read the cinematic directly rather than trusting the table.
// The label still has to match: a cinematic that ended while the dialog was open
// leaves a table belonging to a scene that is over.
static int skip_menu_label(void)
{
    int label;

    if (skip_is_network_game() == 0) {
        return -2;
    }
    label = skip_current_label();
    if ((label == -2) || (label != s_table_label)) {
        return -2;
    }
    return label;
}

extern "C" int nocturne_net_skip_vote_available(void)
{
    int local_index;

    if (skip_menu_label() == -2) {
        return 0;
    }
    // Scheduled already: the frame is set and the other machines are counting on
    // it, so there is nothing left to answer.
    if (s_commit_pending != 0) {
        return 0;
    }
    local_index = g_CNetGamePtr->local_player_index;
    if ((local_index < 0) || (SKIP_MAX_PLAYERS <= local_index)) {
        return 0;
    }
    return 1;
}

extern "C" const char *nocturne_net_skip_vote_label(void)
{
    return (s_local_voted != 0) ? "Withdraw skip vote." : "Vote to skip cinematic.";
}

extern "C" void nocturne_net_skip_toggle_vote(void)
{
    int local_index;

    // Re-checked rather than assumed: the caller decided to draw the entry on an
    // earlier frame, and the cinematic may have ended since.
    if (nocturne_net_skip_vote_available() == 0) {
        return;
    }
    local_index = g_CNetGamePtr->local_player_index;

    s_local_voted        = (s_local_voted == 0) ? 1 : 0;
    s_votes[local_index] = s_local_voted;

    if (s_local_voted == 0) {
        skip_notice("Skip request withdrawn");
    }
    else if (skip_everyone_voted() == 0) {
        skip_notice("Skip requested - waiting for the other player");
    }
}

extern "C" int nocturne_net_skip_on_vote(const void *packet, int packet_size)
{
    const SNetPacket_SkipVote *incoming = (const SNetPacket_SkipVote *)packet;

    if ((packet == (const void *)0x0) || (packet_size < (int)sizeof(SNetPacket_SkipVote))) {
        return 0;
    }
    if (incoming->header.type != (ENetPacketType)NOCTURNE_NET_PACKET_SKIP_VOTE) {
        return 0;
    }
    if ((incoming->voter_player < 0) || (SKIP_MAX_PLAYERS <= incoming->voter_player)) {
        return 1;               // ours by type, but not addressable - consumed
    }
    // A vote only counts for the cinematic this machine is actually in.
    if (incoming->skip_label != skip_current_label()) {
        return 1;
    }

    // Told once, when their answer turns from no to yes: nobody would know to
    // answer otherwise, and a skip that needs both players is a request to the
    // other one. A withdrawal is silent - it asks for nothing - but it arms the
    // notice again, so asking a second time still reaches them.
    if ((incoming->wants_skip != 0) && (s_votes[incoming->voter_player] == 0) &&
        (s_local_voted == 0)) {
        skip_notice("The other player wants to skip - agree from the pause menu");
    }
    s_votes[incoming->voter_player] = (incoming->wants_skip != 0) ? 1 : 0;
    return 1;
}

extern "C" int nocturne_net_skip_on_commit(const void *packet, int packet_size)
{
    const SNetPacket_SkipCommit *incoming = (const SNetPacket_SkipCommit *)packet;

    if ((packet == (const void *)0x0) || (packet_size < (int)sizeof(SNetPacket_SkipCommit))) {
        return 0;
    }
    if (incoming->header.type != (ENetPacketType)NOCTURNE_NET_PACKET_SKIP_COMMIT) {
        return 0;
    }
    if (incoming->skip_label != skip_current_label()) {
        return 1;
    }

    // Re-sent every frame until it is due, so the first copy to arrive wins and
    // the rest describe the same frame.
    if (s_commit_pending == 0) {
        s_commit_pending  = 1;
        s_commit_label    = incoming->skip_label;
        s_commit_sequence = incoming->apply_sequence;
    }
    return 1;
}

extern "C" void nocturne_net_skip_apply_if_due(int sequence_number)
{
    if (s_commit_pending == 0) {
        return;
    }
    if (sequence_number < s_commit_sequence) {
        return;
    }
    // poll() drops a commit whose cinematic has ended, but it runs once per
    // rendered frame while this runs once per applied sim frame, and a client
    // catching up applies several in one pass. So the cinematic can end inside
    // the gap, and a commit raised for the one before it must not skip the one
    // after.
    if (s_commit_label != skip_current_label()) {
        s_commit_pending = 0;
        skip_clear_votes();
        return;
    }

    // Overdue: the commit arrived after its frame had passed. Running it late
    // leaves the machines disagreeing for the frames in between; not running it
    // leaves them disagreeing forever, so it runs, and says so once.
    if ((s_commit_sequence < sequence_number) && (s_reported_late == 0)) {
        s_reported_late = 1;
        DLOG("netplay",
                "net_skip: a skip scheduled for frame %d arrived at %d and ran late - "
                "the machines were %d frames apart through the cinematic. "
                "SKIP_LEAD_FRAMES is too short for this connection",
                s_commit_sequence, sequence_number, sequence_number - s_commit_sequence);
    }

    s_commit_pending = 0;
    skip_clear_votes();
    skip_run();
}

extern "C" void nocturne_net_skip_reset(void)
{
    skip_clear_votes();
    s_commit_pending = 0;
    s_table_label    = -2;
    s_reported_late  = 0;
}

#else  /* authentic: no netplay skip, and the pause menu keeps its own item */

extern "C" void nocturne_net_skip_poll(void)                    {}
extern "C" int  nocturne_net_skip_on_vote(const void *, int)    { return 0; }
extern "C" int  nocturne_net_skip_on_commit(const void *, int)  { return 0; }
extern "C" void nocturne_net_skip_apply_if_due(int)             {}
extern "C" void nocturne_net_skip_reset(void)                   {}

#endif
