// Name: core_fire.cpp_CPopcorn_ctor_FUN_004c94c0
// Address: 004c94c0
// Address Range: [[004c94c0, 004c94d4]]
// Convention: __cdecl
// Signature: CPopcorn * core_fire.cpp_CPopcorn_ctor_FUN_004c94c0(CPopcorn * this_ptr)
// Globals:
//   CParticle_vtable g_CPopcornVTable
// Function calls:
//   core_particle.cpp_CParticle_ctor_FUN_00545650

#include "nocturne.h"

CPopcorn * __cdecl core_fire_cpp_CPopcorn_ctor_FUN_004c94c0(CPopcorn *this_ptr)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_ctor_FUN_00545650(&this_ptr->base);
  pCVar1->vtable = &g_CPopcornVTable;
  return (CPopcorn *)pCVar1;
}


// Assembly code:
// 004c94c0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_CPopcorn_ctor_FUN_004c94c0
//   XREF to: Stack[0x4] (READ)
// 004c94c4: PUSH EDX
// 004c94c5: CALL core_particle.cpp_CParticle_ctor_FUN_00545650
//   XREF to: 00545650 (UNCONDITIONAL_CALL)
// 004c94ca: ADD ESP,0x4
// 004c94cd: MOV dword ptr [EAX + 0x34],0x65dcf4
//   XREF to: 0065dcf4 (DATA)
// 004c94d4: RET
