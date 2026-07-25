// Name: FUN_00405ab0
// Address: 00405ab0
// Address Range: [[00405ab0, 00405b23]]
// Convention: unknown
// Signature: void FUN_00405ab0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00405ab0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if (DAT_006b0268 < 500) {
    iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(param_1 + 8);
    if (iVar1 != 0) {
      iVar1 = DAT_006b0268 * 0x20;
      *(int *)(&DAT_006b02dc + iVar1) = param_1;
      *(uint *)(&DAT_006b02e0 + iVar1) = param_2;
      *(uint *)(&DAT_006b02e4 + iVar1) = param_3;
      FUN_004059c0(param_1);
      (&DAT_006b415c)[DAT_006b0268] = &DAT_006b02dc + DAT_006b0268 * 0x20;
      DAT_006b0268 = DAT_006b0268 + 1;
      return;
    }
  }
  return;
}
