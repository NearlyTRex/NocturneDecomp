// Name: core_fldnotes.cpp_CFieldNotes_process_FUN_004a5f60
// Address: 004a5f60
// Address Range: [[004a5f60, 004a61a1]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_CFieldNotes_process_FUN_004a5f60(CFieldNotes *this_ptr)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_CFieldNotes_process_FUN_004a5f60(CFieldNotes *this_ptr)

{
  SPageResource *pSVar1;
  int iVar2;
  CAlphaBitmap *this_ptr_00;
  SNotesMap *this_ptr_01;
  
  iVar2 = 0;
  if (0 < g_INT_01cacb4c) {
    this_ptr_01 = SNotesMap_ARRAY_01cacb50;
    do {
      core_fldnotes_cpp_SNotesMap_revealAtHero_FUN_004a3a60(this_ptr_01);
      iVar2 = iVar2 + 1;
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar2 < g_INT_01cacb4c);
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
    g_INT_01caf568 = 0;
    g_INT_00616010 = 1;
    g_INT_01caf488 = 0;
    g_INT_00616040 = -1;
    g_CHAR_01caf4a0 = '\0';
    return;
  }
  if ((g_CGamePtr->letterbox_mode == 0) &&
     ((*g_CKeys_PTR_00617dd4->vtable->getAndClearKeyState)(g_CKeys_PTR_00617dd4,DIM_LBUTTON),
     (g_BIT_INTEGER32_01c2a384.bytes[0] & 1) != 0)) {
    iVar2 = core_flashlit_cpp_hitTestSectionTab_FUN_004a1bb0(g_INT_01c2a37c,g_INT_01c2a380);
    if (-1 < iVar2) {
      g_INT_01caf110 = SNotesSection_ARRAY_01cab9f4[iVar2].first_page;
    }
    iVar2 = core_flashlit_cpp_hitTestPageArrows_FUN_004a1c60(g_INT_01c2a37c,g_INT_01c2a380);
    g_INT_01caf110 = g_INT_01caf110 + iVar2;
    if ((((g_INT_00616028 <= g_INT_01c2a37c) && (g_INT_0061602c <= g_INT_01c2a380)) &&
        (g_INT_01c2a37c < g_INT_00616028 + CAlphaBitmap_01caf218.width)) &&
       (g_INT_01c2a380 < CAlphaBitmap_01caf218.height + g_INT_0061602c)) {
      this_ptr->is_displayed = 0;
    }
    pSVar1 = core_fldnotes_cpp_STextPage_findResourceAt_FUN_004a2730
                       (g_STextViewInstance.pages + g_INT_01caf110,g_INT_01c2a37c,g_INT_01c2a380);
    if (pSVar1 != (SPageResource *)0x0) {
      (**(code **)((int)pSVar1->vtable + 8))
                (pSVar1,1,g_INT_01c2a37c - pSVar1->x,g_INT_01c2a380 - pSVar1->y);
    }
    g_BIT_INTEGER32_01c2a384.bytes[0] = g_BIT_INTEGER32_01c2a384.bytes[0] & 0xfe;
    return;
  }
  return;
}
