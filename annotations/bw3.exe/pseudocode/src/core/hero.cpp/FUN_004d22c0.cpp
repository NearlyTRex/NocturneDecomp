// Name: FUN_004d22c0
// Address: 004d22c0
// Address Range: [[004d22c0, 004d236e]]
// Convention: unknown
// Signature: int FUN_004d22c0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004d22c0(float *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float fStack_1c;
  
  iVar6 = 0;
  fStack_1c = 1e+30;
  if (0 < _DAT_01d5ba00) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(iVar5 + 0x1d5ba04);
      if ((iVar1 != 0) &&
         (fVar2 = *(float *)(iVar1 + 0x20) - *param_1, fVar4 = *(float *)(iVar1 + 0x24) - param_1[1]
         , fVar3 = *(float *)(iVar1 + 0x28) - param_1[2],
         fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2, fVar2 < fStack_1c)) {
        iVar6 = iVar1;
        fStack_1c = fVar2;
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < _DAT_01d5ba00 * 4);
  }
  if (iVar6 != 0) {
    return iVar6;
  }
  _DAT_01d71de0 = "..\\core\\hero.cpp";
  _DAT_01d71de4 = 0x3a;
  FUN_004e4330("closestHeroToPoint - no heros!");
  return 0;
}
