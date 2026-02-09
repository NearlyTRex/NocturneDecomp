// Name: core_gore.cpp_freeBloodParticles_FUN_004ee480
// Address: 004ee480
// Address Range: [[004ee480, 004ee497]]
// Convention: __cdecl
// Signature: CBloodParticle * __cdecl core_gore_cpp_freeBloodParticles_FUN_004ee480(CBloodParticle *objs)

#include "nocturne.h"

CBloodParticle * __cdecl core_gore_cpp_freeBloodParticles_FUN_004ee480(CBloodParticle *objs)

{
  CBloodParticle *pCVar1;
  
  pCVar1 = (CBloodParticle *)__arrfini(objs,0x100,&g_CBloodParticleTypeInfo);
  return pCVar1;
}
