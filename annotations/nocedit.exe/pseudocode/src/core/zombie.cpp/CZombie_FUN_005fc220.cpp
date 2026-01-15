// Name: core_zombie.cpp_CZombie_FUN_005fc220
// Address: 005fc220
// Address Range: [[005fc220, 005fc4ea]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_CZombie_FUN_005fc220()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_enemy_zombie.cpp_CZombie_FUN_005fc220(CZombie* param_1, uint
   param_2) */

void core_zombie_cpp_CZombie_FUN_005fc220(void)

{
  float fVar1;
  int iVar2;
  CMotionList *pCVar3;
  CCharacter *in_stack_00000004;
  float *in_stack_00000008;
  float local_14;
  
  if ((0.0 < in_stack_00000008[0xb]) && (*in_stack_00000008 == -NAN)) {
    iVar2 = crt_stdlib_c_rand_FUN_005feb5c();
    switch(iVar2 % 6) {
    case 0:
      pCVar3 = (CMotionList *)in_stack_00000004[1].base_actor.vtable;
      break;
    case 1:
      pCVar3 = in_stack_00000004[1].model.motion_controller.motion_list_ptr;
      break;
    case 2:
      pCVar3 = (CMotionList *)in_stack_00000004[1].model.motion_controller.current_motion_index;
      break;
    case 3:
      pCVar3 = (CMotionList *)in_stack_00000004[1].model.motion_controller.current_frame_number;
      break;
    case 4:
      pCVar3 = (CMotionList *)in_stack_00000004[1].model.motion_controller.tween_progress;
      break;
    case 5:
      pCVar3 = (CMotionList *)in_stack_00000004[1].model.motion_controller.tween_speed;
      break;
    default:
      goto switchD_005fc256_default;
    }
    *in_stack_00000008 = (float)pCVar3;
  }
switchD_005fc256_default:
  pCVar3 = (CMotionList *)*in_stack_00000008;
  if (((((pCVar3 == (CMotionList *)in_stack_00000004[1].base_actor.vtable) ||
        (pCVar3 == in_stack_00000004[1].model.motion_controller.motion_list_ptr)) ||
       (pCVar3 == (CMotionList *)in_stack_00000004[1].model.motion_controller.current_motion_index))
      || ((pCVar3 == (CMotionList *)
                     in_stack_00000004[1].model.motion_controller.current_frame_number ||
          (pCVar3 == (CMotionList *)in_stack_00000004[1].model.motion_controller.tween_speed)))) ||
     (pCVar3 == (CMotionList *)in_stack_00000004[1].model.motion_controller.tween_progress)) {
    local_14 = in_stack_00000008[0xb];
    if (in_stack_00000004[1].model.motion_controller.tween_progress == *in_stack_00000008) {
      local_14 = 0.05;
    }
    if (in_stack_00000004[1].model.motion_controller.tween_speed == *in_stack_00000008) {
      local_14 = 0.02;
    }
    if (g_CGamePtr->field57_0x1e0 != 0) {
      local_14 = 1.0;
    }
    if (g_CGamePtr->blood_flag == 0) {
      local_14 = 0.0;
    }
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(local_14);
    if (iVar2 != 0) {
      core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
      core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      if ((CDemonActor_vtable *)*in_stack_00000008 == in_stack_00000004[1].base_actor.vtable) {
        core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      }
      if ((float)in_stack_00000004[1].model.motion_controller.current_motion_index ==
          *in_stack_00000008) {
        core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      }
      if (in_stack_00000004[1].model.motion_controller.tween_speed == *in_stack_00000008) {
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
        in_stack_00000008[1] = 9999.0;
      }
      in_stack_00000008[2] = in_stack_00000008[2] * (float)_DAT_006589c5;
      if (in_stack_00000004[1].model.motion_controller.tween_type < 0) {
        in_stack_00000008[1] = 999.0;
      }
    }
  }
  fVar1 = *in_stack_00000008;
  if (fVar1 == in_stack_00000004[1].model.motion_controller.tween_progress) {
    in_stack_00000008[1] = in_stack_00000008[1] * (float)_DAT_006589d5;
    return;
  }
  if ((fVar1 != (float)in_stack_00000004[1].model.motion_controller.tween_type) &&
     (fVar1 != in_stack_00000004[1].model.motion_controller.tween_speed)) {
    in_stack_00000008[1] = in_stack_00000008[1] * (float)_DAT_006589cd;
    return;
  }
  in_stack_00000008[1] = in_stack_00000008[1];
  return;
}
