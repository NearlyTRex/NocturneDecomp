#pragma once

// =============================================================================
// NETPLAY — LEAVING A NETWORK GAME WITHOUT THE HANDSHAKE WAIT
// =============================================================================
//
// A fix to the shipped protocol, not a reconstruction.
//
// CNetGame::disconnect(handshake = 1) re-sends a disconnect notice and repaints
// a progress dialog over the last game frame until every peer acknowledges,
// timing the wait by g_CurrentGameTime. Each repaint can block for seconds, and
// that clock gains at most 0x20000 per step, so the 3 s (host: 5 s) wait ran to
// twenty seconds of frozen screen for whoever left first.
//
// Peers do not need the acknowledgement. A guest disconnects when the server's
// notice arrives and the host removes a guest when the guest's arrives, whatever
// the notice carries; a lost notice is covered by the drop timeouts in
// shim_config_netplay.h. So the notice is sent a few times and the caller
// leaves at once.
//
// Gated by NOCTURNE_AUTHENTIC_NETPLAY at the call site.

struct CNetGame;

#ifdef __cplusplus
extern "C" {
#endif

// Sends the disconnect notice to every peer this machine talks to - the server
// for a guest, every other player for the host - and returns without waiting.
// Does nothing when there is no connection.
void nocturne_net_disconnect_notify(struct CNetGame *net_game);

#ifdef __cplusplus
}
#endif
