// Name: core_doc.cpp_CDoc_reset_FUN_0045dd30
// Address: 0045dd30
// Address Range: [[0045dd30, 0045dd94]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_reset_FUN_0045dd30(CDoc *this_ptr)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_reset_FUN_0045dd30(CDoc *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_hero_cpp_CHero_reset_FUN_004d02e0(&this_ptr->base);
  this_ptr->ladder_to_descend = (CLadder *)0x0;
  this_ptr->weapon = (CWeapon *)0x0;
  this_ptr->action_pending = 0;
  (this_ptr->base).base.layer_action_index = 0;
  (this_ptr->base).base.layer_action_t = 0.0;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00503950
            (&this_ptr_00->base,"stand",0.0);
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,0,1);
  return;
}
