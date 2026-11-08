// Name: FUN_00530980
// Address: 00530980
// Address Range: [[00530980, 00530a9b]]
// Convention: unknown
// Signature: void FUN_00530980(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,undefined4 *param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00530980(uint param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6)

{
  int iVar1;
  uint *puVar2;
  
  if (param_2 == (uint *)0x0) {
    _DAT_0200e88c = 1;
  }
  else {
    if (param_2 != (uint *)&DAT_0200e890) {
      _DAT_0200e890 = *param_2;
      _DAT_0200e898 = param_2[2];
      _DAT_0200e894 = param_2[1];
    }
    if (param_3 != (uint *)&DAT_0200e89c) {
      _DAT_0200e89c = *param_3;
      _DAT_0200e8a4 = param_3[2];
      _DAT_0200e8a0 = param_3[1];
    }
    if (param_4 != (uint *)&DAT_0200e8a8) {
      _DAT_0200e8a8 = *param_4;
      _DAT_0200e8b0 = param_4[2];
      _DAT_0200e8ac = param_4[1];
    }
    if (param_5 != (uint *)&DAT_0200e8b4) {
      _DAT_0200e8b4 = *param_5;
      _DAT_0200e8bc = param_5[2];
      _DAT_0200e8b8 = param_5[1];
    }
    if (param_6 == (uint *)0x0) {
      _DAT_0200e8c4 = param_6;
      _DAT_0200e8c8 = param_6;
      _DAT_0200e8cc = param_6;
      _DAT_0200e8d4 = param_6;
      _DAT_0200e8d8 = param_6;
      _DAT_0200e8dc = param_6;
      _DAT_0200e8d0 = 0x3f800000;
      _DAT_0200e8e0 = 0x3f800000;
      _DAT_0200e8c0 = 0x3f800000;
      _DAT_0200e88c = 2;
      return;
    }
    puVar2 = (uint *)&DAT_0200e8c0;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_6;
      param_6 = param_6 + 1;
      puVar2 = puVar2 + 1;
    }
    _DAT_0200e88c = 2;
  }
  return;
}
