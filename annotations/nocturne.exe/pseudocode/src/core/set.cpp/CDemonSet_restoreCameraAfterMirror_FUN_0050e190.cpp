// Name: core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190
// Address: 0050e190
// Address Range: [[0050e190, 0050e203]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(CDemonSet *this_ptr)

{
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
            (g_CDemonRenderer_PTR_005ae704,(CVector3f *)&DAT_020842b4);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
            (g_CDemonRenderer_PTR_005ae704,_DAT_020842cc);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00460780
            (g_CDemonRenderer_PTR_005ae704,(CVector3f *)&DAT_020842c0);
  engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_004613c0
            (g_CDemonRenderer_PTR_005ae704,0);
  engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_004613a0(g_CDemonRenderer_PTR_005ae704,0);
  this_ptr->active_mirror = (CMirror *)0x0;
  return;
}
