// Name: shape_meshlod.cpp_CLodMesh_validateAndRemoveInvalidFaces_FUN_005197c0
// Address: 005197c0
// Address Range: [[005197c0, 00519821]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_validateAndRemoveInvalidFaces_FUN_005197c0(CLodMesh * this_ptr)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_validateAndRemoveInvalidFaces_FUN_005197c0(CLodMesh *this_ptr)

{
  CLodFace *face;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  if (0 < this_ptr->tri_count) {
    iVar2 = 0;
    do {
      face = (CLodFace *)((int)this_ptr->tri_data->attribute_indices + iVar2);
      if (face->processed_flag == 0) {
        iVar1 = shape_meshlod_cpp_CLodMesh_validateFace_FUN_00519830(this_ptr,face);
        if (iVar1 == 0) {
          iVar3 = iVar3 + 1;
        }
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x8c;
    } while (iVar4 < this_ptr->tri_count);
  }
  if (iVar3 < 1) {
    return;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"WARNING - encountered %d invalid faces, which were deleted!",iVar3);
  return;
}
