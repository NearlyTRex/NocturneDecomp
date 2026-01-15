// Name: core_path.cpp_FUN_00548680
// Address: 00548680
// Address Range: [[00548680, 00548744]]
// Convention: unknown
// Signature: undefined core_path.cpp_FUN_00548680()

#include "nocturne.h"

void core_path_cpp_FUN_00548680(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  CVector3f *in_stack_00000004;
  int aiStackY_1010 [1016];
  CVector3i *in_stack_ffffffd8;
  int iVar5;
  int local_24;
  int local_20;
  int local_1c;
  
  bVar4 = 0;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
            (&g_CDemonRaytraceInstance,in_stack_00000004,in_stack_ffffffd8);
  *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  iVar3 = 0;
  if (0 < g_PathMapCount) {
    iVar2 = 0;
    iVar5 = local_1c;
    do {
      if (*(int *)((int)g_PathMapList + iVar2) == 0) {
        g_CurrentFilename = "..\\core\\path.cpp";
        g_CurrentLineNumber = 0x6b5;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Global pathmap list corruption");
      }
      iVar1 = *(int *)((int)g_PathMapList + iVar2);
      if ((((*(int *)(iVar1 + 0x138c0) < 0x461c3c01) && (iVar5 == *(int *)(iVar1 + 0xc))) &&
          (local_24 == *(int *)(iVar1 + 0x10))) && (local_20 == *(int *)(iVar1 + 0x14))) {
        core_path_cpp_FUN_00547fc0();
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < g_PathMapCount);
  }
  return;
}
