// Name: core_script.cpp_FUN_00528fc0
// Address: 00528fc0
// Address Range: [[00528fc0, 0052920f]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_00528fc0(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_FUN_00528fc0(CScript *this_ptr)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *text;
  CBitFont *this_ptr_00;
  int iVar8;
  
  if (*(int *)&g_CGamePtr->field_0x24c == 0) {
    fVar3 = (float)core_charactr_cpp_FUN_00434b00(g_CGamePtr);
    _DAT_01ed7010 = _DAT_01ed7010 - fVar3 / _DAT_005cde18;
  }
  else {
    _DAT_01ed3800 = *(int *)&g_CGamePtr->field_0x24c;
    fVar3 = (float)core_charactr_cpp_FUN_00434b00(g_CGamePtr);
    _DAT_01ed7010 = fVar3 / _DAT_005cde18 + _DAT_01ed7010;
  }
  iVar8 = DAT_005fba1c;
  iVar1 = DAT_005fba18;
  if (_DAT_01ed7010 < 0.0) {
    _DAT_01ed7010 = 0.0;
  }
  if (1.0 < _DAT_01ed7010) {
    _DAT_01ed7010 = 1.0;
  }
  iVar4 = core_script_cpp_CScript_getLetterboxHeight_FUN_00528f60(this_ptr);
  if (0 < iVar4) {
    if (_DAT_01ed3800 != 2) {
      engine_2d_c_fillRectColor_FUN_004031c0(0,0,iVar1 + -1,iVar4 + -1,0);
    }
    engine_2d_c_fillRectColor_FUN_004031c0(0,iVar8 - iVar4,iVar1 + -1,iVar8 + -1,0);
  }
  uVar2 = _DAT_01c6b5ac;
  if ((this_ptr->field_0x50 != '\0') && (*(int *)&g_CGamePtr->field_0x10 != 0)) {
    this_ptr_00 = _DAT_01549aa0;
    if (DAT_005fba1c < 0x1e0) {
      this_ptr_00 = _DAT_01549aa4;
    }
    if ((DAT_005fba1c < 0x180) && (this_ptr_00 = _DAT_01549abc, _DAT_01dd4890 != 0)) {
      this_ptr_00 = _DAT_01549ab4;
    }
    iVar5 = engine_font_cpp_FUN_004b2e40
                      (this_ptr_00,&this_ptr->field_0x50,0x1ed3808,10,0x400,(DAT_005fba18 * 9) / 10)
    ;
    iVar6 = engine_font_cpp_FUN_004b30f0(this_ptr_00,0x58);
    iVar7 = ((iVar8 * 2 - iVar4) - iVar6 * iVar5) / 2;
    iVar4 = iVar6;
    if (iVar5 < 4) {
      iVar4 = iVar6 * (iVar5 + 1);
    }
    if (iVar8 - iVar4 < iVar7) {
      iVar7 = iVar8 - iVar4;
    }
    engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
    iVar8 = 0;
    if (0 < iVar5) {
      text = (char *)0x1ed3808;
      do {
        iVar4 = engine_font_cpp_FUN_004b2a80(this_ptr_00,text);
        iVar8 = iVar8 + 1;
        engine_font_cpp_FUN_004b0a20(this_ptr_00,text,(iVar1 - iVar4) / 2,iVar7,0xf8,0);
        text = text + 0x400;
        iVar7 = iVar7 + iVar6;
      } while (iVar8 < iVar5);
    }
  }
  _DAT_01c6b5ac = uVar2;
  return;
}
