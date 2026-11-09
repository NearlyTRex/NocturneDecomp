// Name: core_set.cpp_CDemonSet_renderPrimitiveList_FUN_0053acf0
// Address: 0053acf0
// Address Range: [[0053acf0, 0053ad69]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderPrimitiveList_FUN_0053acf0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderPrimitiveList_FUN_0053acf0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count)

{
  int iVar1;
  
  if (*(int *)&g_CGamePtr->field_0x214 == 0) {
    if (*(int *)(DAT_005f2afc + 0x18) == 0) {
      iVar1 = 0;
      if (0 < primitive_count) {
        do {
          iVar1 = iVar1 + 1;
          engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
                    (DAT_005f2afc,primitive_array);
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
          core_mirror_cpp_FUN_004f5370(*(uint *)&this_ptr->field_0x161668,primitive_array);
          primitive_array = primitive_array + 0x28;
        } while (iVar1 < primitive_count);
      }
    }
  }
  return;
}
