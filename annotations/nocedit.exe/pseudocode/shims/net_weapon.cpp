// =============================================================================
// NETPLAY — SYNCHRONISED WEAPON / ITEM SELECTION — implementation
// =============================================================================
//
// See net_weapon.h for why a weapon switch has to cross the wire at all.

#include "net_weapon.h"
#include "shim_config.h"
#include "nocturne.h"
#include "debug_log.h"

#include <cstring>

#if !NOCTURNE_AUTHENTIC_NETPLAY

// How far ahead a selection is scheduled, and therefore exactly how much input
// lag a weapon change carries in a network game. Set from the requirement, which
// is asymmetric:
//
//   A HOST-originated request has the whole window, because every guest is
//   behind the host and reaches the apply frame later.
//
//   A GUEST-originated one does not. The guest schedules from its own frame
//   index, which trails the host's by the current skew S, so the host must
//   receive it within (WEAPON_LEAD_FRAMES - S) frames or it applies late.
//
// At ~47 sim frames a second, 12 leaves roughly 0.15s of real budget at a
// typical S of 5 — ample on a LAN. It is NOT ample over a slow link, or if a
// guest hitches badly enough to stretch S: nothing caps the skew,
// processServerFrame only limits how many history frames it ships per
// iteration.
//
// If the "applied late" warning below ever fires, this is the number to raise —
// or better, move scheduling to the host, which knows the real frame numbers
// and would remove the skew term entirely at the cost of one round trip for a
// guest's own switch.
#define WEAPON_LEAD_FRAMES 12

// A player mashing keys can have several selections in flight, so unlike the
// respawn's single slot this is a queue. Sixteen is far more than a human
// generates inside the lead window.
#define WEAPON_MAX_PENDING 16

// Matches the player table the shipped protocol supports.
#define WEAPON_MAX_PLAYERS 4

#pragma pack(push, 1)
typedef struct SNetPacket_WeaponSelect {
    SNetPacketHeader header;         // 0x0
    int apply_sequence;              // 0x5   sim frame every machine applies on
    int origin_player;               // 0x9   who pressed the key
    int serial;                      // 0xd   per-origin, for de-duplication
    int hero_index;                  // 0x11  whose inventory changes
    int action;                      // 0x15  NOCTURNE_NET_WEAPON_*
    int category;                    // 0x19  weapon category (SELECT only)
    int direction;                   // 0x1d
} SNetPacket_WeaponSelect;           // 0x21
#pragma pack(pop)

static SNetPacket_WeaponSelect s_pending[WEAPON_MAX_PENDING];
static int s_pending_count = 0;

// Highest serial seen from each origin. A re-broadcast carries a serial we have
// already taken, so it is dropped; a first copy that was lost still arrives
// with a serial above the mark and is accepted.
static int s_highest_serial[WEAPON_MAX_PLAYERS];

// Our own outgoing serial.
static int s_next_serial = 1;

static int s_reported_late = 0;

// -----------------------------------------------------------------------------

static int weapon_is_network_game(void)
{
    return ((g_CNetGamePtr != (CNetGame *)0x0) &&
            (g_CNetGamePtr->connection_type != CONNECTION_NONE) &&
            (g_CNetGamePtr->network_mode == NET_MODE_PLAYING));
}

// The selection itself. Deliberately the only place that touches an inventory,
// so the local and remote paths cannot drift apart.
static void weapon_apply(int hero_index, int action, int category, int direction)
{
    CHero *hero;

    if ((hero_index < 0) || (WEAPON_MAX_PLAYERS <= hero_index)) {
        return;
    }
    hero = g_HeroActors[hero_index];
    if (hero == (CHero *)0x0) {
        return;
    }

    if (action == NOCTURNE_NET_WEAPON_SELECT) {
        core_inv_cpp_CInventory_selectWeapon_FUN_004feb10(
            &hero->inventory, (CDemonActor *)0x0, category, direction);
    }
    else if (action == NOCTURNE_NET_WEAPON_ITEM) {
        core_inv_cpp_CInventory_selectItem_FUN_004fec10(&hero->inventory, direction);
    }
    else if (action == NOCTURNE_NET_WEAPON_AMMO) {
        core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10(&hero->inventory, direction);
    }
}

static void weapon_broadcast(const SNetPacket_WeaponSelect *request)
{
    CNetGame *net_game = g_CNetGamePtr;
    int       i;

    for (i = 0; i < net_game->player_count; i++) {
        if (i != net_game->local_player_index) {
            core_netgame_cpp_CNetGame_send_FUN_005411c0(
                net_game, i, (SNetPacketHeader *)&request->header);
        }
    }
}

static void weapon_queue(const SNetPacket_WeaponSelect *request)
{
    if (WEAPON_MAX_PENDING <= s_pending_count) {
        DWARN("net_weapon: pending queue full, dropping a selection - the two "
              "machines will disagree about a weapon from here on");
        return;
    }
    s_pending[s_pending_count] = *request;
    s_pending_count = s_pending_count + 1;
}

// -----------------------------------------------------------------------------

extern "C" void nocturne_net_weapon_apply_local(int action, int category, int direction)
{
    weapon_apply(g_LocalHeroIndex, action, category, direction);
}

