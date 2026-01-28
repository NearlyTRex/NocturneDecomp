// Name: core_gore.cpp_cleanupBloodParticles_FUN_004ee480
// Address: 004ee480
// Address Range: [[004ee480, 004ee497]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_cleanupBloodParticles_FUN_004ee480(CBloodParticle *ptr)

#include "nocturne.h"

int __cdecl core_gore_cpp_cleanupBloodParticles_FUN_004ee480(CBloodParticle *ptr)

{
  int iVar1;
  
  iVar1 = crt_memory_c_freeTypeArray_FUN_005feee9((void **)ptr,0x100,&g_CBloodParticleTypeInfo);
  return iVar1;
}
