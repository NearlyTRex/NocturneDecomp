// Name: FUN_0049ea20
// Address: 0049ea20
// Address Range: [[0049ea20, 0049ea70]]
// Convention: unknown
// Signature: void FUN_0049ea20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049ea20(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  (*(code *)**(uint **)(&DAT_01ca76c0 + _DAT_01ca7680 * 0x40))
            (_DAT_01ca7680 * 0x40 + 0x1ca7684,param_2,param_3);
  iVar1 = _DAT_01ca7680 + 1;
  *(uint *)(&DAT_01ca76a8 + _DAT_01ca7680 * 0x40) = 0x3e800000;
  if (0xff < iVar1) {
    iVar1 = 0;
  }
  _DAT_01ca7680 = iVar1;
  return;
}
