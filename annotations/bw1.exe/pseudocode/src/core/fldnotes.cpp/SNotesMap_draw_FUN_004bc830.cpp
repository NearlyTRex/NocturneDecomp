// Name: core_fldnotes.cpp_SNotesMap_draw_FUN_004bc830
// Address: 004bc830
// Address Range: [[004bc830, 004bc9a3]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_SNotesMap_draw_FUN_004bc830(SNotesMap *this_ptr,int x,int y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_SNotesMap_draw_FUN_004bc830(SNotesMap *this_ptr,int x,int y)

{
  int iVar1;
  int x_00;
  SNotesMap *pSVar2;
  int in_stack_00000010;
  CAlphaBitmap *this_ptr_00;
  int iStack_18;
  int iStack_14;
  
  if (this_ptr->reveal_dirty != 0) {
    core_fldnotes_cpp_SNotesMap_applyReveal_FUN_004bc9b0(this_ptr);
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&this_ptr->image,x,in_stack_00000010,0xffff)
  ;
  if (g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4] != (CHero *)0x0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (g_CEventListPtr,"HeroIsLost");
    if (iVar1 == 0) {
      iVar1 = core_fldnotes_cpp_SNotesMap_worldToMap_FUN_004bc6f0
                        (this_ptr,&(g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.location,
                         &iStack_18,&iStack_14);
      if (iVar1 < 0) goto LAB_004bc8c3;
      iVar1 = (in_stack_00000010 + iStack_14) - _DAT_0061d30c;
      x_00 = (iStack_18 + x) - _DAT_0061d308;
      this_ptr_00 = &CAlphaBitmap_01cc7c48;
    }
    else {
      iVar1 = this_ptr->height / 2 + in_stack_00000010;
      x_00 = this_ptr->width / 2 + x;
      this_ptr_00 = &CAlphaBitmap_01cc7c5c;
    }
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(this_ptr_00,x_00,iVar1,0xffff);
  }
LAB_004bc8c3:
  iVar1 = 0;
  pSVar2 = this_ptr;
  if (0 < this_ptr->annotation_count) {
    do {
      if (pSVar2->annotations[0].visible != 0) {
        engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
                  (g_MicroFont,this_ptr->annotations[iVar1].text,pSVar2->annotations[0].x + x,
                   in_stack_00000010 + pSVar2->annotations[0].y,1,-1);
      }
      iVar1 = iVar1 + 1;
      pSVar2 = (SNotesMap *)(pSVar2->sets[0].level_name + 0x34);
    } while (iVar1 < this_ptr->annotation_count);
  }
  return;
}
