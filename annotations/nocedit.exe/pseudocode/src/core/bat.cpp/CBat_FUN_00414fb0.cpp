// Name: core_bat.cpp_CBat_FUN_00414fb0
// Address: 00414fb0
// Address Range: [[00414fb0, 00414fde]]
// Convention: __cdecl
// Signature: void __cdecl core_bat_cpp_CBat_FUN_00414fb0(CBat *this_ptr)

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_FUN_00414fb0(CBat *this_ptr)

{
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base,in_stack_00000008);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
            (in_stack_00000008,"</>","Move bat along course.");
  return;
}
