// Name: core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740
// Address: 004ea740
// Address Range: [[004ea740, 004ea7e2]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_004ea740(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_004ea740(CNetGame *this_ptr)

{
  int iVar1;
  int iVar2;
  SNetworkAddr local_10;
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_00558a30();
  iVar2 = iVar1 / 0x12 - g_INT_01cea3f4;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x20000 < iVar2) {
    iVar2 = 0x20000;
  }
  g_UINT_01cea3f8 = g_UINT_01cea3f8 + iVar2;
  g_INT_01cea3f4 = iVar1 / 0x12;
  while( true ) {
    iVar1 = support_trisock_cpp_CSocket_isSocketValid_FUN_00548f60(&this_ptr->socket);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = support_trisock_cpp_CSocket_receiveSocketData_FUN_00549010
                      (&this_ptr->socket,g_UNetPacket_01d16408.raw + 4,0x404,&local_10);
    if (iVar1 < 1) break;
    g_UNetPacket_01d16408.header.size = iVar1 + 1;
    core_netgame_cpp_CNetGame_processPacket_FUN_004ea830(this_ptr,&local_10,&g_UNetPacket_01d16408);
  }
  core_netgame_cpp_CNetGame_removeChatOut_FUN_004ec180(this_ptr);
  return;
}
