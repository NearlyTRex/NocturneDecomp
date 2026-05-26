// Name: shape_meshlod.cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30
// Address: 0051bd30
// MANUAL RECONSTRUCTION
// Address Range: [[0051bd30, 0051c068] [00608a48, 00608ab3] [00609cb0, 00609dd0] [03fc59b6, 03fc59f0]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(CLodMesh *this_ptr,int attribute_index)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(CLodMesh *this_ptr,int attribute_index)

{
  int iVar2;
  int i;
  CLodFace *faceA;
  CLodFace *faceB;
  CLodFace tmp;
  byte bVar6;
  
  bVar6 = 0;
  iVar2 = this_ptr->tri_count;
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    if (0 < iVar2) {
      for (i = 0; i < iVar2; i = i + 1) {
        faceA = this_ptr->tri_data + i;
        faceB = this_ptr->tri_data + i + 1;
        if (faceB->attribute_indices[attribute_index] < faceA->attribute_indices[attribute_index]) {
          tmp = *faceA;
          *faceA = *faceB;
          *faceB = tmp;
        }
      }
    }
  }
  return;
}
