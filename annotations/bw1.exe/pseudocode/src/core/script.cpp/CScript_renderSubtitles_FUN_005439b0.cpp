// Name: core_script.cpp_CScript_renderSubtitles_FUN_005439b0
// Address: 005439b0
// Address Range: [[005439b0, 00543bff]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_renderSubtitles_FUN_005439b0(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_CScript_renderSubtitles_FUN_005439b0(CScript *this_ptr)

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
  
  if (*(int *)&g_CGamePtr->field_0x244 == 0) {
    fVar3 = (float)core_charactr_cpp_FUN_004355d0(g_CGamePtr);
    _DAT_01e818b0 = _DAT_01e818b0 - fVar3 / _DAT_005ee1b7;
  }
  else {
    _DAT_01e7e0a0 = *(int *)&g_CGamePtr->field_0x244;
    fVar3 = (float)core_charactr_cpp_FUN_004355d0(g_CGamePtr);
    _DAT_01e818b0 = fVar3 / _DAT_005ee1b7 + _DAT_01e818b0;
  }
  iVar8 = DAT_0061b49c;
  iVar1 = DAT_0061b498;
  if (_DAT_01e818b0 < 0.0) {
    _DAT_01e818b0 = 0.0;
  }
  if (1.0 < _DAT_01e818b0) {
    _DAT_01e818b0 = 1.0;
  }
  iVar4 = core_script_cpp_CScript_getLetterboxHeight_FUN_00543950(this_ptr);
  if (0 < iVar4) {
    if (_DAT_01e7e0a0 != 2) {
      engine_2d_c_fillRectColor_FUN_004031c0(0,0,iVar1 + -1,iVar4 + -1,0);
    }
    engine_2d_c_fillRectColor_FUN_004031c0(0,iVar8 - iVar4,iVar1 + -1,iVar8 + -1,0);
  }
  uVar2 = _DAT_01c4f00c;
  if ((this_ptr->current_message[0] != '\0') && (*(int *)&g_CGamePtr->field_0x10 != 0)) {
    this_ptr_00 = _DAT_0152d23c;
    if (DAT_0061b49c < 0x1e0) {
      this_ptr_00 = _DAT_0152d240;
    }
    if ((DAT_0061b49c < 0x180) && (this_ptr_00 = _DAT_0152d250, _DAT_01d7f1b8 != 0)) {
      this_ptr_00 = _DAT_0152d248;
    }
    iVar5 = engine_font_cpp_FUN_004c4260
                      (this_ptr_00,this_ptr->current_message,0x1e7e0a8,10,0x400,
                       (DAT_0061b498 * 9) / 10);
    iVar6 = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(this_ptr_00,0x58);
    iVar7 = ((iVar8 * 2 - iVar4) - iVar6 * iVar5) / 2;
    iVar4 = iVar6;
    if (iVar5 < 4) {
      iVar4 = iVar6 * (iVar5 + 1);
    }
    if (iVar8 - iVar4 < iVar7) {
      iVar7 = iVar8 - iVar4;
    }
    engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
    iVar8 = 0;
    if (0 < iVar5) {
      text = (char *)0x1e7e0a8;
      do {
        iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(this_ptr_00,text);
        iVar8 = iVar8 + 1;
        engine_font_cpp_FUN_004c1dd0(this_ptr_00,text,(iVar1 - iVar4) / 2,iVar7,0xf8,0);
        text = text + 0x400;
        iVar7 = iVar7 + iVar6;
      } while (iVar8 < iVar5);
    }
  }
  _DAT_01c4f00c = uVar2;
  return;
}
