// Name: core_hero.cpp_FUN_004d2c20
// Address: 004d2c20
// Address Range: [[004d2c20, 004d2cce]]
// Convention: unknown
// Signature: void core_hero_cpp_FUN_004d2c20(CCharacter *param_1)

#include "nocturne.h"

void core_hero_cpp_FUN_004d2c20(CCharacter *param_1)

{
  CDeformableModelInstance *this_ptr;
  CMotionList *this_ptr_00;
  float fVar1;
  char *state_name;
  int iVar2;
  
  if (param_1->grabbed_by != (CDemonActor *)0x0) {
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"CHero::stopGettingGrabbed by %s, type %d\n",param_1->grabbed_by,
               param_1->grabbed_type);
  }
  if (((byte *)(param_1->base).validation_magic == &DAT_0078a123) &&
     ((param_1->model).model_ptr != (CDeformableModel *)0x0)) {
    iVar2 = 0;
    state_name = "GETGRABBED";
    this_ptr = &param_1->model;
    this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310(&this_ptr->base);
    iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_004fba50(this_ptr_00,state_name,iVar2);
    if (-1 < iVar2) {
      fVar1 = (float)core_motion_cpp_FUN_004fc350(this_ptr,iVar2);
      if (0.0 < fVar1) {
        core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
                  (&this_ptr->base,"STAND",1);
      }
    }
  }
  core_charactr_cpp_CCharacter_releaseFromGrab_FUN_004307c0(param_1);
  return;
}
