// Name: core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590
// Address: 00555590
// Address Range: [[00555590, 00555603]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590(CDemonSet *this_ptr)

{
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
            (g_CDemonRenderer_PTR_00612560,&g_UVector3_020af5ac.f);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_004839b0
            (g_CDemonRenderer_PTR_00612560,g_FLOAT_020af5c4);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00483530
            (g_CDemonRenderer_PTR_00612560,&g_CVector3f_020af5b8);
  engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_00484190
            (g_CDemonRenderer_PTR_00612560,0);
  engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_00484170(g_CDemonRenderer_PTR_00612560,0);
  this_ptr->active_mirror = (CMirror *)0x0;
  return;
}
