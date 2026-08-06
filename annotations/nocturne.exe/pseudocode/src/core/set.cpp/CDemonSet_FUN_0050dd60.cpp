// Name: core_set.cpp_CDemonSet_FUN_0050dd60
// Address: 0050dd60
// Address Range: [[0050dd60, 0050ddcf]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_FUN_0050dd60(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0050dd60(CDemonSet *this_ptr)

{
  int iVar1;
  SMRGLPrimitiveTriangle *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  if (g_CGame_PTR_005b9354->scripted_sequence_active == 0) {
    if (g_CGame_PTR_005b9354->render_mode != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090
                        (g_CDemonRenderer_PTR_005ae704);
      if (iVar1 == 0) {
        core_set_cpp_CDemonSet_renderEnvMapBatchTri_FUN_0050d640
                  (this_ptr,&in_stack_00000008->base,in_stack_0000000c,0xffff);
        return;
      }
    }
    engine_drender_cpp_CDemonRenderer_renderTriangleBatch_FUN_004613d0
              (g_CDemonRenderer_PTR_005ae704,in_stack_00000008,in_stack_0000000c,in_stack_00000010);
  }
  return;
}
