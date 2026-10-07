#pragma once

// =============================================================================
// NETPLAY — THE PACKET TYPES THE ADDITIONS SEND
// =============================================================================
//
// The shipped protocol's own ENetPacketType values stop at PACKET_PLAYER_INPUT
// (0x10). Every packet the netplay additions add takes the next value, here,
// in one enum, so two modules can never be handed the same number. The gap
// inside the shipped range, PACKET_UNUSED (0xE), is left alone: keeping the
// shipped enum's numbering intact keeps every addition in one contiguous block
// above it. CNetGame::processPacket offers an unknown type to each module's
// on_packet in turn. Declared here rather than added to ENetPacketType, which
// is generated from Ghidra and is not ours to extend.

enum {
    NOCTURNE_NET_PACKET_SYNC_CHECK = 0x11,  // net_sync.h
    NOCTURNE_NET_PACKET_WEAPON,             // net_weapon.h
    NOCTURNE_NET_PACKET_MISSION,            // net_mission.h
    NOCTURNE_NET_PACKET_CHEATS,             // net_cheats.h
    NOCTURNE_NET_PACKET_RESPAWN,            // net_respawn.h
    NOCTURNE_NET_PACKET_SKIP_VOTE,          // net_skip.h
    NOCTURNE_NET_PACKET_SKIP_COMMIT,        // net_skip.h
    NOCTURNE_NET_PACKET_CAMERA              // net_camera.h
};

#ifdef __cplusplus
extern "C" {
#endif

// Zeroes `size` bytes of `packet` and fills in its SNetPacketHeader.
void nocturne_net_packet_init(void *packet, int size, int type);

// 1 when `packet` is non-null, at least `min_size` bytes long, and of `type`:
// the test each module's on_packet makes before it reads a field.
int nocturne_net_packet_is(const void *packet, int packet_size, int type, int min_size);

#ifdef __cplusplus
}
#endif
