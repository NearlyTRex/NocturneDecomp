// Name: core_fire.cpp_freeShells_FUN_004c9810
// Address: 004c9810
// Address Range: [[004c9810, 004c9824]]
// Convention: __cdecl
// Signature: void core_fire.cpp_freeShells_FUN_004c9810(CShell * * array)
// Globals:
//   WatcomTypeInfo g_CShellTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_fire_cpp_freeShells_FUN_004c9810(CShell **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x32,&g_CShellTypeInfo);
  return;
}


// Assembly code:
// 004c9810: PUSH 0x65dfb0
//   Label: core_fire.cpp_freeShells_FUN_004c9810
//   XREF to: 0065dfb0 (DATA)
// 004c9815: PUSH 0x32
// 004c9817: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004c981b: PUSH EDX
// 004c981c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004c9821: ADD ESP,0xc
// 004c9824: RET
