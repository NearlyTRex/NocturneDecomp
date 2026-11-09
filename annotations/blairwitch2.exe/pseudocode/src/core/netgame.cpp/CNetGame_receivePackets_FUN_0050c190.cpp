// Name: core_netgame.cpp_CNetGame_receivePackets_FUN_0050c190
// Address: 0050c190
// Address Range: [[0050c190, 0050c232]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_0050c190(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_0050c190(CNetGame *this_ptr)

{
  int iVar1;
  SNetworkAddr local_10 [8];
  
  iVar1 = wincore_winrun_cpp_FUN_0058e9e0();
  _DAT_01d34e34 = iVar1 / 0x12 - _DAT_01d34e34;
  if (_DAT_01d34e34 < 0) {
    _DAT_01d34e34 = 0;
  }
  else if (0x20000 < _DAT_01d34e34) {
    _DAT_01d34e34 = 0x20000;
  }
  _DAT_01d34e38 = _DAT_01d34e38 + _DAT_01d34e34;
  _DAT_01d34e34 = iVar1 / 0x12;
  while( true ) {
    iVar1 = support_trisock_cpp_CSocket_isSocketValid_FUN_00579090
                      ((CSocket *)&this_ptr->field_0x180);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = support_trisock_cpp_FUN_00579240
                      ((CSocket *)&this_ptr->field_0x180,&DAT_01d62e4c,0x404,local_10);
    if (iVar1 < 1) break;
    _DAT_01d62e48 = iVar1 + 1;
    core_netgame_cpp_FUN_0050c280(this_ptr,local_10,(UNetPacket *)&DAT_01d62e48);
  }
  core_netgame_cpp_FUN_0050db90(this_ptr);
  return;
}
