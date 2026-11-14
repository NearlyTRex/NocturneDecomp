// Name: core_fldnotes.cpp_SNotesMap_draw_FUN_004a3e40
// Address: 004a3e40
// Address Range: [[004a3e40, 004a3fb3]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_SNotesMap_draw_FUN_004a3e40(SNotesMap *this_ptr,int x,int y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_SNotesMap_draw_FUN_004a3e40(SNotesMap *this_ptr,int x,int y)

{
  int iVar1;
  int x_00;
  SNotesMap *pSVar2;
  int in_stack_00000010;
  CAlphaBitmap *this_ptr_00;
  int iStack_18;
  int iStack_14;
  
  if (this_ptr->reveal_dirty != 0) {
    core_fldnotes_cpp_SNotesMap_applyReveal_FUN_004a3fc0(this_ptr);
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900(&this_ptr->image,x,in_stack_00000010,0xffff)
  ;
  if (*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) != 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,"?HeroIsLost" + 1);
    if (iVar1 == 0) {
      iVar1 = core_fldnotes_cpp_SNotesMap_worldToMap_FUN_004a3d00
                        (this_ptr,(CLocation *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x20),
                         &iStack_18,&iStack_14);
      if (iVar1 < 0) goto LAB_004a3ed3;
      iVar1 = (in_stack_00000010 + iStack_14) - _DAT_0061603c;
      x_00 = (iStack_18 + x) - _DAT_00616038;
      this_ptr_00 = &CAlphaBitmap_01caf1c8;
    }
    else {
      iVar1 = this_ptr->height / 2 + in_stack_00000010;
      x_00 = this_ptr->width / 2 + x;
      this_ptr_00 = &CAlphaBitmap_01caf1dc;
    }
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900(this_ptr_00,x_00,iVar1,0xffff);
  }
LAB_004a3ed3:
  iVar1 = 0;
  pSVar2 = this_ptr;
  if (0 < this_ptr->annotation_count) {
    do {
      if (pSVar2->annotations[0].visible != 0) {
        engine_font_cpp_FUN_004a8df0
                  (_DAT_01511ccc,this_ptr->annotations[iVar1].text,pSVar2->annotations[0].x + x,
                   in_stack_00000010 + pSVar2->annotations[0].y,1,0xffffffff);
      }
      iVar1 = iVar1 + 1;
      pSVar2 = (SNotesMap *)(pSVar2->sets[0].level_name + 0x34);
    } while (iVar1 < this_ptr->annotation_count);
  }
  return;
}
