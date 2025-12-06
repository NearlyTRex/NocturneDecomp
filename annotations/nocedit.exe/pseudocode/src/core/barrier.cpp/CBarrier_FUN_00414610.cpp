// Name: core_barrier.cpp_CBarrier_FUN_00414610
// Address: 00414610
// Address Range: [[00414610, 0041466c]]
// Convention: __cdecl
// Signature: void core_barrier.cpp_CBarrier_FUN_00414610(CBarrier * this_ptr)

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_FUN_00414610(CBarrier *this_ptr)

{
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base_actor,in_stack_00000008);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"With CTRL held down, use slew keys to size box.");
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"effectClassNameList is used to select which actors are blocked by the barrier.");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"If this is empty, then all actors are blocked.  If non-empty, then only those");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"actors of the type(s) listed are blocked.");
  return;
}
