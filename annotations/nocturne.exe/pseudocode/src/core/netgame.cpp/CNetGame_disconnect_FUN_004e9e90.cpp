// Name: core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90
// Address: 004e9e90
// Address Range: [[004e9e90, 004ea362]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(CNetGame *this_ptr,int perform_handshake)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(CNetGame *this_ptr,int perform_handshake)

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
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_00471660
                (g_CEditorTools_PTR_005b6d50,"Disconnecting from server...");
      iVar1 = wincore_winrun_cpp_getTime_FUN_00558a30();
      iVar1 = iVar1 / 0x12;
      _DAT_01cea3f4 = iVar1 - _DAT_01cea3f4;
      if (_DAT_01cea3f4 < 0) {
        _DAT_01cea3f4 = 0;
      }
      else if (0x20000 < _DAT_01cea3f4) {
        _DAT_01cea3f4 = 0x20000;
      }
      iVar2 = _DAT_01cea3f8 + _DAT_01cea3f4;
      iVar3 = iVar2 + -0x1e0000;
      _DAT_01cea3f4 = iVar1;
      _DAT_01cea3f8 = iVar2;
      if (this_ptr->server_player_index < 0) {
LAB_004ea004:
        shape_edittool_cpp_FUN_004720c0(g_CEditorTools_PTR_005b6d50);
      }
      else {
        do {
          iVar1 = wincore_winrun_cpp_getTime_FUN_00558a30();
          iVar1 = iVar1 / 0x12;
          _DAT_01cea3f4 = iVar1 - _DAT_01cea3f4;
          if (_DAT_01cea3f4 < 0) {
            _DAT_01cea3f4 = 0;
          }
          else if (0x20000 < _DAT_01cea3f4) {
            _DAT_01cea3f4 = 0x20000;
          }
          _DAT_01cea3f8 = _DAT_01cea3f8 + _DAT_01cea3f4;
          local_24 = (float)(_DAT_01cea3f8 - iVar2) * (float)1.52587890625e-05;
          if (local_24 < 0.0) {
            local_24 = 0.0;
          }
          _DAT_01cea3f4 = iVar1;
          if (((float)30 < local_24) || (0x40400000 < (int)local_24)) {
            shape_edittool_cpp_FUN_0046fe60
                      (g_CEditorTools_PTR_005b6d50,"Couldn't contact server to disconnect.");
            goto LAB_004ea004;
          }
          shape_edittool_cpp_CEditorTools_updatePercentage_FUN_00471760
                    (g_CEditorTools_PTR_005b6d50,local_24 * 1000.0f,3000.0);
          while( true ) {
            local_30 = (float)(_DAT_01cea3f8 - iVar3) * (float)1.52587890625e-05;
            if (local_30 < 0.0) {
              local_30 = 0.0;
            }
            if ((float)30 < local_30) {
              local_30 = 30.0;
            }
            if ((float)0.10000000000000001 <= local_30) break;
            iVar1 = wincore_winrun_cpp_getTime_FUN_00558a30();
            _DAT_01cea3f4 = iVar1 / 0x12 - _DAT_01cea3f4;
            if (_DAT_01cea3f4 < 0) {
              _DAT_01cea3f4 = 0;
            }
            else if (0x20000 < _DAT_01cea3f4) {
              _DAT_01cea3f4 = 0x20000;
            }
            _DAT_01cea3f8 = _DAT_01cea3f8 + _DAT_01cea3f4;
            _DAT_01cea3f4 = iVar1 / 0x12;
          }
          core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_004edab0
                    (this_ptr,&this_ptr->players[this_ptr->server_player_index].addr,1);
          iVar3 = _DAT_01cea3f8;
          core_netgame_cpp_CNetGame_receivePackets_FUN_004ea740(this_ptr);
        } while (-1 < this_ptr->server_player_index);
        shape_edittool_cpp_FUN_004720c0(g_CEditorTools_PTR_005b6d50);
      }
    }
    if (this_ptr->connection_type == CONNECTION_HOST) {
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_00471660
                (g_CEditorTools_PTR_005b6d50,"Disconnecting...");
      iVar1 = wincore_winrun_cpp_getTime_FUN_00558a30();
      iVar1 = iVar1 / 0x12;
      _DAT_01cea3f4 = iVar1 - _DAT_01cea3f4;
      if (_DAT_01cea3f4 < 0) {
        _DAT_01cea3f4 = 0;
      }
      else if (0x20000 < _DAT_01cea3f4) {
        _DAT_01cea3f4 = 0x20000;
      }
      iVar2 = _DAT_01cea3f8 + _DAT_01cea3f4;
      iVar3 = iVar2 + -0x1e0000;
      _DAT_01cea3f4 = iVar1;
      _DAT_01cea3f8 = iVar2;
      if (this_ptr->player_count < 2) {
LAB_004ea227:
        shape_edittool_cpp_FUN_004720c0(g_CEditorTools_PTR_005b6d50);
      }
      else {
        do {
          iVar1 = wincore_winrun_cpp_getTime_FUN_00558a30();
          iVar1 = iVar1 / 0x12;
          _DAT_01cea3f4 = iVar1 - _DAT_01cea3f4;
          if (_DAT_01cea3f4 < 0) {
            _DAT_01cea3f4 = 0;
          }
          else if (0x20000 < _DAT_01cea3f4) {
            _DAT_01cea3f4 = 0x20000;
          }
          _DAT_01cea3f8 = _DAT_01cea3f8 + _DAT_01cea3f4;
          local_2c = (float)(_DAT_01cea3f8 - iVar2) * (float)1.52587890625e-05;
          if (local_2c < 0.0) {
            local_2c = 0.0;
          }
          _DAT_01cea3f4 = iVar1;
          if (((float)30 < local_2c) || (0x40a00000 < (int)local_2c)) {
            shape_edittool_cpp_FUN_0046fe60
                      (g_CEditorTools_PTR_005b6d50,"Couldn't connect to all clients to disconnect.");
            goto LAB_004ea227;
          }
          shape_edittool_cpp_CEditorTools_updatePercentage_FUN_00471760
                    (g_CEditorTools_PTR_005b6d50,local_2c * 1000.0f,5000.0);
          while( true ) {
            local_28 = (float)(_DAT_01cea3f8 - iVar3) * (float)1.52587890625e-05;
            if (local_28 < 0.0) {
              local_28 = 0.0;
            }
            if ((float)30 < local_28) {
              local_28 = 30.0;
            }
            if ((float)0.10000000000000001 <= local_28) break;
            iVar1 = wincore_winrun_cpp_getTime_FUN_00558a30();
            _DAT_01cea3f4 = iVar1 / 0x12 - _DAT_01cea3f4;
            if (_DAT_01cea3f4 < 0) {
              _DAT_01cea3f4 = 0;
            }
            else if (0x20000 < _DAT_01cea3f4) {
              _DAT_01cea3f4 = 0x20000;
            }
            _DAT_01cea3f8 = _DAT_01cea3f8 + _DAT_01cea3f4;
            _DAT_01cea3f4 = iVar1 / 0x12;
          }
          iVar1 = 0;
          if (0 < this_ptr->player_count) {
            dest_addr = &this_ptr->players[0].addr;
            do {
              if (iVar1 != this_ptr->local_player_index) {
                core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_004edab0(this_ptr,dest_addr,1);
              }
              iVar1 = iVar1 + 1;
              dest_addr = dest_addr + 0xf;
            } while (iVar1 < this_ptr->player_count);
          }
          iVar3 = _DAT_01cea3f8;
          core_netgame_cpp_CNetGame_receivePackets_FUN_004ea740(this_ptr);
        } while (1 < this_ptr->player_count);
        shape_edittool_cpp_FUN_004720c0(g_CEditorTools_PTR_005b6d50);
      }
    }
  }
  this_ptr->network_mode = NET_MODE_DISCONNECTED;
  this_ptr->local_player_index = -1;
  this_ptr->server_player_index = -1;
  this_ptr->mission_name[0] = '\0';
  this_ptr->connection_type = CONNECTION_NONE;
  _DAT_01cea40c = 0;
  _DAT_01d06610 = 0;
  _DAT_01cea400 = 0;
  this_ptr->player_count = 0;
  _DAT_01cea404 = 0;
  this_ptr->has_pending_sim_frame = 0;
  return;
}
