// Name: core_path.cpp_renderPathMapsAtPosition_FUN_00514020
// Address: 00514020
// Address Range: [[00514020, 005140e4]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_renderPathMapsAtPosition_FUN_00514020(CVector3f *position,int depth,int red,int green,int fog)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_path_cpp_renderPathMapsAtPosition_FUN_00514020(CVector3f *position,int depth,int red,int green,int fog)

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
  core_dtrace_cpp_FUN_00476a50(&g_CDemonRaytraceInstance,position);
  iStack_28 = iStack_1c;
  *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  iVar3 = 0;
  if (0 < _DAT_01e4fed8) {
    iVar2 = 0;
    do {
      if (*(int *)(iVar2 + 0x1e4fedc) == 0) {
        _DAT_01d046a0 = "..\\core\\path.cpp";
        _DAT_01d046a4 = 0x6b5;
        core_main_c_FUN_004e4500("Global pathmap list corruption");
      }
      iVar1 = *(int *)(iVar2 + 0x1e4fedc);
      if ((((*(int *)(iVar1 + 0x138c0) < 0x461c3c01) && (iStack_28 == *(int *)(iVar1 + 0xc))) &&
          (iStack_24 == *(int *)(iVar1 + 0x10))) && (iStack_20 == *(int *)(iVar1 + 0x14))) {
        core_path_cpp_FUN_00513950(iVar1,depth,red,green,fog);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < _DAT_01e4fed8);
  }
  return;
}
