// Name: FUN_00454430
// Address: 00454430
// Address Range: [[00454430, 0045451d]]
// Convention: unknown
// Signature: void FUN_00454430(int param_1,float *param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00454430(int param_1,float *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_2 == (float *)0x0) {
    _DAT_01c51cac = param_2;
    return;
  }
  if (_DAT_01482658 != 0) {
    _DAT_01c51cac = (float *)0x0;
    return;
  }
  local_10 = (int)ROUND(*param_2 * _DAT_005fe5fc);
  local_c = (int)ROUND(param_2[1] * _DAT_005fe5fc);
  local_8 = (int)ROUND(param_2[2] * _DAT_005fe5fc);
  _DAT_01c51cac = (float *)(**(code **)(*(int *)(param_1 + 0x3c) + 8))(param_1,&local_10,param_3);
  uVar1 = *(uint *)(&DAT_00b8189c + DAT_00611238 * 4) & 0xff;
  if (DAT_0061b4a0 == 0x20) {
    uVar2 = (*(uint *)(&DAT_00b8189c + DAT_00611230 * 4) & 0xff) << (DAT_01c4e9d4 & 0x1f) |
            (*(uint *)(&DAT_00b8189c + DAT_00611234 * 4) & 0xff) << (DAT_01c4e9e0 & 0x1f);
    uVar1 = uVar1 << (DAT_01c4e9ec & 0x1f);
  }
  else {
    uVar2 = (*(uint *)(&DAT_00b8189c + DAT_00611230 * 4) & 0xff) << 0x10 |
            (*(uint *)(&DAT_00b8189c + DAT_00611234 * 4) & 0xff) << 8;
  }
  _DAT_01c51d1c = uVar2 | uVar1;
  return;
}
