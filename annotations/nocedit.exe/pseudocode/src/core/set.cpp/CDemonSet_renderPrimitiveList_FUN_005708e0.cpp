// Name: core_set.cpp_CDemonSet_renderPrimitiveList_FUN_005708e0
// Address: 005708e0
// Address Range: [[005708e0, 00570959]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_renderPrimitiveList_FUN_005708e0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * primitive_array, int primitive_count)

#include "nocturne.h"

void __cdecl
core_set_cpp_CDemonSet_renderPrimitiveList_FUN_005708e0
          (CDemonSet *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count)

{
  int iVar1;
  
  if (g_CGamePtr->scripted_sequence_active == 0) {
    if (g_CDemonRendererPtr2->advanced_culling_enabled == 0) {
      iVar1 = 0;
      if (0 < primitive_count) {
        do {
          iVar1 = iVar1 + 1;
          engine_drender_cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820
                    (g_CDemonRendererPtr2,primitive_array);
          primitive_array = (SMRGLHeaderPrimitive *)&primitive_array[1].surface_normal.C;
        } while (iVar1 < primitive_count);
        return;
      }
    }
    else {
      iVar1 = 0;
      if (0 < primitive_count) {
        do {
          iVar1 = iVar1 + 1;
          core_mirror_cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_00522560
                    (this_ptr->active_mirror,primitive_array);
          primitive_array = (SMRGLHeaderPrimitive *)&primitive_array[1].surface_normal.C;
        } while (iVar1 < primitive_count);
      }
    }
  }
  return;
}
