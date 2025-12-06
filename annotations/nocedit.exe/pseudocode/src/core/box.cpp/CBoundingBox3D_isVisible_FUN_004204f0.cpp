// Name: core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
// Address: 004204f0
// Address Range: [[004204f0, 00420679]]
// Convention: __cdecl
// Signature: int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)

#include "nocturne.h"

int __cdecl core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D *this_ptr)

{
  int iVar1;
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  float unaff_retaddr;
  byte auStack_68 [44];
  CVector3i local_3c;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  CVector3f local_14;
  
  iVar1 = core_box_cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680(this_ptr);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar1 == 0) {
    local_24 = (this_ptr->min).x + (this_ptr->max).x;
    local_20 = (this_ptr->min).y + (this_ptr->max).y;
    local_30 = local_24 * 0.5f;
    local_1c = (this_ptr->min).z + (this_ptr->max).z;
    local_2c = local_20 * 0.5f;
    local_28 = local_1c * 0.5f;
    if (&local_14.z != &local_30) {
      local_14.z = local_30;
      unaff_ESI = local_2c;
      unaff_EBX = local_28;
    }
    local_18 = (float)g_StoredX * 0.00390625f;
    local_14.x = (float)g_StoredY * 0.00390625f;
    local_14.y = (float)g_StoredZ * 0.00390625f;
    local_3c.x = (int)ROUND(local_14.z * 256f);
    local_3c.y = (int)ROUND(unaff_ESI * 256f);
    local_3c.z = (int)ROUND(unaff_EBX * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)&stack0xffffff94,&local_3c);
    local_14.x = local_14.x + unaff_ESI;
    local_14.y = local_14.y + unaff_EBX;
    local_14.z = local_14.z + unaff_retaddr;
    if (g_CurrentSceneCamera == (CDemonCamera *)0x0) {
      g_PerspectiveReciprocal = (float)g_CurrentSceneCamera;
    }
    else {
      core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
                (&g_CDemonCameraInstance,&local_14,(float)auStack_68);
      if (65000 < (int)g_PerspectiveReciprocal) {
        return 0;
      }
    }
  }
  else {
    iVar1 = core_box_cpp_CBoundingBox3D_isVisibleWithShadow_FUN_00420320(this_ptr);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
