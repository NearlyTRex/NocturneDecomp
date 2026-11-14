// Name: core_fldnotes.cpp_CFieldNotes_process_FUN_004a5f60
// Address: 004a5f60
// Address Range: [[004a5f60, 004a61a1]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_CFieldNotes_process_FUN_004a5f60(CFieldNotes *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_CFieldNotes_process_FUN_004a5f60(CFieldNotes *this_ptr)

{
  SPageResource *pSVar1;
  int iVar2;
  CAlphaBitmap *this_ptr_00;
  SNotesMap *this_ptr_01;
  
  iVar2 = 0;
  if (0 < _DAT_01cacb4c) {
    this_ptr_01 = SNotesMap_ARRAY_01cacb50;
    do {
      core_fldnotes_cpp_SNotesMap_revealAtHero_FUN_004a3a60(this_ptr_01);
      iVar2 = iVar2 + 1;
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar2 < _DAT_01cacb4c);
  }
  if (this_ptr->is_displayed == 0) {
    this_ptr_00 = CAlphaBitmap_ARRAY_01caf128;
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf114);
    do {
      engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(this_ptr_00);
      this_ptr_00 = this_ptr_00 + 1;
    } while (this_ptr_00 != &CAlphaBitmap_01caf1a0);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf1a0);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf1b4);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf1c8);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf1dc);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf1f0);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf204);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf218);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf22c);
    _DAT_01caf568 = 0;
    DAT_00616010 = 1;
    _DAT_01caf488 = 0;
    DAT_00616040 = 0xffffffff;
    DAT_01caf4a0 = 0;
    return;
  }
  if ((g_CGamePtr->letterbox_mode == 0) &&
     ((**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x200), (DAT_01c2a384 & 1) != 0)) {
    iVar2 = core_flashlit_cpp_FUN_004a1bb0(_DAT_01c2a37c,_DAT_01c2a380);
    if (-1 < iVar2) {
      _DAT_01caf110 = SNotesSection_ARRAY_01cab9f4[iVar2].first_page;
    }
    iVar2 = core_flashlit_cpp_FUN_004a1c60(_DAT_01c2a37c,_DAT_01c2a380);
    _DAT_01caf110 = _DAT_01caf110 + iVar2;
    if ((((0x00000262 <= _DAT_01c2a37c) && (0x000001C0 <= _DAT_01c2a380)) &&
        (_DAT_01c2a37c < 0x00000262 + CAlphaBitmap_01caf218.width)) &&
       (_DAT_01c2a380 < CAlphaBitmap_01caf218.height + 0x000001C0)) {
      this_ptr->is_displayed = 0;
    }
    pSVar1 = core_fldnotes_cpp_STextPage_findResourceAt_FUN_004a2730
                       (g_STextViewInstance.pages + _DAT_01caf110,_DAT_01c2a37c,_DAT_01c2a380);
    if (pSVar1 != (SPageResource *)0x0) {
      (**(code **)((int)pSVar1->vtable + 8))
                (pSVar1,1,_DAT_01c2a37c - pSVar1->x,_DAT_01c2a380 - pSVar1->y);
    }
    DAT_01c2a384 = DAT_01c2a384 & 0xfe;
    return;
  }
  return;
}
