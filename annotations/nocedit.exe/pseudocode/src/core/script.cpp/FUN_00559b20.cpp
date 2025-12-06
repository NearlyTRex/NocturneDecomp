// Name: core_script.cpp_FUN_00559b20
// Address: 00559b20
// Address Range: [[00559b20, 00559d70]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00559b20()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_script.cpp_FUN_00559b20(uint param_1) */

void core_script_cpp_FUN_00559b20(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *text;
  CBitFont *this_ptr;
  int unaff_ESI;
  int unaff_EDI;
  int in_stack_00000004;
  int local_1c;
  int local_18;
  
  if (g_CGamePtr->letterbox_mode == 0) {
    fVar1 = (float)core_charactr_cpp_CCharacter_FUN_0042f9e0((CCharacter *)g_CGamePtr);
    _DAT_0310f4a0 = _DAT_0310f4a0 - fVar1 / 0.35f;
  }
  else {
    DAT_031061e0 = g_CGamePtr->letterbox_mode;
    fVar1 = (float)core_charactr_cpp_CCharacter_FUN_0042f9e0((CCharacter *)g_CGamePtr);
    _DAT_0310f4a0 = fVar1 / 0.35f + _DAT_0310f4a0;
  }
  iVar6 = g_WindowHeight;
  if (_DAT_0310f4a0 < 0.0) {
    _DAT_0310f4a0 = 0.0;
  }
  if (1.0 < _DAT_0310f4a0) {
    _DAT_0310f4a0 = 1.0;
  }
  iVar2 = core_script_cpp_FUN_00559ac0();
  if (0 < iVar2) {
    if (DAT_031061e0 != 2) {
      engine_2d_c_fillRectColor_FUN_00403170(0,0,local_1c + -1,iVar2 + -1,0);
    }
    engine_2d_c_fillRectColor_FUN_00403170(local_1c,iVar6 - iVar2,local_18 + -1,iVar6 + -1,0);
  }
  iVar2 = g_ClipTop;
  if ((*(char *)(in_stack_00000004 + 0x54) != '\0') && (g_CGamePtr->subtitle_mode != 0)) {
    this_ptr = g_MediumFont;
    if (g_WindowHeight < 0x1e0) {
      this_ptr = g_TinyFont;
    }
    if ((g_WindowHeight < 0x180) && (this_ptr = g_MicroFont, g_MessageCount != 0)) {
      this_ptr = g_SmallEditorFont;
    }
    iVar3 = (g_WindowWidth * 9) / 10;
    iVar4 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                      (this_ptr,(char *)(in_stack_00000004 + 0x54),&DAT_031061e8,10,0x400,iVar3);
    iVar5 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0x58);
    iVar3 = ((iVar3 + iVar6) - iVar5 * iVar4) / 2;
    iVar6 = iVar6 - iVar5 * iVar4;
    if (iVar6 < iVar3) {
      iVar3 = iVar6;
    }
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    iVar6 = 0;
    if (0 < unaff_ESI) {
      text = &DAT_031061e8;
      do {
        iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(this_ptr,text);
        iVar6 = iVar6 + 1;
        engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                  (this_ptr,text,(unaff_EDI - iVar4) / 2,iVar3,0xf8,0);
        text = text + 0x400;
        iVar3 = iVar3 + unaff_EDI;
      } while (iVar6 < unaff_ESI);
    }
  }
  g_ClipTop = iVar2;
  return;
}
