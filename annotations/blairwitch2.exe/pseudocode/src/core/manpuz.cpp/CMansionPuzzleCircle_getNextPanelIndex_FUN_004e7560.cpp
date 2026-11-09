// Name: core_manpuz.cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004e7560
// Address: 004e7560
// Address Range: [[004e7560, 004e756c]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004e7560(CMansionPuzzleCircle *this_ptr,int panel_index)

#include "nocturne.h"

int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004e7560(CMansionPuzzleCircle *this_ptr,int panel_index)

{
  int iVar1;
  
  iVar1 = panel_index + 1;
  if (0xb < iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}
