// Name: core_fldnotes.cpp_FUN_004ac6b0
// Address: 004ac6b0
// Address Range: [[004ac6b0, 004ac8f1]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004ac6b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004ac6b0(int param_1)

{
  int *piVar1;
  int iVar2;
  CAlphaBitmap *this_ptr;
  SNotesMap *pSVar3;
  
  iVar2 = 0;
  if (0 < _DAT_01d0e36c) {
    pSVar3 = SNotesMap_ARRAY_01d0e370;
    do {
      core_fldnotes_cpp_FUN_004aa0b0(pSVar3);
      iVar2 = iVar2 + 1;
      pSVar3 = pSVar3 + 1;
    } while (iVar2 < _DAT_01d0e36c);
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    this_ptr = CAlphaBitmap_ARRAY_01d19bc0;
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19bac);
    do {
      engine_alphabit_cpp_FUN_0040d400(this_ptr);
      this_ptr = this_ptr + 1;
    } while (this_ptr != &CAlphaBitmap_01d19c38);
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19c38);
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19c4c);
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19c60);
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19c74);
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19c9c);
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19cb0);
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19cc4);
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19cd8);
    _DAT_01d1a058 = 0;
    DAT_005fe370 = 1;
    _DAT_01d19f78 = 0;
    DAT_005fe3a8 = 0xffffffff;
    DAT_01d19f90 = 0;
    return;
  }
  if ((*(int *)&g_CGamePtr->field_0x24c == 0) &&
     ((**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x200), (DAT_01c5fae4 & 1) != 0)) {
    iVar2 = unkaddr_004a76f0_cpp_FUN_004a80d0(_DAT_01c5fadc,_DAT_01c5fae0);
    if (-1 < iVar2) {
      _DAT_01d19ba8 = *(int *)&SNotesSection_ARRAY_01d0d214[iVar2].field_0x140;
    }
    iVar2 = unkaddr_004a76f0_cpp_FUN_004a8180(_DAT_01c5fadc,_DAT_01c5fae0);
    _DAT_01d19ba8 = _DAT_01d19ba8 + iVar2;
    if ((((0x00000262 <= _DAT_01c5fadc) && (0x000001C0 <= _DAT_01c5fae0)) &&
        (_DAT_01c5fadc < 0x00000262 + CAlphaBitmap_01d19cc4.width)) &&
       (_DAT_01c5fae0 < CAlphaBitmap_01d19cc4.height + 0x000001C0)) {
      *(uint *)(param_1 + 0x40) = 0;
    }
    piVar1 = (int *)core_fldnotes_cpp_FUN_004a8d50
                              (g_STextViewInstance._60_4_ + _DAT_01d19ba8 * 0x144,_DAT_01c5fadc,
                               _DAT_01c5fae0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(piVar1[5] + 8))(piVar1,1,_DAT_01c5fadc - *piVar1,_DAT_01c5fae0 - piVar1[1]);
    }
    DAT_01c5fae4 = DAT_01c5fae4 & 0xfe;
    return;
  }
  return;
}
