// Name: FUN_004f1f80
// Address: 004f1f80
// Address Range: [[004f1f80, 004f2044]]
// Convention: unknown
// Signature: void FUN_004f1f80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f1f80(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int aiStackY_1010 [1013];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  bVar4 = 0;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700(&DAT_01fba938,param_1);
  local_28 = local_1c;
  *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  iVar3 = 0;
  if (0 < _DAT_01e312f8) {
    iVar2 = 0;
    do {
      if (*(int *)(iVar2 + 0x1e312fc) == 0) {
        _DAT_01cc4800 = "..\\core\\path.cpp";
        _DAT_01cc4804 = 0x6b5;
        FUN_004c8440("Global pathmap list corruption");
      }
      iVar1 = *(int *)(iVar2 + 0x1e312fc);
      if ((((*(int *)(iVar1 + 0x138c0) < 0x461c3c01) && (local_28 == *(int *)(iVar1 + 0xc))) &&
          (local_24 == *(int *)(iVar1 + 0x10))) && (local_20 == *(int *)(iVar1 + 0x14))) {
        FUN_004f18c0(iVar1,param_2,param_3,param_4,param_5);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < _DAT_01e312f8);
  }
  return;
}
