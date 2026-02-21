// Name: core_skeledit.cpp_CDeformableModel_FUN_0058bc40
// Address: 0058bc40
// Address Range: [[0058bc40, 0058bcf0]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_CDeformableModel_FUN_0058bc40(CDeformableModel *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_skeledit_cpp_CDeformableModel_FUN_0058bc40(CDeformableModel *this_ptr,_FILE *file_handle)

{
  SVert *pSVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  __STK();
  iVar4 = 1;
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  iVar4 = 0;
  if (0 < this_ptr->vertex_count[0]) {
    iVar2 = 0;
    do {
      iVar3 = _fscanf(file_handle,"%f,%f,%f\n",&local_1c,&local_18,&local_14);
      if (iVar3 != 3) {
        return 0;
      }
      pSVar1 = this_ptr->vertex_data_ptr[0];
      pSVar1->bone_indices[iVar2 + -1] = '\x01';
      *(uint *)((int)pSVar1->bone_weights + iVar2 + 0xc) = local_1c;
      *(uint *)((int)pSVar1->bone_weights + iVar2 + 0x10) = local_18;
      pSVar1->bone_indices[iVar2] = '\0';
      *(uint *)((int)pSVar1->bone_weights + iVar2) = 0x3f800000;
      *(uint *)((int)pSVar1->bone_weights + iVar2 + 0x14) = local_14;
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x34;
    } while (iVar4 < this_ptr->vertex_count[0]);
  }
  return 1;
}
