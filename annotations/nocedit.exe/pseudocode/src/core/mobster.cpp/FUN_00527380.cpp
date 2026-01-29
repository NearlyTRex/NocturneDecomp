// Name: core_mobster.cpp_FUN_00527380
// Address: 00527380
// Address Range: [[00527380, 0052773b]]
// Convention: unknown
// Signature: void core_mobster_cpp_FUN_00527380(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_mobster.cpp_FUN_00527380(uint param_1, uint
   param_2) */

void core_mobster_cpp_FUN_00527380(void)

{
  int iVar1;
  float fVar2;
  CCharacter *in_stack_00000004;
  float *in_stack_00000008;
  float local_1c;
  
  if ((0.0 < in_stack_00000008[0xb]) && (*in_stack_00000008 == -NAN)) {
    iVar1 = rand();
    switch(iVar1 % 6) {
    case 0:
      fVar2 = in_stack_00000004[1].base.previous_transform_state.orientation.z;
      break;
    case 1:
      fVar2 = (float)in_stack_00000004[1].base.previous_transform_state.dirty_flags;
      break;
    case 2:
      fVar2 = (float)in_stack_00000004[1].base.unk13;
      break;
    case 3:
      fVar2 = (float)in_stack_00000004[1].base.unk14;
      break;
    case 4:
      fVar2 = (float)in_stack_00000004[1].model.motion_controller.tween_type;
      break;
    case 5:
      fVar2 = in_stack_00000004[1].model.motion_controller.current_frame_number;
      break;
    default:
      goto switchD_005273b9_default;
    }
    *in_stack_00000008 = fVar2;
  }
switchD_005273b9_default:
  fVar2 = *in_stack_00000008;
  if (((((fVar2 != in_stack_00000004[1].base.previous_transform_state.orientation.z) &&
        (fVar2 != (float)in_stack_00000004[1].base.previous_transform_state.dirty_flags)) &&
       (fVar2 != (float)in_stack_00000004[1].base.unk13)) &&
      ((fVar2 != (float)in_stack_00000004[1].base.unk14 &&
       (fVar2 != in_stack_00000004[1].model.motion_controller.current_frame_number)))) &&
     (fVar2 != (float)in_stack_00000004[1].model.motion_controller.tween_type)) goto LAB_0052761a;
  if (in_stack_00000004[1].model.motion_controller.current_frame_number == *in_stack_00000008) {
    fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
    if ((float)0.33300000000000002 <= fVar2) {
      if (0.66600000000000004 <= (double)fVar2) goto LAB_00527413;
      fVar2 = (float)in_stack_00000004[1].base.unk13;
    }
    else {
      fVar2 = in_stack_00000004[1].base.previous_transform_state.orientation.z;
    }
    *in_stack_00000008 = fVar2;
  }
LAB_00527413:
  local_1c = in_stack_00000008[0xb];
  if ((float)in_stack_00000004[1].model.motion_controller.tween_type == *in_stack_00000008) {
    local_1c = 0.05;
  }
  if (in_stack_00000004[1].model.motion_controller.current_frame_number == *in_stack_00000008) {
    local_1c = 0.06;
  }
  if (g_CGamePtr->unk4 != 0) {
    local_1c = 1.0;
  }
  if (g_CGamePtr->blood_flag == 0) {
    local_1c = 0.0;
  }
  iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(local_1c);
  if (iVar1 != 0) {
    core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
    core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
    if (*in_stack_00000008 == in_stack_00000004[1].base.previous_transform_state.orientation.z) {
      core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
    }
    if ((float)in_stack_00000004[1].base.unk13 == *in_stack_00000008) {
      core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
    }
    if (in_stack_00000004[1].model.motion_controller.current_frame_number == *in_stack_00000008) {
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      (*(((in_stack_00000004->base).vtable._uc)->_uc).cfunc21)();
      (*(((in_stack_00000004->base).vtable._uc)->_uc).cfunc21)();
    }
    core_charactr_cpp_CCharacter_FUN_0042f300(in_stack_00000004);
    core_bodypart_cpp_FUN_0041a050();
    if ((in_stack_00000004->model).part_visibility_flags
        [in_stack_00000004[1].model.motion_controller.tween_type] == 0) {
      in_stack_00000008[1] = 9999.0;
    }
    in_stack_00000008[2] = in_stack_00000008[2] * (float)7;
    if ((*in_stack_00000008 == (float)in_stack_00000004[1].base.unk13) ||
       (*in_stack_00000008 == (float)in_stack_00000004[1].base.unk14)) {
      (*(((in_stack_00000004->base).vtable._uc)->_uc).cfunc21)();
      (*(((in_stack_00000004->base).vtable._uc)->_uc).cfunc21)();
    }
    if ((*in_stack_00000008 == in_stack_00000004[1].base.previous_transform_state.orientation.z) ||
       (*in_stack_00000008 == (float)in_stack_00000004[1].base.previous_transform_state.dirty_flags)
       ) {
      (*(((in_stack_00000004->base).vtable._uc)->_uc).cfunc21)();
    }
  }
LAB_0052761a:
  fVar2 = *in_stack_00000008;
  if (fVar2 == (float)in_stack_00000004[1].model.motion_controller.tween_type) {
    in_stack_00000008[1] = in_stack_00000008[1] * (float)2.5;
    return;
  }
  if ((fVar2 != (float)in_stack_00000004[1].model.motion_controller.current_motion_index) &&
     (fVar2 != in_stack_00000004[1].model.motion_controller.current_frame_number)) {
    in_stack_00000008[1] = in_stack_00000008[1] * (float)0.5;
    return;
  }
  in_stack_00000008[1] = in_stack_00000008[1];
  return;
}
