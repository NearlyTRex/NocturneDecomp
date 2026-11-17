// Name: core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0
// Address: 005342e0
// Address Range: [[005342e0, 00534353]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(CDemonSet *this_ptr)

{
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0
            (g_CDemonRenderer_PTR_0060b280,&g_UVector3_020935f8.f);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0046b4b0
            (g_CDemonRenderer_PTR_0060b280,g_SavedProjectionFactor);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030
            (g_CDemonRenderer_PTR_0060b280,&g_CVector3f_02093604);
  engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046bc90
            (g_CDemonRenderer_PTR_0060b280,0);
  engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_0046bc70(g_CDemonRenderer_PTR_0060b280,0);
  this_ptr->active_mirror = (CMirror *)0x0;
  return;
}
