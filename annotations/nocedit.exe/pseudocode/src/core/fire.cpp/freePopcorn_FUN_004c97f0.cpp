// Name: core_fire.cpp_freePopcorn_FUN_004c97f0
// Address: 004c97f0
// Address Range: [[004c97f0, 004c9807]]
// Convention: __cdecl
// Signature: void core_fire.cpp_freePopcorn_FUN_004c97f0(CPopcorn * * array)
// Globals:
//   WatcomTypeInfo g_CPopcornTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_fire_cpp_freePopcorn_FUN_004c97f0(CPopcorn **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x100,&g_CPopcornTypeInfo);
  return;
}


// Assembly code:
// 004c97f0: PUSH 0x65dfd0
//   Label: core_fire.cpp_freePopcorn_FUN_004c97f0
//   XREF to: 0065dfd0 (DATA)
// 004c97f5: PUSH 0x100
// 004c97fa: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004c97fe: PUSH EDX
// 004c97ff: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004c9804: ADD ESP,0xc
// 004c9807: RET
