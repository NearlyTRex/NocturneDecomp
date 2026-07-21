// Name: core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740
// Address: 004ea740
// Address Range: [[004ea740, 004ea7e2]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_004ea740(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_004ea740(int param_1)

{
  int iVar1;
  byte local_10 [8];
  
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
  while( true ) {
    iVar1 = support_trisock_cpp_isSocketValid_FUN_00548f60(param_1 + 0x170);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = support_trisock_cpp_receiveSocketData_FUN_00549010
                      (param_1 + 0x170,0x1d1640c,0x404,local_10);
    if (iVar1 < 1) break;
    _DAT_01d16408 = iVar1 + 1;
    core_netgame_cpp_CNetGame_processPacket_FUN_004ea830(param_1,local_10,&DAT_01d16408);
  }
  core_netgame_cpp_CNetGame_removeChatOut_FUN_004ec180(param_1);
  return;
}
