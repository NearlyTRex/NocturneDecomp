// Name: core_turret.cpp_CTurret_FUN_005e3440
// Address: 005e3440
// Address Range: [[005e3440, 005e34a8]]
// Convention: __cdecl
// Signature: void core_turret.cpp_CTurret_FUN_005e3440(CTurret * this_ptr)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_FUN_005e3440(CTurret *this_ptr)

{
  float fVar1;
  int iVar2;
  float fVar3;
  SInteractionInfo *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030
            ((CDemonActor *)this_ptr,in_stack_00000008);
  if (this_ptr->can_manual_aim == 0) {
    return;
  }
  in_stack_00000008->can_interact = 1;
  iVar2 = *(int *)this_ptr->field12_0x85c;
  in_stack_00000008->yaw_min = 6.2831855;
  in_stack_00000008->yaw_max = -6.2831855;
  in_stack_00000008->reference_data = iVar2;
  fVar3 = -0.5235988f;
  in_stack_00000008->pitch_min = 1.22173f - (this_ptr->base_weapon).base_actor.orient.pitch;
  fVar1 = (this_ptr->base_weapon).base_actor.orient.pitch;
  in_stack_00000008->distance_min = -4.0;
  in_stack_00000008->pitch_max = fVar3 - fVar1;
  in_stack_00000008->distance_max = 0.0;
  return;
}
