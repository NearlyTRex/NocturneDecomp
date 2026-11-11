// Name: core_set.cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_0053ad70
// Address: 0053ad70
// Address Range: [[0053ad70, 0053ade9]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_0053ad70(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim,int count)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_0053ad70(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim,int count)

{
  int iVar1;
  
  if (g_CGamePtr->suppress_set_geometry == 0) {
    if (DAT_005f2afc->advanced_culling_enabled == 0) {
      iVar1 = 0;
      if (0 < count) {
        do {
          iVar1 = iVar1 + 1;
          engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0
                    (DAT_005f2afc,(SMRGLPrimitivePoly *)prim);
          prim = (SMRGLHeaderPrimitive *)(((SMRGLPrimitivePoly *)prim)->vertices + 4);
        } while (iVar1 < count);
        return;
      }
    }
    else {
      iVar1 = 0;
      if (0 < count) {
        do {
          iVar1 = iVar1 + 1;
          core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_004f53f0(this_ptr->active_mirror,prim)
          ;
          prim = prim + 3;
        } while (iVar1 < count);
      }
    }
  }
  return;
}
