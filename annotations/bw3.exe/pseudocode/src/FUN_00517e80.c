// Name: FUN_00517e80
// Address: 00517e80
// Address Range: [[00517e80, 00517f48]]
// Convention: unknown
// Signature: float FUN_00517e80(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00517e80(uint param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_14;
  
  iVar5 = 0;
  iVar1 = FUN_0040c840(param_1,DAT_007e17b4);
  if (iVar1 != 0) {
    iVar5 = FUN_004625a0(iVar1 + 0x158);
  }
  iVar1 = FUN_0040c840(param_1,_DAT_02cfd944);
  if (iVar1 != 0) {
    iVar5 = FUN_004625a0(iVar1 + 0x158);
  }
  if (iVar5 != 0) {
    iVar6 = 0;
    iVar1 = 0;
    iVar4 = 0;
    local_14 = 0;
    for (iVar3 = 0; iVar3 < *(int *)(iVar5 + 0x104); iVar3 = iVar3 + 1) {
      piVar2 = (int *)(*(int *)(iVar5 + 0x10c) + iVar4);
      if (iVar6 < *piVar2) {
        local_14 = piVar2[1];
        iVar6 = *piVar2;
      }
      if (iVar1 < piVar2[1]) {
        iVar1 = piVar2[1];
      }
      iVar4 = iVar4 + 0xc;
    }
    return (float)(iVar1 - local_14) * (float)_DAT_005cca97;
  }
  return 0.0;
}
