// Name: core_set.cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_0050dfe0
// Address: 0050dfe0
// Address Range: [[0050dfe0, 0050e075]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_0050dfe0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim,int count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_0050dfe0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim,int count)

{
  int iVar1;
  
  if (*(int *)(0x01C775EC + 0x1f0) == 0) {
    if (DAT_005ae704->advanced_culling_enabled == 0) {
      iVar1 = 0;
      if (0 < count) {
        do {
          iVar1 = iVar1 + 1;
          engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0
                    (DAT_005ae704,(SMRGLPrimitivePoly *)prim);
          prim = (SMRGLHeaderPrimitive *)(((SMRGLPrimitivePoly *)prim)->vertices + 4);
        } while (iVar1 < count);
        if (_DAT_01c02594 == 0) {
          return;
        }
        goto LAB_0050e06c;
      }
    }
    else {
      iVar1 = 0;
      if (0 < count) {
        do {
          iVar1 = iVar1 + 1;
          core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_004d7760
                    ((CMirror *)this_ptr->sorted_render_actors[0x6e0],prim);
          prim = prim + 3;
        } while (iVar1 < count);
      }
    }
    if (_DAT_01c02594 != 0) {
LAB_0050e06c:
      engine_special_cpp_sync_FUN_00532b30();
      return;
    }
  }
  return;
}
