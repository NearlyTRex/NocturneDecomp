// Name: FUN_00515cd0
// Address: 00515cd0
// Address Range: [[00515cd0, 00515e35]]
// Convention: unknown
// Signature: void FUN_00515cd0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00515cd0(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if (*(int *)(param_1 + 0x4f8) == 0) {
    iVar2 = FUN_0048e340(0x01C38BC0,param_1 + 0x430);
    if (iVar2 == 0) {
      return;
    }
    *(uint *)(param_1 + 0x4f8) = 1;
  }
  iVar2 = FUN_0048e340(0x01C38BC0,param_1 + 0x494);
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x58c) != 0x3f800000)) {
    *(uint *)(param_1 + 0x590) = 0;
    *(uint *)(param_1 + 0x58c) = 0x3f800000;
  }
  FUN_005156d0(param_1,param_2);
  fVar7 = (float10)1;
  fVar5 = (float10)1.4426950408889634 *
          (float10)*(float *)(param_1 + 0x58c) * (float10)_DAT_005e1a8a *
          (float10)*(float *)(param_1 + 0x590);
  fVar6 = (float10)f2xm1(fVar5 - (fVar5 / fVar7) * fVar7);
  fVar7 = (float10)fscale(fVar6 + fVar7,fVar5);
  if (fVar7 <= (float10)_DAT_005e1a92) {
    *(uint *)(param_1 + 0x59c) = 1;
    return;
  }
  *(uint *)(param_1 + 0x59c) = 0;
  if ((*(int *)(param_1 + 0x584) == 0) && (*(int *)(param_1 + 0x588) == 0)) {
    return;
  }
  iVar4 = 0;
  iVar2 = 0;
  do {
    while( true ) {
      if (*(int *)(0x01E661B8 + 0x14f0a8) <= iVar2) {
        return;
      }
      uVar1 = *(uint *)(iVar4 + 0x14f0ac + 0x01E661B8);
      if ((*(int *)(param_1 + 0x584) == 0) ||
         (iVar3 = FUN_0040c8f0(uVar1,_DAT_01cedf50), iVar3 == 0)) break;
      FUN_00514f40(param_1,uVar1,iVar3,0);
LAB_00515d9e:
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 4;
    }
    if ((*(int *)(param_1 + 0x588) == 0) || (iVar3 = FUN_0040c8f0(uVar1,_DAT_01c264e0), iVar3 == 0))
    goto LAB_00515d9e;
    FUN_00514f40(param_1,uVar1,0,iVar3);
    iVar2 = iVar2 + 1;
    iVar4 = iVar4 + 4;
  } while( true );
}
