// Name: core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0
// Address: 005342e0
// Address Range: [[005342e0, 00534353]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(CDemonSet *this_ptr)

{
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0
            (DAT_0060b280,(CVector3f *)&DAT_020935f8);
  engine_matrix_c_FUN_0046b4b0(DAT_0060b280,_DAT_02093610);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030
            (DAT_0060b280,(CVector3f *)&DAT_02093604);
  engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046bc90(DAT_0060b280,0);
  engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_0046bc70(DAT_0060b280,0);
  this_ptr->active_mirror = (CMirror *)0x0;
  return;
}
