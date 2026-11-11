// Name: core_confedrt.cpp_FUN_005a1180
// Address: 005a1180
// Address Range: [[005a1180, 005a12c3]]
// Convention: unknown
// Signature: void core_confedrt_cpp_FUN_005a1180(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_confedrt_cpp_FUN_005a1180(CCharacter *param_1)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  CDemonActor *pCVar2;
  int iVar3;
  float fVar4;
  char *pcVar5;
  int unaff_EDI;
  
  pCVar2 = (*(param_1->base).vtable._ub[1].getCarrier)(&param_1->base);
  if (pCVar2 != (CDemonActor *)0x0) {
    iVar3 = *(int *)(param_1[1].base.actor_name + 0x18);
    fVar4 = *(float *)(iVar3 + 0x20) - (param_1->base).location.position.x;
    fVar1 = *(float *)(iVar3 + 0x28) - (param_1->base).location.position.z;
    if (_DAT_005fedb4 < SQRT(fVar1 * fVar1 + fVar4 * fVar4)) {
      pcVar5 = param_1[1].base.create_event + 0x20;
      unkaddr_0059d350_cpp_FUN_0059dcb0(pcVar5,0x3f800000);
      unkaddr_0059d350_cpp_FUN_0059d8e0(pcVar5,"BChasing" + 1);
    }
    else {
      core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850(param_1,(CVector3f *)(iVar3 + 0x20))
      ;
      fVar4 = param_1[1].model.bone_transform.pose_data.bone_rotations[0x4a].w;
      if (fVar4 == 0.0) {
        unaff_EDI = 5;
      }
      else if (fVar4 == 1.4013e-45) {
        unaff_EDI = 9;
      }
      this_ptr = &param_1->model;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr->base,unaff_EDI,1);
      iVar3 = core_motion_cpp_FUN_005035c0(this_ptr);
      if (*(int *)(iVar3 + 0x24) == 5) {
        fVar4 = core_motion_cpp_FUN_00503e60(&this_ptr->base);
        if ((float)_DAT_005efccf < fVar4) {
          fVar4 = (float)core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
          param_1[1].model.bone_transform.pose_data.bone_rotations[0x4a].w = fVar4;
        }
      }
      iVar3 = core_motion_cpp_FUN_005035c0(&param_1->model);
      if (*(int *)(iVar3 + 0x24) == 9) {
        fVar4 = core_motion_cpp_FUN_00503e60(&(param_1->model).base);
        if ((float)_DAT_005efccf < fVar4) {
          fVar4 = (float)core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
          param_1[1].model.bone_transform.pose_data.bone_rotations[0x4a].w = fVar4;
          return;
        }
      }
    }
  }
  return;
}
