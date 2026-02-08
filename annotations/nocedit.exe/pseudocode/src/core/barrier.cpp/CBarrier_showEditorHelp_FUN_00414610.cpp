// Name: core_barrier.cpp_CBarrier_showEditorHelp_FUN_00414610
// Address: 00414610
// Address Range: [[00414610, 0041466c]]
// Convention: __cdecl
// Signature: void __cdecl core_barrier_cpp_CBarrier_showEditorHelp_FUN_00414610(CBarrier *this_ptr,int *y_pos)

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_showEditorHelp_FUN_00414610(CBarrier *this_ptr,int *y_pos)

{
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base,y_pos);
  *y_pos = *y_pos + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"With CTRL held down, use slew keys to size box.");
  *y_pos = *y_pos + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"effectClassNameList is used to select which actors are blocked by the barrier.");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"If this is empty, then all actors are blocked.  If non-empty, then only those");
  core_actor_cpp_drawTextLine_FUN_0040d240(y_pos,"actors of the type(s) listed are blocked.");
  return;
}
