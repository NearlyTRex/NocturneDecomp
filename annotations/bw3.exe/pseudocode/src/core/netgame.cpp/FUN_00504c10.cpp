// Name: core_netgame.cpp_FUN_00504c10
// Address: 00504c10
// Address Range: [[00504c10, 00504c6c]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_FUN_00504c10(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_FUN_00504c10(CNetGame *this_ptr)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = support_trisock_cpp_CSocket_isSocketValid_FUN_0056f960((CSocket *)&this_ptr->field_0x180);
  uVar1 = DAT_0060728c;
  if (iVar2 == 0) {
    return;
  }
  DAT_0060728c = 0;
  do {
    wincore_wddvmem_cpp_FUN_0057a8a0();
    iVar2 = 0;
    do {
      iVar3 = support_trisock_cpp_FUN_0056fb10
                        ((CSocket *)&this_ptr->field_0x180,&DAT_01dd4488,0x405,(SNetworkAddr *)0x0);
      if (iVar3 < 1) {
        DAT_0060728c = uVar1;
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x14);
  } while( true );
}
