// Name: core_particle.cpp_CParticle_ctor_FUN_00545650
// Address: 00545650
// Address Range: [[00545650, 00545662]]
// Convention: __cdecl
// Signature: CParticle * core_particle.cpp_CParticle_ctor_FUN_00545650(CParticle * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireball_ctor_FUN_004c96e0 (004c96e0) at 004c96e5 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGlassParticle_ctor_FUN_004c9630 (004c9630) at 004c9635 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CPopcorn_ctor_FUN_004c94c0 (004c94c0) at 004c94c5 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CRainDrop_ctor_FUN_004c9490 (004c9490) at 004c9495 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CRock_ctor_FUN_004c96b0 (004c96b0) at 004c96b5 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CShell_ctor_FUN_004c94f0 (004c94f0) at 004c94f5 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CSpark_ctor_FUN_004c9710 (004c9710) at 004c9715 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ee3f0 (004ee3f0) at 004ee3f5 [UNCONDITIONAL_CALL]
// Globals:
//   CParticle_vtable g_CParticleVTable

#include "nocturne.h"

CParticle * __cdecl core_particle_cpp_CParticle_ctor_FUN_00545650(CParticle *this_ptr)

{
  this_ptr->lifetime_remaining = 0.0;
  this_ptr->vtable = &g_CParticleVTable;
  return this_ptr;
}


// Assembly code:
// 00545650: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_particle.cpp_CParticle_ctor_FUN_00545650
//   XREF to: Stack[0x4] (READ)
// 00545654: MOV dword ptr [EAX + 0x18],0x0
// 0054565b: MOV dword ptr [EAX + 0x34],0x661f24
//   XREF to: 00661f24 (DATA)
// 00545662: RET
