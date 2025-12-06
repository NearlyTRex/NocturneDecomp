// Name: core_boxactor.cpp_FUN_004224f0
// Address: 004224f0
// Address Range: [[004224f0, 00422546]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_004224f0()

#include "nocturne.h"

/* Signature: byte actors_other_boxactor.cpp_FUN_004224f0(uint param_1, uint
   param_2) */

void core_boxactor_cpp_FUN_004224f0(void)

{
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  CVector3f *in_stack_0000000c;
  float local_c;
  float local_8;
  
  *(uint *)(in_stack_00000004 + 0x318) = 0;
  core_boxactor_cpp_FUN_004218d0();
  if (in_stack_0000000c == (CVector3f *)0x0) {
    return;
  }
  local_8 = 0.0;
  local_c = 9.424778;
  core_box_cpp_CBox_setupVelocities_FUN_00420180
            ((CBox *)(in_stack_00000004 + 0x394),in_stack_0000000c,(CVector3f *)&local_c);
  return;
}
