// Name: core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70
// Address: 00504c70
// Address Range: [[00504c70, 00504d12]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_00504c70(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_00504c70(CNetGame *this_ptr)

{
  int iVar1;
  SNetworkAddr local_10 [8];
  
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
  while( true ) {
    iVar1 = support_trisock_cpp_CSocket_isSocketValid_FUN_0056f960
                      ((CSocket *)&this_ptr->field_0x180);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = support_trisock_cpp_FUN_0056fb10
                      ((CSocket *)&this_ptr->field_0x180,&DAT_01dd448c,0x404,local_10);
    if (iVar1 < 1) break;
    _DAT_01dd4488 = iVar1 + 1;
    core_netgame_cpp_FUN_00504d60(this_ptr,local_10,(UNetPacket *)&DAT_01dd4488);
  }
  core_netgame_cpp_FUN_00506670(this_ptr);
  return;
}
