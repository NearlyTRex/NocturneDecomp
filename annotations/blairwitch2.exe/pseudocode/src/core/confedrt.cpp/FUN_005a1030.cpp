// Name: core_confedrt.cpp_FUN_005a1030
// Address: 005a1030
// Address Range: [[005a1030, 005a117c]]
// Convention: unknown
// Signature: void core_confedrt_cpp_FUN_005a1030(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_confedrt_cpp_FUN_005a1030(CCharacter *param_1)

{
  char *pcVar1;
  uint uVar2;
  float fVar3;
  CDemonActor *pCVar4;
  int iVar5;
  
  pCVar4 = (*(param_1->base).vtable._ub[1].getCarrier)(&param_1->base);
  if (pCVar4 != (CDemonActor *)0x0) {
    pcVar1 = param_1[1].base.create_event + 0x20;
    if (param_1[1].model.bone_transform.pose_data.bone_rotations[0x49].w == 0.0) {
      param_1[1].model.rest_bone_scales[0x5b] = _DAT_005fedb4;
      param_1[1].model.rest_bone_scales[0x5c] = 0.0;
      core_muzzle_cpp_FUN_0059d7f0(pcVar1,"ChaseComplete","MeleeAttack");
      core_muzzle_cpp_FUN_0059d8e0(pcVar1,"Chasing");
      return;
    }
    iVar5 = core_motion_cpp_FUN_005035c0(&param_1->model);
    fVar3 = _DAT_005fedb4;
    uVar2 = *(uint *)(iVar5 + 0x24);
    if (uVar2 < 3) {
      if (uVar2 != 2) {
LAB_005a1166:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&(param_1->model).base,2,1);
        return;
      }
    }
    else {
      if (uVar2 < 4) {
        if ((param_1->model).base.current_frame_number <= _DAT_005efcbb) {
          return;
        }
        param_1[1].model.rest_bone_scales[0x5c] = 5.0;
        param_1[1].model.rest_bone_scales[0x5b] = fVar3;
        core_muzzle_cpp_FUN_0059d7f0(pcVar1,"ChaseComplete","MeleeAttack");
        core_muzzle_cpp_FUN_0059d8e0(pcVar1,"Chasing");
        return;
      }
      if (uVar2 != 0xd) goto LAB_005a1166;
    }
    core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
              (param_1,(CVector3f *)(*(int *)(param_1[1].base.actor_name + 0x18) + 0x20));
    if (_DAT_005efcbf < (param_1->model).base.current_frame_number) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&(param_1->model).base,3,1);
      core_confedrt_cpp_FUN_005a14e0(param_1);
      fVar3 = param_1[1].model.bone_transform.pose_data.bone_rotations[0x49].w;
      param_1[1].model.bone_transform.pose_data.bone_rotations[0x48].z = 0.0;
      param_1[1].model.bone_transform.pose_data.bone_rotations[0x49].w = (float)((int)fVar3 + -1);
      return;
    }
  }
  return;
}
