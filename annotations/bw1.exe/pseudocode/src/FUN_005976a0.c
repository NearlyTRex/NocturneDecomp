// Name: FUN_005976a0
// Address: 005976a0
// Address Range: [[005976a0, 005976ff]]
// Convention: unknown
// Signature: void FUN_005976a0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005976a0(int param_1,int param_2)

{
  uint *puVar1;
  
  if (_DAT_01c50948 != 0) {
    puVar1 = (uint *)(*(int *)(param_2 + 4) * 0x60 + param_1 + 4);
    if (puVar1[0x14] != 0) {
      (*_DAT_02c833bc)(param_2,*puVar1,puVar1[0x14]);
      return;
    }
    (*_DAT_02c833b4)(param_2,*puVar1,puVar1[0x11],puVar1[0x13],puVar1[0x12]);
  }
  return;
}
