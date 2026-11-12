// Name: core_fldnotes.cpp_FUN_004be970
// Address: 004be970
// Address Range: [[004be970, 004bebb1]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004be970(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004be970(int param_1)

{
  int *piVar1;
  int iVar2;
  CAlphaBitmap *this_ptr;
  SNotesMap *this_ptr_00;
  
  iVar2 = 0;
  if (0 < _DAT_01cc55cc) {
    this_ptr_00 = SNotesMap_ARRAY_01cc55d0;
    do {
      core_fldnotes_cpp_SNotesMap_revealAtHero_FUN_004bc450(this_ptr_00);
      iVar2 = iVar2 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar2 < _DAT_01cc55cc);
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    this_ptr = CAlphaBitmap_ARRAY_01cc7ba8;
    engine_alphabit_cpp_FUN_0040d1c0(&CAlphaBitmap_01cc7b94);
    do {
      engine_alphabit_cpp_FUN_0040d1c0(this_ptr);
      this_ptr = this_ptr + 1;
    } while (this_ptr != &CAlphaBitmap_01cc7c20);
    engine_alphabit_cpp_FUN_0040d1c0(&CAlphaBitmap_01cc7c20);
    engine_alphabit_cpp_FUN_0040d1c0(&CAlphaBitmap_01cc7c34);
    engine_alphabit_cpp_FUN_0040d1c0(&CAlphaBitmap_01cc7c48);
    engine_alphabit_cpp_FUN_0040d1c0(&CAlphaBitmap_01cc7c5c);
    engine_alphabit_cpp_FUN_0040d1c0(&CAlphaBitmap_01cc7c84);
    engine_alphabit_cpp_FUN_0040d1c0(&CAlphaBitmap_01cc7c98);
    engine_alphabit_cpp_FUN_0040d1c0(&CAlphaBitmap_01cc7cac);
    engine_alphabit_cpp_FUN_0040d1c0(&CAlphaBitmap_01cc7cc0);
    _DAT_01cc8000 = 0;
    DAT_0061d2e0 = 1;
    _DAT_01cc7f1c = 0;
    DAT_0061d310 = 0xffffffff;
    DAT_01cc7f38 = 0;
    return;
  }
  if ((g_CGamePtr->letterbox_mode == 0) &&
     ((**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x200), (DAT_01c43544 & 1) != 0)) {
    iVar2 = core_flashlit_cpp_FUN_004ba490(_DAT_01c4353c,_DAT_01c43540);
    if (-1 < iVar2) {
      _DAT_01cc7b90 = SNotesSection_ARRAY_01cc4474[iVar2].first_page;
    }
    iVar2 = core_flashlit_cpp_FUN_004ba540(_DAT_01c4353c,_DAT_01c43540);
    _DAT_01cc7b90 = _DAT_01cc7b90 + iVar2;
    if ((((0x00000262 <= _DAT_01c4353c) && (0x000001C0 <= _DAT_01c43540)) &&
        (_DAT_01c4353c < 0x00000262 + CAlphaBitmap_01cc7cac.width)) &&
       (_DAT_01c43540 < CAlphaBitmap_01cc7cac.height + 0x000001C0)) {
      *(uint *)(param_1 + 0x40) = 0;
    }
    piVar1 = core_fldnotes_cpp_STextPage_findResourceAt_FUN_004bb110
                       (g_STextViewInstance.pages + _DAT_01cc7b90,_DAT_01c4353c,_DAT_01c43540);
    if (piVar1 != (int *)0x0) {
      (**(code **)(piVar1[5] + 8))(piVar1,1,_DAT_01c4353c - *piVar1,_DAT_01c43540 - piVar1[1]);
    }
    DAT_01c43544 = DAT_01c43544 & 0xfe;
    return;
  }
  return;
}
