// Name: core_skeledit.cpp_CDeformableModel_importFacesS3D_FUN_0058b9b0
// Address: 0058b9b0
// MANUAL RECONSTRUCTION
// Address Range: [[0058b9b0, 0058bc30]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_CDeformableModel_importFacesS3D_FUN_0058b9b0(CDeformableModel *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_skeledit_cpp_CDeformableModel_importFacesS3D_FUN_0058b9b0(CDeformableModel *this_ptr,_FILE *file_handle)

{
  int iVar2;
  int iVar3;
  int iVar1;
  int iVar5;
  int iVar7;
  float vert_v [3];
  float vert_u [3];
  int vert_idx [3];
  double local_30;
  int local_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  int local_14;
  SInputFace *pSVar1;
  
  iVar5 = 1;
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
  iVar7 = 0;
  if (0 < this_ptr->tri_count[0]) {
    do {
      iVar3 = _fscanf(file_handle,"%d,%d,%f,%f,%d,%f,%f,%d,%f,%f\n",&local_28,&vert_idx[0],&vert_u[0],
                         &vert_v[0],&vert_idx[1],&vert_u[1],&vert_v[1],&vert_idx[2],&vert_u[2],&vert_v[2]);
      if (iVar3 != 10) {
        return 0;
      }
      local_24 = vert_u[0];
      local_1c = 4.0;
      iVar1 = 0;
      local_18 = vert_v[0];
      do {
        if (vert_u[iVar1] < local_24) {
          local_24 = vert_u[iVar1];
        }
        if (vert_v[iVar1] < local_18) {
          local_18 = vert_v[iVar1];
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 3);
      local_30 = floor((double)((local_24 + 4.0) * (float)0.00390625));
      local_24 = (float)((float10)local_30 * (float10)256);
      local_30 = floor
                           ((double)((local_18 + local_1c) * (float)0.00390625));
      local_18 = (float)((float10)local_30 * (float10)256);
      if (local_28 < 0) {
        local_28 = 0;
      }
      if (this_ptr->num_textures <= local_28) {
        local_28 = 0;
      }
      pSVar1 = &this_ptr->tri_data_ptr[0][iVar7];
      this_ptr->index_data_ptr[0][iVar7] = local_28;
      iVar1 = 0;
      do {
        (&pSVar1->vertex_indices.vertex_index_0)[iVar1] = (ushort)vert_idx[iVar1];
        local_20 = (int)ROUND(ROUND((vert_u[iVar1] - local_24) *
                                    (float)256));
        local_14 = (int)ROUND(ROUND((vert_v[iVar1] - local_18) *
                                    (float)256));
        if (local_20 < 0) {
          local_20 = 0;
        }
        else if (0xffff < local_20) {
          local_20 = 0xffff;
        }
        if (local_14 < 0) {
          local_14 = 0;
        }
        else if (0xffff < local_14) {
          local_14 = 0xffff;
        }
        (&pSVar1->u_coord_0)[iVar1] = (ushort)local_20;
        (&pSVar1->v_coord_0)[iVar1] = (ushort)local_14;
        iVar1 = iVar1 + 1;
      } while (iVar1 != 3);
      iVar7 = iVar7 + 1;
    } while (iVar7 < this_ptr->tri_count[0]);
  }
  core_skeledit_cpp_CDeformableModel_removeDuplicateFaces_FUN_0058ede0(this_ptr);
  return 1;
}
