// Name: core_netgame.cpp_CNetGame_flushIncomingPackets_FUN_004ea6e0
// Address: 004ea6e0
// Address Range: [[004ea6e0, 004ea73c]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_flushIncomingPackets_FUN_004ea6e0(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_flushIncomingPackets_FUN_004ea6e0(CNetGame *this_ptr)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = support_trisock_cpp_isSocketValid_FUN_00548f60(&this_ptr->socket);
  uVar1 = DAT_005c1664;
  if (iVar2 == 0) {
    return;
  }
  DAT_005c1664 = 0;
  do {
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    iVar2 = 0;
    do {
      iVar3 = support_trisock_cpp_receiveSocketData_FUN_00549010
                        (&this_ptr->socket,(char *)&g_INT_01d16408,0x405,(SNetworkAddr *)0x0);
      if (iVar3 < 1) {
        DAT_005c1664 = uVar1;
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x14);
  } while( true );
}
