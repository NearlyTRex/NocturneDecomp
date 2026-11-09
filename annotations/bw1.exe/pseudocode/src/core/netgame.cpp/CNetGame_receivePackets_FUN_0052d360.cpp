// Name: core_netgame.cpp_CNetGame_receivePackets_FUN_0052d360
// Address: 0052d360
// Address Range: [[0052d360, 0052d402]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_0052d360(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_0052d360(CNetGame *this_ptr)

{
  int iVar1;
  SNetworkAddr local_10 [8];
  
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
  while( true ) {
    iVar1 = support_trisock_cpp_CSocket_isSocketValid_FUN_0059c970
                      ((CSocket *)&this_ptr->field_0x178);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = support_trisock_cpp_FUN_0059cb20
                      ((CSocket *)&this_ptr->field_0x178,&DAT_01d7edb4,0x404,local_10);
    if (iVar1 < 1) break;
    _DAT_01d7edb0 = iVar1 + 1;
    core_netgame_cpp_FUN_0052d450(this_ptr,local_10,(UNetPacket *)&DAT_01d7edb0);
  }
  core_netgame_cpp_FUN_0052ed80(this_ptr);
  return;
}
