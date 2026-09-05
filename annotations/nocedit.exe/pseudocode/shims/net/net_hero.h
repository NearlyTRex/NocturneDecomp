#pragma once

// =============================================================================
// NETPLAY — LOBBY HERO SELECTION
// =============================================================================
//
// An addition, not a reconstruction. Every playable class the game registers
// derives from CHero, CHeroPlaceholder::createHero already maps all nine
// EHeroType values to one, and CDemonMission::createHeros already spawns each
// network player from that player's own SNetPlayer::hero_number — so per-player
// heroes are something the shipped code can do and never offers.
//
// What it lacks is any way to say which. hero_number is seeded once, from the
// ini's heroNumber, when CNetGame::initializeNetworkToHost / ...ToJoin builds
// the local player, and nothing writes it again. Two machines that share an ini
// therefore both arrive as the same character, and neither can say otherwise
// without quitting and editing a file.
//
// This supplies the two things a lobby selector needs and the binary has
// neither of: a printable name per hero (the game stores only class names —
// "CSvetlana" — and no display strings at all), and the wrap-around step used
// to cycle through them. The lobby drives both; see CNetGame::runLobby.
//
// A guest's choice reaches the rest of the session over the protocol that is
// already there: PACKET_PLAYER_STATE has carried hero_number since the shipped
// build, CNetGame::sendMyStateChanged has always filled it in, and only the
// host's receive path ignored it. That path now applies it, so the choice
// propagates the same way a name or a ready flag does.
//
// Gated by NOCTURNE_AUTHENTIC_NETPLAY in shim_config_authentic.h at the call sites: with
// authentic netplay on, the lobby draws the raw hero_number as it shipped and
// nothing here is reached.

#ifdef __cplusplus
extern "C" {
#endif

// Display name for an EHeroType, for the lobby's hero column. Never null — an
// out-of-range value comes back as "?" rather than reading off the table.
const char *nocturne_net_hero_name(int hero_type);

// The next selectable hero `direction` steps away from `hero_type`, wrapping at
// both ends and skipping heroes the lobby does not offer. `direction` is +1 or
// -1. An out-of-range input restarts at the first hero. A hero the selector
// skips can still arrive over the wire and still has a name; only the cycle
// refuses to land on it.
int nocturne_net_hero_cycle(int hero_type, int direction);

// The host's view of the local player's hero.
//
// A guest keeps its own hero_number across an incoming game-settings packet —
// it has to, or a settings broadcast still in flight when the guest cycles
// would undo the choice and the guest would never resend it. That leaves the
// two machines free to disagree for as long as a change is unacknowledged, and
// a mission started inside that window would build the guest's hero from one
// class on the host and another on the guest. Nothing reconciles that: the
// netcode is deterministic lockstep, so the session is out of step from the
// first frame.
//
// The host is the one that decides, and the protocol already says when: the
// host will not start until every guest has acknowledged the settings id its
// player table was broadcast in. So the last settings a guest applied are, at
// the moment a mission starts, exactly the table the host is loading from.
// Recording the guest's own hero out of that packet and adopting it at load
// time makes the two agree by construction, whatever the timing.
//
// In the ordinary case — a change made with time to be acknowledged — the
// recorded value is the change, and adopting it is a no-op.
void nocturne_net_hero_note_host_view(int hero_type);

// The recorded view, or -1 if the host has broadcast no settings this session.
int nocturne_net_hero_host_view(void);

// Drops the recorded view. Called on entry to the lobby, so a value left over
// from a previous session can never be applied to this one.
void nocturne_net_hero_forget_host_view(void);

#ifdef __cplusplus
}
#endif
