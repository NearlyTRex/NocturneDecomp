// Name: core_fire.cpp_freeBulletTrails_FUN_004c9950
// Address: 004c9950
// Address Range: [[004c9950, 004c9964]]
// Convention: __cdecl
// Signature: void core_fire.cpp_freeBulletTrails_FUN_004c9950(CBulletTrail * * array)
// Globals:
//   WatcomTypeInfo g_CBulletTrailTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_fire_cpp_freeBulletTrails_FUN_004c9950(CBulletTrail **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,10,&g_CBulletTrailTypeInfo);
  return;
}


// Assembly code:
// 004c9950: PUSH 0x65de70
//   Label: core_fire.cpp_freeBulletTrails_FUN_004c9950
//   XREF to: 0065de70 (DATA)
// 004c9955: PUSH 0xa
// 004c9957: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004c995b: PUSH EDX
// 004c995c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004c9961: ADD ESP,0xc
// 004c9964: RET
