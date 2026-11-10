// Name: core_netgame.cpp_CNetGame_disconnect_FUN_0050b8d0
// Address: 0050b8d0
// Address Range: [[0050b8d0, 0050bdac]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_disconnect_FUN_0050b8d0(CNetGame *this_ptr,int perform_handshake)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_disconnect_FUN_0050b8d0(CNetGame *this_ptr,int perform_handshake)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SNetworkAddr *dest_addr;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  if (perform_handshake != 0) {
    if (this_ptr->connection_type == CONNECTION_CLIENT) {
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_0047db40
                (g_CEditorToolsPtr,"Disconnecting from server...");
      iVar1 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
      iVar1 = iVar1 / 0x12;
      _DAT_01d34e34 = iVar1 - _DAT_01d34e34;
      if (_DAT_01d34e34 < 0) {
        _DAT_01d34e34 = 0;
      }
      else if (0x20000 < _DAT_01d34e34) {
        _DAT_01d34e34 = 0x20000;
      }
      iVar3 = _DAT_01d34e38 + _DAT_01d34e34;
      iVar2 = iVar3 + -0x1e0000;
      _DAT_01d34e34 = iVar1;
      _DAT_01d34e38 = iVar3;
      if (this_ptr->server_player_index < 0) {
LAB_0050ba41:
        shape_edittool_cpp_FUN_0047e760(g_CEditorToolsPtr);
      }
      else {
        do {
          iVar1 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
          iVar1 = iVar1 / 0x12;
          _DAT_01d34e34 = iVar1 - _DAT_01d34e34;
          if (_DAT_01d34e34 < 0) {
            _DAT_01d34e34 = 0;
          }
          else if (0x20000 < _DAT_01d34e34) {
            _DAT_01d34e34 = 0x20000;
          }
          _DAT_01d34e38 = _DAT_01d34e38 + _DAT_01d34e34;
          local_30 = (float)(_DAT_01d34e38 - iVar3) * (float)_DAT_005e0685;
          if (local_30 < 0.0) {
            local_30 = 0.0;
          }
          _DAT_01d34e34 = iVar1;
          if (((float)_DAT_005e0695 < local_30) || (0x40400000 < (int)local_30)) {
            shape_edittool_cpp_CEditorTools_showMessage_FUN_0047bda0
                      (g_CEditorToolsPtr,"Couldn't contact server to disconnect.");
            goto LAB_0050ba41;
          }
          shape_edittool_cpp_FUN_0047dc40(g_CEditorToolsPtr,local_30 * _DAT_005e068d,0x453b8000);
          while( true ) {
            local_28 = (float)(_DAT_01d34e38 - iVar2) * (float)_DAT_005e0685;
            if (local_28 < 0.0) {
              local_28 = 0.0;
            }
            if ((float)_DAT_005e0695 < local_28) {
              local_28 = 30.0;
            }
            if ((float)_DAT_005e069d <= local_28) break;
            iVar1 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
            _DAT_01d34e34 = iVar1 / 0x12 - _DAT_01d34e34;
            if (_DAT_01d34e34 < 0) {
              _DAT_01d34e34 = 0;
            }
            else if (0x20000 < _DAT_01d34e34) {
              _DAT_01d34e34 = 0x20000;
            }
            _DAT_01d34e38 = _DAT_01d34e38 + _DAT_01d34e34;
            _DAT_01d34e34 = iVar1 / 0x12;
          }
          core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_0050f4b0
                    (this_ptr,(SNetworkAddr *)
                              &this_ptr->players[this_ptr->server_player_index].field_0x1c,1);
          iVar2 = _DAT_01d34e38;
          core_netgame_cpp_CNetGame_receivePackets_FUN_0050c190(this_ptr);
        } while (-1 < this_ptr->server_player_index);
        shape_edittool_cpp_FUN_0047e760(g_CEditorToolsPtr);
      }
    }
    if (this_ptr->connection_type == CONNECTION_HOST) {
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_0047db40
                (g_CEditorToolsPtr,"Disconnecting...");
      iVar1 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
      iVar1 = iVar1 / 0x12;
      _DAT_01d34e34 = iVar1 - _DAT_01d34e34;
      if (_DAT_01d34e34 < 0) {
        _DAT_01d34e34 = 0;
      }
      else if (0x20000 < _DAT_01d34e34) {
        _DAT_01d34e34 = 0x20000;
      }
      iVar3 = _DAT_01d34e38 + _DAT_01d34e34;
      iVar2 = iVar3 + -0x1e0000;
      _DAT_01d34e34 = iVar1;
      _DAT_01d34e38 = iVar3;
      if (this_ptr->player_count < 2) {
LAB_0050bc6e:
        shape_edittool_cpp_FUN_0047e760(g_CEditorToolsPtr);
      }
      else {
        do {
          iVar1 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
          iVar1 = iVar1 / 0x12;
          _DAT_01d34e34 = iVar1 - _DAT_01d34e34;
          if (_DAT_01d34e34 < 0) {
            _DAT_01d34e34 = 0;
          }
          else if (0x20000 < _DAT_01d34e34) {
            _DAT_01d34e34 = 0x20000;
          }
          _DAT_01d34e38 = _DAT_01d34e38 + _DAT_01d34e34;
          local_2c = (float)(_DAT_01d34e38 - iVar3) * (float)_DAT_005e0685;
          if (local_2c < 0.0) {
            local_2c = 0.0;
          }
          _DAT_01d34e34 = iVar1;
          if (((float)_DAT_005e0695 < local_2c) || (0x40a00000 < (int)local_2c)) {
            shape_edittool_cpp_CEditorTools_showMessage_FUN_0047bda0
                      (g_CEditorToolsPtr,"Couldn't connect to all clients to disconnect.");
            goto LAB_0050bc6e;
          }
          shape_edittool_cpp_FUN_0047dc40(g_CEditorToolsPtr,local_2c * _DAT_005e068d,0x459c4000);
          while( true ) {
            local_24 = (float)(_DAT_01d34e38 - iVar2) * (float)_DAT_005e0685;
            if (local_24 < 0.0) {
              local_24 = 0.0;
            }
            if ((float)_DAT_005e0695 < local_24) {
              local_24 = 30.0;
            }
            if ((float)_DAT_005e069d <= local_24) break;
            iVar1 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
            _DAT_01d34e34 = iVar1 / 0x12 - _DAT_01d34e34;
            if (_DAT_01d34e34 < 0) {
              _DAT_01d34e34 = 0;
            }
            else if (0x20000 < _DAT_01d34e34) {
              _DAT_01d34e34 = 0x20000;
            }
            _DAT_01d34e38 = _DAT_01d34e38 + _DAT_01d34e34;
            _DAT_01d34e34 = iVar1 / 0x12;
          }
          iVar1 = 0;
          if (0 < this_ptr->player_count) {
            dest_addr = (SNetworkAddr *)&this_ptr->players[0].field_0x1c;
            do {
              if (iVar1 != this_ptr->local_player_index) {
                core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_0050f4b0(this_ptr,dest_addr,1);
              }
              iVar1 = iVar1 + 1;
              dest_addr = dest_addr + 0x80;
            } while (iVar1 < this_ptr->player_count);
          }
          iVar2 = _DAT_01d34e38;
          core_netgame_cpp_CNetGame_receivePackets_FUN_0050c190(this_ptr);
        } while (1 < this_ptr->player_count);
        shape_edittool_cpp_FUN_0047e760(g_CEditorToolsPtr);
      }
    }
  }
  this_ptr->network_mode = NET_MODE_DISCONNECTED;
  this_ptr->local_player_index = -1;
  this_ptr->server_player_index = -1;
  this_ptr->mission_name[0] = '\0';
  this_ptr->connection_type = CONNECTION_NONE;
  _DAT_01d34e4c = 0;
  _DAT_01d51050 = 0;
  _DAT_01d34e40 = 0;
  this_ptr->player_count = 0;
  _DAT_01d34e44 = 0;
  this_ptr->has_pending_sim_frame = 0;
  return;
}
