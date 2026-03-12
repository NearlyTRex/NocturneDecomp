// Name: core_skeledit.cpp_CDeformableModel_importVerticesS3D_FUN_0058bc40
// Address: 0058bc40
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
  int iVar5;
  uint local_1c;
  uint local_18;
  uint local_14;
  SVert *pSVar1;
  
  __STK();
  iVar4 = 1;
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  iVar1 = 0;
  if (0 < this_ptr->vertex_count[0]) {
    iVar5 = 0;
    do {
      iVar3 = _fscanf(file_handle,"%f,%f,%f\n",&local_1c,&local_18,&local_14);
      if (iVar3 != 3) {
        return 0;
      }
      pSVar1 = this_ptr->vertex_data_ptr[0];
      pSVar1->bone_indices[iVar5 + -1] = '\x01';
      *(uint *)((int)pSVar1->bone_weights + iVar5 + 0xc) = local_1c;
      *(uint *)((int)pSVar1->bone_weights + iVar5 + 0x10) = local_18;
      pSVar1->bone_indices[iVar5] = '\0';
      *(uint *)((int)pSVar1->bone_weights + iVar5) = 0x3f800000;
      *(uint *)((int)pSVar1->bone_weights + iVar5 + 0x14) = local_14;
      iVar1 = iVar1 + 1;
      iVar5 = iVar5 + 0x34;
    } while (iVar1 < this_ptr->vertex_count[0]);
  }
  return 1;
}
