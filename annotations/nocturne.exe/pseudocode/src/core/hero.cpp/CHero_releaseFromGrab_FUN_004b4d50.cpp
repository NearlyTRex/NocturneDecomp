// Name: core_hero.cpp_CHero_releaseFromGrab_FUN_004b4d50
// Address: 004b4d50
// Address Range: [[004b4d50, 004b4dcd]]
// Convention: unknown
// Signature: void core_hero_cpp_CHero_releaseFromGrab_FUN_004b4d50(CCharacter *param_1)

#include "nocturne.h"

void core_hero_cpp_CHero_releaseFromGrab_FUN_004b4d50(CCharacter *param_1)

{
  CDeformableModelInstance *this_ptr;
  CMotionList *this_ptr_00;
  float fVar1;
  char *state_name;
  int iVar2;
  
  if (((byte *)(param_1->base).validation_magic == &DAT_0078a123) &&
     ((param_1->model).model_ptr != (CDeformableModel *)0x0)) {
    iVar2 = 0;
    state_name = "GETGRABBED";
    this_ptr = &param_1->model;
    this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                            (&this_ptr->motion_controller);
    iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0(this_ptr_00,state_name,iVar2);
    if (-1 < iVar2) {
      fVar1 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                               (this_ptr,iVar2);
      if (0.0 < fVar1) {
        core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004e1740
                  (&this_ptr->motion_controller,"STAND",1);
      }
    }
  }
  core_charactr_cpp_CCharacter_releaseFromGrab_FUN_004280b0(param_1);
  return;
}
