// Name: sound_sndmain.cpp_FUN_005ade40
// Address: 005ade40
// Address Range: [[005ade40, 005ade54]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005ade40()
// Globals:
//   WatcomTypeInfo g_SfxSampleTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005ade40(void)

{
  void **in_stack_00000004;
  
  crt_memory_c_freeTypeArray_FUN_005feee9(in_stack_00000004,0x40,&g_SfxSampleTypeInfo);
  return;
}


// Assembly code:
// 005ade40: PUSH 0x6631c0
//   Label: sound_sndmain.cpp_FUN_005ade40
//   XREF to: 006631c0 (DATA)
// 005ade45: PUSH 0x40
// 005ade47: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005ade4b: PUSH EDX
// 005ade4c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 005ade51: ADD ESP,0xc
// 005ade54: RET
