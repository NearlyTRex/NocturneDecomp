// Name: core_doc.cpp_CDoc_reset_FUN_004763c0
// Address: 004763c0
// Address Range: [[004763c0, 00476424]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_reset_FUN_004763c0(CDoc *this_ptr)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_reset_FUN_004763c0(CDoc *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_hero_cpp_CHero_reset_FUN_004ec570(&this_ptr->base);
  this_ptr->ladder_to_descend = (CLadder *)0x0;
  this_ptr->weapon = (CWeapon *)0x0;
  (this_ptr->base).action_pending = 0;
  (this_ptr->base).base.layer_action_index = 0;
  (this_ptr->base).base.layer_action_t = 0.0;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00524ae0
            (&this_ptr_00->base,"stand",0.0);
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,0,1);
  return;
}
