// Name: core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_004e76f0
// Address: 004e76f0
// Address Range: [[004e76f0, 004e777f]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_004e76f0(CMansionPuzzleCircle *this_ptr,int panel_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_004e76f0(CMansionPuzzleCircle *this_ptr,int panel_index)

{
  int iVar1;
  
  if ((panel_index < 0) || (0xb < panel_index)) {
    _DAT_01d046a0 = "..\\core\\manpuz.cpp";
    _DAT_01d046a4 = 0x5e6;
    core_main_c_FUN_004e4500("CMansionPuzzleCircle::panelOccupied - invalid index: %d",panel_index);
  }
  if (*(int *)(this_ptr->panels + panel_index) == 0) {
    iVar1 = core_manpuz_cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004e7570
                      (this_ptr,panel_index);
    if ((*(int *)(this_ptr->panels + iVar1) == 0) ||
       ((*(uint *)&this_ptr->panels[iVar1].field_0x8 & 0x7fffffff) == 0)) {
      return 0;
    }
  }
  return 1;
}
