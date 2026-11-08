// Name: FUN_00450580
// Address: 00450580
// Address Range: [[00450580, 0045066d]]
// Convention: unknown
// Signature: void FUN_00450580(int param_1,float *param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00450580(int param_1,float *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_2 == (float *)0x0) {
    _DAT_01c6e24c = param_2;
    return;
  }
  if (_DAT_0149ef08 != 0) {
    _DAT_01c6e24c = (float *)0x0;
    return;
  }
  local_10 = (int)ROUND(*param_2 * _DAT_005ddfbc);
  local_c = (int)ROUND(param_2[1] * _DAT_005ddfbc);
  local_8 = (int)ROUND(param_2[2] * _DAT_005ddfbc);
  _DAT_01c6e24c = (float *)(**(code **)(*(int *)(param_1 + 0x3c) + 8))(param_1,&local_10,param_3);
  uVar1 = *(uint *)(&DAT_00b9e14c + DAT_005f17ec * 4) & 0xff;
  if (DAT_005fba20 == 0x20) {
    uVar2 = (*(uint *)(&DAT_00b9e14c + DAT_005f17e4 * 4) & 0xff) << (DAT_01c6af74 & 0x1f) |
            (*(uint *)(&DAT_00b9e14c + DAT_005f17e8 * 4) & 0xff) << (DAT_01c6af80 & 0x1f);
    uVar1 = uVar1 << (DAT_01c6af8c & 0x1f);
  }
  else {
    uVar2 = (*(uint *)(&DAT_00b9e14c + DAT_005f17e4 * 4) & 0xff) << 0x10 |
            (*(uint *)(&DAT_00b9e14c + DAT_005f17e8 * 4) & 0xff) << 8;
  }
  _DAT_01c6e2bc = uVar2 | uVar1;
  return;
}
