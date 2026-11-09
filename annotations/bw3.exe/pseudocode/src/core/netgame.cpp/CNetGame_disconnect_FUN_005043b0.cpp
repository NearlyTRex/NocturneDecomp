// Name: core_netgame.cpp_CNetGame_disconnect_FUN_005043b0
// Address: 005043b0
// Address Range: [[005043b0, 0050488c]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_disconnect_FUN_005043b0(CNetGame *this_ptr,int perform_handshake)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_disconnect_FUN_005043b0(CNetGame *this_ptr,int perform_handshake)

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
      shape_edittool_cpp_FUN_0047ed50(g_CEditorToolsPtr,"Disconnecting from server...");
      iVar1 = wincore_winrun_cpp_FUN_005806a0();
      iVar1 = iVar1 / 0x12;
      _DAT_01da6474 = iVar1 - _DAT_01da6474;
      if (_DAT_01da6474 < 0) {
        _DAT_01da6474 = 0;
      }
      else if (0x20000 < _DAT_01da6474) {
        _DAT_01da6474 = 0x20000;
      }
      iVar3 = _DAT_01da6478 + _DAT_01da6474;
      iVar2 = iVar3 + -0x1e0000;
      _DAT_01da6474 = iVar1;
      _DAT_01da6478 = iVar3;
      if (*(int *)&this_ptr->field_0x120 < 0) {
LAB_00504521:
        shape_edittool_cpp_FUN_0047f970(g_CEditorToolsPtr);
      }
      else {
        do {
          iVar1 = wincore_winrun_cpp_FUN_005806a0();
          iVar1 = iVar1 / 0x12;
          _DAT_01da6474 = iVar1 - _DAT_01da6474;
          if (_DAT_01da6474 < 0) {
            _DAT_01da6474 = 0;
          }
          else if (0x20000 < _DAT_01da6474) {
            _DAT_01da6474 = 0x20000;
          }
          _DAT_01da6478 = _DAT_01da6478 + _DAT_01da6474;
          local_30 = (float)(_DAT_01da6478 - iVar3) * (float)_DAT_005ca6f1;
          if (local_30 < 0.0) {
            local_30 = 0.0;
          }
          _DAT_01da6474 = iVar1;
          if (((float)_DAT_005ca701 < local_30) || (0x40400000 < (int)local_30)) {
            shape_edittool_cpp_CEditorTools_showMessage_FUN_0047ce80
                      (g_CEditorToolsPtr,"Couldn't contact server to disconnect.");
            goto LAB_00504521;
          }
          shape_edittool_cpp_FUN_0047ee50(g_CEditorToolsPtr,local_30 * _DAT_005ca6f9,0x453b8000);
          while( true ) {
            local_28 = (float)(_DAT_01da6478 - iVar2) * (float)_DAT_005ca6f1;
            if (local_28 < 0.0) {
              local_28 = 0.0;
            }
            if ((float)_DAT_005ca701 < local_28) {
              local_28 = 30.0;
            }
            if ((float)_DAT_005ca709 <= local_28) break;
            iVar1 = wincore_winrun_cpp_FUN_005806a0();
            _DAT_01da6474 = iVar1 / 0x12 - _DAT_01da6474;
            if (_DAT_01da6474 < 0) {
              _DAT_01da6474 = 0;
            }
            else if (0x20000 < _DAT_01da6474) {
              _DAT_01da6474 = 0x20000;
            }
            _DAT_01da6478 = _DAT_01da6478 + _DAT_01da6474;
            _DAT_01da6474 = iVar1 / 0x12;
          }
          core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00507f90
                    (this_ptr,(SNetworkAddr *)
                              (&this_ptr->field_0x3c + *(int *)&this_ptr->field_0x120 * 0x80),1);
          iVar2 = _DAT_01da6478;
          core_netgame_cpp_CNetGame_receivePackets_FUN_00504c70(this_ptr);
        } while (-1 < *(int *)&this_ptr->field_0x120);
        shape_edittool_cpp_FUN_0047f970(g_CEditorToolsPtr);
      }
    }
    if (*(int *)this_ptr == 1) {
      shape_edittool_cpp_FUN_0047ed50(g_CEditorToolsPtr,"Disconnecting...");
      iVar1 = wincore_winrun_cpp_FUN_005806a0();
      iVar1 = iVar1 / 0x12;
      _DAT_01da6474 = iVar1 - _DAT_01da6474;
      if (_DAT_01da6474 < 0) {
        _DAT_01da6474 = 0;
      }
      else if (0x20000 < _DAT_01da6474) {
        _DAT_01da6474 = 0x20000;
      }
      iVar3 = _DAT_01da6478 + _DAT_01da6474;
      iVar2 = iVar3 + -0x1e0000;
      _DAT_01da6474 = iVar1;
      _DAT_01da6478 = iVar3;
      if (*(int *)&this_ptr->field_0x1c < 2) {
LAB_0050474e:
        shape_edittool_cpp_FUN_0047f970(g_CEditorToolsPtr);
      }
      else {
        do {
          iVar1 = wincore_winrun_cpp_FUN_005806a0();
          iVar1 = iVar1 / 0x12;
          _DAT_01da6474 = iVar1 - _DAT_01da6474;
          if (_DAT_01da6474 < 0) {
            _DAT_01da6474 = 0;
          }
          else if (0x20000 < _DAT_01da6474) {
            _DAT_01da6474 = 0x20000;
          }
          _DAT_01da6478 = _DAT_01da6478 + _DAT_01da6474;
          local_2c = (float)(_DAT_01da6478 - iVar3) * (float)_DAT_005ca6f1;
          if (local_2c < 0.0) {
            local_2c = 0.0;
          }
          _DAT_01da6474 = iVar1;
          if (((float)_DAT_005ca701 < local_2c) || (0x40a00000 < (int)local_2c)) {
            shape_edittool_cpp_CEditorTools_showMessage_FUN_0047ce80
                      (g_CEditorToolsPtr,"Couldn't connect to all clients to disconnect.");
            goto LAB_0050474e;
          }
          shape_edittool_cpp_FUN_0047ee50(g_CEditorToolsPtr,local_2c * _DAT_005ca6f9,0x459c4000);
          while( true ) {
            local_24 = (float)(_DAT_01da6478 - iVar2) * (float)_DAT_005ca6f1;
            if (local_24 < 0.0) {
              local_24 = 0.0;
            }
            if ((float)_DAT_005ca701 < local_24) {
              local_24 = 30.0;
            }
            if ((float)_DAT_005ca709 <= local_24) break;
            iVar1 = wincore_winrun_cpp_FUN_005806a0();
            _DAT_01da6474 = iVar1 / 0x12 - _DAT_01da6474;
            if (_DAT_01da6474 < 0) {
              _DAT_01da6474 = 0;
            }
            else if (0x20000 < _DAT_01da6474) {
              _DAT_01da6474 = 0x20000;
            }
            _DAT_01da6478 = _DAT_01da6478 + _DAT_01da6474;
            _DAT_01da6474 = iVar1 / 0x12;
          }
          iVar1 = 0;
          if (0 < *(int *)&this_ptr->field_0x1c) {
            dest_addr = (SNetworkAddr *)&this_ptr->field_0x3c;
            do {
              if (iVar1 != *(int *)&this_ptr->field_0x124) {
                core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(this_ptr,dest_addr,1);
              }
              iVar1 = iVar1 + 1;
              dest_addr = dest_addr + 0x80;
            } while (iVar1 < *(int *)&this_ptr->field_0x1c);
          }
          iVar2 = _DAT_01da6478;
          core_netgame_cpp_CNetGame_receivePackets_FUN_00504c70(this_ptr);
        } while (1 < *(int *)&this_ptr->field_0x1c);
        shape_edittool_cpp_FUN_0047f970(g_CEditorToolsPtr);
      }
    }
  }
  *(uint *)&this_ptr->field_0x4 = 0;
  *(uint *)&this_ptr->field_0x124 = 0xffffffff;
  *(uint *)&this_ptr->field_0x120 = 0xffffffff;
  this_ptr->field_0x128 = 0;
  *(uint *)this_ptr = 0;
  _DAT_01da648c = 0;
  _DAT_01dc2690 = 0;
  _DAT_01da6480 = 0;
  *(uint *)&this_ptr->field_0x1c = 0;
  _DAT_01da6484 = 0;
  *(uint *)&this_ptr->field_0x178 = 0;
  return;
}
