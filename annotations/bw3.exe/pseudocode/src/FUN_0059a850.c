// Name: FUN_0059a850
// Address: 0059a850
// Address Range: [[0059a850, 0059a893]]
// Convention: unknown
// Signature: undefined4 FUN_0059a850(int param_1)

#include "nocturne.h"

uint FUN_0059a850(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x27a8) != 0) &&
      (iVar1 = FUN_00491aa0(0x01C6E360,"?heroCanSee" + 1), iVar1 != 0)) &&
     (*(int *)(param_1 + 0x34164) == 0)) {
    FUN_005095f0(param_1);
    return *(uint *)(param_1 + 0x27bc);
  }
  return 0;
}
