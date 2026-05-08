// Name: core_dcamera.cpp_CDemonCamera_computeLightExtentBounds_FUN_00451090
// Address: 00451090
// MANUAL RECONSTRUCTION
// Address Range: [[00451090, 00451122] [006048a1, 006048c3]]
// Convention: __stack2_esi
// Signature: CRect * __stack2_esi core_dcamera_cpp_CDemonCamera_computeLightExtentBounds_FUN_00451090(CDemonCamera *this_ptr,CDemonLight *light,CRect *out_bounds)

#include "nocturne.h"

CRect * __stack2_esi core_dcamera_cpp_CDemonCamera_computeLightExtentBounds_FUN_00451090(CDemonCamera *this_ptr,CDemonLight *light,CRect *out_bounds)

{
  int iVar1;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  local_18 = 0;
  local_14 = 9999;
  local_10 = 0;
  local_1c = 9999;
  for (iVar1 = 0; iVar1 < this_ptr->display_height; iVar1 = iVar1 + 1) {
    if ((uint)light->left_extent[iVar1] <= (uint)light->right_extent[iVar1]) {
      if (iVar1 < local_14) {
        local_14 = iVar1;
      }
      if (local_10 < iVar1) {
        local_10 = iVar1;
      }
      if ((uint)light->left_extent[iVar1] < local_1c) {
        local_1c = light->left_extent[iVar1];
      }
      if (local_18 < (uint)light->right_extent[iVar1]) {
        local_18 = light->right_extent[iVar1];
      }
    }
  }
  out_bounds->x_min = local_1c;
  out_bounds->x_max = local_18;
  out_bounds->y_min = local_14;
  out_bounds->y_max = local_10;
  return out_bounds;
}
