// Name: core_script.cpp_FUN_00559b20
// Address: 00559b20
// Address Range: [[00559b20, 00559d70]]
// Convention: unknown
// Signature: void core_script_cpp_FUN_00559b20(void)

#include "nocturne.h"

void core_script_cpp_FUN_00559b20(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *text;
  CBitFont *this_ptr;
  int in_stack_00000004;
  
  if (g_CGamePtr->letterbox_mode == 0) {
    fVar3 = (float)core_charactr_cpp_CCharacter_FUN_0042f9e0((CCharacter *)g_CGamePtr);
    FLOAT_0310f4a0 = FLOAT_0310f4a0 - fVar3 / 0.35f;
  }
  else {
    INT_031061e0 = g_CGamePtr->letterbox_mode;
    fVar3 = (float)core_charactr_cpp_CCharacter_FUN_0042f9e0((CCharacter *)g_CGamePtr);
    FLOAT_0310f4a0 = fVar3 / 0.35f + FLOAT_0310f4a0;
  }
  iVar8 = g_WindowHeight;
  iVar1 = g_WindowWidth;
  if (FLOAT_0310f4a0 < 0.0) {
    FLOAT_0310f4a0 = 0.0;
  }
  if (1.0 < FLOAT_0310f4a0) {
    FLOAT_0310f4a0 = 1.0;
  }
  iVar4 = core_script_cpp_FUN_00559ac0();
  if (0 < iVar4) {
    if (INT_031061e0 != 2) {
      engine_2d_c_fillRectColor_FUN_00403170(0,0,iVar1 + -1,iVar4 + -1,0);
    }
    engine_2d_c_fillRectColor_FUN_00403170(0,iVar8 - iVar4,iVar1 + -1,iVar8 + -1,0);
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
    iVar5 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                      (this_ptr,(char *)(in_stack_00000004 + 0x54),&DAT_031061e8,10,0x400,
                       (g_WindowWidth * 9) / 10);
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr,0x58);
    iVar4 = ((iVar8 * 2 - iVar4) - iVar6 * iVar5) / 2;
    iVar8 = iVar8 - iVar6 * iVar5;
    if (iVar8 < iVar4) {
      iVar4 = iVar8;
    }
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    iVar8 = 0;
    if (0 < iVar5) {
      text = &DAT_031061e8;
      do {
        iVar7 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(this_ptr,text);
        iVar8 = iVar8 + 1;
        engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                  (this_ptr,text,(iVar1 - iVar7) / 2,iVar4,0xf8,0);
        text = text + 0x400;
        iVar4 = iVar4 + iVar6;
      } while (iVar8 < iVar5);
    }
  }
  g_ClipTop = iVar2;
  return;
}
