// Name: core_barrier.cpp_CBarrier_FUN_00414210
// Address: 00414210
// Address Range: [[00414210, 0041421a]]
// Convention: __cdecl
// Signature: void core_barrier.cpp_CBarrier_FUN_00414210(CBarrier * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_FUN_00414210(CBarrier *this_ptr)

{
  int iVar1;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base_actor);
  iVar1 = *(int *)(g_CDemonMissionPtr->field0_0x0 + 4);
  (this_ptr->base_actor).field14_0xf8 = 0;
  (this_ptr->base_actor).is_transparent = iVar1;
  return;
}


// Assembly code:
// 00414210: PUSH EBX
//   Label: core_barrier.cpp_CBarrier_FUN_00414210
// 00414211: MOV EBX,dword ptr [ESP + 0x8]
// 00414215: PUSH EBX
// 00414216: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
