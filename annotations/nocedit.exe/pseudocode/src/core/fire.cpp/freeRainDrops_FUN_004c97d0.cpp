// Name: core_fire.cpp_freeRainDrops_FUN_004c97d0
// Address: 004c97d0
// Address Range: [[004c97d0, 004c97e7]]
// Convention: __cdecl
// Signature: void core_fire.cpp_freeRainDrops_FUN_004c97d0(CRainDrop * * array)
// Globals:
//   WatcomTypeInfo g_CRainDropTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_fire_cpp_freeRainDrops_FUN_004c97d0(CRainDrop **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x100,&g_CRainDropTypeInfo);
  return;
}


// Assembly code:
// 004c97d0: PUSH 0x65dff0
//   Label: core_fire.cpp_freeRainDrops_FUN_004c97d0
//   XREF to: 0065dff0 (DATA)
// 004c97d5: PUSH 0x100
// 004c97da: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004c97de: PUSH EDX
// 004c97df: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004c97e4: ADD ESP,0xc
// 004c97e7: RET
