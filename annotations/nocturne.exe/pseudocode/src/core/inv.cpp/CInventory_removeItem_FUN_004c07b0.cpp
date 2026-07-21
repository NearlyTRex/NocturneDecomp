// Name: core_inv.cpp_CInventory_removeItem_FUN_004c07b0
// Address: 004c07b0
// Address Range: [[004c07b0, 004c0846]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_removeItem_FUN_004c07b0(int param_1,int param_2,int param_3)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_removeItem_FUN_004c07b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == *(int *)(param_1 + 0x330)) {
    *(uint *)(param_1 + 0x330) = 0;
  }
  if (param_2 == *(int *)(param_1 + 0x334)) {
    *(uint *)(param_1 + 0x334) = 0;
  }
  iVar2 = 0;
  iVar3 = param_1;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = *(int *)(iVar3 + 0xc);
      if (param_2 == iVar1) {
        iVar3 = *(int *)(param_1 + 8) + -1;
        *(int *)(param_1 + 8) = iVar3;
        memmove
                  (param_1 + 0xc + iVar2 * 4,iVar2 * 4 + 4 + param_1 + 0xc,(iVar3 - iVar2) * 4);
        if (param_3 == 0) {
          return;
        }
        FUN_00409cd0(iVar1);
        return;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return;
}
