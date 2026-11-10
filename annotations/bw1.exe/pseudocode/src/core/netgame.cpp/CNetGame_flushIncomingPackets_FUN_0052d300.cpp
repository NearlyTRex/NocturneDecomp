// Name: core_netgame.cpp_CNetGame_flushIncomingPackets_FUN_0052d300
// Address: 0052d300
// Address Range: [[0052d300, 0052d35c]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_flushIncomingPackets_FUN_0052d300(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_flushIncomingPackets_FUN_0052d300(CNetGame *this_ptr)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = support_trisock_cpp_CSocket_isSocketValid_FUN_0059c970((CSocket *)&this_ptr->field_0x178);
  uVar1 = DAT_006260e8;
  if (iVar2 == 0) {
    return;
  }
  DAT_006260e8 = 0;
  do {
    wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
    iVar2 = 0;
    do {
      iVar3 = support_trisock_cpp_CSocket_receiveSocketData_FUN_0059cb20
                        ((CSocket *)&this_ptr->field_0x178,&DAT_01d7edb0,0x405,(SNetworkAddr *)0x0);
      if (iVar3 < 1) {
        DAT_006260e8 = uVar1;
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x14);
  } while( true );
}
