// Name: core_frankgen.cpp_FUN_004d2740
// Address: 004d2740
// Address Range: [[004d2740, 004d276e]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_FUN_004d2740(void)

#include "nocturne.h"

/* Signature: byte actors_other_frankgen.cpp_FUN_004d2740(uint param_1, uint
   param_2) */

void __cdecl core_frankgen_cpp_FUN_004d2740(void)

{
  CDemonActor *in_stack_00000004;
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(in_stack_00000004,in_stack_00000008);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
            (in_stack_00000008,"</>","Move bat along course.");
  return;
}
