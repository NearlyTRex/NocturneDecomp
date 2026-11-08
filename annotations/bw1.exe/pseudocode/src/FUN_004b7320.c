// Name: FUN_004b7320
// Address: 004b7320
// Address Range: [[004b7320, 004b736f]]
// Convention: unknown
// Signature: void FUN_004b7320(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b7320(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  (*(code *)**(uint **)(&DAT_01cc014c + _DAT_01cc010c * 0x40))
            (_DAT_01cc010c * 0x40 + 0x1cc0110,param_2,param_3);
  iVar1 = _DAT_01cc010c + 1;
  *(uint *)(&DAT_01cc0134 + _DAT_01cc010c * 0x40) = 0x3e800000;
  if (0xff < iVar1) {
    iVar1 = 0;
  }
  _DAT_01cc010c = iVar1;
  return;
}
