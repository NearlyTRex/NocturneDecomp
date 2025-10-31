// Name: core_fire.cpp_CRock_ctor_FUN_004c96b0
// Address: 004c96b0
// Address Range: [[004c96b0, 004c96c4]]
// Convention: __cdecl
// Signature: CRock * core_fire.cpp_CRock_ctor_FUN_004c96b0(CRock * this_ptr)
// Globals:
//   CParticle_vtable g_CRockVTable
// Function calls:
//   core_particle.cpp_CParticle_ctor_FUN_00545650

#include "nocturne.h"

CRock * __cdecl core_fire_cpp_CRock_ctor_FUN_004c96b0(CRock *this_ptr)

{
  CRock *pCVar1;
  
  pCVar1 = (CRock *)core_particle_cpp_CParticle_ctor_FUN_00545650(&this_ptr->base);
  (pCVar1->base).vtable = &g_CRockVTable;
  return pCVar1;
}


// Assembly code:
// 004c96b0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_CRock_ctor_FUN_004c96b0
//   XREF to: Stack[0x4] (READ)
// 004c96b4: PUSH EDX
// 004c96b5: CALL core_particle.cpp_CParticle_ctor_FUN_00545650
//   XREF to: 00545650 (UNCONDITIONAL_CALL)
// 004c96ba: ADD ESP,0x4
// 004c96bd: MOV dword ptr [EAX + 0x34],0x65dd54
//   XREF to: 0065dd54 (DATA)
// 004c96c4: RET
