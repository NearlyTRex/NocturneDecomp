// Name: shape_meshlod.cpp_CLodMesh_gridSave_FUN_0051d420
// Address: 0051d420
// Address Range: [[0051d420, 0051d490]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_gridSave_FUN_0051d420(CLodMesh *this_ptr,FILE *file_handle)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_gridSave_FUN_0051d420(CLodMesh *this_ptr,FILE *file_handle)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  if (file_handle != (FILE *)0x0) {
    iVar2 = 0;
    crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",0x10);
    do {
      puVar1 = (uint *)((int)this_ptr->spatial_grid_ptr->cell_start_indices[0][0] + iVar2);
      iVar2 = iVar2 + 4;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",*puVar1);
    } while (iVar2 != 0x4004);
    iVar3 = 0;
    for (iVar2 = 0; iVar2 < this_ptr->spatial_grid_ptr->triangle_count; iVar2 = iVar2 + 1) {
      puVar1 = (uint *)(iVar3 + (int)this_ptr->spatial_grid_data);
      iVar3 = iVar3 + 4;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",*puVar1);
    }
  }
  return;
}
