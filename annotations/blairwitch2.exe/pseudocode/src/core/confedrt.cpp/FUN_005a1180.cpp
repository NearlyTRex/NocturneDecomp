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
  byte *puVar5;
  int unaff_EDI;
  
  pCVar2 = (*(param_1->base).vtable._ub[1].getCarrier)(&param_1->base);
  if (pCVar2 != (CDemonActor *)0x0) {
    iVar3 = *(int *)(param_1[1].base.actor_name + 0x18);
    fVar4 = *(float *)(iVar3 + 0x20) - *(float *)&(param_1->base).field_0x20;
    fVar1 = *(float *)(iVar3 + 0x28) - *(float *)&(param_1->base).field_0x28;
    if (_DAT_005fedb4 < SQRT(fVar1 * fVar1 + fVar4 * fVar4)) {
      puVar5 = &param_1[1].base.field_0x98;
      unkaddr_0059d350_cpp_FUN_0059dcb0(puVar5,0x3f800000);
      unkaddr_0059d350_cpp_FUN_0059d8e0(puVar5,"BChasing" + 1);
    }
    else {
      core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850(param_1,(CVector3f *)(iVar3 + 0x20))
      ;
      iVar3 = *(int *)&param_1[1].model.field_0xb50;
      if (iVar3 == 0) {
        unaff_EDI = 5;
      }
      else if (iVar3 == 1) {
        unaff_EDI = 9;
      }
      this_ptr = &param_1->model;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)this_ptr,unaff_EDI,1);
      iVar3 = core_motion_cpp_FUN_005035c0(this_ptr);
      if (*(int *)(iVar3 + 0x24) == 5) {
        fVar4 = core_motion_cpp_FUN_00503e60((CMotionController *)this_ptr);
        if ((float)_DAT_005efccf < fVar4) {
          iVar3 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
          *(int *)&param_1[1].model.field_0xb50 = iVar3;
        }
      }
      iVar3 = core_motion_cpp_FUN_005035c0(&param_1->model);
      if (*(int *)(iVar3 + 0x24) == 9) {
        fVar4 = core_motion_cpp_FUN_00503e60((CMotionController *)&param_1->model);
        if ((float)_DAT_005efccf < fVar4) {
          iVar3 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
          *(int *)&param_1[1].model.field_0xb50 = iVar3;
          return;
        }
      }
    }
  }
  return;
}
