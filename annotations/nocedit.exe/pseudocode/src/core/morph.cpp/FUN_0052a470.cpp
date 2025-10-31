// Name: core_morph.cpp_FUN_0052a470
// Address: 0052a470
// Address Range: [[0052a470, 0052a484]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052a470()
// Globals:
//   WatcomTypeInfo g_CAlphaBitmapTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void core_morph_cpp_FUN_0052a470(void)

{
  void **in_stack_00000004;
  
  crt_memory_c_freeTypeArray_FUN_005feee9(in_stack_00000004,0x1e,&g_CAlphaBitmapTypeInfo);
  return;
}


// Assembly code:
// 0052a470: PUSH 0x65e9f0
//   Label: core_morph.cpp_FUN_0052a470
//   XREF to: 0065e9f0 (DATA)
// 0052a475: PUSH 0x1e
// 0052a477: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052a47b: PUSH EDX
// 0052a47c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 0052a481: ADD ESP,0xc
// 0052a484: RET
