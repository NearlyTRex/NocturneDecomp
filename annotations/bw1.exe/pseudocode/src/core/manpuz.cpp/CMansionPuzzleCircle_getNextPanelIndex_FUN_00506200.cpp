// Name: core_manpuz.cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_00506200
// Address: 00506200
// Address Range: [[00506200, 0050620c]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_00506200(CMansionPuzzleCircle *this_ptr,int panel_index)

#include "nocturne.h"

int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_00506200(CMansionPuzzleCircle *this_ptr,int panel_index)

{
  int iVar1;
  
  iVar1 = panel_index + 1;
  if (0xb < iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}
