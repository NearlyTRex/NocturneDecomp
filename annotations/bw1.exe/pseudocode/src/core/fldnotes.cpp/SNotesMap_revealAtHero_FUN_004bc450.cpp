// Name: core_fldnotes.cpp_SNotesMap_revealAtHero_FUN_004bc450
// Address: 004bc450
// Address Range: [[004bc450, 004bc531]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_SNotesMap_revealAtHero_FUN_004bc450(SNotesMap *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_SNotesMap_revealAtHero_FUN_004bc450(SNotesMap *this_ptr)

{
  int iVar1;
  float10 fVar2;
  double dVar3;
  int local_14;
  int local_10;
  int local_c;
  
  if (((*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) != 0) && (this_ptr->entry != (SNotesEntry *)0x0)) &&
     (this_ptr->entry->kind == 6)) {
    iVar1 = core_fldnotes_cpp_SNotesMap_worldToMap_FUN_004bc6f0
                      (this_ptr,(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x20));
    if (-1 < iVar1) {
      dVar3 = floor
                        ((double)(this_ptr->sets[iVar1].reveal_scale * (float)_DAT_005dfc62));
      fVar2 = (float10)dVar3 + (float10)_DAT_005dfc6a;
      round();
      local_c = (int)ROUND(fVar2);
      if (local_c < 1) {
        local_c = 1;
      }
      core_fldnotes_cpp_SNotesMap_revealCircle_FUN_004bc5a0
                (this_ptr,(local_10 * (this_ptr->reveal_mask).width) / this_ptr->width,
                 (local_14 * (this_ptr->reveal_mask).height) / this_ptr->height,local_c);
      return;
    }
  }
  return;
}
