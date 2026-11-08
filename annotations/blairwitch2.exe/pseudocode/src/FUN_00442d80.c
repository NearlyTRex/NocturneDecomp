// Name: FUN_00442d80
// Address: 00442d80
// Address Range: [[00442d80, 00442e6d]]
// Convention: unknown
// Signature: void FUN_00442d80(int param_1,float *param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00442d80(int param_1,float *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_2 == (float *)0x0) {
    _DAT_01c38aec = param_2;
    return;
  }
  if (_DAT_01467158 != 0) {
    _DAT_01c38aec = (float *)0x0;
    return;
  }
  local_10 = (int)ROUND(*param_2 * _DAT_005f4dcc);
  local_c = (int)ROUND(param_2[1] * _DAT_005f4dcc);
  local_8 = (int)ROUND(param_2[2] * _DAT_005f4dcc);
  _DAT_01c38aec = (float *)(**(code **)(*(int *)(param_1 + 0x3c) + 8))(param_1,&local_10,param_3);
  uVar1 = *(uint *)(&DAT_00b6639c + DAT_00609fac * 4) & 0xff;
  if (DAT_006141c0 == 0x20) {
    uVar2 = (*(uint *)(&DAT_00b6639c + DAT_00609fa4 * 4) & 0xff) << (DAT_01c35814 & 0x1f) |
            (*(uint *)(&DAT_00b6639c + DAT_00609fa8 * 4) & 0xff) << (DAT_01c35820 & 0x1f);
    uVar1 = uVar1 << (DAT_01c3582c & 0x1f);
  }
  else {
    uVar2 = (*(uint *)(&DAT_00b6639c + DAT_00609fa4 * 4) & 0xff) << 0x10 |
            (*(uint *)(&DAT_00b6639c + DAT_00609fa8 * 4) & 0xff) << 8;
  }
  _DAT_01c38b5c = uVar2 | uVar1;
  return;
}
