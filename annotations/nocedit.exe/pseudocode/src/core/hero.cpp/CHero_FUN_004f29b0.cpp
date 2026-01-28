// Name: core_hero.cpp_CHero_FUN_004f29b0
// Address: 004f29b0
// Address Range: [[004f29b0, 004f2a2d]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_FUN_004f29b0(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_FUN_004f29b0(CHero *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CMotionList *this_ptr_01;
  int desired_state_index;
  float fVar1;
  
  if (((int *)(this_ptr->base).base.validation_magic == &g_ActorMagicNumber) &&
     ((this_ptr->base).model.model_ptr != (CDeformableModel *)0x0)) {
    this_ptr_00 = &(this_ptr->base).model;
    this_ptr_01 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                            (&this_ptr_00->motion_controller);
    desired_state_index = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr_01);
    if (-1 < desired_state_index) {
      fVar1 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                        (&this_ptr_00->motion_controller,desired_state_index);
      if (0.0 < fVar1) {
        core_motion_cpp_CMotionController_setDesiredStateByName_FUN_0052db90
                  (&this_ptr_00->motion_controller,"STAND",1);
      }
    }
  }
  core_charactr_cpp_CCharacter_FUN_0042bf40(&this_ptr->base);
  return;
}
