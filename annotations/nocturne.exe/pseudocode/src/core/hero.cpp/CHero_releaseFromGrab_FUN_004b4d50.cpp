// Name: core_hero.cpp_CHero_releaseFromGrab_FUN_004b4d50
// Address: 004b4d50
// Address Range: [[004b4d50, 004b4dcd]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_releaseFromGrab_FUN_004b4d50(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_releaseFromGrab_FUN_004b4d50(CHero *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CMotionList *this_ptr_01;
  float fVar1;
  char *state_name;
  int iVar2;
  
  if (((byte *)(this_ptr->base).base.validation_magic == &DAT_0078a123) &&
     ((this_ptr->base).model.model_ptr != (CDeformableModel *)0x0)) {
    iVar2 = 0;
    state_name = "GETGRABBED";
    this_ptr_00 = &(this_ptr->base).model;
    this_ptr_01 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                            (&this_ptr_00->motion_controller);
    iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0(this_ptr_01,state_name,iVar2);
    if (-1 < iVar2) {
      fVar1 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                        (&this_ptr_00->motion_controller,iVar2);
      if (0.0 < fVar1) {
        core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004e1740
                  (&this_ptr_00->motion_controller,"STAND",1);
      }
    }
  }
  core_charactr_cpp_CCharacter_releaseFromGrab_FUN_004280b0(&this_ptr->base);
  return;
}