extern "C" void nocturne_net_weapon_request(int action, int category, int direction)
{
    SNetPacket_WeaponSelect request;
    CNetGame               *net_game;

    if (weapon_is_network_game() == 0) {
        // Single player, the lobby, or a mission not yet running: behave
        // exactly as the shipped code did, immediately and locally.
        weapon_apply(g_LocalHeroIndex, action, category, direction);
        return;
    }

    net_game = g_CNetGamePtr;
    std::memset(&request, 0, sizeof(request));
    request.header.size     = sizeof(SNetPacket_WeaponSelect);
    request.header.type     = (ENetPacketType)NOCTURNE_NET_PACKET_WEAPON;
    request.apply_sequence  =
        net_game->players[net_game->local_player_index].sim_frame_index + WEAPON_LEAD_FRAMES;
    request.origin_player   = net_game->local_player_index;
    request.serial          = s_next_serial;
    request.hero_index      = g_LocalHeroIndex;
    request.action          = action;
    request.category        = category;
    request.direction       = direction;
    s_next_serial = s_next_serial + 1;

    // Queued, not applied: this machine waits for the scheduled frame with
    // everyone else. Applying it here is the divergence being fixed.
    weapon_queue(&request);
    weapon_broadcast(&request);
}

extern "C" int nocturne_net_weapon_on_packet(const void *packet, int packet_size)
{
    const SNetPacket_WeaponSelect *incoming = (const SNetPacket_WeaponSelect *)packet;

    if ((packet == (const void *)0x0) || (packet_size < (int)sizeof(SNetPacket_WeaponSelect))) {
        return 0;
    }
    if (incoming->header.type != (ENetPacketType)NOCTURNE_NET_PACKET_WEAPON) {
        return 0;
    }
    if ((incoming->origin_player < 0) || (WEAPON_MAX_PLAYERS <= incoming->origin_player)) {
        return 1;               // ours by type, but not addressable - consumed
    }

    // Re-broadcasts repeat a serial we have already taken.
    if (incoming->serial <= s_highest_serial[incoming->origin_player]) {
        return 1;
    }
    s_highest_serial[incoming->origin_player] = incoming->serial;

    weapon_queue(incoming);
    return 1;
}

extern "C" void nocturne_net_weapon_apply_if_due(int sequence_number)
{
    CNetGame *net_game = g_CNetGamePtr;
    int       kept     = 0;
    int       i;

    for (i = 0; i < s_pending_count; i++) {
        SNetPacket_WeaponSelect *request = &s_pending[i];

        if (sequence_number < request->apply_sequence) {
            // Still in the future. Re-send the ones we originated, since the
            // transport is unreliable and nothing acks these.
            if ((net_game != (CNetGame *)0x0) &&
                (request->origin_player == net_game->local_player_index)) {
                weapon_broadcast(request);
            }
            s_pending[kept] = *request;
            kept = kept + 1;
            continue;
        }

        // Due, or overdue: a packet that arrived after its frame had already
        // passed applies now rather than never. That leaves the two machines
        // disagreeing for the frames in between, so say so once - if it happens
        // at all, WEAPON_LEAD_FRAMES is too short for this connection.
        if ((request->apply_sequence < sequence_number) && (s_reported_late == 0)) {
            s_reported_late = 1;
            DLOG_EX("netplay",
                    "net_weapon: a selection scheduled for frame %d arrived at %d and "
                    "applied late - the machines disagreed about a weapon for %d frames. "
                    "WEAPON_LEAD_FRAMES is too short for this connection",
                    request->apply_sequence, sequence_number,
                    sequence_number - request->apply_sequence);
        }
        weapon_apply(request->hero_index, request->action,
                     request->category, request->direction);
    }
    s_pending_count = kept;
}

extern "C" void nocturne_net_weapon_reset(void)
{
    s_pending_count = 0;
    s_next_serial   = 1;
    s_reported_late = 0;
    std::memset(s_highest_serial, 0, sizeof(s_highest_serial));
}

#else  /* authentic: the shipped behaviour, local and immediate */

extern "C" void nocturne_net_weapon_apply_local(int action, int category, int direction)
{
    nocturne_net_weapon_request(action, category, direction);
}

extern "C" void nocturne_net_weapon_request(int action, int category, int direction)
{
    CHero *hero = g_HeroActors[g_LocalHeroIndex];

    if (hero == (CHero *)0x0) {
        return;
    }
    if (action == NOCTURNE_NET_WEAPON_SELECT) {
        core_inv_cpp_CInventory_selectWeapon_FUN_004feb10(
            &hero->inventory, (CDemonActor *)0x0, category, direction);
    }
    else if (action == NOCTURNE_NET_WEAPON_ITEM) {
        core_inv_cpp_CInventory_selectItem_FUN_004fec10(&hero->inventory, direction);
    }
    else if (action == NOCTURNE_NET_WEAPON_AMMO) {
        core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10(&hero->inventory, direction);
    }
}

extern "C" int  nocturne_net_weapon_on_packet(const void *, int) { return 0; }
extern "C" void nocturne_net_weapon_apply_if_due(int)            {}
extern "C" void nocturne_net_weapon_reset(void)                  {}

#endif
