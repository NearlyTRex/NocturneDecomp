// Name: core_zombie.cpp_CZombie_FUN_005fc220
// Address: 005fc220
// Address Range: [[005fc220, 005fc4ea]]
// Convention: unknown
// Signature: void core_zombie_cpp_CZombie_FUN_005fc220(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_zombie.cpp_CZombie_FUN_005fc220(CZombie* param_1, uint
   param_2) */

void core_zombie_cpp_CZombie_FUN_005fc220(void)

{
  CMotionList *pCVar1;
  CDemonActor_vtable *pCVar2;
  int iVar3;
  CDemonActor_union_vtable CVar4;
  CCharacter *in_stack_00000004;
  CDemonActor_union_vtable *in_stack_00000008;
  CDemonActor_union_vtable local_14;
  
  if ((0.0 < (float)in_stack_00000008[0xb]) &&
     (in_stack_00000008->_ub == (CDemonActor_vtable *)0xffffffff)) {
    iVar3 = crt_stdlib_c_rand_FUN_005feb5c();
    switch(iVar3 % 6) {
    case 0:
      CVar4 = in_stack_00000004[1].base.vtable;
      break;
    case 1:
      CVar4 = (CDemonActor_union_vtable)in_stack_00000004[1].model.motion_controller.motion_list_ptr
      ;
      break;
    case 2:
      CVar4 = (CDemonActor_union_vtable)
              in_stack_00000004[1].model.motion_controller.current_motion_index;
      break;
    case 3:
      CVar4 = (CDemonActor_union_vtable)
              in_stack_00000004[1].model.motion_controller.current_frame_number;
      break;
    case 4:
      CVar4 = (CDemonActor_union_vtable)in_stack_00000004[1].model.motion_controller.tween_progress;
      break;
    case 5:
      CVar4 = (CDemonActor_union_vtable)in_stack_00000004[1].model.motion_controller.tween_speed;
      break;
    default:
      goto switchD_005fc256_default;
    }
    *in_stack_00000008 = CVar4;
  }
switchD_005fc256_default:
  pCVar1 = (CMotionList *)in_stack_00000008->_ub;
  if (((((pCVar1 == (CMotionList *)in_stack_00000004[1].base.vtable._ub) ||
        (pCVar1 == in_stack_00000004[1].model.motion_controller.motion_list_ptr)) ||
       (pCVar1 == (CMotionList *)in_stack_00000004[1].model.motion_controller.current_motion_index))
      || ((pCVar1 == (CMotionList *)
                     in_stack_00000004[1].model.motion_controller.current_frame_number ||
          (pCVar1 == (CMotionList *)in_stack_00000004[1].model.motion_controller.tween_speed)))) ||
     (pCVar1 == (CMotionList *)in_stack_00000004[1].model.motion_controller.tween_progress)) {
    local_14 = in_stack_00000008[0xb];
    if ((CDemonActor_vtable *)in_stack_00000004[1].model.motion_controller.tween_progress ==
        in_stack_00000008->_ub) {
      local_14._ub = (CDemonActor_vtable *)0x3d4ccccd;
    }
    if ((CDemonActor_vtable *)in_stack_00000004[1].model.motion_controller.tween_speed ==
        in_stack_00000008->_ub) {
      local_14._ub = (CDemonActor_vtable *)0x3ca3d70a;
    }
    if (g_CGamePtr->unk4 != 0) {
      local_14 = (CDemonActor_union_vtable)0x3f800000;
    }
    if (g_CGamePtr->blood_flag == 0) {
      local_14._ub = (CDemonActor_vtable *)0x0;
    }
    iVar3 = core_actor_cpp_randomChance_FUN_0040cd10((float)local_14);
    if (iVar3 != 0) {
      core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
      core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      if (in_stack_00000008->_ub == in_stack_00000004[1].base.vtable._ub) {
        core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      }
      if ((CDemonActor_vtable *)in_stack_00000004[1].model.motion_controller.current_motion_index ==
          in_stack_00000008->_ub) {
        core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      }
      if ((CDemonActor_vtable *)in_stack_00000004[1].model.motion_controller.tween_speed ==
          in_stack_00000008->_ub) {
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      }
      core_charactr_cpp_CCharacter_FUN_0042f300(in_stack_00000004);
      core_bodypart_cpp_FUN_0041a050();
      if ((in_stack_00000004->model).part_visibility_flags
          [(int)in_stack_00000004[1].model.motion_controller.tween_progress] == 0) {
        in_stack_00000008[1]._ub = (CDemonActor_vtable *)0x461c3c00;
      }
      in_stack_00000008[2] = (CDemonActor_vtable *)(in_stack_00000008[2] * (float)7);
      if (in_stack_00000004[1].model.motion_controller.tween_type < 0) {
        in_stack_00000008[1]._ub = (CDemonActor_vtable *)0x4479c000;
      }
    }
  }
  pCVar2 = in_stack_00000008->_ub;
  if (pCVar2 == (CDemonActor_vtable *)in_stack_00000004[1].model.motion_controller.tween_progress) {
    in_stack_00000008[1] = (CDemonActor_vtable *)(in_stack_00000008[1] * (float)2.5);
    return;
  }
  if ((pCVar2 != (CDemonActor_vtable *)in_stack_00000004[1].model.motion_controller.tween_type) &&
     (pCVar2 != (CDemonActor_vtable *)in_stack_00000004[1].model.motion_controller.tween_speed)) {
    in_stack_00000008[1] = (CDemonActor_vtable *)(in_stack_00000008[1] * (float)0.5);
    return;
  }
  in_stack_00000008[1] = in_stack_00000008[1];
  return;
}
