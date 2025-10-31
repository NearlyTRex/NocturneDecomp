// Name: core_fire.cpp_freeGlassParticles_FUN_004c9970
// Address: 004c9970
// Address Range: [[004c9970, 004c9987]]
// Convention: __cdecl
// Signature: void core_fire.cpp_freeGlassParticles_FUN_004c9970(CGlassParticle * * array)
// Globals:
//   WatcomTypeInfo g_CGlassParticleTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_fire_cpp_freeGlassParticles_FUN_004c9970(CGlassParticle **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x100,&g_CGlassParticleTypeInfo);
  return;
}


// Assembly code:
// 004c9970: PUSH 0x65de50
//   Label: core_fire.cpp_freeGlassParticles_FUN_004c9970
//   XREF to: 0065de50 (DATA)
// 004c9975: PUSH 0x100
// 004c997a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004c997e: PUSH EDX
// 004c997f: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004c9984: ADD ESP,0xc
// 004c9987: RET
