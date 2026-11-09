// Name: unkafter_basicene.cpp_FUN_005a0270
// Address: 005a0270
// Address Range: [[005a0270, 005a0378]]
// Convention: unknown
// Signature: void unkafter_basicene_cpp_FUN_005a0270(int param_1,undefined4 *param_2,undefined4 param_3)

#include "nocturne.h"

void unkafter_basicene_cpp_FUN_005a0270(int param_1,uint *param_2,uint param_3)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x11348) == 0) {
    return;
  }
  iVar1 = param_1 + 0x10af8;
  iVar4 = unkaddr_0059d350_cpp_FUN_0059daa0(iVar1,&DAT_005efb55);
  if (iVar4 == 0) {
    uVar5 = unkaddr_0059d350_cpp_FUN_0059db70(iVar1);
    unkaddr_0059d350_cpp_FUN_0059d7f0(iVar1,"BurnComplete",uVar5);
  }
  unkaddr_0059d350_cpp_FUN_0059d8e0(param_1 + 0x10af8,&DAT_005efb67);
  *(uint *)(param_1 + 0x11430) = param_3;
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
