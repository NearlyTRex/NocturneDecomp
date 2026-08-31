#pragma once

// =============================================================================
// NETPLAY — KEEPING THE LINK ALIVE THROUGH A BLOCKING SCREEN
// =============================================================================
//
// An addition, not a reconstruction. The netcode drops a peer that goes quiet:
// CNetGame::processServerFrame removes any player whose last_arrival_time is
// more than NOCTURNE_NETPLAY_TIMEOUT_SECONDS behind g_CurrentGameTime. That is
// the right rule for a machine that has crashed or unplugged, and it cannot
// tell that case apart from a machine whose main loop is simply somewhere else.
//
// Several screens inside a running mission are exactly that - a loop of their
// own that renders and reads input and never returns to CGame::processFrame.
// CGame::showFullscreenBitmap, the one behind the bulletin boards and other
// full-screen pictures, waits for a keypress and then for its release, and does
// nothing in either loop but swapBuffers. For as long as a player is reading
// the board, that machine sends nothing and receives nothing; five seconds
// later each end has removed the other, and the guest lands on "disconnected".
//
// Note what is NOT wrong here: the simulation does not drift. Neither machine
// advances a sim frame while it is blocked, so both come back on the frame they
// left. The connection dies underneath a simulation that was still in step.
//
// So the fix is to keep the socket serviced rather than to change what the
// screen does: drain what has arrived and send the pings the peer is timing us
// against, the same pair CNetGame::runLobby uses to sit in the lobby
// indefinitely without anybody timing out.

#ifdef __cplusplus
extern "C" {
#endif

// Services the network once. Call from inside any loop inside a mission that
// does not return to CGame::processFrame for a while.
//
// Does nothing outside a network game, so a call site does not need to ask.
// Sends no simulation state and advances no sim frame - it only keeps the link
// from being declared dead while a player is reading something.
void nocturne_net_keepalive(void);

// A BOUNDED HOLD, IN PLACE OF AN INPUT WAIT
//
// Keeping the link alive stops a blocking screen killing the connection, but it
// does not make one behave in a shared world: CGame::showFullscreenBitmap waits
// for local input, so each machine sits on its own copy until its own player
// dismisses it, and neither knows the other has moved on. Nothing in the
// protocol carries "I closed the picture" - the sim frame is seed, delta time
// and inputs, and there is no spare room in it.
//
// So in a network game the wait becomes a timer. Every machine shows the
// picture for the same fixed span and then continues on its own, which needs no
// agreement to stay in step and lets neither player hold the other up. The
// simulation does not advance meanwhile - as before, both come back on the
// frame they left.
//
// Single player keeps the press-to-dismiss behaviour exactly as shipped; a
// timer there would be a downgrade, since there is nobody to keep waiting.
//
// Call begin once when the picture goes up, then poll active() in the loop.
void nocturne_net_hold_begin(void);
int nocturne_net_hold_active(void);

#ifdef __cplusplus
}
#endif
