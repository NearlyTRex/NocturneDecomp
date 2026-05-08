// Name: core_charactr.cpp_CCharacter_applyLookAt_FUN_0042dcd0
// Address: 0042dcd0
// MANUAL RECONSTRUCTION
// Address Range: [[0042dcd0, 0042ddc8] [0060554f, 006055bd] [0060e54c, 0060e56d]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_applyLookAt_FUN_0042dcd0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_applyLookAt_FUN_0042dcd0(CCharacter *this_ptr)

{
  CQuaternion4f *pCVar1;
  CQuaternion4f local_74;
  CQuaternion4f local_34;
  CQuaternion4f local_24;
  CQuaternion4f local_14;

  if (0.0 < this_ptr->look_at_weight) {
    if (this_ptr->look_at_head_bone < 0) {
      g_CurrentFilename = "..\\core\\charactr.cpp";
      g_CurrentLineNumber = 0xde5;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::applyLookAt - never set lookAtHeadBone for actor %s",this_ptr->base.actor_name);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(this_ptr->look_at_pitch,&local_24);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(this_ptr->look_at_yaw,&local_14);
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_14,&local_24,&local_74);
    pCVar1 = (this_ptr->model).bone_transform.pose_data.bone_rotations + this_ptr->look_at_head_bone;
    core_xform_cpp_slerpQuaternion_FUN_005f77e0(pCVar1,&local_74,this_ptr->look_at_weight,&local_34);
    *pCVar1 = local_34;
  }
  return;
}
