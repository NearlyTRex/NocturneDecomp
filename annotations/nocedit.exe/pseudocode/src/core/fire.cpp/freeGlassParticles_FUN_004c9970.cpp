// Name: core_fire.cpp_freeGlassParticles_FUN_004c9970
// Address: 004c9970
// Address Range: [[004c9970, 004c9987]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_freeGlassParticles_FUN_004c9970(CGlassParticle **array)

#include "nocturne.h"

void __cdecl core_fire_cpp_freeGlassParticles_FUN_004c9970(CGlassParticle **array)

{
  __arrfini(array,0x100,&g_CGlassParticleTypeInfo);
  return;
}
