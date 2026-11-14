// Name: core_fldnotes.cpp_CFieldNotes_process_FUN_004ac6b0
// Address: 004ac6b0
// Address Range: [[004ac6b0, 004ac8f1]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_CFieldNotes_process_FUN_004ac6b0(CFieldNotes *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_CFieldNotes_process_FUN_004ac6b0(CFieldNotes *this_ptr)

{
  SPageResource *pSVar1;
  int iVar2;
  CAlphaBitmap *this_ptr_00;
  SNotesMap *this_ptr_01;
  
  iVar2 = 0;
  if (0 < _DAT_01d0e36c) {
    this_ptr_01 = SNotesMap_ARRAY_01d0e370;
    do {
      core_fldnotes_cpp_SNotesMap_revealAtHero_FUN_004aa0b0(this_ptr_01);
      iVar2 = iVar2 + 1;
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar2 < _DAT_01d0e36c);
  }
  if (this_ptr->is_displayed == 0) {
    this_ptr_00 = CAlphaBitmap_ARRAY_01d19bc0;
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19bac);
    do {
      engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(this_ptr_00);
      this_ptr_00 = this_ptr_00 + 1;
    } while (this_ptr_00 != &CAlphaBitmap_01d19c38);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c38);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c4c);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c60);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c74);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c9c);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19cb0);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19cc4);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19cd8);
    _DAT_01d1a058 = 0;
    DAT_005fe370 = 1;
    _DAT_01d19f78 = 0;
    DAT_005fe3a8 = 0xffffffff;
    DAT_01d19f90 = 0;
    return;
  }
  if ((g_CGamePtr->letterbox_mode == 0) &&
     ((**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x200), (DAT_01c5fae4 & 1) != 0)) {
    iVar2 = core_flashlit_cpp_FUN_004a80d0(_DAT_01c5fadc,_DAT_01c5fae0);
    if (-1 < iVar2) {
      _DAT_01d19ba8 = SNotesSection_ARRAY_01d0d214[iVar2].first_page;
    }
    iVar2 = core_flashlit_cpp_FUN_004a8180(_DAT_01c5fadc,_DAT_01c5fae0);
    _DAT_01d19ba8 = _DAT_01d19ba8 + iVar2;
    if ((((0x00000262 <= _DAT_01c5fadc) && (0x000001C0 <= _DAT_01c5fae0)) &&
        (_DAT_01c5fadc < 0x00000262 + CAlphaBitmap_01d19cc4.width)) &&
       (_DAT_01c5fae0 < CAlphaBitmap_01d19cc4.height + 0x000001C0)) {
      this_ptr->is_displayed = 0;
    }
    pSVar1 = core_fldnotes_cpp_STextPage_findResourceAt_FUN_004a8d50
                       (g_STextViewInstance.pages + _DAT_01d19ba8,_DAT_01c5fadc,_DAT_01c5fae0);
    if (pSVar1 != (SPageResource *)0x0) {
      (**(code **)((int)pSVar1->vtable + 8))
                (pSVar1,1,_DAT_01c5fadc - pSVar1->x,_DAT_01c5fae0 - pSVar1->y);
    }
    DAT_01c5fae4 = DAT_01c5fae4 & 0xfe;
    return;
  }
  return;
}
