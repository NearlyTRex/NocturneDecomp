#pragma once

// =============================================================================
// NETPLAY — SYNCHRONISED CAMERA FOR SCRIPT CONDITIONS
// =============================================================================
//
// An addition, not a reconstruction, and it fixes a real desync.
//
// The script atom isCurrentCamera(name) reads g_CDemonSetPtr->selected_camera_
// index, which the virtual director picks per machine to follow that machine's
// own hero. ACT1, ACT4 and ACT5 gate simulation on it, e.g.
//
//     if ((isCurrentCamera(cas117) || isCurrentCamera(cas118)) && !StoppedTheSex)
//         setmodelstate(GhoulBunkRoom1, STAND)
//
// so the machine whose camera cut to cas117 woke the ghoul and the other did
// not.
//
// Each machine broadcasts its camera changes the way net_weapon.h broadcasts a
// weapon switch: stamped with the sim frame every machine applies it on, and
// re-sent until then. In a network game isCurrentCamera(name) is true when any
// player's synchronised camera has that name. The local machine reads its own
// camera through the same delayed copy, never the live index.
//
// Gated by NOCTURNE_AUTHENTIC_NETPLAY.

// Packet type, after NOCTURNE_NET_PACKET_SKIP_COMMIT.
#define NOCTURNE_NET_PACKET_CAMERA 0x18

#ifdef __cplusplus
extern "C" {
#endif

// 1 when isCurrentCamera must use the synchronised cameras.
int nocturne_net_camera_active(void);

// The network-game isCurrentCamera: whether any player's synchronised camera is
// named `camera_name` (compared without case, as the shipped atom does).
int nocturne_net_camera_is_current(const char *camera_name);

// Feeds one received NOCTURNE_NET_PACKET_CAMERA packet. Returns 1 if consumed.
int nocturne_net_camera_on_packet(const void *packet, int packet_size);

// Called once per applied sim frame from CNetGame::applySimFrameHistory.
// Publishes a change of this machine's camera, applies every change due by
// `sequence_number`, and re-sends this machine's changes still in the future.
void nocturne_net_camera_apply_if_due(int sequence_number);

// Drops pending changes and forgets every player's camera. Called with the other
// net resets when a mission is torn down.
void nocturne_net_camera_reset(void);

#ifdef __cplusplus
}
#endif
