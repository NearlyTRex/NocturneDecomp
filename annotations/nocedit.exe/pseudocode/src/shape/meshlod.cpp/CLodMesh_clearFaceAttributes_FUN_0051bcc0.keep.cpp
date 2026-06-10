// Name: shape_meshlod.cpp_CLodMesh_clearFaceAttributes_FUN_0051bcc0
// Address: 0051bcc0
// MANUAL RECONSTRUCTION
// Address Range: [[0051bcc0, 0051bd21]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_clearFaceAttributes_FUN_0051bcc0(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_clearFaceAttributes_FUN_0051bcc0(CLodMesh *this_ptr)

{
  CLodFace *face;
  int i;
  int iVar4;

  this_ptr->lod_texture_count = 0;
  iVar4 = 0;
  if (0 < this_ptr->tri_count) {
    do {
      face = this_ptr->tri_data + iVar4;
      face->attribute_indices[0] = -1;
      for (i = 0; i < 3; i = i + 1) {
        face->uv_coords[i][0] = 0.0;
        face->uv_coords[i][1] = 0.0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < this_ptr->tri_count);
  }
  this_ptr->attribute_enabled_flags[0] = 0;
  return;
}
