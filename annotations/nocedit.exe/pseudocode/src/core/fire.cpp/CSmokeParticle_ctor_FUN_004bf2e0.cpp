// Name: core_fire.cpp_CSmokeParticle_ctor_FUN_004bf2e0
// Address: 004bf2e0
// Address Range: [[004bf2e0, 004bf2ea]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CSmokeParticle_ctor_FUN_004bf2e0(CSmokeParticle * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c6c80 (004c6c80) at 004c6c97 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_fire_cpp_CSmokeParticle_ctor_FUN_004bf2e0(CSmokeParticle *this_ptr)

{
  this_ptr->active = 0;
  return;
}


// Assembly code:
// 004bf2e0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_CSmokeParticle_ctor_FUN_004bf2e0
//   XREF to: Stack[0x4] (READ)
// 004bf2e4: MOV dword ptr [EAX],0x0
// 004bf2ea: RET
