#pragma once

// Dependencies
#include "system/basetypes.h"

// Enum: ENetPacketType
enum {
    PACKET_NONE = 0x0,
    PACKET_PLAYER_ANNOUNCE = 0x1,
    PACKET_SERVER_ACCEPT = 0x2,
    PACKET_GAME_START = 0x3,
    PACKET_PING = 0x4,
    PACKET_PING_RESPONSE = 0x5,
    PACKET_CHAT_MESSAGE = 0x6,
    PACKET_CHAT_ACK = 0x7,
    PACKET_SYNC_STAGE_REQ = 0x8,
    PACKET_SYNC_STAGE_RESP = 0x9,
    PACKET_PLAYER_STATE = 0xA,
    PACKET_GAME_SETTINGS = 0xB,
    PACKET_SETTINGS_ACK = 0xC,
    PACKET_DISCONNECT = 0xD,
    PACKET_UNUSED = 0xE,
    PACKET_SIM_FRAME = 0xF,
    PACKET_PLAYER_INPUT = 0x10
};
typedef uchar ENetPacketType;

