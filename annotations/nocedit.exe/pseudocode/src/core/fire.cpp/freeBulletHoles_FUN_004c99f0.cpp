// Name: core_fire.cpp_freeBulletHoles_FUN_004c99f0
// Address: 004c99f0
// Address Range: [[004c99f0, 004c9a07]]
// Convention: __cdecl
// Signature: void core_fire.cpp_freeBulletHoles_FUN_004c99f0(CBulletHole * * array)
// Globals:
//   WatcomTypeInfo g_CBulletHoleTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_fire_cpp_freeBulletHoles_FUN_004c99f0(CBulletHole **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x100,&g_CBulletHoleTypeInfo);
  return;
}


// Assembly code:
// 004c99f0: PUSH 0x65ddd0
//   Label: core_fire.cpp_freeBulletHoles_FUN_004c99f0
//   XREF to: 0065ddd0 (DATA)
// 004c99f5: PUSH 0x100
// 004c99fa: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004c99fe: PUSH EDX
// 004c99ff: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004c9a04: ADD ESP,0xc
// 004c9a07: RET
