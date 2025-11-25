// Name: core_spike.cpp_CSpike_FUN_005b9020
// Address: 005b9020
// Address Range: [[005b9020, 005b902d]]
// Convention: __cdecl
// Signature: void core_spike.cpp_CSpike_FUN_005b9020(CSpike * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040

#include "nocturne.h"

void __cdecl core_spike_cpp_CSpike_FUN_005b9020(CSpike *this_ptr)

{
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base_actor);
  return;
}


// Assembly code:
// 005b9020: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_spike.cpp_CSpike_FUN_005b9020
//   XREF to: Stack[0x4] (READ)
// 005b9024: PUSH EDX
// 005b9025: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 005b902a: ADD ESP,0x4
// 005b902d: RET
