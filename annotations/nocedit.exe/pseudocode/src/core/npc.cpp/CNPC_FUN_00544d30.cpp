// Name: core_npc.cpp_CNPC_FUN_00544d30
// Address: 00544d30
// Address Range: [[00544d30, 00544e0c]]
// Convention: __cdecl
// Signature: void core_npc.cpp_CNPC_FUN_00544d30(CNPC * this_ptr)

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_FUN_00544d30(CNPC *this_ptr)

{
  CDemonActor_vtable *pCVar1;
  float fVar2;
  CDemonActorType *pCVar3;
  int iVar4;
  int in_stack_00000008;
  
  pCVar3 = (*((this_ptr->base_character).base_actor.vtable._ub)->getActorType)
                     ((CDemonActor *)this_ptr);
  if (pCVar3 == &g_CNPCClassInfo) {
    fVar2 = (this_ptr->base_character).hit_points - *(float *)(in_stack_00000008 + 4);
    (this_ptr->base_character).hit_points = fVar2;
    if (fVar2 <= 0.0) {
      pCVar1 = (this_ptr->base_character).base_actor.vtable._ub;
      (this_ptr->base_character).hit_points = 0.0;
      (*pCVar1->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
      core_charactr_cpp_CCharacter_FUN_0042d060(&this_ptr->base_character);
      core_npc_cpp_FUN_00544c50();
    }
    else if ((0.0 < *(float *)(in_stack_00000008 + 4)) &&
            ((this_ptr->base_character).grabbed_by == (CDemonActor *)0x0)) {
      iVar4 = core_npc_cpp_FUN_00544c50();
      if (iVar4 == 0) {
        iVar4 = core_npc_cpp_FUN_00544c50();
        if (iVar4 == 0) {
          core_npc_cpp_FUN_00544c50();
          core_charactr_cpp_CCharacter_FUN_0042c3c0(&this_ptr->base_character);
          return;
        }
      }
    }
  }
  core_charactr_cpp_CCharacter_FUN_0042c3c0(&this_ptr->base_character);
  return;
}
