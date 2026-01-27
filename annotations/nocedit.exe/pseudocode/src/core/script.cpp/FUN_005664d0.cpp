// Name: core_script.cpp_FUN_005664d0
// Address: 005664d0
// Address Range: [[005664d0, 00566650]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_005664d0()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_005664d0(uint param_1, uint param_2) */

void core_script_cpp_FUN_005664d0(void)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  int color_mode;
  uint character_code;
  uint uVar4;
  int x_pos;
  int in_stack_00000004;
  int in_stack_00000008;
  int local_1c;
  int local_18;
  
  if (-1 < in_stack_00000008) {
    iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004 + 0x38));
    if (((in_stack_00000008 < iVar2) &&
        (iVar2 = DAT_031141e4 +
                 (in_stack_00000008 - CEdScrollBar_0310fcd8.scroll_position) * DAT_03114208,
        DAT_031141e4 <= iVar2)) && (iVar2 < DAT_031141ec)) {
      pbVar3 = (byte *)shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                                 ((CStrList *)(in_stack_00000004 + 0x38),in_stack_00000008);
      core_script_cpp_FUN_00564560();
      if (local_1c < local_18) {
        engine_2d_c_fillRectColor_FUN_00403170
                  ((local_1c - CEdScrollBar_0310fd0c.scroll_position) * DAT_03114204 + DAT_031141e0,
                   iVar2,(local_18 - CEdScrollBar_0310fd0c.scroll_position) * DAT_03114204 +
                         DAT_031141e0 + -1,iVar2 + DAT_03114208 + -1,4);
      }
      bVar1 = false;
      x_pos = DAT_031141e0 + -CEdScrollBar_0310fd0c.scroll_position * DAT_03114204;
      uVar4 = 0;
      if (x_pos < DAT_031141e8) {
        while( true ) {
          character_code = (uint)*pbVar3;
          if (character_code == 0) break;
          if ((character_code == 0x2f) && (pbVar3[1] == 0x2f)) {
            bVar1 = true;
          }
          color_mode = 0xff;
          if ((g_CharacterClassificationTable[(byte)(*pbVar3 + 1)] & 0xe0U) == 0) {
            color_mode = 0xfb;
          }
          if (bVar1) {
            color_mode = 2;
          }
          engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0
                    (DAT_03114200,character_code,x_pos,iVar2,color_mode,-1);
          if ((character_code != 9) || ((uVar4 & 7) == 7)) {
            pbVar3 = pbVar3 + 1;
          }
          x_pos = x_pos + DAT_03114204;
          uVar4 = uVar4 + 1;
          if (DAT_031141e8 <= x_pos) {
            return;
          }
        }
      }
    }
  }
  return;
}
