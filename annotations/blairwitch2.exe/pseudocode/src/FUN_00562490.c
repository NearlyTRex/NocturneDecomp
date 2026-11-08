// Name: FUN_00562490
// Address: 00562490
// Address Range: [[00562490, 005624e8]]
// Convention: unknown
// Signature: undefined4 FUN_00562490(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00562490(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_0040c8f0(*(uint *)(param_1 + 0x7d4),_DAT_01510e14);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x2e0) != 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x470) != 3) {
    iVar1 = FUN_0040c840(param_2,"CHero");
    if (iVar1 == 0) {
      return 0;
    }
  }
  return *(uint *)(param_1 + 0x470);
}
