// Name: core_gore.cpp_FUN_004ee3f0
// Address: 004ee3f0
// Address Range: [[004ee3f0, 004ee404]]
// Convention: __cdecl
// Signature: CBloodParticle * core_gore.cpp_FUN_004ee3f0(CBloodParticle * this_ptr)
// Globals:
//   void* PTR_core_particle.cpp_FUN_0065f044 = 00545680
// Function calls:
//   core_particle.cpp_CParticle_ctor_FUN_00545650

#include "nocturne.h"

CBloodParticle * __cdecl core_gore_cpp_FUN_004ee3f0(CBloodParticle *this_ptr)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_ctor_FUN_00545650((CParticle *)this_ptr);
  pCVar1->vtable = (CParticle_vtable *)&PTR_core_particle_cpp_FUN_0065f044;
  return (CBloodParticle *)pCVar1;
}


// Assembly code:
// 004ee3f0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_gore.cpp_FUN_004ee3f0
//   XREF to: Stack[0x4] (READ)
// 004ee3f4: PUSH EDX
// 004ee3f5: CALL core_particle.cpp_CParticle_ctor_FUN_00545650
//   XREF to: 00545650 (UNCONDITIONAL_CALL)
// 004ee3fa: ADD ESP,0x4
// 004ee3fd: MOV dword ptr [EAX + 0x34],0x65f044
//   XREF to: 0065f044 (DATA)
// 004ee404: RET
