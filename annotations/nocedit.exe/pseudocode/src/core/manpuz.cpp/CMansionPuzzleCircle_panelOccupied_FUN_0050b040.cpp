// Name: core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040
// Address: 0050b040
// Address Range: [[0050b040, 0050b0cf]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040(CMansionPuzzleCircle *this_ptr)

{
  int iVar1;
  int in_stack_00000008;
  
  if ((in_stack_00000008 < 0) || (0xb < in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\manpuz.cpp";
    g_CurrentLineNumber = 0x5e6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMansionPuzzleCircle::panelOccupied - invalid index: %d");
  }
  if (this_ptr->panels[in_stack_00000008].exists == 0) {
    iVar1 = core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050aef0(this_ptr);
    if ((this_ptr->panels[iVar1].exists == 0) || (ABS(this_ptr->panels[iVar1].anim_speed) == 0.0)) {
      return 0;
    }
  }
  return 1;
}
