// Name: core_fldnotes.cpp_SNotesMap_revealPixel_FUN_004bc690
// Address: 004bc690
// Address Range: [[004bc690, 004bc6e6]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_SNotesMap_revealPixel_FUN_004bc690(SNotesMap *this_ptr,int x,int y,int alpha)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_SNotesMap_revealPixel_FUN_004bc690(SNotesMap *this_ptr,int x,int y,int alpha)

{
  int iVar1;
  byte *pbVar2;
  
  if ((((-1 < x) && (-1 < y)) && (iVar1 = (this_ptr->reveal_mask).width, x < iVar1)) &&
     ((y < (this_ptr->reveal_mask).height &&
      (pbVar2 = (byte *)((this_ptr->reveal_mask).opa + x + y * iVar1), (int)(uint)*pbVar2 < alpha)))
     ) {
    *pbVar2 = (byte)alpha;
    this_ptr->reveal_dirty = 1;
    return;
  }
  return;
}
