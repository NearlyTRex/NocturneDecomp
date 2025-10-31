// Name: core_fire.cpp_freeLaserBeams_FUN_004c98f0
// Address: 004c98f0
// Address Range: [[004c98f0, 004c9904]]
// Convention: __cdecl
// Signature: void core_fire.cpp_freeLaserBeams_FUN_004c98f0(CLaserBeam * * array)
// Globals:
//   WatcomTypeInfo g_CLaserBeamTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_fire_cpp_freeLaserBeams_FUN_004c98f0(CLaserBeam **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x40,&g_CLaserBeamTypeInfo);
  return;
}


// Assembly code:
// 004c98f0: PUSH 0x65ded0
//   Label: core_fire.cpp_freeLaserBeams_FUN_004c98f0
//   XREF to: 0065ded0 (DATA)
// 004c98f5: PUSH 0x40
// 004c98f7: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004c98fb: PUSH EDX
// 004c98fc: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004c9901: ADD ESP,0xc
// 004c9904: RET
