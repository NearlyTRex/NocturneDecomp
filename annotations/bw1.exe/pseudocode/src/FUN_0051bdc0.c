// Name: FUN_0051bdc0
// Address: 0051bdc0
// Address Range: [[0051bdc0, 0051bec7]]
// Convention: unknown
// Signature: undefined4 FUN_0051bdc0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0051bdc0(int param_1)

{
  uint uVar1;
  char *pcVar2;
  
  if (_DAT_01d06aa0 < 1) {
    pcVar2 = "Can't run mission - no heros";
  }
  else {
    if (*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) != 0) {
      FUN_0051b2b0(param_1);
      *(uint *)(param_1 + 0x112c) = 0xffffffff;
      uVar1 = 0x01C51D80;
      *(uint *)(param_1 + 0x1128) = 0;
      *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1128);
      *(uint *)(param_1 + 0x1120) = *(uint *)(param_1 + 0x1124);
      FUN_004a19f0(uVar1);
      *(uint *)(0x01CCF390 + 0x244) = 0;
      FUN_0051b610(param_1,*(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x2c));
      uVar1 = FUN_00531090("Loading script",0);
      FUN_004fe9c0(0x01D1BD1C,uVar1);
      FUN_0051abf0(param_1);
      FUN_00544190(0x01E81C80);
      FUN_00544310(0x01E81C80);
      FUN_0055b200(0x01E82168);
      return 1;
    }
    pcVar2 = "Can't run mission - no local hero";
  }
  FUN_004943a0(0x01C3EB54,pcVar2);
  return 0;
}
