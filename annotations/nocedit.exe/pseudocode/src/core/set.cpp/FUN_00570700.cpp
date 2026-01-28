// Name: core_set.cpp_FUN_00570700
// Address: 00570700
// Address Range: [[00570700, 0057076f]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_00570700(void)

#include "nocturne.h"

void core_set_cpp_FUN_00570700(void)

{
  int iVar1;
  CDemonSet *in_stack_00000004;
  SMRGLHeaderPrimitive *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  if (g_CGamePtr->scripted_sequence_active == 0) {
    if (g_CGamePtr->unk6 != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
      if (iVar1 == 0) {
        core_set_cpp_CDemonSet_FUN_0056ffe0(in_stack_00000004);
        return;
      }
    }
    engine_drender_cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20
              (g_CDemonRendererPtr2,in_stack_00000008,in_stack_0000000c,in_stack_00000010);
  }
  return;
}
