// Name: core_union.cpp_FUN_005a4fe0
// Address: 005a4fe0
// Address Range: [[005a4fe0, 005a5123]]
// Convention: unknown
// Signature: void core_union_cpp_FUN_005a4fe0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_union_cpp_FUN_005a4fe0(CCharacter *param_1)

{
  CDeformableModelInstance *this_ptr;
  int iVar1;
  float fVar2;
  CDemonActor *pCVar3;
  SMotion *pSVar4;
  float fVar5;
  char *pcVar6;
  int unaff_EDI;
  
  pCVar3 = (*(param_1->base).vtable._ub[1].getCarrier)(&param_1->base);
  if (pCVar3 != (CDemonActor *)0x0) {
    iVar1 = *(int *)(param_1[1].base.actor_name + 0x18);
    fVar5 = *(float *)(iVar1 + 0x20) - (param_1->base).location.position.x;
    fVar2 = *(float *)(iVar1 + 0x28) - (param_1->base).location.position.z;
    if (_DAT_005ff8f4 < SQRT(fVar2 * fVar2 + fVar5 * fVar5)) {
      pcVar6 = param_1[1].base.create_event + 0x20;
      core_muzzle_cpp_FUN_0059dcb0(pcVar6,0x3f800000);
      core_muzzle_cpp_FUN_0059d8e0(pcVar6,"BChasing" + 1);
    }
    else {
      core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850(param_1,(CVector3f *)(iVar1 + 0x20))
      ;
      fVar5 = param_1[1].model.bone_transform.pose_data.bone_rotations[0x49].z;
      if (fVar5 == 0.0) {
        unaff_EDI = 5;
      }
      else if (fVar5 == 1.4013e-45) {
        unaff_EDI = 9;
      }
      this_ptr = &param_1->model;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr->base,unaff_EDI,1);
      pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&this_ptr->base);
      if (pSVar4->state_index == 5) {
        fVar5 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                          (&this_ptr->base);
        if ((float)_DAT_005f0562 < fVar5) {
          fVar5 = (float)core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
          param_1[1].model.bone_transform.pose_data.bone_rotations[0x49].z = fVar5;
        }
      }
      pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                         (&(param_1->model).base);
      if (pSVar4->state_index == 9) {
        fVar5 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                          (&(param_1->model).base);
        if ((float)_DAT_005f0562 < fVar5) {
          fVar5 = (float)core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
          param_1[1].model.bone_transform.pose_data.bone_rotations[0x49].z = fVar5;
          return;
        }
      }
    }
  }
  return;
}
