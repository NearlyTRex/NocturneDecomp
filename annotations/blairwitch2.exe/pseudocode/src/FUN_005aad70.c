// Name: FUN_005aad70
// Address: 005aad70
// Address Range: [[005aad70, 005aae75]]
// Convention: unknown
// Signature: void FUN_005aad70(int param_1,undefined4 *param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005aad70(int param_1,uint *param_2,float param_3)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  
  FUN_00503620(param_1 + 0x2b4,8,1);
  iVar1 = param_1 + 0x10af8;
  iVar4 = FUN_0059daa0(iVar1,&DAT_005f0c0e);
  if (iVar4 == 0) {
    uVar5 = FUN_0059db70(iVar1);
    FUN_0059d7f0(iVar1,"BurnComplete",uVar5);
  }
  FUN_0059d8e0(param_1 + 0x10af8,&DAT_005f0c20);
  *(float *)(param_1 + 0x11430) = param_3 * _DAT_005f0c26;
  if ((uint *)(param_1 + 0x11434) != param_2) {
    *(uint *)(param_1 + 0x11434) = *param_2;
    *(uint *)(param_1 + 0x11438) = param_2[1];
    *(uint *)(param_1 + 0x1143c) = param_2[2];
  }
  pfVar2 = (float *)(param_1 + 0x11434);
  *(uint *)(param_1 + 0x11438) = 0;
  fVar3 = SQRT(*(float *)(param_1 + 0x1143c) * *(float *)(param_1 + 0x1143c) +
               *pfVar2 * *pfVar2 + *(float *)(param_1 + 0x11438) * *(float *)(param_1 + 0x11438));
  if (0.0 < fVar3) {
    fVar3 = 1.0 / fVar3;
    *pfVar2 = *pfVar2 * fVar3;
    *(float *)(param_1 + 0x11438) = *(float *)(param_1 + 0x11438) * fVar3;
    *(float *)(param_1 + 0x1143c) = *(float *)(param_1 + 0x1143c) * fVar3;
    return;
  }
  *(uint *)(param_1 + 0x1143c) = 0;
  *(uint *)(param_1 + 0x11438) = *(uint *)(param_1 + 0x1143c);
  *pfVar2 = *(float *)(param_1 + 0x11438);
  return;
}
