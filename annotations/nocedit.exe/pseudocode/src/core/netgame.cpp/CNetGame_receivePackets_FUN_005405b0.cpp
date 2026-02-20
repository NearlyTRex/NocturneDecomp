// Name: core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0
// Address: 005405b0
// Address Range: [[005405b0, 00540652]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(CNetGame *this_ptr)

{
  int iVar1;
  int iVar2;
  SNetworkAddr local_10;
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar2 = iVar1 / 0x12 - g_LastPingTime;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x20000 < iVar2) {
    iVar2 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar2;
  g_LastPingTime = iVar1 / 0x12;
  while( true ) {
    iVar1 = support_trisock_cpp_isSocketValid_FUN_005e1b70(&this_ptr->socket);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = support_trisock_cpp_receiveSocketData_FUN_005e1c20
                      (&this_ptr->socket,g_NetworkReceiveBuffer,0x404,&local_10);
    if (iVar1 < 1) break;
    g_NetworkPacketSize = iVar1 + 1;
    core_netgame_cpp_CNetGame_allocSimFrame_FUN_005406a0
              (this_ptr,&local_10,(char *)&g_NetworkPacketSize);
  }
  core_netgame_cpp_CNetGame_removeChatOut_FUN_00541ff0(this_ptr);
  return;
}
