// Name: core_netgame.cpp_CNetGame_disconnect_FUN_0052cab0
// Address: 0052cab0
// Address Range: [[0052cab0, 0052cf82]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_disconnect_FUN_0052cab0(CNetGame *this_ptr,int perform_handshake)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_disconnect_FUN_0052cab0(CNetGame *this_ptr,int perform_handshake)

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
    if (*(int *)this_ptr == 2) {
      shape_edittool_cpp_FUN_004961b0(g_CEditorToolsPtr,"Disconnecting from server...");
      iVar1 = wincore_winrun_cpp_FUN_005b2420();
      iVar1 = iVar1 / 0x12;
      _DAT_01d51d9c = iVar1 - _DAT_01d51d9c;
      if (_DAT_01d51d9c < 0) {
        _DAT_01d51d9c = 0;
      }
      else if (0x20000 < _DAT_01d51d9c) {
        _DAT_01d51d9c = 0x20000;
      }
      iVar2 = _DAT_01d51da0 + _DAT_01d51d9c;
      iVar3 = iVar2 + -0x1e0000;
      _DAT_01d51d9c = iVar1;
      _DAT_01d51da0 = iVar2;
      if (*(int *)&this_ptr->field_0x118 < 0) {
LAB_0052cc24:
        shape_edittool_cpp_FUN_00496dd0(g_CEditorToolsPtr);
      }
      else {
        do {
          iVar1 = wincore_winrun_cpp_FUN_005b2420();
          iVar1 = iVar1 / 0x12;
          _DAT_01d51d9c = iVar1 - _DAT_01d51d9c;
          if (_DAT_01d51d9c < 0) {
            _DAT_01d51d9c = 0;
          }
          else if (0x20000 < _DAT_01d51d9c) {
            _DAT_01d51d9c = 0x20000;
          }
          _DAT_01d51da0 = _DAT_01d51da0 + _DAT_01d51d9c;
          local_24 = (float)(_DAT_01d51da0 - iVar2) * (float)_DAT_005eb8e0;
          if (local_24 < 0.0) {
            local_24 = 0.0;
          }
          _DAT_01d51d9c = iVar1;
          if (((float)_DAT_005eb8f0 < local_24) || (0x40400000 < (int)local_24)) {
            shape_edittool_cpp_CEditorTools_showMessage_FUN_004942e0
                      (g_CEditorToolsPtr,"Couldn't contact server to disconnect.");
            goto LAB_0052cc24;
          }
          shape_edittool_cpp_FUN_004962b0(g_CEditorToolsPtr,local_24 * _DAT_005eb8e8,0x453b8000);
          while( true ) {
            local_30 = (float)(_DAT_01d51da0 - iVar3) * (float)_DAT_005eb8e0;
            if (local_30 < 0.0) {
              local_30 = 0.0;
            }
            if ((float)_DAT_005eb8f0 < local_30) {
              local_30 = 30.0;
            }
            if ((float)_DAT_005eb8f8 <= local_30) break;
            iVar1 = wincore_winrun_cpp_FUN_005b2420();
            _DAT_01d51d9c = iVar1 / 0x12 - _DAT_01d51d9c;
            if (_DAT_01d51d9c < 0) {
              _DAT_01d51d9c = 0;
            }
            else if (0x20000 < _DAT_01d51d9c) {
              _DAT_01d51d9c = 0x20000;
            }
            _DAT_01d51da0 = _DAT_01d51da0 + _DAT_01d51d9c;
            _DAT_01d51d9c = iVar1 / 0x12;
          }
          core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_005306d0
                    (this_ptr,(SNetworkAddr *)
                              (&this_ptr->field_0x3c + *(int *)&this_ptr->field_0x118 * 0x7c),1);
          iVar3 = _DAT_01d51da0;
          core_netgame_cpp_CNetGame_receivePackets_FUN_0052d360(this_ptr);
        } while (-1 < *(int *)&this_ptr->field_0x118);
        shape_edittool_cpp_FUN_00496dd0(g_CEditorToolsPtr);
      }
    }
    if (*(int *)this_ptr == 1) {
      shape_edittool_cpp_FUN_004961b0(g_CEditorToolsPtr,"Disconnecting...");
      iVar1 = wincore_winrun_cpp_FUN_005b2420();
      iVar1 = iVar1 / 0x12;
      _DAT_01d51d9c = iVar1 - _DAT_01d51d9c;
      if (_DAT_01d51d9c < 0) {
        _DAT_01d51d9c = 0;
      }
      else if (0x20000 < _DAT_01d51d9c) {
        _DAT_01d51d9c = 0x20000;
      }
      iVar2 = _DAT_01d51da0 + _DAT_01d51d9c;
      iVar3 = iVar2 + -0x1e0000;
      _DAT_01d51d9c = iVar1;
      _DAT_01d51da0 = iVar2;
      if (*(int *)&this_ptr->field_0x1c < 2) {
LAB_0052ce47:
        shape_edittool_cpp_FUN_00496dd0(g_CEditorToolsPtr);
      }
      else {
        do {
          iVar1 = wincore_winrun_cpp_FUN_005b2420();
          iVar1 = iVar1 / 0x12;
          _DAT_01d51d9c = iVar1 - _DAT_01d51d9c;
          if (_DAT_01d51d9c < 0) {
            _DAT_01d51d9c = 0;
          }
          else if (0x20000 < _DAT_01d51d9c) {
            _DAT_01d51d9c = 0x20000;
          }
          _DAT_01d51da0 = _DAT_01d51da0 + _DAT_01d51d9c;
          local_2c = (float)(_DAT_01d51da0 - iVar2) * (float)_DAT_005eb8e0;
          if (local_2c < 0.0) {
            local_2c = 0.0;
          }
          _DAT_01d51d9c = iVar1;
          if (((float)_DAT_005eb8f0 < local_2c) || (0x40a00000 < (int)local_2c)) {
            shape_edittool_cpp_CEditorTools_showMessage_FUN_004942e0
                      (g_CEditorToolsPtr,"Couldn't connect to all clients to disconnect.");
            goto LAB_0052ce47;
          }
          shape_edittool_cpp_FUN_004962b0(g_CEditorToolsPtr,local_2c * _DAT_005eb8e8,0x459c4000);
          while( true ) {
            local_28 = (float)(_DAT_01d51da0 - iVar3) * (float)_DAT_005eb8e0;
            if (local_28 < 0.0) {
              local_28 = 0.0;
            }
            if ((float)_DAT_005eb8f0 < local_28) {
              local_28 = 30.0;
            }
            if ((float)_DAT_005eb8f8 <= local_28) break;
            iVar1 = wincore_winrun_cpp_FUN_005b2420();
            _DAT_01d51d9c = iVar1 / 0x12 - _DAT_01d51d9c;
            if (_DAT_01d51d9c < 0) {
              _DAT_01d51d9c = 0;
            }
            else if (0x20000 < _DAT_01d51d9c) {
              _DAT_01d51d9c = 0x20000;
            }
            _DAT_01d51da0 = _DAT_01d51da0 + _DAT_01d51d9c;
            _DAT_01d51d9c = iVar1 / 0x12;
          }
          iVar1 = 0;
          if (0 < *(int *)&this_ptr->field_0x1c) {
            dest_addr = (SNetworkAddr *)&this_ptr->field_0x3c;
            do {
              if (iVar1 != *(int *)&this_ptr->field_0x11c) {
                core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_005306d0(this_ptr,dest_addr,1);
              }
              iVar1 = iVar1 + 1;
              dest_addr = dest_addr + 0x7c;
            } while (iVar1 < *(int *)&this_ptr->field_0x1c);
          }
          iVar3 = _DAT_01d51da0;
          core_netgame_cpp_CNetGame_receivePackets_FUN_0052d360(this_ptr);
        } while (1 < *(int *)&this_ptr->field_0x1c);
        shape_edittool_cpp_FUN_00496dd0(g_CEditorToolsPtr);
      }
    }
  }
  *(uint *)&this_ptr->field_0x4 = 0;
  *(uint *)&this_ptr->field_0x11c = 0xffffffff;
  *(uint *)&this_ptr->field_0x118 = 0xffffffff;
  this_ptr->field_0x120 = 0;
  *(uint *)this_ptr = 0;
  _DAT_01d51db4 = 0;
  _DAT_01d6dfb8 = 0;
  _DAT_01d51da8 = 0;
  *(uint *)&this_ptr->field_0x1c = 0;
  _DAT_01d51dac = 0;
  *(uint *)&this_ptr->field_0x170 = 0;
  return;
}
