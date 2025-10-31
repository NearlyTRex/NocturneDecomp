// Name: core_gore.cpp_cleanupBloodParticles_FUN_004ee480
// Address: 004ee480
// Address Range: [[004ee480, 004ee497]]
// Convention: __cdecl
// Signature: int core_gore.cpp_cleanupBloodParticles_FUN_004ee480(CBloodParticle * ptr)
// Globals:
//   WatcomTypeInfo g_CBloodParticleTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

int __cdecl core_gore_cpp_cleanupBloodParticles_FUN_004ee480(CBloodParticle *ptr)

{
  int iVar1;
  
  iVar1 = crt_memory_c_freeTypeArray_FUN_005feee9((void **)ptr,0x100,&g_CBloodParticleTypeInfo);
  return iVar1;
}


// Assembly code:
// 004ee480: PUSH 0x65f080
//   Label: core_gore.cpp_cleanupBloodParticles_FUN_004ee480
//   XREF to: 0065f080 (DATA)
// 004ee485: PUSH 0x100
// 004ee48a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004ee48e: PUSH EDX
// 004ee48f: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 004ee494: ADD ESP,0xc
// 004ee497: RET
