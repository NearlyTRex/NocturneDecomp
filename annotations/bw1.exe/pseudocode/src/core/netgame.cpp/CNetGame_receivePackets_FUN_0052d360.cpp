// Name: core_netgame.cpp_CNetGame_receivePackets_FUN_0052d360
// Address: 0052d360
// Address Range: [[0052d360, 0052d402]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_0052d360(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_0052d360(CNetGame *this_ptr)

{
  int iVar1;
  int iVar2;
  SNetworkAddr local_10;
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_005b2420();
  iVar2 = iVar1 / 0x12 - g_LastPingTime;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x20000 < iVar2) {
    iVar2 = 0x20000;
  }
  g_UINT_01d51da0 = g_UINT_01d51da0 + iVar2;
  g_LastPingTime = iVar1 / 0x12;
  while( true ) {
    iVar1 = support_trisock_cpp_CSocket_isSocketValid_FUN_0059c970(&this_ptr->socket);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = support_trisock_cpp_CSocket_receiveSocketData_FUN_0059cb20
                      (&this_ptr->socket,g_NetworkReceivePacket.raw + 4,0x404,&local_10);
    if (iVar1 < 1) break;
    g_NetworkReceivePacket.header.size = iVar1 + 1;
    core_netgame_cpp_CNetGame_processPacket_FUN_0052d450(this_ptr,&local_10,&g_NetworkReceivePacket)
    ;
  }
  core_netgame_cpp_CNetGame_removeChatOut_FUN_0052ed80(this_ptr);
  return;
}
