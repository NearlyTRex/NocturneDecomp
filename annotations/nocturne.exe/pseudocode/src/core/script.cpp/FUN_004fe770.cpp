// Name: core_script.cpp_FUN_004fe770
// Address: 004fe770
// Address Range: [[004fe770, 004fe9c0]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_004fe770(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_FUN_004fe770(CScript *this_ptr)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *text;
  CBitFont *this_ptr_00;
  
  if (0x01C775EC->letterbox_mode == 0) {
    fVar3 = core_charactr_cpp_getGameDeltaTime_FUN_0042b5c0(0x01C775EC);
    _DAT_01e56c20 = _DAT_01e56c20 - fVar3 / 0.35f;
  }
  else {
    _DAT_01e53410 = 0x01C775EC->letterbox_mode;
    fVar3 = core_charactr_cpp_getGameDeltaTime_FUN_0042b5c0(0x01C775EC);
    _DAT_01e56c20 = fVar3 / 0.35f + _DAT_01e56c20;
  }
  iVar8 = DAT_005b7620;
  iVar1 = DAT_005b761c;
  if (_DAT_01e56c20 < 0.0) {
    _DAT_01e56c20 = 0.0;
  }
  if (1.0 < _DAT_01e56c20) {
    _DAT_01e56c20 = 1.0;
  }
  iVar4 = core_script_cpp_CScript_getLetterboxHeight_FUN_004fe710(this_ptr);
  if (0 < iVar4) {
    if (_DAT_01e53410 != 2) {
      engine_2d_c_fillRectColor_FUN_00403e60(0,0,iVar1 + -1,iVar4 + -1,0);
    }
    engine_2d_c_fillRectColor_FUN_00403e60(0,iVar8 - iVar4,iVar1 + -1,iVar8 + -1,0);
  }
  uVar2 = _DAT_01c00c5c;
  if ((*(char *)&this_ptr->cmd_timer != '\0') && (0x01C775EC->subtitle_mode != 0)) {
    this_ptr_00 = _DAT_014b98f8;
    if (DAT_005b7620 < 0x1e0) {
      this_ptr_00 = _DAT_014b98fc;
    }
    if ((DAT_005b7620 < 0x180) && (this_ptr_00 = _DAT_014b990c, _DAT_01d16810 != 0)) {
      this_ptr_00 = _DAT_014b9904;
    }
    iVar5 = engine_font_cpp_CBitFont_wrapText_FUN_00492f30
                      (this_ptr_00,(char *)&this_ptr->cmd_timer,(char *)0x1e53418,10,0x400,
                       (DAT_005b761c * 9) / 10);
    iVar6 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr_00,0x58);
    iVar4 = ((iVar8 * 2 - iVar4) - iVar6 * iVar5) / 2;
    iVar8 = iVar8 - iVar6 * iVar5;
    if (iVar8 < iVar4) {
      iVar4 = iVar8;
    }
    engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
    iVar8 = 0;
    if (0 < iVar5) {
      text = (char *)0x1e53418;
      do {
        iVar7 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(this_ptr_00,text);
        iVar8 = iVar8 + 1;
        engine_font_cpp_CBitFont_drawText_FUN_00490980
                  (this_ptr_00,text,(iVar1 - iVar7) / 2,iVar4,0xf8,0);
        text = text + 0x400;
        iVar4 = iVar4 + iVar6;
      } while (iVar8 < iVar5);
    }
  }
  _DAT_01c00c5c = uVar2;
  return;
}
