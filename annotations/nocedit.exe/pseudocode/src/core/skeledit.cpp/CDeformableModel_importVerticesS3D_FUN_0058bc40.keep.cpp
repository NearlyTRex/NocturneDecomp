// Name: core_skeledit.cpp_CDeformableModel_importVerticesS3D_FUN_0058bc40
// Address: 0058bc40
// MANUAL RECONSTRUCTION
// Address Range: [[0058bc40, 0058bcf0]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_CDeformableModel_importVerticesS3D_FUN_0058bc40(CDeformableModel *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_skeledit_cpp_CDeformableModel_importVerticesS3D_FUN_0058bc40(CDeformableModel *this_ptr,_FILE *file_handle)

{
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar1;
  float local_1c;
  float local_18;
  float local_14;
  SVert *pSVar1;
  
  iVar4 = 1;
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  iVar1 = 0;
  if (0 < this_ptr->vertex_count[0]) {
    do {
      iVar3 = _fscanf(file_handle,"%f,%f,%f\n",&local_1c,&local_18,&local_14);
      if (iVar3 != 3) {
        return 0;
      }
      pSVar1 = &this_ptr->vertex_data_ptr[0][iVar1];
      pSVar1->num_bone_influences = 1;
      pSVar1->position.x = local_1c;
      pSVar1->position.y = local_18;
      pSVar1->bone_indices[0] = '\0';
      pSVar1->bone_weights[0] = 1.0f;
      pSVar1->position.z = local_14;
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->vertex_count[0]);
  }
  return 1;
}
