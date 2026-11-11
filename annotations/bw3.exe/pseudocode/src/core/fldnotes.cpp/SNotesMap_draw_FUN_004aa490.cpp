// Name: core_fldnotes.cpp_SNotesMap_draw_FUN_004aa490
// Address: 004aa490
// Address Range: [[004aa490, 004aa61d]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_SNotesMap_draw_FUN_004aa490(SNotesMap *this_ptr,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_SNotesMap_draw_FUN_004aa490(SNotesMap *this_ptr,int param_2,int param_3)

{
  int iVar1;
  int x;
  SNotesMap *pSVar2;
  CAlphaBitmap *this_ptr_00;
  int iStack_18;
  int iStack_14;
  
  if (this_ptr->reveal_dirty != 0) {
    core_fldnotes_cpp_SNotesMap_applyReveal_FUN_004aa620(this_ptr);
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(&this_ptr->image,param_3,param_3,0xffff);
  if (*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) != 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,"?HeroIsLost" + 1);
    if (iVar1 == 0) {
      iVar1 = core_fldnotes_cpp_SNotesMap_worldToMap_FUN_004aa350
                        (this_ptr,(float *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20));
      if (iVar1 < 0) goto LAB_004aa521;
      iVar1 = (iStack_14 + param_3) - _DAT_005fe3a4;
      x = (param_3 + iStack_18) - _DAT_005fe3a0;
      this_ptr_00 = &CAlphaBitmap_01d19c60;
    }
    else {
      iVar1 = this_ptr->height / 2 + param_3;
      x = this_ptr->width / 2 + param_3;
      this_ptr_00 = &CAlphaBitmap_01d19c74;
    }
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(this_ptr_00,x,iVar1,0xffff);
  }
LAB_004aa521:
  iVar1 = 0;
  pSVar2 = this_ptr;
  if (0 < this_ptr->annotation_count) {
    do {
      if (pSVar2->annotations[0].visible != 0) {
        engine_font_cpp_FUN_004b0a20
                  (_DAT_01549abc,this_ptr->annotations[iVar1].text,
                   param_3 + pSVar2->annotations[0].x,pSVar2->annotations[0].y + param_3,1,
                   0xffffffff);
      }
      iVar1 = iVar1 + 1;
      pSVar2 = (SNotesMap *)(pSVar2->sets[0].level_name + 0x34);
    } while (iVar1 < this_ptr->annotation_count);
  }
  if (this_ptr->entry != (SNotesEntry *)0x0) {
    _strncpy(&DAT_01d19cf0,this_ptr->entry->title + 1,0x40);
    return;
  }
  return;
}
