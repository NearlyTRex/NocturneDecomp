// Name: core_path.cpp_FUN_00548680
// Address: 00548680
// Address Range: [[00548680, 00548744]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_FUN_00548680(void)

#include "nocturne.h"

void __cdecl core_path_cpp_FUN_00548680(void)

{
  CPathMap *this_ptr;
  int iVar1;
  int iVar2;
  byte bVar3;
  CVector3f *in_stack_00000004;
  uint in_stack_0000000c;
  int aiStackY_1010 [1013];
  uint uStack_34;
  CVector3i *in_stack_ffffffd8;
  int iVar4;
  int local_24;
  int local_20;
  int local_1c;
  
  bVar3 = 0;
  uStack_34 = 0x5486a2;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
            (&g_CDemonRaytraceInstance,in_stack_00000004,in_stack_ffffffd8);
  *(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  iVar2 = 0;
  if (0 < g_PathMapCount) {
    iVar1 = 0;
    iVar4 = local_1c;
    do {
      if (*(int *)((int)g_PathMapList + iVar1) == 0) {
        g_CurrentFilename = "..\\core\\path.cpp";
        g_CurrentLineNumber = 0x6b5;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Global pathmap list corruption");
      }
      this_ptr = *(CPathMap **)((int)g_PathMapList + iVar1);
      if (((((int)(this_ptr->cached_world_position).x < 0x461c3c01) &&
           (iVar4 == (this_ptr->voxel_coords).x)) && (local_24 == (this_ptr->voxel_coords).y)) &&
         (local_20 == (this_ptr->voxel_coords).z)) {
        uStack_34 = in_stack_0000000c;
        core_path_cpp_CPathMap_FUN_00547fc0(this_ptr);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < g_PathMapCount);
  }
  return;
}
