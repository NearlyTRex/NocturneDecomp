// Name: core_script.cpp_FUN_005218a0
// Address: 005218a0
// Address Range: [[005218a0, 00521aef]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_005218a0(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_FUN_005218a0(CScript *this_ptr)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  CBitFont *this_ptr_00;
  int iVar9;
  
  if (*(int *)&g_CGamePtr->field_0x244 == 0) {
    fVar3 = (float)core_charactr_cpp_FUN_0042bff0(g_CGamePtr);
    _DAT_01e65900 = _DAT_01e65900 - fVar3 / _DAT_005e2eb3;
  }
  else {
    _DAT_01e620f0 = *(int *)&g_CGamePtr->field_0x244;
    fVar3 = (float)core_charactr_cpp_FUN_0042bff0(g_CGamePtr);
    _DAT_01e65900 = fVar3 / _DAT_005e2eb3 + _DAT_01e65900;
  }
  iVar9 = DAT_006141bc;
  iVar1 = DAT_006141b8;
  if (_DAT_01e65900 < 0.0) {
    _DAT_01e65900 = 0.0;
  }
  if (1.0 < _DAT_01e65900) {
    _DAT_01e65900 = 1.0;
  }
  iVar4 = core_script_cpp_CScript_getLetterboxHeight_FUN_00521840(this_ptr);
  if (0 < iVar4) {
    if (_DAT_01e620f0 != 2) {
      engine_2d_c_fillRectColor_FUN_004031c0(0,0,iVar1 + -1,iVar4 + -1,0);
    }
    engine_2d_c_fillRectColor_FUN_004031c0(0,iVar9 - iVar4,iVar1 + -1,iVar9 + -1,0);
  }
  uVar2 = _DAT_01c35e4c;
  if ((this_ptr->field_0x50 != '\0') && (*(int *)&g_CGamePtr->field_0x10 != 0)) {
    this_ptr_00 = _DAT_01511cb8;
    if (DAT_006141bc < 0x1e0) {
      this_ptr_00 = _DAT_01511cbc;
    }
    if ((DAT_006141bc < 0x180) && (this_ptr_00 = _DAT_01511ccc, _DAT_01d63250 != 0)) {
      this_ptr_00 = _DAT_01511cc4;
    }
    iVar5 = engine_font_cpp_FUN_004ab2b0
                      (this_ptr_00,&this_ptr->field_0x50,0x1e620f8,10,0x400,(DAT_006141b8 * 9) / 10)
    ;
    iVar6 = engine_font_cpp_FUN_004ab560(this_ptr_00,0x58);
    iVar7 = ((iVar9 * 2 - iVar4) - iVar6 * iVar5) / 2;
    iVar4 = iVar6;
    if (iVar5 < 4) {
      iVar4 = iVar6 * (iVar5 + 1);
    }
    if (iVar9 - iVar4 < iVar7) {
      iVar7 = iVar9 - iVar4;
    }
    engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
    iVar9 = 0;
    if (0 < iVar5) {
      iVar4 = 0x1e620f8;
      do {
        iVar8 = engine_font_cpp_FUN_004aaf00(this_ptr_00,iVar4);
        iVar9 = iVar9 + 1;
        engine_font_cpp_FUN_004a8df0(this_ptr_00,iVar4,(iVar1 - iVar8) / 2,iVar7,0xf8,0);
        iVar4 = iVar4 + 0x400;
        iVar7 = iVar7 + iVar6;
      } while (iVar9 < iVar5);
    }
  }
  _DAT_01c35e4c = uVar2;
  return;
}
