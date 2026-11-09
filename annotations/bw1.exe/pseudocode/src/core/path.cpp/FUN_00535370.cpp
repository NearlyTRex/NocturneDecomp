// Name: core_path.cpp_FUN_00535370
// Address: 00535370
// Address Range: [[00535370, 00535434]]
// Convention: unknown
// Signature: void core_path_cpp_FUN_00535370(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_path_cpp_FUN_00535370(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int aiStackY_1010 [1013];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  bVar4 = 0;
  core_dtrace_cpp_FUN_0048ef40(&g_CDemonRaytraceInstance,param_1);
  iStack_28 = iStack_1c;
  *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  iVar3 = 0;
  if (0 < _DAT_01e6be48) {
    iVar2 = 0;
    do {
      if (*(int *)(iVar2 + 0x1e6be4c) == 0) {
        _DAT_01d1d400 = "..\\core\\path.cpp";
        _DAT_01d1d404 = 0x6b6;
        core_main_c_FUN_005030e0("Global pathmap list corruption");
      }
      iVar1 = *(int *)(iVar2 + 0x1e6be4c);
      if ((((*(int *)(iVar1 + 0x138c0) < 0x461c3c01) && (iStack_28 == *(int *)(iVar1 + 0xc))) &&
          (iStack_24 == *(int *)(iVar1 + 0x10))) && (iStack_20 == *(int *)(iVar1 + 0x14))) {
        core_path_cpp_FUN_00534ca0(iVar1,param_2,param_3,param_4,param_5);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < _DAT_01e6be48);
  }
  return;
}
