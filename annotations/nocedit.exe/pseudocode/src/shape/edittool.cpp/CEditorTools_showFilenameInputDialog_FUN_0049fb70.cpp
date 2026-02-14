// Name: shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
// Address: 0049fb70
// Address Range: [[0049fb70, 004a0012]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70(CEditorTools *this_ptr,char *prompt_text,char *filename_buffer,int buffer_size,int show_directory)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70(CEditorTools *this_ptr,char *prompt_text,char *filename_buffer,int buffer_size,int show_directory)

{
  char cVar1;
  char *pcVar2;
  int y;
  int iVar3;
  int iVar4;
  uint uVar5;
  CInputString *pCVar6;
  CInputString *pCVar7;
  char *pcVar8;
  byte bVar9;
  byte in_stack_00000018;
  int color_value;
  int in_stack_fffffca0;
  int in_stack_fffffca4;
  CInputString local_158;
  int local_18;
  int local_14;
  
  bVar9 = 0;
  if (filename_buffer == (char *)0x0) {
    filename_buffer = &s_EmptyChar_0062318c;
  }
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_004a0890
            (this_ptr,g_FontCharacterHeight * 0x1e,g_FontCharacterWidth * 2,prompt_text,0);
  pcVar8 = (char *)show_directory;
  if ((in_stack_00000018 & 1) == 0) {
    pcVar8 = (char *)0x0;
  }
  shape_edittool_cpp_CInputString_init_FUN_0049d3d0
            (&local_158,pcVar8,0x14,0,in_stack_fffffca0,in_stack_fffffca4);
  local_18 = g_InputKeyMask;
  g_InputKeyMask = 0x7f;
  local_14 = 0;
  do {
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(this_ptr);
    strupr(local_158.string_data);
    if (*filename_buffer != '\0') {
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Directory: ");
      pcVar8 = &stack0xfffffca0;
      do {
        cVar1 = *pcVar2;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      iVar3 = -1;
      pcVar8 = &stack0xfffffca0;
      do {
        pcVar2 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar2 = pcVar8 + (uint)bVar9 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar2;
      } while (cVar1 != '\0');
      pcVar2 = pcVar2 + -1;
      pcVar8 = filename_buffer;
      do {
        cVar1 = *pcVar8;
        *pcVar2 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar2[1] = cVar1;
        pcVar2 = pcVar2 + 2;
      } while (cVar1 != '\0');
      engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
      engine_font_cpp_CBitFont_drawText_FUN_004cda80
                (g_EditorFont,&stack0xfffffca0,g_ClipLeft,g_ClipTop,INT_02cf2aac,-1);
    }
    iVar3 = INT_02cf2aac;
    if (local_14 != 0) {
      iVar3 = g_ButtonColor;
    }
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    color_value = -1;
    y = g_ClipTop + g_FontCharacterWidth;
    iVar4 = g_ClipLeft;
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Filename: ");
    engine_font_cpp_CBitFont_drawText_FUN_004cda80(g_EditorFont,pcVar8,iVar4,y,iVar3,color_value);
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Filename: ");
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,pcVar8);
    shape_edittool_cpp_CInputString_draw_FUN_0049d9b0
              (&local_158,iVar3 + g_ClipLeft,g_ClipTop + g_FontCharacterWidth);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    if (local_14 != 0) break;
    while (iVar3 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(), iVar3 != 0) {
      iVar3 = engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
      if (iVar3 == 0x1b) {
        *(byte *)show_directory = 0;
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(this_ptr);
        engine_2d_c_clearInputAndWait_FUN_00403260();
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        g_InputKeyMask = local_18;
        return 0;
      }
      if ((iVar3 == 0xd) && (local_158.string_data[0] != '\0')) {
        pCVar6 = &local_158;
        do {
          pCVar7 = pCVar6;
          if (pCVar6->string_data[0] == '.') goto LAB_0049fea7;
          if (pCVar6->string_data[0] == '\0') break;
          pCVar7 = (CInputString *)(pCVar6->string_data + 1);
          if (pCVar7->string_data[0] == '.') goto LAB_0049fea7;
          pCVar6 = (CInputString *)(pCVar6->string_data + 2);
        } while (pCVar7->string_data[0] != '\0');
        pCVar7 = (CInputString *)0x0;
LAB_0049fea7:
        if (pCVar7 == (CInputString *)0x0) {
          if (*(char *)buffer_size != '.') {
            pcVar8 = ".";
            iVar4 = -1;
            pCVar6 = &local_158;
            do {
              pCVar7 = pCVar6;
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              pCVar7 = (CInputString *)((int)pCVar6 + (uint)bVar9 * -2 + 1);
              pcVar2 = pCVar6->string_data;
              pCVar6 = pCVar7;
            } while (*pcVar2 != '\0');
            pcVar2 = (char *)((int)&pCVar7[-1].mask_mode + 3);
            do {
              cVar1 = *pcVar8;
              *pcVar2 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar8[1];
              pcVar8 = pcVar8 + 2;
              pcVar2[1] = cVar1;
              pcVar2 = pcVar2 + 2;
            } while (cVar1 != '\0');
          }
          iVar4 = -1;
          pCVar6 = &local_158;
          do {
            pCVar7 = pCVar6;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pCVar7 = (CInputString *)((int)pCVar6 + (uint)bVar9 * -2 + 1);
            pcVar8 = pCVar6->string_data;
            pCVar6 = pCVar7;
          } while (*pcVar8 != '\0');
          pcVar2 = (char *)((int)&pCVar7[-1].mask_mode + 3);
          pcVar8 = (char *)buffer_size;
          do {
            cVar1 = *pcVar8;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar8[1];
            pcVar8 = pcVar8 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          uVar5 = 0xffffffff;
          pCVar6 = &local_158;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar8 = pCVar6->string_data;
            pCVar6 = (CInputString *)((int)pCVar6 + (uint)bVar9 * -2 + 1);
          } while (*pcVar8 != '\0');
          local_158.current_length = ~uVar5 - 1;
          local_158.cursor_position = local_158.current_length;
          shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0049d460(&local_158);
        }
        engine_2d_c_clearInputAndWait_FUN_00403260();
        local_14 = 1;
      }
      if (iVar3 == 8) {
        shape_edittool_cpp_CInputString_backspace_FUN_0049d5d0(&local_158);
      }
      else if (((((g_CharacterClassificationTable[(byte)((char)iVar3 + 1)] & 8) != 0) &&
                (iVar3 != 0x5c)) && (iVar3 != 0x3a)) &&
              ((g_CharacterClassificationTable[(byte)((char)iVar3 + 1)] & 2) == 0)) {
        shape_edittool_cpp_CInputString_deleteSelection_FUN_0049d580(&local_158);
        shape_edittool_cpp_CInputString_insertChar_FUN_0049d480(&local_158,(char)iVar3,1);
        shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0049d460(&local_158);
      }
    }
    shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0049d6c0(&local_158);
  } while( true );
  pCVar6 = &local_158;
  do {
    cVar1 = pCVar6->string_data[0];
    *(char *)show_directory = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pCVar6->string_data[1];
    pCVar6 = (CInputString *)(pCVar6->string_data + 2);
    *(char *)(show_directory + 1) = cVar1;
    show_directory = show_directory + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(this_ptr);
  g_InputKeyMask = local_18;
  return 1;
}
