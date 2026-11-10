// Name: core_set.cpp_CDemonSet_renderPrimitiveList_FUN_00555360
// Address: 00555360
// Address Range: [[00555360, 005553d9]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderPrimitiveList_FUN_00555360(CDemonSet *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderPrimitiveList_FUN_00555360(CDemonSet *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count)

{
  int iVar1;
  
  if (*(int *)&g_CGamePtr->field_0x20c == 0) {
    if (DAT_00612560->advanced_culling_enabled == 0) {
      iVar1 = 0;
      if (0 < primitive_count) {
        do {
          iVar1 = iVar1 + 1;
          engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
                    (DAT_00612560,primitive_array);
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
          core_mirror_cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_00519ba0
                    (this_ptr->active_mirror,primitive_array);
          primitive_array = (SMRGLHeaderPrimitive *)&primitive_array[1].surface_normal.C;
        } while (iVar1 < primitive_count);
      }
    }
  }
  return;
}
