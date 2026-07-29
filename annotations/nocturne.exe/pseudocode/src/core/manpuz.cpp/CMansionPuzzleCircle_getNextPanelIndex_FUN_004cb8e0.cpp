// Name: core_manpuz.cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004cb8e0
// Address: 004cb8e0
// Address Range: [[004cb8e0, 004cb8ec]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004cb8e0(CMansionPuzzleCircle *this_ptr,int panel_index)

#include "nocturne.h"

int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004cb8e0(CMansionPuzzleCircle *this_ptr,int panel_index)

{
  int iVar1;
  
  iVar1 = panel_index + 1;
  if (0xb < iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}
