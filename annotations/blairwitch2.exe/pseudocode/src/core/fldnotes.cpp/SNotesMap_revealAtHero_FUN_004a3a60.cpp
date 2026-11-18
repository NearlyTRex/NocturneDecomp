// Name: core_fldnotes.cpp_SNotesMap_revealAtHero_FUN_004a3a60
// Address: 004a3a60
// Address Range: [[004a3a60, 004a3b41]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_SNotesMap_revealAtHero_FUN_004a3a60(SNotesMap *this_ptr)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_SNotesMap_revealAtHero_FUN_004a3a60(SNotesMap *this_ptr)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int iStack_18;
  int local_14;
  int local_10 [2];
  
  if (((g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4] != (CHero *)0x0) &&
      (this_ptr->entry != (SNotesEntry *)0x0)) && (this_ptr->entry->kind == 6)) {
    iVar1 = core_fldnotes_cpp_SNotesMap_worldToMap_FUN_004a3d00
                      (this_ptr,&(g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base).base.location,
                       local_10,&local_14);
    if (-1 < iVar1) {
      dVar2 = floor
                        ((double)(this_ptr->sets[iVar1].reveal_scale * (float)20));
      dVar3 = round(dVar2 + 0.5);
      local_10[0] = (int)ROUND(dVar3);
      if (local_10[0] < 1) {
        local_10[0] = 1;
      }
      iStack_18 = (int)((ulonglong)dVar2 >> 0x20);
      core_fldnotes_cpp_SNotesMap_revealCircle_FUN_004a3bb0
                (this_ptr,(local_14 * (this_ptr->reveal_mask).width) / this_ptr->width,
                 (iStack_18 * (this_ptr->reveal_mask).height) / this_ptr->height,local_10[0]);
      return;
    }
  }
  return;
}
