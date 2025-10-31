// Name: core_fire.cpp_CSpark_ctor_FUN_004c9710
// Address: 004c9710
// Address Range: [[004c9710, 004c9724]]
// Convention: __cdecl
// Signature: CSpark * core_fire.cpp_CSpark_ctor_FUN_004c9710(CSpark * this_ptr)
// Globals:
//   CParticle_vtable g_CSparkVTable
// Function calls:
//   core_particle.cpp_CParticle_ctor_FUN_00545650

#include "nocturne.h"

CSpark * __cdecl core_fire_cpp_CSpark_ctor_FUN_004c9710(CSpark *this_ptr)

{
  CSpark *pCVar1;
  
  pCVar1 = (CSpark *)core_particle_cpp_CParticle_ctor_FUN_00545650(&this_ptr->base);
  (pCVar1->base).vtable = &g_CSparkVTable;
  return pCVar1;
}


// Assembly code:
// 004c9710: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_CSpark_ctor_FUN_004c9710
//   XREF to: Stack[0x4] (READ)
// 004c9714: PUSH EDX
// 004c9715: CALL core_particle.cpp_CParticle_ctor_FUN_00545650
//   XREF to: 00545650 (UNCONDITIONAL_CALL)
// 004c971a: ADD ESP,0x4
// 004c971d: MOV dword ptr [EAX + 0x34],0x65dd94
//   XREF to: 0065dd94 (DATA)
// 004c9724: RET
