// Name: core_netgame.cpp_CNetGame_flushIncomingPackets_FUN_0050c130
// Address: 0050c130
// Address Range: [[0050c130, 0050c18c]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_flushIncomingPackets_FUN_0050c130(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_flushIncomingPackets_FUN_0050c130(CNetGame *this_ptr)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = support_trisock_cpp_CSocket_isSocketValid_FUN_00579090((CSocket *)&this_ptr->field_0x180);
  uVar1 = DAT_0061e990;
  if (iVar2 == 0) {
    return;
  }
  DAT_0061e990 = 0;
  do {
    wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
    iVar2 = 0;
    do {
      iVar3 = support_trisock_cpp_CSocket_receiveSocketData_FUN_00579240
                        ((CSocket *)&this_ptr->field_0x180,&DAT_01d62e48,0x405,(SNetworkAddr *)0x0);
      if (iVar3 < 1) {
        DAT_0061e990 = uVar1;
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x14);
  } while( true );
}
