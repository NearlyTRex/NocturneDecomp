// Name: core_dcamera.cpp_CDemonCamera_computeLightExtentBounds_FUN_00451090
// Address: 00451090
// Address Range: [[00451090, 00451122]]
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
  
  iVar1 = 0;
  local_18 = 0;
  local_14 = 9999;
  local_10 = 0;
  local_1c = 9999;
  if (0 < this_ptr->display_height) {
    do {
      if ((uint)light->left_extent[0] <= (uint)light->right_extent[0]) {
        if (iVar1 < local_14) {
          local_14 = iVar1;
        }
        if (local_10 < iVar1) {
          local_10 = iVar1;
        }
        if ((uint)light->left_extent[0] < local_1c) {
          local_1c = light->left_extent[0];
        }
        if (local_18 < (uint)light->right_extent[0]) {
          local_18 = light->right_extent[0];
        }
      }
      iVar1 = iVar1 + 1;
      light = (CDemonLight *)&(light->base).base.position;
    } while (iVar1 < this_ptr->display_height);
  }
  out_bounds->left = local_1c;
  out_bounds->top = local_18;
  out_bounds->right = local_14;
  out_bounds->bottom = local_10;
  return out_bounds;
}
