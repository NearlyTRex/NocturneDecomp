// Name: core_particle.cpp_CParticle_dtor_FUN_00545670
// Address: 00545670
// Address Range: [[00545670, 0054567b]]
// Convention: __cdecl
// Signature: CParticle * core_particle.cpp_CParticle_dtor_FUN_00545670(CParticle * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireball_dtor_FUN_004c9700 (004c9700) at 004c9707 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGlassParticle_dtor_FUN_004c9660 (004c9660) at 004c9678 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CPopcorn_dtor_FUN_004c94e0 (004c94e0) at 004c94e7 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CRainDrop_dtor_FUN_004c94b0 (004c94b0) at 004c94b7 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CRock_dtor_FUN_004c96d0 (004c96d0) at 004c96d7 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CShell_dtor_FUN_004c9510 (004c9510) at 004c9517 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CSpark_dtor_FUN_004c9730 (004c9730) at 004c9737 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ee410 (004ee410) at 004ee417 [UNCONDITIONAL_CALL]
// Globals:
//   CParticle_vtable g_CParticleVTable

#include "nocturne.h"

CParticle * __cdecl core_particle_cpp_CParticle_dtor_FUN_00545670(CParticle *this_ptr)

{
  this_ptr->vtable = &g_CParticleVTable;
  return this_ptr;
}


// Assembly code:
// 00545670: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_particle.cpp_CParticle_dtor_FUN_00545670
//   XREF to: Stack[0x4] (READ)
// 00545674: MOV dword ptr [EAX + 0x34],0x661f24
//   XREF to: 00661f24 (DATA)
// 0054567b: RET
