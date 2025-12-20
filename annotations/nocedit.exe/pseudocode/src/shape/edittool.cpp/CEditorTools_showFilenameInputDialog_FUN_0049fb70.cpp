// Name: shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
// Address: 0049fb70
// Address Range: [[0049fb70, 004a0012]]
// Convention: __cdecl
// Signature: bool shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70(CEditorTools * this_ptr, char * prompt_text, char * filename_buffer, int buffer_size, bool show_directory)

#include "nocturne.h"

bool __cdecl
shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
          (CEditorTools *this_ptr,char *prompt_text,char *filename_buffer,int buffer_size,
          bool show_directory)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  undefined3 in_stack_00000015;
  char *in_stack_00000020;
  char *in_stack_00000024;
  char *in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_0000003c;
  CEditorTools *in_stack_00000044;
  CEditorTools *in_stack_0000004c;
  char *in_stack_00000054;
  byte *in_stack_0000005c;
  int in_stack_fffffcac;
  int in_stack_fffffcb0;
  int color_mode;
  int in_stack_fffffcc8;
  char acStack_144 [44];
  char acStack_118 [8];
  char acStack_110 [256];
  
  bVar8 = 0;
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
            ((CEditorTools *)filename_buffer,g_FontCharacterHeight * 0x1e,g_FontCharacterWidth * 2,
             (char *)buffer_size,0);
  if (((uint)in_stack_00000024 & 1) == 0) {
    in_stack_00000020 = (char *)0x0;
  }
  shape_edittool_cpp_CInputString_init_FUN_0049d3d0
            ((CInputString *)&stack0xfffffeb4,in_stack_00000020,0x14,0,in_stack_fffffcac,
             in_stack_fffffcb0);
  g_InputKeyMask = 0x7f;
  do {
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(_show_directory);
    crt_string_c_strupr_FUN_00600770(acStack_144);
    if (*in_stack_00000024 != '\0') {
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Directory: ");
      pcVar6 = &stack0xfffffcbc;
      do {
        cVar1 = *pcVar2;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      iVar4 = -1;
      pcVar2 = &stack0xfffffcbc;
      do {
        pcVar6 = pcVar2;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar6 = pcVar2 + (uint)bVar8 * -2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar6;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + -1;
      pcVar2 = in_stack_00000028;
      do {
        cVar1 = *pcVar2;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
      engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                (g_EditorFont,&stack0xfffffcc0,g_ClipLeft,g_ClipTop,DAT_02cf2aac,-1);
    }
    iVar4 = DAT_02cf2aac;
    if (buffer_size != 0) {
      iVar4 = g_ButtonColor;
    }
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    color_mode = -1;
    iVar3 = g_ClipTop + g_FontCharacterWidth;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Filename: ");
    engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
              (g_EditorFont,pcVar2,iVar3,iVar4,color_mode,in_stack_fffffcc8);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Filename: ");
    iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,pcVar2);
    in_stack_fffffcc8 = 0x49fda7;
    shape_edittool_cpp_CInputString_draw_FUN_0049d9b0
              ((CInputString *)(acStack_144 + 0x24),iVar4 + g_ClipLeft,
               g_ClipTop + g_FontCharacterWidth);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    if (in_stack_0000002c != 0) break;
    while (iVar4 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(), iVar4 != 0) {
      iVar4 = engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
      if (iVar4 == 0x1b) {
        *in_stack_0000005c = 0;
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(in_stack_0000004c);
        engine_2d_c_clearInputAndWait_FUN_00403260();
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        g_InputKeyMask = in_stack_0000003c;
        return false;
      }
      if ((iVar4 == 0xd) && (acStack_110[0] != '\0')) {
        pcVar2 = acStack_110;
        do {
          pcVar6 = pcVar2;
          if (*pcVar2 == '.') goto LAB_0049fea7;
          if (*pcVar2 == '\0') break;
          pcVar6 = pcVar2 + 1;
          if (*pcVar6 == '.') goto LAB_0049fea7;
          pcVar2 = pcVar2 + 2;
        } while (*pcVar6 != '\0');
        pcVar6 = (char *)0x0;
LAB_0049fea7:
        if (pcVar6 == (char *)0x0) {
          if (*(char *)buffer_size != '.') {
            pcVar6 = ".";
            iVar3 = -1;
            pcVar2 = acStack_110;
            do {
              pcVar7 = pcVar2;
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              pcVar7 = pcVar2 + (uint)bVar8 * -2 + 1;
              cVar1 = *pcVar2;
              pcVar2 = pcVar7;
            } while (cVar1 != '\0');
            pcVar7 = pcVar7 + -1;
            do {
              cVar1 = *pcVar6;
              *pcVar7 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar6[1];
              pcVar6 = pcVar6 + 2;
              pcVar7[1] = cVar1;
              pcVar7 = pcVar7 + 2;
            } while (cVar1 != '\0');
          }
          iVar3 = -1;
          pcVar2 = acStack_110;
          do {
            pcVar6 = pcVar2;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar6 = pcVar2 + (uint)bVar8 * -2 + 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar6;
          } while (cVar1 != '\0');
          pcVar6 = pcVar6 + -1;
          pcVar2 = (char *)buffer_size;
          do {
            cVar1 = *pcVar2;
            *pcVar6 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar2[1];
            pcVar2 = pcVar2 + 2;
            pcVar6[1] = cVar1;
            pcVar6 = pcVar6 + 2;
          } while (cVar1 != '\0');
          uVar5 = 0xffffffff;
          pcVar2 = acStack_110;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar2 + (uint)bVar8 * -2 + 1;
          } while (cVar1 != '\0');
          in_stack_00000024 = (char *)(~uVar5 - 1);
          shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0049d460
                    ((CInputString *)acStack_110);
        }
        engine_2d_c_clearInputAndWait_FUN_00403260();
        in_stack_0000003c = 1;
      }
      if (iVar4 == 8) {
        shape_edittool_cpp_CInputString_backspace_FUN_0049d5d0((CInputString *)acStack_118);
      }
      else if (((((g_CharacterClassificationTable[(byte)((char)iVar4 + 1)] & 8U) != 0) &&
                (iVar4 != 0x5c)) && (iVar4 != 0x3a)) &&
              ((g_CharacterClassificationTable[(byte)((char)iVar4 + 1)] & 2U) == 0)) {
        shape_edittool_cpp_CInputString_deleteSelection_FUN_0049d580((CInputString *)acStack_118);
        in_stack_fffffcc8 = 0x49ffa9;
        shape_edittool_cpp_CInputString_insertChar_FUN_0049d480
                  ((CInputString *)(acStack_144 + 0x24),(char)iVar4,1);
        shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0049d460
                  ((CInputString *)(acStack_144 + 0x28));
      }
    }
    shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0049d6c0
              ((CInputString *)(acStack_118 + 4));
  } while( true );
  pcVar2 = acStack_118;
  do {
    cVar1 = *pcVar2;
    *in_stack_00000054 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    in_stack_00000054[1] = cVar1;
    in_stack_00000054 = in_stack_00000054 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(in_stack_00000044);
  g_InputKeyMask = in_stack_0000002c;
  return true;
}
