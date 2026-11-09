// Name: core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_00506390
// Address: 00506390
// Address Range: [[00506390, 0050641f]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_00506390(CMansionPuzzleCircle *this_ptr,int panel_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_00506390(CMansionPuzzleCircle *this_ptr,int panel_index)

{
  int iVar1;
  
  if ((panel_index < 0) || (0xb < panel_index)) {
    _DAT_01d1d400 = "..\\core\\manpuz.cpp";
    _DAT_01d1d404 = 0x5e6;
    core_main_c_FUN_005030e0("CMansionPuzzleCircle::panelOccupied - invalid index: %d",panel_index);
  }
  if (*(int *)(&this_ptr->field_0x5f0 + panel_index * 100) == 0) {
    iVar1 = core_manpuz_cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_00506210
                      (this_ptr,panel_index);
    if ((*(int *)(&this_ptr->field_0x5f0 + iVar1 * 100) == 0) ||
       ((*(uint *)(&this_ptr->field_0x5f8 + iVar1 * 100) & 0x7fffffff) == 0)) {
      return 0;
    }
  }
  return 1;
}
