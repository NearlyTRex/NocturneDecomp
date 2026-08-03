// Name: core_dcamera.cpp_CDemonCamera_computeLightExtentBounds_FUN_00444ef0
// Address: 00444ef0
// Address Range: [[00444ef0, 00444f82]]
// Convention: __stack2_esi
// Signature: CRect * __stack2_esi core_dcamera_cpp_CDemonCamera_computeLightExtentBounds_FUN_00444ef0(CDemonCamera *this_ptr,CDemonLight *light,CRect *out_bounds)

#include "nocturne.h"

CRect * __stack2_esi core_dcamera_cpp_CDemonCamera_computeLightExtentBounds_FUN_00444ef0(CDemonCamera *this_ptr,CDemonLight *light,CRect *out_bounds)

{
  int iVar1;
  uint uStack_1c;
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  
  iVar1 = 0;
  uStack_18 = 0;
  iStack_14 = 9999;
  iStack_10 = 0;
  uStack_1c = 9999;
  if (0 < this_ptr->display_height) {
    do {
      if ((uint)light->left_extent[0] <= (uint)light->right_extent[0]) {
        if (iVar1 < iStack_14) {
          iStack_14 = iVar1;
        }
        if (iStack_10 < iVar1) {
          iStack_10 = iVar1;
        }
        if ((uint)light->left_extent[0] < uStack_1c) {
          uStack_1c = light->left_extent[0];
        }
        if (uStack_18 < (uint)light->right_extent[0]) {
          uStack_18 = light->right_extent[0];
        }
      }
      iVar1 = iVar1 + 1;
      light = (CDemonLight *)((light->base).camera_name + 4);
    } while (iVar1 < this_ptr->display_height);
  }
  out_bounds->x_min = uStack_1c;
  out_bounds->x_max = uStack_18;
  out_bounds->y_min = iStack_14;
  out_bounds->y_max = iStack_10;
  return out_bounds;
}
