// Name: core_set.cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_00534130
// Address: 00534130
// Address Range: [[00534130, 005341a9]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_00534130(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim,int count)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_00534130(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim,int count)

{
  int iVar1;
  
  if (g_CGamePtr->suppress_set_geometry == 0) {
    if (DAT_0060b280->advanced_culling_enabled == 0) {
      iVar1 = 0;
      if (0 < count) {
        do {
          iVar1 = iVar1 + 1;
          engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0
                    (DAT_0060b280,(SMRGLPrimitivePoly *)prim);
          prim = prim + 3;
        } while (iVar1 < count);
        return;
      }
    }
    else {
      iVar1 = 0;
      if (0 < count) {
        do {
          iVar1 = iVar1 + 1;
          core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_004facd0(this_ptr->active_mirror,prim)
          ;
          prim = prim + 3;
        } while (iVar1 < count);
      }
    }
  }
  return;
}
