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
// own that renders and reads input and never returns to CGame::processFrame:
// full-screen pictures, prompts, pick lists, keypress waits. While one is up,
// that machine sends nothing and receives nothing; five seconds later each end
// has removed the other, and the guest lands on "disconnected".
//
// The simulation does not drift meanwhile. Neither machine advances a sim frame
// while it is blocked, so both come back on the frame they left. The connection
// dies underneath a simulation that was still in step.
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
// Sends no simulation state and advances no sim frame.
void nocturne_net_keepalive(void);

// A BOUNDED HOLD, IN PLACE OF AN INPUT WAIT
//
// Keeping the link alive stops a blocking screen killing the connection, but it
// does not make one behave in a shared world. A screen that waits for local
// input leaves each machine on its own copy until its own player dismisses it,
// and neither knows the other has moved on. Nothing in the protocol carries "I
// closed the screen" - the sim frame is seed, delta time and inputs, with no
// spare room.
//
// So in a network game the wait becomes a timer. Every machine shows the screen
// for the same fixed span and then continues on its own, which needs no
// agreement to stay in step and lets neither player hold the other up.
// Single player keeps its input wait.
//
// Call begin once when the screen goes up, then poll active() in its loop.
void nocturne_net_hold_begin(void);
int nocturne_net_hold_active(void);

// INPUT FROM BEFORE THE HOLD
//
// Single player clears the controls when such a screen closes, so the next
// frame is built from nothing. A network game has already built that frame:
// the host applies frame N+1 before a screen raised by frame N goes up, and a
// guest receives it. Input held into it acts a second time - a held Fire
// reopens the bulletin board it just closed.
//
// Call end once when the screen closes. Both machines then drop every hero's
// input for that one frame - the host at once, since it has already applied
// it, and a guest when apply_if_due reaches it - so they stay in step.
//
// Only valid between passes of CGame::runGameSession's loop, after
// CGame::processFrame has returned; that is the one point where the host holds
// exactly one applied, unsimulated frame. Called from inside CGame::process,
// the two machines would drop different frames.
void nocturne_net_hold_end(void);

// Called once per applied sim frame, from CNetGame::applySimFrameHistory after
// the frame's inputs are on the heroes.
void nocturne_net_hold_apply_if_due(int sequence_number);

#ifdef __cplusplus
}
#endif
