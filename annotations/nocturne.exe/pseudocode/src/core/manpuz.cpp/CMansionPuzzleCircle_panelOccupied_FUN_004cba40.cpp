// Name: core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_004cba40
// Address: 004cba40
// Address Range: [[004cba40, 004cbacf]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_004cba40(CMansionPuzzleCircle *this_ptr,int panel_index)

#include "nocturne.h"

int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_004cba40(CMansionPuzzleCircle *this_ptr,int panel_index)

{
  int iVar1;
  
  if ((panel_index < 0) || (0xb < panel_index)) {
    g_CurrentFilename = "..\\core\\manpuz.cpp";
    g_CurrentLineNumber = 1510;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CMansionPuzzleCircle::panelOccupied - invalid index: %d",panel_index);
  }
  if (this_ptr->panels[panel_index].exists == 0) {
    iVar1 = core_manpuz_cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004cb8f0
                      (this_ptr,panel_index);
    if ((this_ptr->panels[iVar1].exists == 0) || (ABS(this_ptr->panels[iVar1].anim_speed) == 0.0)) {
      return 0;
    }
  }
  return 1;
}
