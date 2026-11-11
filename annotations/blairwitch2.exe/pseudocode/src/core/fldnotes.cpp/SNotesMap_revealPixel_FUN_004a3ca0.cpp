// Name: core_fldnotes.cpp_SNotesMap_revealPixel_FUN_004a3ca0
// Address: 004a3ca0
// Address Range: [[004a3ca0, 004a3cf6]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_SNotesMap_revealPixel_FUN_004a3ca0(SNotesMap *this_ptr,int param_2,int param_3,int param_4)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_SNotesMap_revealPixel_FUN_004a3ca0(SNotesMap *this_ptr,int param_2,int param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  
  if ((((-1 < param_2) && (-1 < param_3)) &&
      (iVar1 = (this_ptr->reveal_mask).width, param_2 < iVar1)) &&
     ((param_3 < (this_ptr->reveal_mask).height &&
      (pbVar2 = (byte *)((this_ptr->reveal_mask).opa + param_2 + param_3 * iVar1),
      (int)(uint)*pbVar2 < param_4)))) {
    *pbVar2 = (byte)param_4;
    this_ptr->reveal_dirty = 1;
    return;
  }
  return;
}
