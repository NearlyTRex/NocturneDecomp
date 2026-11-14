// Name: core_hero.cpp_CHero_releaseFromGrab_FUN_004d2c20
// Address: 004d2c20
// Address Range: [[004d2c20, 004d2cce]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_releaseFromGrab_FUN_004d2c20(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_releaseFromGrab_FUN_004d2c20(CHero *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CMotionList *this_ptr_01;
  float fVar1;
  char *state_name;
  int iVar2;
  
  if ((this_ptr->base).grabbed_by != (CDemonActor *)0x0) {
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"CHero::stopGettingGrabbed by %s, type %d\n");
  }
  if (((byte *)(this_ptr->base).base.validation_magic == &DAT_0078a123) &&
     ((this_ptr->base).model.model_ptr != (CDeformableModel *)0x0)) {
    iVar2 = 0;
    state_name = "GETGRABBED";
    this_ptr_00 = &(this_ptr->base).model;
    this_ptr_01 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310(&this_ptr_00->base);
    iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_004fba50(this_ptr_01,state_name,iVar2);
    if (-1 < iVar2) {
      fVar1 = (float)core_motion_cpp_FUN_004fc350(this_ptr_00,iVar2);
      if (0.0 < fVar1) {
        core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
                  (&this_ptr_00->base,"STAND",1);
      }
    }
  }
  core_charactr_cpp_CCharacter_releaseFromGrab_FUN_004307c0(&this_ptr->base);
  return;
}
