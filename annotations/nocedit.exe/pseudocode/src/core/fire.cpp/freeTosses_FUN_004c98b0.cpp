// Name: core_fire.cpp_freeTosses_FUN_004c98b0
// Address: 004c98b0
// Address Range: [[004c98b0, 004c98c4]]
// Convention: __cdecl
// Signature: void core_fire.cpp_freeTosses_FUN_004c98b0(CToss * * array)
// Globals:
//   WatcomTypeInfo g_CTossTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_fire_cpp_freeTosses_FUN_004c98b0(CToss **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x14,&g_CTossTypeInfo);
  return;
}


// Assembly code:
// 004c98b0: PUSH 0x65df10
//   Label: core_fire.cpp_freeTosses_FUN_004c98b0
//   XREF to: 0065df10 (DATA)
// 004c98b5: PUSH 0x14
// 004c98b7: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004c98bb: PUSH EDX
// 004c98bc: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004c98c1: ADD ESP,0xc
// 004c98c4: RET
