// Name: core_set.cpp_CDemonSet_renderPrimitiveList_FUN_005340b0
// Address: 005340b0
// Address Range: [[005340b0, 00534129]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderPrimitiveList_FUN_005340b0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderPrimitiveList_FUN_005340b0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count)

{
  int iVar1;
  
  if (g_CGamePtr->suppress_set_geometry == 0) {
    if (DAT_0060b280->advanced_culling_enabled == 0) {
      iVar1 = 0;
      if (0 < primitive_count) {
        do {
          iVar1 = iVar1 + 1;
          engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00469670
                    (DAT_0060b280,primitive_array);
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
          core_mirror_cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_004fac50
                    (this_ptr->active_mirror,primitive_array);
          primitive_array = (SMRGLHeaderPrimitive *)&primitive_array[1].surface_normal.C;
        } while (iVar1 < primitive_count);
      }
    }
  }
  return;
}
