// Name: shape_meshlod.cpp_CLodMesh_gridSave_FUN_0051d420
// Address: 0051d420
// MANUAL RECONSTRUCTION
// Address Range: [[0051d420, 0051d490]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_gridSave_FUN_0051d420(CLodMesh *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_gridSave_FUN_0051d420(CLodMesh *this_ptr,_FILE *file_handle)

{
  int *puVar1;
  int iVar2;

  if (file_handle != (_FILE *)0x0) {
    _fprintf(file_handle,"%d\n",0x10);
    puVar1 = this_ptr->spatial_grid_ptr->cell_start_indices[0][0];
    for (iVar2 = 0; iVar2 < 0x1001; iVar2 = iVar2 + 1) {
      _fprintf(file_handle,"%d\n",*puVar1);
      puVar1 = puVar1 + 1;
    }
    for (iVar2 = 0; iVar2 < this_ptr->spatial_grid_ptr->triangle_count; iVar2 = iVar2 + 1) {
      _fprintf(file_handle,"%d\n",this_ptr->spatial_grid_data[iVar2]);
    }
  }
  return;
}
