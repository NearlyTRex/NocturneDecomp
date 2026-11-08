// Name: FUN_005375c0
// Address: 005375c0
// Address Range: [[005375c0, 005376db]]
// Convention: unknown
// Signature: void FUN_005375c0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,undefined4 *param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005375c0(uint param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6)

{
  int iVar1;
  uint *puVar2;
  
  if (param_2 == (uint *)0x0) {
    _DAT_0207ffa8 = 1;
  }
  else {
    if (param_2 != (uint *)&DAT_0207ffac) {
      _DAT_0207ffac = *param_2;
      _DAT_0207ffb4 = param_2[2];
      _DAT_0207ffb0 = param_2[1];
    }
    if (param_3 != (uint *)&DAT_0207ffb8) {
      _DAT_0207ffb8 = *param_3;
      _DAT_0207ffc0 = param_3[2];
      _DAT_0207ffbc = param_3[1];
    }
    if (param_4 != (uint *)&DAT_0207ffc4) {
      _DAT_0207ffc4 = *param_4;
      _DAT_0207ffcc = param_4[2];
      _DAT_0207ffc8 = param_4[1];
    }
    if (param_5 != (uint *)&DAT_0207ffd0) {
      _DAT_0207ffd0 = *param_5;
      _DAT_0207ffd8 = param_5[2];
      _DAT_0207ffd4 = param_5[1];
    }
    if (param_6 == (uint *)0x0) {
      _DAT_0207ffe0 = param_6;
      _DAT_0207ffe4 = param_6;
      _DAT_0207ffe8 = param_6;
      _DAT_0207fff0 = param_6;
      _DAT_0207fff4 = param_6;
      _DAT_0207fff8 = param_6;
      _DAT_0207ffec = 0x3f800000;
      _DAT_0207fffc = 0x3f800000;
      _DAT_0207ffdc = 0x3f800000;
      _DAT_0207ffa8 = 2;
      return;
    }
    puVar2 = (uint *)&DAT_0207ffdc;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_6;
      param_6 = param_6 + 1;
      puVar2 = puVar2 + 1;
    }
    _DAT_0207ffa8 = 2;
  }
  return;
}
