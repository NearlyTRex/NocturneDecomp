// Name: core_set.cpp_CDemonSet_setupMirrorRendering_FUN_0050e080
// Address: 0050e080
// Address Range: [[0050e080, 0050e18a]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setupMirrorRendering_FUN_0050e080(CDemonSet *this_ptr,int mirror_index,int enable_flag)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setupMirrorRendering_FUN_0050e080(CDemonSet *this_ptr,int mirror_index,int enable_flag)

{
  CVector3f *pCVar1;
  CVector3f CStack_2c;
  CVector3f local_20;
  float local_14;
  
  pCVar1 = engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
                     (g_CDemonRenderer_PTR_005ae704,&local_20);
  if (pCVar1 != &g_SavedCameraOrigin) {
    g_SavedCameraOrigin.x = pCVar1->x;
    g_SavedCameraOrigin.z = pCVar1->z;
    g_SavedCameraOrigin.y = pCVar1->y;
  }
  pCVar1 = engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
                     (g_CDemonRenderer_PTR_005ae704,&CStack_2c);
  if (pCVar1 != &g_SavedCameraRotation) {
    g_SavedCameraRotation.x = pCVar1->x;
    g_SavedCameraRotation.z = pCVar1->z;
    g_SavedCameraRotation.y = pCVar1->y;
  }
  g_SavedProjectionFactor =
       engine_drender_cpp_CDemonRenderer_calculateProjectionFactor_FUN_00460e20
                 (g_CDemonRenderer_PTR_005ae704);
  local_14 = g_SavedProjectionFactor;
  core_mirror_cpp_CMirrorReflection_setupMirrorReflection_FUN_004d6650
            (&(this_ptr->mirror_glass_actors[mirror_index]->mirror).reflection,&g_SavedCameraOrigin,
             &g_SavedCameraRotation,g_SavedProjectionFactor);
  engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_004613c0
            (g_CDemonRenderer_PTR_005ae704,1);
  core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_004477f0
            (g_CurrentSceneCamera,mirror_index + 1);
  engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_004613a0
            (g_CDemonRenderer_PTR_005ae704,mirror_index + 1);
  this_ptr->active_mirror = &this_ptr->mirror_glass_actors[mirror_index]->mirror;
  return;
}
