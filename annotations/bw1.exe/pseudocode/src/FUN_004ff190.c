// Name: FUN_004ff190
// Address: 004ff190
// Address Range: [[004ff190, 004ff3ec]]
// Convention: unknown
// Signature: void FUN_004ff190(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ff190(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x418) == 0) goto LAB_004ff1a8;
  fVar1 = *(float *)(param_1 + 0x2dc);
  if (*(float *)(param_1 + 0x41c) <= fVar1) {
    fVar2 = fVar1 - param_2 * (float)_DAT_005e6d42;
    *(float *)(param_1 + 0x2dc) = fVar2;
    if (fVar2 < *(float *)(param_1 + 0x41c)) {
      *(uint *)(param_1 + 0x418) = 0;
      *(uint *)(param_1 + 0x2dc) = *(uint *)(param_1 + 0x41c);
      if ((*(int *)(param_1 + 0x40c) != 0) && (*(float *)(param_1 + 0x2dc) < (float)_DAT_005e6d4a))
      {
        iVar4 = param_1 + 0x344;
        goto LAB_004ff27c;
      }
    }
  }
  else {
    fVar2 = param_2 * (float)_DAT_005e6d42 + fVar1;
    *(float *)(param_1 + 0x2dc) = fVar2;
    if (*(float *)(param_1 + 0x41c) < fVar2) {
      *(uint *)(param_1 + 0x418) = 0;
      *(uint *)(param_1 + 0x2dc) = *(uint *)(param_1 + 0x41c);
      if ((*(int *)(param_1 + 0x40c) != 0) && ((float)_DAT_005e6d52 < *(float *)(param_1 + 0x2dc)))
      {
        iVar4 = param_1 + 0x2e0;
LAB_004ff27c:
        FUN_004a1b70(0x01C51D80,iVar4);
      }
    }
  }
  if (((0.0 < *(float *)(param_1 + 0x2dc)) && (fVar1 <= 0.0)) ||
     ((*(int *)(param_1 + 0x2dc) < 0x3f800000 && (1.0 <= fVar1)))) {
    (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,param_1 + 0x3a8);
  }
  if (*(int *)(param_1 + 0x410) != 0) {
    FUN_004ff3f0(*(int *)(param_1 + 0x410),*(uint *)(param_1 + 0x2dc),0);
  }
  iVar5 = 0;
  iVar4 = 0;
  while (iVar4 < *(int *)(0x01E82168 + 0x14d164)) {
    iVar3 = FUN_0040c600(*(uint *)(iVar5 + 0x14d168 + 0x01E82168),_DAT_01d1c21c);
    if ((iVar3 == 0) || (param_1 != *(int *)(iVar3 + 0x410))) {
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    }
    else {
      FUN_004ff3f0(iVar3,*(uint *)(*(int *)(iVar3 + 0x410) + 0x2dc),0);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    }
  }
LAB_004ff1a8:
  if (*(int *)(param_1 + 0x40c) == 0) {
    if ((*(float *)(param_1 + 0x2dc) < (float)_DAT_005e6d4a) && (*(char *)(param_1 + 0x344) != '\0')
       ) {
      FUN_004a1b70(0x01C51D80,param_1 + 0x344);
    }
    if (((float)_DAT_005e6d52 < *(float *)(param_1 + 0x2dc)) && (*(char *)(param_1 + 0x2e0) != '\0')
       ) {
      FUN_004a1b70(0x01C51D80,param_1 + 0x2e0);
      return;
    }
  }
  return;
}
