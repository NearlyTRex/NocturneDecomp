// Name: core_set.cpp_CDemonSet_FUN_00570870
// Address: 00570870
// Address Range: [[00570870, 005708df]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_00570870(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_00570870(CDemonSet *this_ptr)

{
  int iVar1;
  SInputFace *in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  if (g_CGamePtr->scripted_sequence_active == 0) {
    if (g_CGamePtr->field62_0x1f4 != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
      if (iVar1 == 0) {
        core_set_cpp_FUN_005702b0();
        return;
      }
    }
    engine_drender_cpp_CDemonRenderer_renderFaceList_FUN_0048d170
              (g_CDemonRendererPtr,in_stack_0000000c,in_stack_00000010,in_stack_00000014);
  }
  return;
}
