// Name: core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70
// Address: 00504c70
// Address Range: [[00504c70, 00504d12]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_00504c70(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_00504c70(CNetGame *this_ptr)

{
  int iVar1;
  int iVar2;
  SNetworkAddr local_10;
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_005806a0();
  iVar2 = iVar1 / 0x12 - g_INT_01da6474;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x20000 < iVar2) {
    iVar2 = 0x20000;
  }
  g_UINT_01da6478 = g_UINT_01da6478 + iVar2;
  g_INT_01da6474 = iVar1 / 0x12;
  while( true ) {
    iVar1 = support_trisock_cpp_CSocket_isSocketValid_FUN_0056f960(&this_ptr->socket);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = support_trisock_cpp_CSocket_receiveSocketData_FUN_0056fb10
                      (&this_ptr->socket,g_UNetPacket_01dd4488.raw + 4,0x404,&local_10);
    if (iVar1 < 1) break;
    g_UNetPacket_01dd4488.header.size = iVar1 + 1;
    core_netgame_cpp_CNetGame_processPacket_FUN_00504d60(this_ptr,&local_10,&g_UNetPacket_01dd4488);
  }
  core_netgame_cpp_CNetGame_removeChatOut_FUN_00506670(this_ptr);
  return;
}
