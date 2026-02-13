// Name: core_script.cpp_CScript_FUN_005664d0
// Address: 005664d0
// Address Range: [[005664d0, 00566650]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_005664d0(CScript *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_005664d0(CScript *this_ptr,int param_2)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  int color_mode;
  uint character_code;
  uint uVar4;
  int local_1c;
  int local_18;
  int local_14;
  
  if (-1 < param_2) {
    iVar2 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
    if (((param_2 < iVar2) &&
        (local_14 = g_ScriptTextAreaTop +
                    (param_2 - g_ScriptEditorVScrollBar.scroll_position) * g_ScriptEditorLineHeight,
        g_ScriptTextAreaTop <= local_14)) && (local_14 < g_ScriptTextAreaBottom)) {
      pbVar3 = (byte *)shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                                 (&this_ptr->script_text,param_2);
      core_script_cpp_getSelectionRangeForLine_FUN_00564560(param_2,&local_1c,&local_18);
      if (local_1c < local_18) {
        engine_2d_c_fillRectColor_FUN_00403170
                  ((local_1c - g_ScriptEditorHScrollBar.scroll_position) * g_ScriptEditorCharWidth +
                   g_ScriptTextAreaLeft,local_14,
                   (local_18 - g_ScriptEditorHScrollBar.scroll_position) * g_ScriptEditorCharWidth +
                   g_ScriptTextAreaLeft + -1,local_14 + g_ScriptEditorLineHeight + -1,4);
      }
      bVar1 = false;
      iVar2 = g_ScriptTextAreaLeft +
              -g_ScriptEditorHScrollBar.scroll_position * g_ScriptEditorCharWidth;
      uVar4 = 0;
      if (iVar2 < g_ScriptTextAreaRight) {
        while( true ) {
          character_code = (uint)*pbVar3;
          if (character_code == 0) break;
          if ((character_code == 0x2f) && (pbVar3[1] == 0x2f)) {
            bVar1 = true;
          }
          color_mode = 0xff;
          if ((g_CharacterClassificationTable[(byte)(*pbVar3 + 1)] & 0xe0) == 0) {
            color_mode = 0xfb;
          }
          if (bVar1) {
            color_mode = 2;
          }
          engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0
                    (g_ScriptEditorFont,character_code,iVar2,local_14,color_mode,-1);
          if ((character_code != 9) || ((uVar4 & 7) == 7)) {
            pbVar3 = pbVar3 + 1;
          }
          iVar2 = iVar2 + g_ScriptEditorCharWidth;
          uVar4 = uVar4 + 1;
          if (g_ScriptTextAreaRight <= iVar2) {
            return;
          }
        }
      }
    }
  }
  return;
}
