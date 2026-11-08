// Name: FUN_00574a80
// Address: 00574a80
// Address Range: [[00574a80, 00574adf]]
// Convention: unknown
// Signature: void FUN_00574a80(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00574a80(int param_1,int param_2)

{
  uint *puVar1;
  
  if (_DAT_01c37788 != 0) {
    puVar1 = (uint *)(*(int *)(param_2 + 4) * 0x60 + param_1 + 4);
    if (puVar1[0x14] != 0) {
      (*_DAT_0264bbec)(param_2,*puVar1,puVar1[0x14]);
      return;
    }
    (*_DAT_0264bbe4)(param_2,*puVar1,puVar1[0x11],puVar1[0x13],puVar1[0x12]);
  }
  return;
}
