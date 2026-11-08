// Name: FUN_004a4d00
// Address: 004a4d00
// Address Range: [[004a4d00, 004a4db6]]
// Convention: unknown
// Signature: undefined4 FUN_004a4d00(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004a4d00(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uStack_18;
  float fStack_14;
  uint uStack_10;
  
  uStack_18 = *(uint *)(param_1 + 0x20);
  uStack_10 = *(uint *)(param_1 + 0x28);
  fStack_14 = *(float *)(param_1 + 0x24) + _DAT_005c0b45;
  iVar2 = FUN_0057b880(param_1);
  if (iVar2 != 0) {
    FUN_004a3f70(0x01C73654,&uStack_18,0,*(uint *)(param_1 + 0x304));
    uVar1 = 0x02CF5680;
    *(uint *)(param_1 + 0x300) = 0x3f800000;
    FUN_005609d0(uVar1,param_1,"wp_firestaff.wav",&uStack_18);
    return 1;
  }
  FUN_005609d0(0x02CF5680,param_1,"?wp_nomana.wav" + 1,&uStack_18);
  *(uint *)(param_1 + 0x300) = 0x3f800000;
  return 0;
}
