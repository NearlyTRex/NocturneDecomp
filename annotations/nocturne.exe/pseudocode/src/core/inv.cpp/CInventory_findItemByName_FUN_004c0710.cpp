// Name: core_inv.cpp_CInventory_findItemByName_FUN_004c0710
// Address: 004c0710
// Address Range: [[004c0710, 004c0751]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_inv_cpp_CInventory_findItemByName_FUN_004c0710(int param_1,undefined4 param_2)

#include "nocturne.h"

uint __cdecl core_inv_cpp_CInventory_findItemByName_FUN_004c0710(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = _stricmp(*(uint *)(iVar2 + 0xc),param_2);
      if (iVar1 == 0) {
        return *(uint *)(iVar2 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(param_1 + 8));
  }
  return 0;
}
