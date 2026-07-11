// Name: FUN_005173c0
// Address: 005173c0
// Address Range: [[005173c0, 005174df]]
// Convention: unknown
// Signature: void FUN_005173c0(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005173c0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  FUN_005174e0(param_1);
  if (100 < param_2) {
    _DAT_01cc4800 = "..\\core\\skeleton.cpp";
    _DAT_01cc4804 = 0xc6;
    FUN_004c8440("Too bony!");
  }
  *(int *)(param_1 + 0x28558) = param_2;
  *(uint *)(param_1 + 0x2936c) = param_3;
  uVar2 = FUN_00564c18(*(int *)(param_1 + 0x28558) * *(int *)(param_1 + 0x2936c) * 0x10);
  iVar1 = *(int *)(param_1 + 0x2936c);
  *(uint *)(param_1 + 0x29370) = uVar2;
  piVar3 = (int *)FUN_00564c18(iVar1 * 0xc + 4);
  piVar4 = piVar3;
  if (piVar3 != (int *)0x0) {
    piVar4 = piVar3 + 1;
    *piVar3 = iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x2936c);
  *(int **)(param_1 + 0x29374) = piVar4;
  piVar3 = (int *)FUN_00564c18(iVar1 * 0xc + 4);
  piVar4 = piVar3;
  if (piVar3 != (int *)0x0) {
    piVar4 = piVar3 + 1;
    *piVar3 = iVar1;
  }
  *(int **)(param_1 + 0x29378) = piVar4;
  if (((*(int *)(param_1 + 0x29370) != 0) && (*(int *)(param_1 + 0x29374) != 0)) &&
     (piVar4 != (int *)0x0)) {
    return;
  }
  _DAT_01cc4800 = "..\\core\\skeleton.cpp";
  _DAT_01cc4804 = 0xda;
  FUN_004c8440("Out of hunk in CSkeleton::allocMemory.  boneCount=%d, frameCount=%d",*(uint *)(param_1 + 0x28558),
               *(uint *)(param_1 + 0x2936c));
  return;
}
