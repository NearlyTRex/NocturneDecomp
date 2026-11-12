// Name: core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20
// Address: 0053af20
// Address Range: [[0053af20, 0053af93]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20(CDemonSet *this_ptr)

{
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
            (DAT_005f2afc,(CVector3f *)&DAT_021221d4);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0046d090(DAT_005f2afc,_DAT_021221ec);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10
            (DAT_005f2afc,(CVector3f *)&DAT_021221e0);
  engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046d870(DAT_005f2afc,0);
  engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_0046d850(DAT_005f2afc,0);
  this_ptr->active_mirror = (CMirror *)0x0;
  return;
}
