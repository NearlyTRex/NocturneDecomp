// Name: core_set.cpp_CDemonSet_renderPrimitiveList_FUN_005340b0
// Address: 005340b0
// Address Range: [[005340b0, 00534129]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderPrimitiveList_FUN_005340b0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderPrimitiveList_FUN_005340b0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count)

{
  int iVar1;
  
  if (*(int *)&g_CGamePtr->field_0x20c == 0) {
    if (*(int *)(DAT_0060b280 + 0x18) == 0) {
      iVar1 = 0;
      if (0 < primitive_count) {
        do {
          iVar1 = iVar1 + 1;
          engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00469670
                    (DAT_0060b280,primitive_array);
          primitive_array = primitive_array + 0x28;
        } while (iVar1 < primitive_count);
        return;
      }
    }
    else {
      iVar1 = 0;
      if (0 < primitive_count) {
        do {
          iVar1 = iVar1 + 1;
          core_mirror_cpp_FUN_004fac50(*(uint *)&this_ptr->field_0x161664,primitive_array);
          primitive_array = primitive_array + 0x28;
        } while (iVar1 < primitive_count);
      }
    }
  }
  return;
}
