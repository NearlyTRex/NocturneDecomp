// Name: core_set.cpp_CDemonSet_renderPrimitiveList_FUN_0050df40
// Address: 0050df40
// Address Range: [[0050df40, 0050dfd5]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderPrimitiveList_FUN_0050df40(CDemonSet *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_renderPrimitiveList_FUN_0050df40(CDemonSet *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count)

{
  int iVar1;
  
  if (g_CGame_PTR_005b9354->scripted_sequence_active == 0) {
    if (g_CDemonRenderer_PTR_005ae704->advanced_culling_enabled == 0) {
      iVar1 = 0;
      if (0 < primitive_count) {
        do {
          iVar1 = iVar1 + 1;
          engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                    (g_CDemonRenderer_PTR_005ae704,primitive_array);
          primitive_array = (SMRGLHeaderPrimitive *)&primitive_array[1].surface_normal.C;
        } while (iVar1 < primitive_count);
        if (_DAT_01c02594 == 0) {
          return;
        }
        goto LAB_0050dfcc;
      }
    }
    else {
      iVar1 = 0;
      if (0 < primitive_count) {
        do {
          iVar1 = iVar1 + 1;
          core_mirror_cpp_CMirror_FUN_004d76e0(this_ptr->active_mirror,primitive_array);
          primitive_array = (SMRGLHeaderPrimitive *)&primitive_array[1].surface_normal.C;
        } while (iVar1 < primitive_count);
      }
    }
    if (_DAT_01c02594 != 0) {
LAB_0050dfcc:
      engine_special_cpp_sync_FUN_00532b30();
      return;
    }
  }
  return;
}
