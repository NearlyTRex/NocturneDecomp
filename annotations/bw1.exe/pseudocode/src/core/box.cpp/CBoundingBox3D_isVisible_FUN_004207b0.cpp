// Name: core_box.cpp_CBoundingBox3D_isVisible_FUN_004207b0
// Address: 004207b0
// Address Range: [[004207b0, 00420986]]
// Convention: __cdecl
// Signature: int __cdecl core_box_cpp_CBoundingBox3D_isVisible_FUN_004207b0(CBoundingBox3D *this_ptr,int skip_shadow_test)

#include "nocturne.h"

int __cdecl core_box_cpp_CBoundingBox3D_isVisible_FUN_004207b0(CBoundingBox3D *this_ptr,int skip_shadow_test)

{
  int iVar1;
  byte bVar2;
  float afStackY_103c [1000];
  SProjectedVertex local_90 [2];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50 [2];
  CVector3i local_48;
  float local_3c;
  float local_38 [2];
  CVector3f local_30;
  float local_24;
  float local_20 [4];
  float local_10;
  
  bVar2 = 0;
  iVar1 = core_box_cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420990(this_ptr);
  if ((iVar1 == -1) || (iVar1 == 0)) {
    return 0;
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(g_CDemonRenderer_PTR_00612560)
  ;
  if (iVar1 == 0) {
    local_54 = (this_ptr->min).x + (this_ptr->max).x;
    local_50[0] = (this_ptr->min).y + (this_ptr->max).y;
    local_50[1] = (this_ptr->min).z + (this_ptr->max).z;
    local_20[2] = local_54;
    local_20[(uint)bVar2 * -2 + 3] = local_50[(uint)bVar2 * -2];
    local_20[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
         local_50[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    local_3c = local_20[2] * 0.5f;
    local_38[0] = local_20[3] * 0.5f;
    local_38[1] = local_10 * 0.5f;
    local_24 = local_20[2] * 0.5f;
    local_20[(uint)bVar2 * -2] = local_38[(uint)bVar2 * -2];
    local_20[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         local_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    if (&local_60 != &local_24) {
      local_60 = local_24;
      local_5c = local_20[0];
      local_58 = local_20[1];
    }
    local_30.x = (float)g_INT_00713a88 * 0.00390625f;
    local_30.y = (float)g_INT_00713a8c * 0.00390625f;
    local_30.z = (float)g_INT_00713a90 * 0.00390625f;
    local_48.x = (int)ROUND(local_60 * 256.0f);
    local_48.y = (int)ROUND(local_5c * 256.0f);
    local_48.z = (int)ROUND(local_58 * 256.0f);
    engine_special_cpp_transformAndProjectPoint_FUN_00580173(local_90,&local_48);
    local_30.x = local_30.x + local_60;
    local_30.y = local_30.y + local_5c;
    local_30.z = local_30.z + local_58;
    if (g_CDemonCamera_PTR_007c6120 == (CDemonCamera *)0x0) {
      g_INT_01c51cac = (int)g_CDemonCamera_PTR_007c6120;
    }
    else {
      core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00454430
                (&g_CDemonCameraInstance,&local_30,local_90);
      if (65000 < g_INT_01c51cac) {
        return 0;
      }
    }
  }
  else if ((skip_shadow_test == 0) &&
          (iVar1 = core_box_cpp_CBoundingBox3D_isVisibleWithShadow_FUN_004205e0(this_ptr),
          iVar1 == 0)) {
    return 0;
  }
  return 1;
}
