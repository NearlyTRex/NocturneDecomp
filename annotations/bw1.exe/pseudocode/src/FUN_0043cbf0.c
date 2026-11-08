// Name: FUN_0043cbf0
// Address: 0043cbf0
// Address Range: [[0043cbf0, 0043cc38]]
// Convention: unknown
// Signature: void FUN_0043cbf0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0043cbf0(uint param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_0061b4c0 == 0) {
    FUN_0053e650(param_2,param_1);
    return;
  }
  iVar1 = FUN_0043c190(param_1,param_2);
  if ((iVar1 == 0) && (2 < DAT_007c7554)) {
    FUN_0053e120(&DAT_007c7558,DAT_007c7554);
    return;
  }
  return;
}
