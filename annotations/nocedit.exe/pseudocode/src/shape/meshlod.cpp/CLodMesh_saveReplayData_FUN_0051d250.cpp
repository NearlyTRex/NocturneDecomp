// Name: shape_meshlod.cpp_CLodMesh_saveReplayData_FUN_0051d250
// Address: 0051d250
// Address Range: [[0051d250, 0051d2c1]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_saveReplayData_FUN_0051d250(CLodMesh *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_saveReplayData_FUN_0051d250(CLodMesh *this_ptr,_FILE *file_handle)

{
  CLodEdge *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (file_handle != (_FILE *)0x0) {
    iVar7 = 0;
    _fprintf(file_handle,"%d\n",this_ptr->lod_level_count);
    if (0 < this_ptr->lod_level_count) {
      iVar8 = 0;
      do {
        pCVar1 = this_ptr->lod_levels_ptr;
        iVar2 = iVar8 + -0x18;
        iVar3 = iVar8 + -0x1c;
        iVar4 = iVar8 + -0x20;
        iVar5 = iVar8 + -0x24;
        iVar6 = iVar8 + -0x28;
        iVar8 = iVar8 + 0xf0;
        iVar7 = iVar7 + 1;
        _fprintf(file_handle,"%d,%d,%lg,%g\n",
                   *(uint *)((int)pCVar1->adjacent_tri_indices + iVar6),
                   *(uint *)((int)pCVar1->adjacent_tri_indices + iVar5),
                   *(uint *)((int)pCVar1->adjacent_tri_indices + iVar4),
                   *(uint *)((int)pCVar1->adjacent_tri_indices + iVar3),
                   (double)*(float *)((int)pCVar1->adjacent_tri_indices + iVar2));
      } while (iVar7 < this_ptr->lod_level_count);
      return;
    }
  }
  return;
}
