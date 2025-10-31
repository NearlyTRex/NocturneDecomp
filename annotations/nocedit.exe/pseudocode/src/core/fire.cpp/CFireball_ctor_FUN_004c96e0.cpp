// Name: core_fire.cpp_CFireball_ctor_FUN_004c96e0
// Address: 004c96e0
// Address Range: [[004c96e0, 004c96f4]]
// Convention: __cdecl
// Signature: CFireball * core_fire.cpp_CFireball_ctor_FUN_004c96e0(CFireball * this_ptr)
// Globals:
//   CParticle_vtable g_CFireballVTable
// Function calls:
//   core_particle.cpp_CParticle_ctor_FUN_00545650

#include "nocturne.h"

CFireball * __cdecl core_fire_cpp_CFireball_ctor_FUN_004c96e0(CFireball *this_ptr)

{
  CFireball *pCVar1;
  
  pCVar1 = (CFireball *)core_particle_cpp_CParticle_ctor_FUN_00545650(&this_ptr->base);
  (pCVar1->base).vtable = &g_CFireballVTable;
  return pCVar1;
}


// Assembly code:
// 004c96e0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_CFireball_ctor_FUN_004c96e0
//   XREF to: Stack[0x4] (READ)
// 004c96e4: PUSH EDX
// 004c96e5: CALL core_particle.cpp_CParticle_ctor_FUN_00545650
//   XREF to: 00545650 (UNCONDITIONAL_CALL)
// 004c96ea: ADD ESP,0x4
// 004c96ed: MOV dword ptr [EAX + 0x34],0x65dd74
//   XREF to: 0065dd74 (DATA)
// 004c96f4: RET
