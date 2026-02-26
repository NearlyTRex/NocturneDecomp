#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SNetPacketHeader.h"
#include "types/structs/SNetPacket_ChatMessage.h"
#include "types/structs/SNetPacket_GameSettings.h"
#include "types/structs/SNetPacket_PlayerAnnounce.h"
#include "types/structs/SNetPacket_PlayerControl.h"
#include "types/structs/SNetPacket_PlayerState.h"
#include "types/structs/SNetPacket_ServerAccept.h"
#include "types/structs/SNetPacket_SimFrame.h"
#include "types/structs/SNetPacket_Simple.h"

// Union: UNetPacket
typedef union UNetPacket {
    SNetPacketHeader header;
    SNetPacket_PlayerAnnounce player_announce;
    SNetPacket_ServerAccept server_accept;
    SNetPacket_Simple simple;
    SNetPacket_ChatMessage chat_message;
    SNetPacket_PlayerState player_state;
    SNetPacket_GameSettings game_settings;
    SNetPacket_SimFrame sim_frame;
    SNetPacket_PlayerControl player_control;
    char raw[1032];
} UNetPacket;

