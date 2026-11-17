// Name: core_fldnotes.cpp_CFieldNotes_process_FUN_004be970
// Address: 004be970
// Address Range: [[004be970, 004bebb1]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_CFieldNotes_process_FUN_004be970(CFieldNotes *this_ptr)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_CFieldNotes_process_FUN_004be970(CFieldNotes *this_ptr)

{
  SPageResource *pSVar1;
  int iVar2;
  CAlphaBitmap *this_ptr_00;
  SNotesMap *this_ptr_01;
  
  iVar2 = 0;
  if (0 < g_INT_01cc55cc) {
    this_ptr_01 = SNotesMap_ARRAY_01cc55d0;
    do {
      core_fldnotes_cpp_SNotesMap_revealAtHero_FUN_004bc450(this_ptr_01);
      iVar2 = iVar2 + 1;
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar2 < g_INT_01cc55cc);
  }
  if (this_ptr->is_displayed == 0) {
    this_ptr_00 = CAlphaBitmap_ARRAY_01cc7ba8;
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7b94);
    do {
      engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(this_ptr_00);
      this_ptr_00 = this_ptr_00 + 1;
    } while (this_ptr_00 != &CAlphaBitmap_01cc7c20);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c20);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c34);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c48);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c5c);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c84);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c98);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7cac);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7cc0);
    g_INT_01cc8000 = 0;
    g_INT_0061d2e0 = 1;
    g_INT_01cc7f1c = 0;
    g_INT_0061d310 = -1;
    g_CHAR_01cc7f38 = '\0';
    return;
  }
  if ((g_CGamePtr->letterbox_mode == 0) &&
     ((*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)(g_CKeys_PTR_0061f2a4,DIM_LBUTTON),
     (g_MouseButtonFlags.bytes[0] & 1) != 0)) {
    iVar2 = core_flashlit_cpp_hitTestSectionTab_FUN_004ba490(g_MouseX,g_MouseY);
    if (-1 < iVar2) {
      g_INT_01cc7b90 = SNotesSection_ARRAY_01cc4474[iVar2].first_page;
    }
    iVar2 = core_flashlit_cpp_hitTestPageArrows_FUN_004ba540(g_MouseX,g_MouseY);
    g_INT_01cc7b90 = g_INT_01cc7b90 + iVar2;
    if ((((g_INT_0061d2f8 <= g_MouseX) && (g_INT_0061d2fc <= g_MouseY)) &&
        (g_MouseX < g_INT_0061d2f8 + CAlphaBitmap_01cc7cac.width)) &&
       (g_MouseY < CAlphaBitmap_01cc7cac.height + g_INT_0061d2fc)) {
      this_ptr->is_displayed = 0;
    }
    pSVar1 = core_fldnotes_cpp_STextPage_findResourceAt_FUN_004bb110
                       (g_STextViewInstance.pages + g_INT_01cc7b90,g_MouseX,g_MouseY);
    if (pSVar1 != (SPageResource *)0x0) {
      (**(code **)((int)pSVar1->vtable + 8))(pSVar1,1,g_MouseX - pSVar1->x,g_MouseY - pSVar1->y);
    }
    g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] & 0xfe;
    return;
  }
  return;
}
