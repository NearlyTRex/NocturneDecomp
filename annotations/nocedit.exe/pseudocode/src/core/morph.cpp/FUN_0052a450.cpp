// Name: core_morph.cpp_FUN_0052a450
// Address: 0052a450
// Address Range: [[0052a450, 0052a464]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052a450()
// Globals:
//   WatcomTypeInfo g_CCourseTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void core_morph_cpp_FUN_0052a450(void)

{
  void **in_stack_00000004;
  
  crt_memory_c_freeTypeArray_FUN_005feee9(in_stack_00000004,3,&g_CCourseTypeInfo);
  return;
}


// Assembly code:
// 0052a450: PUSH 0x65c9d0
//   Label: core_morph.cpp_FUN_0052a450
//   XREF to: 0065c9d0 (DATA)
// 0052a455: PUSH 0x3
// 0052a457: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052a45b: PUSH EDX
// 0052a45c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 0052a461: ADD ESP,0xc
// 0052a464: RET
