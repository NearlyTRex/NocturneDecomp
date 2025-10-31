// Name: core_fire.cpp_freeGunFlames_FUN_004c9870
// Address: 004c9870
// Address Range: [[004c9870, 004c9887]]
// Convention: __cdecl
// Signature: void core_fire.cpp_freeGunFlames_FUN_004c9870(CGunFlame * * array)
// Globals:
//   WatcomTypeInfo g_CGunFlameTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_fire_cpp_freeGunFlames_FUN_004c9870(CGunFlame **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,500,&g_CGunFlameTypeInfo);
  return;
}


// Assembly code:
// 004c9870: PUSH 0x65df50
//   Label: core_fire.cpp_freeGunFlames_FUN_004c9870
//   XREF to: 0065df50 (DATA)
// 004c9875: PUSH 0x1f4
// 004c987a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004c987e: PUSH EDX
// 004c987f: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004c9884: ADD ESP,0xc
// 004c9887: RET
