// Name: core_boxactor.cpp_CBoxActor_FUN_00422640
// Address: 00422640
// Address Range: [[00422640, 004226c2]]
// Convention: __cdecl
// Signature: void core_boxactor.cpp_CBoxActor_FUN_00422640(CBoxActor * this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_FUN_00422640(CBoxActor *this_ptr)

{
  COrientation *pCVar1;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  
  (this_ptr->base_actor).location.position.x = *in_stack_00000008;
  (this_ptr->base_actor).location.position.y = in_stack_00000008[1];
  (this_ptr->base_actor).location.position.z = in_stack_00000008[2];
  pCVar1 = &(this_ptr->base_actor).orient;
  if (pCVar1 != (COrientation *)in_stack_0000000c) {
    pCVar1->pitch = *in_stack_0000000c;
    (this_ptr->base_actor).orient.bank = in_stack_0000000c[1];
    (this_ptr->base_actor).orient.heading = in_stack_0000000c[2];
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base_actor);
  if ((float *)&this_ptr->sim_box != in_stack_00000008) {
    this_ptr->sim_box = (int)*in_stack_00000008;
    *(float *)this_ptr->field17_0x398 = in_stack_00000008[1];
    *(float *)(this_ptr->field17_0x398 + 4) = in_stack_00000008[2];
  }
  if ((float *)(this_ptr->field17_0x398 + 8) != in_stack_0000000c) {
    *(float *)(this_ptr->field17_0x398 + 8) = *in_stack_0000000c;
    *(float *)(this_ptr->field17_0x398 + 0xc) = in_stack_0000000c[1];
    *(float *)(this_ptr->field17_0x398 + 0x10) = in_stack_0000000c[2];
  }
  core_boxactor_cpp_FUN_004218d0(this_ptr);
  return;
}
