// Name: core_skeledit.cpp_CDeformableModel_sortFacesByTexture_FUN_0058e240
// Address: 0058e240
// MANUAL RECONSTRUCTION
// Address Range: [[0058e240, 0058e3d2] [00608b27, 00608b6c] [0060ca22, 0060ca60]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_sortFacesByTexture_FUN_0058e240(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_sortFacesByTexture_FUN_0058e240(CDeformableModel *this_ptr)

{
  SInputFace tmp;
  int *piVar1;
  int iVar3;
  int iVar8;
  int iVar9;
  int iVar7;
  int local_34;
  int local_24;
  int local_20;

  local_34 = 0;
  if (0 < this_ptr->num_lods) {
    do {
      local_24 = 0;
      local_20 = 0;
      if (0 < this_ptr->num_parts) {
        do {
          iVar8 = local_20 + this_ptr->parts[local_24].tri_counts[local_34];
          for (iVar9 = iVar8 + -2; local_20 <= iVar9; iVar9 = iVar9 + -1) {
            for (iVar7 = local_20; iVar7 <= iVar9; iVar7 = iVar7 + 1) {
              piVar1 = &this_ptr->index_data_ptr[local_34][iVar7];
              if (piVar1[1] < *piVar1) {
                iVar3 = *piVar1;
                *piVar1 = piVar1[1];
                piVar1[1] = iVar3;
                tmp = this_ptr->tri_data_ptr[local_34][iVar7];
                this_ptr->tri_data_ptr[local_34][iVar7] =
                     this_ptr->tri_data_ptr[local_34][iVar7 + 1];
                this_ptr->tri_data_ptr[local_34][iVar7 + 1] = tmp;
              }
            }
          }
          local_24 = local_24 + 1;
          local_20 = iVar8;
        } while (local_24 < this_ptr->num_parts);
      }
      local_34 = local_34 + 1;
    } while (local_34 < this_ptr->num_lods);
  }
  return;
}
