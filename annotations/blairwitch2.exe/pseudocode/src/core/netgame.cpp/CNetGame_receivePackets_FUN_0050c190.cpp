// Name: core_netgame.cpp_CNetGame_receivePackets_FUN_0050c190
// Address: 0050c190
// Address Range: [[0050c190, 0050c232]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_0050c190(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_0050c190(CNetGame *this_ptr)

{
  int iVar1;
  int iVar2;
  SNetworkAddr local_10;
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  iVar2 = iVar1 / 0x12 - g_INT_01d34e34;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x20000 < iVar2) {
    iVar2 = 0x20000;
  }
  g_UINT_01d34e38 = g_UINT_01d34e38 + iVar2;
  g_INT_01d34e34 = iVar1 / 0x12;
  while( true ) {
    iVar1 = support_trisock_cpp_CSocket_isSocketValid_FUN_00579090(&this_ptr->socket);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = support_trisock_cpp_CSocket_receiveSocketData_FUN_00579240
                      (&this_ptr->socket,g_UNetPacket_01d62e48.raw + 4,0x404,&local_10);
    if (iVar1 < 1) break;
    g_UNetPacket_01d62e48.header.size = iVar1 + 1;
    core_netgame_cpp_CNetGame_processPacket_FUN_0050c280(this_ptr,&local_10,&g_UNetPacket_01d62e48);
  }
  core_netgame_cpp_CNetGame_removeChatOut_FUN_0050db90(this_ptr);
  return;
}
