// Name: core_melee.cpp_FUN_0050ec10
// Address: 0050ec10
// Address Range: [[0050ec10, 0050ecc2]]
// Convention: unknown
// Signature: undefined core_melee.cpp_FUN_0050ec10()

#include "nocturne.h"

/* Signature: byte actors_weapon_melee.cpp_FUN_0050ec10(uint param_1, uint
   param_2) */

void core_melee_cpp_FUN_0050ec10(void)

{
  CDemonActor_vtable *pCVar1;
  float fVar2;
  CVector3f *input_local_point;
  CWeapon *in_stack_00000004;
  float in_stack_00000008;
  CVector3f CStack_14;
  
  core_weapon_cpp_CWeapon_process_FUN_005ee110(in_stack_00000004);
  if ((0 < *(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18)) &&
     (in_stack_00000008 =
           *(float *)(in_stack_00000004[1].base_actor.actor_name + 0x1c) - in_stack_00000008,
     *(float *)(in_stack_00000004[1].base_actor.actor_name + 0x1c) = in_stack_00000008,
     in_stack_00000008 <= 0.0)) {
    fVar2 = in_stack_00000004[1].base_actor.location.position.x * (float)1.1499999999999999;
    pCVar1 = (in_stack_00000004->base_actor).vtable;
    *(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18) =
         *(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18) + -1;
    in_stack_00000004[1].base_actor.location.position.x = fVar2;
    *(float *)(in_stack_00000004[1].base_actor.actor_name + 0x1c) = fVar2;
    input_local_point = (CVector3f *)(*pCVar1[1].renderOpaque)(&in_stack_00000004->base_actor);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&in_stack_00000004->base_actor,&CStack_14,input_local_point);
    core_gore_cpp_FUN_004edaa0();
    return;
  }
  return;
}
