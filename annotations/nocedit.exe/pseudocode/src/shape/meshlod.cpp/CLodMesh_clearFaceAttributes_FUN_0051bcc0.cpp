// Name: shape_meshlod.cpp_CLodMesh_clearFaceAttributes_FUN_0051bcc0
// Address: 0051bcc0
// Address Range: [[0051bcc0, 0051bd21]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_clearFaceAttributes_FUN_0051bcc0(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_clearFaceAttributes_FUN_0051bcc0(CLodMesh *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  this_ptr->submesh_count = 0;
  iVar4 = 0;
  if (0 < this_ptr->tri_count) {
    iVar3 = 0;
    do {
      *(uint *)((int)this_ptr->tri_data->attribute_indices + iVar3) = 0xffffffff;
      iVar1 = 0;
      do {
        *(uint *)((int)this_ptr->tri_data->uv_coords[0] + iVar1 + iVar3) = 0;
        iVar2 = iVar1 + 8;
        *(uint *)((int)this_ptr->tri_data->uv_coords[0] + iVar3 + iVar1 + 4) = 0;
        iVar1 = iVar2;
      } while (iVar2 != 0x18);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x8c;
    } while (iVar4 < this_ptr->tri_count);
  }
  this_ptr->attribute_enabled_flags[0] = 0;
  return;
}
