// Name: core_set.cpp_CDemonSet_FUN_00570960
// Address: 00570960
// Address Range: [[00570960, 0057096f]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_00570960(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim, int count)

#include "nocturne.h"

void __cdecl
core_set_cpp_CDemonSet_FUN_00570960(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim,int count)

{
  int iVar1;
  
  if (g_CGamePtr->scripted_sequence_active == 0) {
    if (g_CDemonRendererPtr2->advanced_culling_enabled == 0) {
      iVar1 = 0;
      if (0 < count) {
        do {
          iVar1 = iVar1 + 1;
          engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
                    (g_CDemonRendererPtr2,prim);
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
          core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_005225e0(this_ptr->active_mirror,prim)
          ;
          prim = prim + 3;
        } while (iVar1 < count);
      }
    }
  }
  return;
}
