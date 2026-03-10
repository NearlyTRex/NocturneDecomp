// Name: core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
// Address: 005709e0
// Address Range: [[005709e0, 00570aea]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(CDemonSet *this_ptr,int mirror_index,int enable_flag)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(CDemonSet *this_ptr,int mirror_index,int enable_flag)

{
  UVector3 *pUVar1;
  CVector3f *pCVar2;
  float afStack_2c [3];
  float local_20 [3];
  float local_14;
  
  pUVar1 = (UVector3 *)
           engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                     (g_CDemonRendererPtr2,local_20);
  if (pUVar1 != &g_SavedCameraOrigin) {
    g_SavedCameraOrigin.f.x = (pUVar1->f).x;
    g_SavedCameraOrigin.f.z = *(float *)((int)pUVar1 + 8);
    g_SavedCameraOrigin.f.y = *(float *)((int)pUVar1 + 4);
  }
  pCVar2 = (CVector3f *)
           engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
                     (g_CDemonRendererPtr2,afStack_2c);
  if (pCVar2 != &g_SavedCameraRotation) {
    g_SavedCameraRotation.x = pCVar2->x;
    g_SavedCameraRotation.z = pCVar2->z;
    g_SavedCameraRotation.y = pCVar2->y;
  }
  g_SavedProjectionFactor =
       engine_drender_cpp_CDemonRenderer_calculateProjectionFactor_FUN_0048c870
                 (g_CDemonRendererPtr2);
  local_14 = g_SavedProjectionFactor;
  core_mirror_cpp_CMirrorReflection_setupMirrorReflection_FUN_005214c0
            (&(this_ptr->mirror_glass_actors[mirror_index]->mirror).reflection,
             &g_SavedCameraOrigin.f,&g_SavedCameraRotation,g_SavedProjectionFactor);
  engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10(g_CDemonRendererPtr2,1);
  (*((g_CurrentSceneCamera->base).vtable)->saveAlphaTransform)
            (g_CurrentSceneCamera,mirror_index + 1);
  engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_0048cdf0(g_CDemonRendererPtr2,mirror_index + 1)
  ;
  this_ptr->active_mirror = &this_ptr->mirror_glass_actors[mirror_index]->mirror;
  return;
}
