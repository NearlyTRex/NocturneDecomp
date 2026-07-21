// Name: core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_004cba40
// Address: 004cba40
// Address Range: [[004cba40, 004cbacf]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_004cba40(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_004cba40(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (0xb < param_2)) {
    _DAT_01cc4800 = "..\\core\\manpuz.cpp";
    _DAT_01cc4804 = 0x5e6;
    FUN_004c8440("CMansionPuzzleCircle::panelOccupied - invalid index: %d",param_2);
  }
  if (*(int *)(param_1 + 0x5e8 + param_2 * 100) == 0) {
    iVar1 = core_manpuz_cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004cb8f0(param_1,param_2);
    param_1 = iVar1 * 100 + param_1;
    if ((*(int *)(param_1 + 0x5e8) == 0) || ((*(uint *)(param_1 + 0x5f0) & 0x7fffffff) == 0)) {
      return 0;
    }
  }
  return 1;
}
