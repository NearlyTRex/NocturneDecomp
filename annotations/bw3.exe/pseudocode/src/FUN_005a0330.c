// Name: FUN_005a0330
// Address: 005a0330
// Address Range: [[005a0330, 005a0468]]
// Convention: unknown
// Signature: void FUN_005a0330(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a0330(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  FUN_00556be0(*(uint *)(param_1 + 0xd054));
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (fVar1 <= (float)_DAT_005da536) {
    *(uint *)(param_1 + 0x2538) = 0;
    *(uint *)(param_1 + 0x2540) = 0;
    if ((*(int *)(param_2 + 0x30) == 0x6f) &&
       (iVar2 = FUN_00491aa0(0x01C6E360,"exorcism_death"), iVar2 == 0)) {
      FUN_004946f0(0x01C6E360,"exorcism_death",1);
    }
    iVar2 = FUN_004fc070(param_1 + 0x158);
    iVar2 = *(int *)(iVar2 + 0x24);
    if ((((iVar2 == 5) || (iVar2 == 6)) || (iVar2 == 0xe)) || (iVar2 == 0xf)) {
      iVar2 = FUN_004fc070(param_1 + 0x158);
      iVar2 = *(int *)(iVar2 + 0x24);
      if (((iVar2 == 0x12) || (iVar2 == 0xb)) || ((iVar2 == 0x14 || (iVar2 == 0x16)))) {
        uVar4 = 0xd;
      }
      else {
        iVar3 = FUN_0048a1b0(param_1,*(uint *)(param_2 + 4));
        if (iVar3 == 0) goto LAB_005a03d3;
        if ((iVar2 < 7) || (iVar2 == 8)) {
          uVar4 = 4;
        }
        else {
          uVar4 = 0xd;
        }
      }
    }
    else if (iVar2 < 7) {
      uVar4 = 5;
    }
    else {
      uVar4 = 0xe;
    }
    FUN_004fc0d0(param_1 + 0x158,uVar4,1);
  }
LAB_005a03d3:
  FUN_00489b80(param_1,param_2);
  return;
}
