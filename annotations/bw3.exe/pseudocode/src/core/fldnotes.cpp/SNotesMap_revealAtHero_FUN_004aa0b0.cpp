// Name: core_fldnotes.cpp_SNotesMap_revealAtHero_FUN_004aa0b0
// Address: 004aa0b0
// Address Range: [[004aa0b0, 004aa191]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_SNotesMap_revealAtHero_FUN_004aa0b0(SNotesMap *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_SNotesMap_revealAtHero_FUN_004aa0b0(SNotesMap *this_ptr)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int iStack_18;
  int local_14;
  int local_10 [2];
  
  if (((*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) != 0) && (this_ptr->entry != (SNotesEntry *)0x0)) &&
     (this_ptr->entry->kind == 6)) {
    iVar1 = core_fldnotes_cpp_SNotesMap_worldToMap_FUN_004aa350
                      (this_ptr,(CLocation *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20),
                       local_10,&local_14);
    if (-1 < iVar1) {
      dVar2 = floor
                        ((double)(this_ptr->sets[iVar1].reveal_scale * (float)_DAT_005c114f));
      dVar3 = round(dVar2 + _DAT_005c1157);
      local_10[0] = (int)ROUND(dVar3);
      if (local_10[0] < 1) {
        local_10[0] = 1;
      }
      iStack_18 = (int)((ulonglong)dVar2 >> 0x20);
      core_fldnotes_cpp_SNotesMap_revealCircle_FUN_004aa200
                (this_ptr,(local_14 * (this_ptr->reveal_mask).width) / this_ptr->width,
                 (iStack_18 * (this_ptr->reveal_mask).height) / this_ptr->height,local_10[0]);
      return;
    }
  }
  return;
}
