// Name: shape_meshlod.cpp_FUN_0051f0c0
// Address: 0051f0c0
// Address Range: [[0051f0c0, 0051f0d7]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051f0c0()
// Globals:
//   WatcomTypeInfo g_LodFaceTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void shape_meshlod_cpp_FUN_0051f0c0(void)

{
  void **in_stack_00000004;
  
  crt_memory_c_freeTypeArray_FUN_005feee9(in_stack_00000004,200,&g_LodFaceTypeInfo);
  return;
}


// Assembly code:
// 0051f0c0: PUSH 0x661390
//   Label: shape_meshlod.cpp_FUN_0051f0c0
//   XREF to: 00661390 (DATA)
// 0051f0c5: PUSH 0xc8
// 0051f0ca: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0051f0ce: PUSH EDX
// 0051f0cf: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 0051f0d4: ADD ESP,0xc
// 0051f0d7: RET
