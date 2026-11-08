// Name: FUN_00483450
// Address: 00483450
// Address Range: [[00483450, 0048351d]]
// Convention: unknown
// Signature: int FUN_00483450(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00483450(int *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  
  if (_DAT_01c5b0e0 == 0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = *(uint *)(_DAT_01c5b0e0 + 0x41e8);
  _DAT_01c5bae4 = FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  uVar1 = DAT_005fba2c;
  if (0 < *param_1) {
    DAT_005fba2c = 0x7f;
    FUN_00483520(param_1,param_2,param_3,param_4);
    do {
      iVar2 = FUN_00483970(param_1);
      FUN_004843d0(param_1);
      FUN_0057a8a0();
    } while (iVar2 == -2);
    FUN_004032b0();
    FUN_0047f970(0x01C5B0E4);
    DAT_005fba2c = uVar1;
    return iVar2;
  }
  return -1;
}
