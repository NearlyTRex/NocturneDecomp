#pragma once

// Enum: ENetworkMode
enum {
    NET_MODE_DISCONNECTED = 0x0,
    NET_MODE_LOBBY = 0x1,
    NET_MODE_SYNCING = 0x2,
    NET_MODE_PLAYING = 0x3
};
typedef int ENetworkMode;

