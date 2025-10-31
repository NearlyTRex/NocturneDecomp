// Name: core_flies.cpp_FUN_004ccd60
// Address: 004ccd60
// Address Range: [[004ccd60, 004ccd77]]
// Convention: unknown
// Signature: undefined core_flies.cpp_FUN_004ccd60()
// Cross-references:
//   core_flies.cpp_FUN_004cccb0 (004cccb0) at 004cccc5 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_SFlyTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void core_flies_cpp_FUN_004ccd60(void)

{
  void **in_stack_00000004;
  
  crt_memory_c_freeTypeArray_FUN_005feee9(in_stack_00000004,200,&g_SFlyTypeInfo);
  return;
}


// Assembly code:
// 004ccd60: PUSH 0x65e610
//   Label: core_flies.cpp_FUN_004ccd60
//   XREF to: 0065e610 (DATA)
// 004ccd65: PUSH 0xc8
// 004ccd6a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004ccd6e: PUSH EDX
// 004ccd6f: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004ccd74: ADD ESP,0xc
// 004ccd77: RET
