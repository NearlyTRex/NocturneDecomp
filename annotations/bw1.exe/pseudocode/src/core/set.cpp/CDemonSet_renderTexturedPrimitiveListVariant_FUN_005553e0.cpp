// Name: core_set.cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_005553e0
// Address: 005553e0
// Address Range: [[005553e0, 00555459]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_005553e0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim,int count)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_005553e0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim,int count)

{
  int iVar1;
  
  if (*(int *)&g_CGamePtr->field_0x20c == 0) {
    if (DAT_00612560->advanced_culling_enabled == 0) {
      iVar1 = 0;
      if (0 < count) {
        do {
          iVar1 = iVar1 + 1;
          engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00
                    (DAT_00612560,(SMRGLPrimitivePoly *)prim);
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
          core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_00519c20(this_ptr->active_mirror,prim)
          ;
          prim = prim + 3;
        } while (iVar1 < count);
      }
    }
  }
  return;
}
