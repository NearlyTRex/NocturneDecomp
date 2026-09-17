// Name: core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0
// Address: 00570af0
// MANUAL RECONSTRUCTION
// Address Range: [[00570af0, 00570b63]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0(CDemonSet *this_ptr)

{
#if NOCTURNE_AUTHENTIC_MIRROR_PROJECTION
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr2,&g_SavedCameraOrigin.f);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
            (g_CDemonRendererPtr2,g_SavedProjectionFactor);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
            (g_CDemonRendererPtr2,&g_SavedCameraRotation);
#else
  engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_0048dcc0
            (g_CDemonRendererPtr2,&g_MirrorSceneCameraState);
#endif
  engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_0048cdf0(g_CDemonRendererPtr2,0);
  this_ptr->active_mirror = (CMirror *)0x0;
  return;
}
