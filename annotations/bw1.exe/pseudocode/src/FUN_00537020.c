// Name: FUN_00537020
// Address: 00537020
// Address Range: [[00537020, 00537185]]
// Convention: unknown
// Signature: void FUN_00537020(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00537020(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if (*(int *)(param_1 + 0x39c) == 0) {
    iVar2 = FUN_004a6c30(0x01C51D80,param_1 + 0x2d4);
    if (iVar2 == 0) {
      return;
    }
    *(uint *)(param_1 + 0x39c) = 1;
  }
  iVar2 = FUN_004a6c30(0x01C51D80,param_1 + 0x338);
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x430) != 0x3f800000)) {
    *(uint *)(param_1 + 0x434) = 0;
    *(uint *)(param_1 + 0x430) = 0x3f800000;
  }
  FUN_00536a20(param_1,param_2);
  fVar7 = (float10)1;
  fVar5 = (float10)1.4426950408889634 *
          (float10)*(float *)(param_1 + 0x430) * (float10)_DAT_005ecce5 *
          (float10)*(float *)(param_1 + 0x434);
  fVar6 = (float10)f2xm1(fVar5 - (fVar5 / fVar7) * fVar7);
  fVar7 = (float10)fscale(fVar6 + fVar7,fVar5);
  if (fVar7 <= (float10)_DAT_005ecced) {
    *(uint *)(param_1 + 0x440) = 1;
    return;
  }
  *(uint *)(param_1 + 0x440) = 0;
  if ((*(int *)(param_1 + 0x428) == 0) && (*(int *)(param_1 + 0x42c) == 0)) {
    return;
  }
  iVar4 = 0;
  iVar2 = 0;
  do {
    while( true ) {
      if (*(int *)(0x01E82168 + 0x14f0a8) <= iVar2) {
        return;
      }
      uVar1 = *(uint *)(iVar4 + 0x14f0ac + 0x01E82168);
      if ((*(int *)(param_1 + 0x428) == 0) ||
         (iVar3 = FUN_0040c600(uVar1,_DAT_01d06b10), iVar3 == 0)) break;
      FUN_00536290(param_1,uVar1,iVar3,0);
LAB_005370ee:
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 4;
    }
    if ((*(int *)(param_1 + 0x42c) == 0) || (iVar3 = FUN_0040c600(uVar1,_DAT_01c3f6a0), iVar3 == 0))
    goto LAB_005370ee;
    FUN_00536290(param_1,uVar1,0,iVar3);
    iVar2 = iVar2 + 1;
    iVar4 = iVar4 + 4;
  } while( true );
}
