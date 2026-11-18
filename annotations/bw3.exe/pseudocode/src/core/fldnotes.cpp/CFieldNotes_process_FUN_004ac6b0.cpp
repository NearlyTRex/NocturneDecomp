// Name: core_fldnotes.cpp_CFieldNotes_process_FUN_004ac6b0
// Address: 004ac6b0
// Address Range: [[004ac6b0, 004ac8f1]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_CFieldNotes_process_FUN_004ac6b0(CFieldNotes *this_ptr)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_CFieldNotes_process_FUN_004ac6b0(CFieldNotes *this_ptr)

{
  SPageResource *pSVar1;
  int iVar2;
  CAlphaBitmap *this_ptr_00;
  SNotesMap *this_ptr_01;
  
  iVar2 = 0;
  if (0 < g_INT_01d0e36c) {
    this_ptr_01 = SNotesMap_ARRAY_01d0e370;
    do {
      core_fldnotes_cpp_SNotesMap_revealAtHero_FUN_004aa0b0(this_ptr_01);
      iVar2 = iVar2 + 1;
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar2 < g_INT_01d0e36c);
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
    g_INT_01d1a058 = 0;
    g_INT_005fe370 = 1;
    g_INT_01d19f78 = 0;
    g_INT_005fe3a8 = -1;
    g_CHAR_01d19f90 = '\0';
    return;
  }
  if ((g_CGamePtr->letterbox_mode == 0) &&
     ((*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIM_LBUTTON),
     (g_MouseButtonFlags.bytes[0] & 1) != 0)) {
    iVar2 = core_flashlit_cpp_hitTestSectionTab_FUN_004a80d0(g_MouseX,g_MouseY);
    if (-1 < iVar2) {
      g_INT_01d19ba8 = SNotesSection_ARRAY_01d0d214[iVar2].first_page;
    }
    iVar2 = core_flashlit_cpp_hitTestPageArrows_FUN_004a8180(g_MouseX,g_MouseY);
    g_INT_01d19ba8 = g_INT_01d19ba8 + iVar2;
    if ((((g_INT_005fe390 <= g_MouseX) && (g_INT_005fe394 <= g_MouseY)) &&
        (g_MouseX < g_INT_005fe390 + CAlphaBitmap_01d19cc4.width)) &&
       (g_MouseY < CAlphaBitmap_01d19cc4.height + g_INT_005fe394)) {
      this_ptr->is_displayed = 0;
    }
    pSVar1 = core_fldnotes_cpp_STextPage_findResourceAt_FUN_004a8d50
                       (g_STextViewInstance.pages + g_INT_01d19ba8,g_MouseX,g_MouseY);
    if (pSVar1 != (SPageResource *)0x0) {
      (**(code **)((int)pSVar1->vtable + 8))(pSVar1,1,g_MouseX - pSVar1->x,g_MouseY - pSVar1->y);
    }
    g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] & 0xfe;
    return;
  }
  return;
}
