// Name: shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
// Address: 0049fb70
// MANUAL RECONSTRUCTION
// Address Range: [[0049fb70, 004a0012]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70(CEditorTools *this_ptr,char *dialog_title,char *directory_path,char *file_extension,char *output_buffer,uint flags)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70(CEditorTools *this_ptr,char *dialog_title,char *directory_path,char *file_extension,char *output_buffer,uint flags)

{
  bool bVar3;
  int iVar5;
  char *pcVar2;
  int y;
  int iVar6;
  int iVar7;
  char *pcVar9;
  char local_360 [520];
  CInputString local_158;
  int color_value;

  if (directory_path == (char *)0x0) {
    directory_path = &s_EmptyChar_0062318c;
  }
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_width;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_EditorFont,0x6a);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_004a0890
            (this_ptr,g_FontCharacterHeight * 0x1e,g_FontCharacterWidth * 2,dialog_title,0);
  pcVar9 = output_buffer;
  if ((flags & 1) == 0) {
    pcVar9 = (char *)0x0;
  }
  shape_edittool_cpp_CInputString_init_FUN_0049d3d0(&local_158,pcVar9,0x14,0);
  iVar5 = g_InputKeyMask;
  g_InputKeyMask = 0x7f;
  bVar3 = false;
  do {
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(this_ptr);
    strupr(local_158.string_data);
    if (*directory_path != '\0') {
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Directory: ");
      strcpy(local_360,pcVar2);
      strcat(local_360,directory_path);
      engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
      engine_font_cpp_CBitFont_drawText_FUN_004cda80
                (g_EditorFont,local_360,g_ClipLeft,g_ClipTop,g_DialogTextColor,-1);
    }
    iVar6 = g_DialogTextColor;
    if (bVar3) {
      iVar6 = g_ActiveItemTextColor;
    }
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    color_value = -1;
    y = g_ClipTop + g_FontCharacterWidth;
    iVar7 = g_ClipLeft;
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Filename: ");
    engine_font_cpp_CBitFont_drawText_FUN_004cda80(g_EditorFont,pcVar9,iVar7,y,iVar6,color_value);
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Filename: ");
    iVar6 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,pcVar9);
    shape_edittool_cpp_CInputString_draw_FUN_0049d9b0
              (&local_158,iVar6 + g_ClipLeft,g_ClipTop + g_FontCharacterWidth);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    if (bVar3) break;
    while (iVar6 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(), iVar6 != 0) {
      iVar6 = engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
      if (iVar6 == 0x1b) {
        *output_buffer = '\0';
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(this_ptr);
        engine_2d_c_clearInputAndWait_FUN_00403260();
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        g_InputKeyMask = iVar5;
        return 0;
      }
      if ((iVar6 == 0xd) && (local_158.string_data[0] != '\0')) {
        if (strchr(local_158.string_data,'.') == (char *)0x0) {
          if (*file_extension != '.') {
            strcat(local_158.string_data,".");
          }
          strcat(local_158.string_data,file_extension);
          local_158.current_length = strlen(local_158.string_data);
          local_158.cursor_position = local_158.current_length;
          shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0049d460(&local_158);
        }
        engine_2d_c_clearInputAndWait_FUN_00403260();
        bVar3 = true;
      }
      if (iVar6 == 8) {
        shape_edittool_cpp_CInputString_backspace_FUN_0049d5d0(&local_158);
      }
      else if (((((g_CharacterClassificationTable[(byte)((char)iVar6 + 1)] & 8) != 0) &&
                (iVar6 != 0x5c)) && (iVar6 != 0x3a)) &&
              ((g_CharacterClassificationTable[(byte)((char)iVar6 + 1)] & 2) == 0)) {
        shape_edittool_cpp_CInputString_deleteSelection_FUN_0049d580(&local_158);
        shape_edittool_cpp_CInputString_insertChar_FUN_0049d480(&local_158,(char)iVar6,1);
        shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0049d460(&local_158);
      }
    }
    shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0049d6c0(&local_158);
  } while( true );
  strcpy(output_buffer,local_158.string_data);
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(this_ptr);
  g_InputKeyMask = iVar5;
  return 1;
}
