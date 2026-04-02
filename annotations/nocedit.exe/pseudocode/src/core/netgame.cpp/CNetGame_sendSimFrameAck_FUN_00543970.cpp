// Name: core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00543970
// Address: 00543970
// Address Range: [[00543970, 00543aa8] [03fc4140, 03fc419a]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_00543970(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_00543970(CNetGame *this_ptr)

{
  int iVar1;
  SNetPacket_PlayerInput local_48;
  
  if (this_ptr->connection_type != CONNECTION_CLIENT) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0xa29;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::sendSimFrameAck - should only be called in client mode");
  }
  if (this_ptr->network_mode != NET_MODE_PLAYING) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0xa2a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::sendSimFrameAck - should only be called in the game loop");
  }
  if (this_ptr->server_player_index < 0) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0xa2b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::sendSimFrameAck - server not in player list");
  }
  if (this_ptr->local_player_index < 0) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0xa2c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::sendSimFrameAck - I'm not in player list");
  }
  local_48.header.size = 0x35;
  local_48.header.type = PACKET_PLAYER_INPUT;
  local_48.sim_frame_index = this_ptr->players[this_ptr->local_player_index].sim_frame_index;
  iVar1 = this_ptr->local_player_index;
  local_48.player_input.action_state.walk = this_ptr->players[iVar1].player_input.action_state.walk;
  local_48.player_input.action_state.backup =
       this_ptr->players[iVar1].player_input.action_state.backup;
  local_48.player_input.action_state.run = this_ptr->players[iVar1].player_input.action_state.run;
  local_48.player_input.action_state.fire = this_ptr->players[iVar1].player_input.action_state.fire;
  local_48.player_input.action_state.use_item =
       this_ptr->players[iVar1].player_input.action_state.use_item;
  local_48.player_input.action_state.light =
       this_ptr->players[iVar1].player_input.action_state.light;
  local_48.player_input.action_state.draw = this_ptr->players[iVar1].player_input.action_state.draw;
  local_48.player_input.action_state.jump = this_ptr->players[iVar1].player_input.action_state.jump;
  local_48.player_input.strafe_speed = this_ptr->players[iVar1].player_input.strafe_speed;
  local_48.player_input.turn_speed = this_ptr->players[iVar1].player_input.turn_speed;
  local_48.player_input.look_up_down_speed =
       this_ptr->players[iVar1].player_input.look_up_down_speed;
  core_netgame_cpp_CNetGame_send_FUN_005411c0
            (this_ptr,this_ptr->server_player_index,&local_48.header);
  UINT_02f7c8c8 = g_CurrentGameTime;
  return;
}
