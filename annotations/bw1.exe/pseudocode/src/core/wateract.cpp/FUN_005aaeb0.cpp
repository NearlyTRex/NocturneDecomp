// Name: FUN_005aaeb0
// Address: 005aaeb0
// Address Range: [[005aaeb0, 005aaf7d] [005aafe6, 005ab026]]
// Convention: unknown
// Signature: void FUN_005aaeb0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005aaeb0(int param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int extraout_EDX;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  fVar5 = (float10)param_2 * (float10)_DAT_005f9302 * (float10)_DAT_005f930a;
  FUN_005c03a0();
  iVar3 = extraout_EDX + (int)ROUND(fVar5);
  *(int *)(param_1 + 0x2b22c) = iVar3;
  if (0x10000 < iVar3) {
    iVar4 = *(int *)(param_1 + 0x2b228) + 1;
    *(int *)(param_1 + 0x2b22c) = iVar3 + -0x10000;
    *(int *)(param_1 + 0x2b228) = iVar4;
    if (0xf < iVar4) {
      *(uint *)(param_1 + 0x2b228) = 0;
    }
  }
  uVar2 = 0x01C51D80;
  *(float *)(param_1 + 0x7f9c) = 1.0 / param_2;
  iVar3 = FUN_004a6c30(uVar2,param_1 + 0x1b4);
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0x280) = 1;
  }
  iVar3 = FUN_004a6c30(0x01C51D80,param_1 + 0x218);
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0x280) = 3;
  }
  switch(*(uint *)(param_1 + 0x280)) {
  case 1:
    fVar1 = param_2 / *(float *)(param_1 + 0x16c) + *(float *)(param_1 + 0x27c);
    *(float *)(param_1 + 0x27c) = fVar1;
    if (fVar1 <= 1.0) break;
    *(uint *)(param_1 + 0x280) = 2;
  case 2:
    *(uint *)(param_1 + 0x27c) = 0x3f800000;
    break;
  case 3:
    fVar1 = *(float *)(param_1 + 0x27c) - param_2 / *(float *)(param_1 + 0x170);
    *(float *)(param_1 + 0x27c) = fVar1;
    if (0.0 <= fVar1) break;
    *(uint *)(param_1 + 0x280) = 0;
  case 0:
    *(uint *)(param_1 + 0x27c) = 0;
    break;
  default:
    _DAT_01d1d400 = "..\\core\\wateract.cpp";
    _DAT_01d1d404 = 0x1a5;
    FUN_005030e0("CWaterActor::process - Bad state");
  }
  *(float *)(param_1 + 0x24) =
       *(float *)(param_1 + 0x168) * *(float *)(param_1 + 0x27c) + *(float *)(param_1 + 0x2b230);
  return;
}
