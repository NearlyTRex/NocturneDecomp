// Name: shape_meshlod.cpp_FUN_0051f0e0
// Address: 0051f0e0
// Address Range: [[0051f0e0, 0051f0f7]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051f0e0()
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void shape_meshlod_cpp_FUN_0051f0e0(void)

{
  void **in_stack_00000004;
  
  crt_memory_c_freeTypeArray_FUN_005feee9(in_stack_00000004,400,&g_CVectorTypeInfo);
  return;
}


// Assembly code:
// 0051f0e0: PUSH 0x6598c0
//   Label: shape_meshlod.cpp_FUN_0051f0e0
//   XREF to: 006598c0 (DATA)
// 0051f0e5: PUSH 0x190
// 0051f0ea: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0051f0ee: PUSH EDX
// 0051f0ef: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 0051f0f4: ADD ESP,0xc
// 0051f0f7: RET
