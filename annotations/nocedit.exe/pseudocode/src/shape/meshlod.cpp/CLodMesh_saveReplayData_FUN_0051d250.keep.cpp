// Name: shape_meshlod.cpp_CLodMesh_saveReplayData_FUN_0051d250
// Address: 0051d250
// MANUAL RECONSTRUCTION
// Address Range: [[0051d250, 0051d2c1]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_saveReplayData_FUN_0051d250(CLodMesh *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_saveReplayData_FUN_0051d250(CLodMesh *this_ptr,_FILE *file_handle)

{
  CLodEdge *level;
  int iVar7;

  if (file_handle != (_FILE *)0x0) {
    iVar7 = 0;
    _fprintf(file_handle,"%d\n",this_ptr->lod_level_count);
    if (0 < this_ptr->lod_level_count) {
      do {
        level = this_ptr->lod_levels_ptr + iVar7;
        iVar7 = iVar7 + 1;
        _fprintf(file_handle,"%d,%d,%lg,%g\n",
                   level->vertex_idx_1,level->vertex_idx_2,
                   level->collapse_cost,(double)level->collapse_error);
      } while (iVar7 < this_ptr->lod_level_count);
      return;
    }
  }
  return;
}
