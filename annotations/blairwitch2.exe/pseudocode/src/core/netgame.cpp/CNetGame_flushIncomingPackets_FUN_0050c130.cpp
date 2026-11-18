// Name: core_netgame.cpp_CNetGame_flushIncomingPackets_FUN_0050c130
// Address: 0050c130
// Address Range: [[0050c130, 0050c18c]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_flushIncomingPackets_FUN_0050c130(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_flushIncomingPackets_FUN_0050c130(CNetGame *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = support_trisock_cpp_CSocket_isSocketValid_FUN_00579090(&this_ptr->socket);
  iVar1 = g_ForceMessagePump;
  if (iVar2 == 0) {
    return;
  }
  g_ForceMessagePump = 0;
  do {
    wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
    iVar2 = 0;
    do {
      iVar3 = support_trisock_cpp_CSocket_receiveSocketData_FUN_00579240
                        (&this_ptr->socket,g_NetworkReceivePacket.raw,0x405,(SNetworkAddr *)0x0);
      if (iVar3 < 1) {
        g_ForceMessagePump = iVar1;
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x14);
  } while( true );
}
