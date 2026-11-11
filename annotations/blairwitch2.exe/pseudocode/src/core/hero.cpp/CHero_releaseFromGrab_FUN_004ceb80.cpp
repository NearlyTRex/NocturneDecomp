// Name: core_hero.cpp_CHero_releaseFromGrab_FUN_004ceb80
// Address: 004ceb80
// Address Range: [[004ceb80, 004cec2e]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_releaseFromGrab_FUN_004ceb80(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_releaseFromGrab_FUN_004ceb80(CHero *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonActor *pCVar1;
  CMotionList *this_ptr_01;
  float fVar2;
  char *state_name;
  int iVar3;
  
  pCVar1 = (this_ptr->base).grabbed_by;
  if (pCVar1 != (CDemonActor *)0x0) {
    engine_console_cpp_FUN_00436710
              (g_CConsolePtr,"CHero::stopGettingGrabbed by %s, type %d\n",pCVar1,
               (this_ptr->base).grabbed_type);
  }
  if (((byte *)(this_ptr->base).base.validation_magic == &DAT_0078a123) &&
     ((this_ptr->base).model.model_ptr != (CDeformableModel *)0x0)) {
    iVar3 = 0;
    state_name = "GETGRABBED";
    this_ptr_00 = &(this_ptr->base).model;
    this_ptr_01 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860(&this_ptr_00->base);
    iVar3 = core_motion_cpp_CMotionList_findStateIndex_FUN_00502fa0(this_ptr_01,state_name,iVar3);
    if (-1 < iVar3) {
      fVar2 = (float)core_motion_cpp_FUN_005038a0(this_ptr_00,iVar3);
      if (0.0 < fVar2) {
        core_motion_cpp_CMotionController_setDesiredStateByName_FUN_005036b0
                  (&this_ptr_00->base,"STAND",1);
      }
    }
  }
  core_charactr_cpp_CCharacter_releaseFromGrab_FUN_00427a10(&this_ptr->base);
  return;
}
