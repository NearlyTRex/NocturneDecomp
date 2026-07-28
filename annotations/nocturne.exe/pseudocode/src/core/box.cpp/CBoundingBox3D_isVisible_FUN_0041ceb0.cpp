// Name: core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
// Address: 0041ceb0
// Address Range: [[0041ceb0, 0041d049]]
// Convention: __cdecl
// Signature: int __cdecl core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D *this_ptr)

{
  int iVar1;
  int in_stack_00000008;
  SProjectedVertex local_74 [2];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  CVector3i local_2c;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  iVar1 = core_box_cpp_FUN_0041d050(this_ptr);
  if ((iVar1 == -1) || (iVar1 == 0)) {
    return 0;
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar1 == 0) {
    local_44 = (this_ptr->min).x + (this_ptr->max).x;
    local_40 = (this_ptr->min).y + (this_ptr->max).y;
    local_38 = local_44 * 0.5f;
    local_3c = (this_ptr->min).z + (this_ptr->max).z;
    local_34 = local_40 * 0.5f;
    local_30 = local_3c * 0.5f;
    if (&local_20 != &local_38) {
      local_20 = local_38;
      local_1c = local_34;
      local_18 = local_30;
    }
    local_14 = (float)DAT_006b028c * _DAT_0059aa88;
    local_10 = (float)DAT_006b0290 * _DAT_0059aa88;
    local_c = (float)DAT_006b0294 * _DAT_0059aa88;
    local_2c.x = (int)ROUND(local_20 * _DAT_0059aa80);
    local_2c.y = (int)ROUND(local_1c * _DAT_0059aa80);
    local_2c.z = (int)ROUND(local_18 * _DAT_0059aa80);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c(local_74,&local_2c);
    local_14 = local_14 + local_20;
    local_10 = local_10 + local_1c;
    local_c = local_c + local_18;
    if (_DAT_007f7370 == 0) {
      _DAT_01c038f4 = _DAT_007f7370;
    }
    else {
      core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
                (0x1fb8508,&local_14,local_74);
      if (65000 < _DAT_01c038f4) {
        return 0;
      }
    }
  }
  else if ((in_stack_00000008 == 0) &&
          (iVar1 = core_box_cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041cce0(this_ptr),
          iVar1 == 0)) {
    return 0;
  }
  return 1;
}
