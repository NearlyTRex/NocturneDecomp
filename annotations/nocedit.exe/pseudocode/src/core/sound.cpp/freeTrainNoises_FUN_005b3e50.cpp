// Name: core_sound.cpp_freeTrainNoises_FUN_005b3e50
// Address: 005b3e50
// Address Range: [[005b3e50, 005b3e64]]
// Convention: __cdecl
// Signature: void core_sound.cpp_freeTrainNoises_FUN_005b3e50(STrainNoise * * array)
// Globals:
//   WatcomTypeInfo g_STrainNoiseTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_sound_cpp_freeTrainNoises_FUN_005b3e50(STrainNoise **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,10,&g_STrainNoiseTypeInfo);
  return;
}


// Assembly code:
// 005b3e50: PUSH 0x663320
//   Label: core_sound.cpp_freeTrainNoises_FUN_005b3e50
//   XREF to: 00663320 (DATA)
// 005b3e55: PUSH 0xa
// 005b3e57: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005b3e5b: PUSH EDX
// 005b3e5c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 005b3e61: ADD ESP,0xc
// 005b3e64: RET
