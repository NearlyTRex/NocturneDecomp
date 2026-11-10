// Name: core_path.cpp_renderPathMapsAtPosition_FUN_0050d050
// Address: 0050d050
// Address Range: [[0050d050, 0050d114]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_renderPathMapsAtPosition_FUN_0050d050(CVector3f *position,int depth,int red,int green,int fog)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_path_cpp_renderPathMapsAtPosition_FUN_0050d050(CVector3f *position,int depth,int red,int green,int fog)

{
  CPathMap *this_ptr;
  int iVar1;
  int iVar2;
  byte bVar3;
  int aiStackY_1010 [1013];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  bVar3 = 0;
  core_dtrace_cpp_FUN_00477ac0(&g_CDemonRaytraceInstance,position);
  iStack_28 = iStack_1c;
  *(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  iVar2 = 0;
  if (0 < _DAT_01ec1518) {
    iVar1 = 0;
    do {
      if (*(int *)(iVar1 + 0x1ec151c) == 0) {
        _DAT_01d71de0 = "..\\core\\path.cpp";
        _DAT_01d71de4 = 0x6b6;
        core_main_c_FUN_004e4330("Global pathmap list corruption");
      }
      this_ptr = *(CPathMap **)(iVar1 + 0x1ec151c);
      if (((((int)(this_ptr->cached_world_position).x < 0x461c3c01) &&
           (iStack_28 == (this_ptr->voxel_coords).x)) && (iStack_24 == (this_ptr->voxel_coords).y))
         && (iStack_20 == (this_ptr->voxel_coords).z)) {
        core_path_cpp_CPathMap_renderPathMap_FUN_0050c980(this_ptr,depth,red,green,fog);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < _DAT_01ec1518);
  }
  return;
}
