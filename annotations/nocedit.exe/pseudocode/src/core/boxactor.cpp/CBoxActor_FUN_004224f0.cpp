// Name: core_boxactor.cpp_CBoxActor_FUN_004224f0
// Address: 004224f0
// Address Range: [[004224f0, 00422546]]
// Convention: __cdecl
// Signature: void core_boxactor.cpp_CBoxActor_FUN_004224f0(CBoxActor * this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_FUN_004224f0(CBoxActor *this_ptr)

{
  CVector3f *in_stack_00000008;
  CVector3f local_10;
  
  this_ptr->carried_by_actor = 0;
  core_boxactor_cpp_FUN_004218d0(this_ptr);
  if (in_stack_00000008 == (CVector3f *)0x0) {
    return;
  }
  local_10.z = 0.0;
  local_10.y = 0.0;
  local_10.x = 9.424778;
  core_box_cpp_CBox_setupVelocities_FUN_00420180
            ((CBox *)&this_ptr->sim_box,in_stack_00000008,&local_10);
  return;
}
