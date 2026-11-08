// Name: FUN_004a3f20
// Address: 004a3f20
// Address Range: [[004a3f20, 004a3f6f]]
// Convention: unknown
// Signature: void FUN_004a3f20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a3f20(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  (*(code *)**(uint **)(&DAT_01d07bcc + _DAT_01d07b8c * 0x40))
            (_DAT_01d07b8c * 0x40 + 0x1d07b90,param_2,param_3);
  iVar1 = _DAT_01d07b8c + 1;
  *(uint *)(&DAT_01d07bb4 + _DAT_01d07b8c * 0x40) = 0x3e800000;
  if (0xff < iVar1) {
    iVar1 = 0;
  }
  _DAT_01d07b8c = iVar1;
  return;
}
