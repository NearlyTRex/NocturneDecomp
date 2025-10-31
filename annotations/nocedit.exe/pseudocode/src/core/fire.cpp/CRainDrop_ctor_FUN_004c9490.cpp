// Name: core_fire.cpp_CRainDrop_ctor_FUN_004c9490
// Address: 004c9490
// Address Range: [[004c9490, 004c94a4]]
// Convention: __cdecl
// Signature: CRainDrop * core_fire.cpp_CRainDrop_ctor_FUN_004c9490(CRainDrop * this_ptr)
// Globals:
//   CParticle_vtable g_CRainDropVTable
// Function calls:
//   core_particle.cpp_CParticle_ctor_FUN_00545650

#include "nocturne.h"

CRainDrop * __cdecl core_fire_cpp_CRainDrop_ctor_FUN_004c9490(CRainDrop *this_ptr)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_ctor_FUN_00545650(&this_ptr->base);
  pCVar1->vtable = &g_CRainDropVTable;
  return (CRainDrop *)pCVar1;
}


// Assembly code:
// 004c9490: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_CRainDrop_ctor_FUN_004c9490
//   XREF to: Stack[0x4] (READ)
// 004c9494: PUSH EDX
// 004c9495: CALL core_particle.cpp_CParticle_ctor_FUN_00545650
//   XREF to: 00545650 (UNCONDITIONAL_CALL)
// 004c949a: ADD ESP,0x4
// 004c949d: MOV dword ptr [EAX + 0x34],0x65dcd4
//   XREF to: 0065dcd4 (DATA)
// 004c94a4: RET
