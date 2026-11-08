// Name: FUN_00431d90
// Address: 00431d90
// Address Range: [[00431d90, 00431dd8]]
// Convention: unknown
// Signature: void FUN_00431d90(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00431d90(uint param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_006141e0 == 0) {
    FUN_0051d050(param_2,param_1);
    return;
  }
  iVar1 = FUN_00431330(param_1,param_2);
  if ((iVar1 == 0) && (2 < DAT_007bee30)) {
    FUN_0051cb20(&DAT_007bee34,DAT_007bee30);
    return;
  }
  return;
}
