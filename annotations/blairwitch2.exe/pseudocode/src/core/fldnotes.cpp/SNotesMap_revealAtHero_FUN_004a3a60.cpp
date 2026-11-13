// Name: core_fldnotes.cpp_SNotesMap_revealAtHero_FUN_004a3a60
// Address: 004a3a60
// Address Range: [[004a3a60, 004a3b41]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_SNotesMap_revealAtHero_FUN_004a3a60(SNotesMap *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_SNotesMap_revealAtHero_FUN_004a3a60(SNotesMap *this_ptr)

{
  int iVar1;
  float10 fVar2;
  double dVar3;
  int local_14;
  int local_10;
  int local_c;
  
  if (((*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) != 0) && (this_ptr->entry != (SNotesEntry *)0x0)) &&
     (this_ptr->entry->kind == 6)) {
    iVar1 = core_fldnotes_cpp_SNotesMap_worldToMap_FUN_004a3d00
                      (this_ptr,(CLocation *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x20),
                       &local_10,&local_14);
    if (-1 < iVar1) {
      dVar3 = floor
                        ((double)(this_ptr->sets[iVar1].reveal_scale * (float)_DAT_005d5df8));
      fVar2 = (float10)dVar3 + (float10)_DAT_005d5e00;
      round();
      local_c = (int)ROUND(fVar2);
      if (local_c < 1) {
        local_c = 1;
      }
      core_fldnotes_cpp_SNotesMap_revealCircle_FUN_004a3bb0
                (this_ptr,(local_10 * (this_ptr->reveal_mask).width) / this_ptr->width,
                 (local_14 * (this_ptr->reveal_mask).height) / this_ptr->height,local_c);
      return;
    }
  }
  return;
}
