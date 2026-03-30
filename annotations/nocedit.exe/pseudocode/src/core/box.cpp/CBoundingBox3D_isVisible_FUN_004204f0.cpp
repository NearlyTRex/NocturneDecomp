// Name: core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
// Address: 004204f0
// Address Range: [[004204f0, 00420679]]
// Convention: __cdecl
// Signature: int __cdecl core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D *this_ptr)

#include "nocturne.h"

int __cdecl core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D *this_ptr)

{
  int iVar1;
  int iVar2;
  SProjectedVertex local_74 [2];
  CVector3i local_44;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  CVector3f local_20;
  float local_14;
  float local_10;
  float local_c;
  
  iVar1 = core_box_cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680(this_ptr);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar2 == 0) {
    local_2c = (this_ptr->min).x + (this_ptr->max).x;
    local_28 = (this_ptr->min).y + (this_ptr->max).y;
    local_38 = local_2c * 0.5f;
    local_24 = (this_ptr->min).z + (this_ptr->max).z;
    local_34 = local_28 * 0.5f;
    local_30 = local_24 * 0.5f;
    if (&local_14 != &local_38) {
      local_14 = local_38;
      local_10 = local_34;
      local_c = local_30;
    }
    local_20.x = (float)g_StoredX * 0.00390625f;
    local_20.y = (float)g_StoredY * 0.00390625f;
    local_20.z = (float)g_StoredZ * 0.00390625f;
    local_44.x = (int)ROUND(local_14 * 256.0f);
    local_44.y = (int)ROUND(local_10 * 256.0f);
    local_44.z = (int)ROUND(local_c * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c(local_74,&local_44);
    local_20.x = local_20.x + local_14;
    local_20.y = local_20.y + local_10;
    local_20.z = local_20.z + local_c;
    if (g_CurrentSceneCamera == (CDemonCamera *)0x0) {
      g_PerspectiveReciprocal = (int)g_CurrentSceneCamera;
    }
    else {
      core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
                (&g_CDemonCameraInstance,&local_20,local_74);
      if (65000 < g_PerspectiveReciprocal) {
        return 0;
      }
    }
  }
  else {
    iVar2 = core_box_cpp_CBoundingBox3D_isVisibleWithShadow_FUN_00420320(this_ptr);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}
