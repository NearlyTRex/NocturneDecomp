// Name: shape_meshlod.cpp_CLodMesh_compactFaces_FUN_0051b570
// Address: 0051b570
// MANUAL RECONSTRUCTION
// Address Range: [[0051b570, 0051b6ee] [00604e5e, 00604e81] [0060a43c, 0060a49a]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_compactFaces_FUN_0051b570(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_compactFaces_FUN_0051b570(CLodMesh *this_ptr)

{
  int iVar3;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;

  local_1c = 0;
  for (iVar3 = 0; iVar3 < this_ptr->tri_count; iVar3 = iVar3 + 1) {
    if (this_ptr->tri_data[iVar3].processed_flag == 0) {
      this_ptr->tri_data[iVar3].processed_flag = local_1c;
      local_1c = local_1c + 1;
    }
    else {
      this_ptr->tri_data[iVar3].processed_flag = -1;
    }
  }
  local_20 = 0;
  local_18 = 0;
  for (local_14 = 0; local_14 < this_ptr->tri_count; local_14 = local_14 + 1) {
    if (-1 < this_ptr->tri_data[local_14].processed_flag) {
      if (local_20 < local_14) {
        this_ptr->tri_data[local_18] = this_ptr->tri_data[local_14];
      }
      local_20 = local_20 + 1;
      this_ptr->tri_data[local_18].processed_flag = 0;
      local_18 = local_18 + 1;
    }
  }
  this_ptr->tri_count = local_1c;
  return;
}
