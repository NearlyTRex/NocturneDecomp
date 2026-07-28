// Name: core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740
// Address: 004ea740
// Address Range: [[004ea740, 004ea7e2]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_004ea740(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_004ea740(CNetGame *this_ptr)

{
  int iVar1;
  SNetworkAddr local_10;
  
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
    iVar1 = support_trisock_cpp_isSocketValid_FUN_00548f60(&this_ptr->socket);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = support_trisock_cpp_receiveSocketData_FUN_00549010
                      (&this_ptr->socket,&DAT_01d1640c,0x404,&local_10);
    if (iVar1 < 1) break;
    _DAT_01d16408 = iVar1 + 1;
    core_netgame_cpp_CNetGame_processPacket_FUN_004ea830
              (this_ptr,&local_10,(UNetPacket *)&DAT_01d16408);
  }
  core_netgame_cpp_CNetGame_removeChatOut_FUN_004ec180(this_ptr);
  return;
}
