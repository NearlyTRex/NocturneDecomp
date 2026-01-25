// Name: core_emitter.cpp_FUN_004a8a80
// Address: 004a8a80
// Address Range: [[004a8a80, 004a8ac9]]
// Convention: unknown
// Signature: undefined core_emitter.cpp_FUN_004a8a80()

#include "nocturne.h"

/* Signature: byte actors_other_emitter.cpp_FUN_004a8a80(uint param_1, uint
   param_2) */

void core_emitter_cpp_FUN_004a8a80(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  float fStack_1c;
  
  if (in_stack_00000008 == 0) {
    return;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  this_ptr = (*((in_stack_00000004->vtable)._ub)->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)&fStack_1c);
  fStack_1c = 6.845583e-39;
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  *(int *)(in_stack_00000004[3].create_event + 0xc) = iVar1;
  fStack_1c = 6.845604e-39;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return;
}
