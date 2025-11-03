// Name: shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
// Address: 0049fb70
// Address Range: [[0049fb70, 004a0012]]
// Convention: __cdecl
// Signature: bool shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70(CEditorTools * this_ptr, char * prompt_text, char * filename_buffer, int buffer_size, bool show_directory)
// Cross-references:
//   core_cloth.cpp_FUN_0043ddf0 (0043ddf0) at 0043df42 [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 (00443040) at 0044321f [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047d85d [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 (004bda20) at 004bdac7 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e11bf [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 005387b2 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 (00584940) at 00584e48 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057ed25 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00580e38 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057cd53 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 00598eb0 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b5af0 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00622eae
//   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
//   undefined4 DAT_0062318c
//   TerminatedCString s_Directory_0062318d
//   TerminatedCString s_Filename_00623199
//   TerminatedCString s_Filename_006231a4
//   undefined1 DAT_006231af
//   undefined1 DAT_006231b0
//   undefined1 DAT_006231b1
//   undefined1 DAT_006231b2
//   int g_InputKeyMask = 0x7f
//   CKeys* g_CKeysPtr = 02dcd7d4
//   char[256] g_CharacterClassificationTable
//   CBitFont* g_EditorFont
//   int g_FontCharacterHeight
//   int g_FontCharacterWidth
//   undefined4 DAT_02cf2aac
//   int g_ButtonColor
//   int g_ClipLeft
//   int g_ClipTop
//   void* g_CKeysPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_strupr_FUN_00600770
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_3d.c_setRenderAlpha_FUN_00406d80
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   engine_keys.cpp_CKeys_getInputKey_FUN_00502460
//   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
//   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CInputString_backspace_FUN_0049d5d0
//   shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580
//   shape_edittool.cpp_CInputString_draw_FUN_0049d9b0
//   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0
//   shape_edittool.cpp_CInputString_init_FUN_0049d3d0
//   shape_edittool.cpp_CInputString_insertChar_FUN_0049d480
//   shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00

#include "nocturne.h"

bool __cdecl
shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
          (CEditorTools *this_ptr,char *prompt_text,char *filename_buffer,int buffer_size,
          bool show_directory)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  undefined3 extraout_var;
  int iVar5;
  uint uVar6;
  BADSPACEBASE *in_ESP;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  undefined3 in_stack_00000015;
  char *in_stack_00000020;
  char *in_stack_00000024;
  char *in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_0000003c;
  CEditorTools *in_stack_00000044;
  CEditorTools *in_stack_0000004c;
  char *in_stack_00000054;
  undefined1 *in_stack_0000005c;
  int in_stack_fffffcac;
  int in_stack_fffffcb0;
  int color_mode;
  int in_stack_fffffcc8;
  char acStack_144 [44];
  char acStack_118 [8];
  char acStack_110 [256];
  
  bVar9 = 0;
  if (filename_buffer == (char *)0x0) {
    filename_buffer = &DAT_0062318c;
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
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Directory: ");
      pcVar7 = &stack0xfffffcbc;
      do {
        cVar1 = *pcVar3;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      iVar5 = -1;
      pcVar3 = &stack0xfffffcbc;
      do {
        pcVar7 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar7 = pcVar3 + (uint)bVar9 * -2 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      pcVar3 = in_stack_00000028;
      do {
        cVar1 = *pcVar3;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
      engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                (g_EditorFont,&stack0xfffffcc0,g_ClipLeft,g_ClipTop,DAT_02cf2aac,-1);
    }
    iVar5 = DAT_02cf2aac;
    if (buffer_size != 0) {
      iVar5 = g_ButtonColor;
    }
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    color_mode = -1;
    iVar4 = g_ClipTop + g_FontCharacterWidth;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Filename: ");
    engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
              (g_EditorFont,pcVar3,iVar4,iVar5,color_mode,in_stack_fffffcc8);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Filename: ");
    iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,pcVar3);
    in_stack_fffffcc8 = 0x49fda7;
    shape_edittool_cpp_CInputString_draw_FUN_0049d9b0
              ((CInputString *)(acStack_144 + 0x24),iVar5 + g_ClipLeft,
               g_ClipTop + g_FontCharacterWidth);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    if (in_stack_0000002c != 0) break;
    while (bVar2 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(),
          CONCAT31(extraout_var,bVar2) != 0) {
      iVar5 = engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
      if (iVar5 == 0x1b) {
        *in_stack_0000005c = 0;
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(in_stack_0000004c);
        engine_2d_c_clearInputAndWait_FUN_00403260();
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        g_InputKeyMask = in_stack_0000003c;
        return false;
      }
      if ((iVar5 == 0xd) && (acStack_110[0] != '\0')) {
        pcVar3 = acStack_110;
        do {
          pcVar7 = pcVar3;
          if (*pcVar3 == '.') goto LAB_0049fea7;
          if (*pcVar3 == '\0') break;
          pcVar7 = pcVar3 + 1;
          if (*pcVar7 == '.') goto LAB_0049fea7;
          pcVar3 = pcVar3 + 2;
        } while (*pcVar7 != '\0');
        pcVar7 = (char *)0x0;
LAB_0049fea7:
        if (pcVar7 == (char *)0x0) {
          if (*(char *)buffer_size != '.') {
            pcVar7 = &DAT_006231af;
            iVar4 = -1;
            pcVar3 = acStack_110;
            do {
              pcVar8 = pcVar3;
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              pcVar8 = pcVar3 + (uint)bVar9 * -2 + 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar8;
            } while (cVar1 != '\0');
            pcVar8 = pcVar8 + -1;
            do {
              cVar1 = *pcVar7;
              *pcVar8 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar7[1];
              pcVar7 = pcVar7 + 2;
              pcVar8[1] = cVar1;
              pcVar8 = pcVar8 + 2;
            } while (cVar1 != '\0');
          }
          iVar4 = -1;
          pcVar3 = acStack_110;
          do {
            pcVar7 = pcVar3;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar7 = pcVar3 + (uint)bVar9 * -2 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar7;
          } while (cVar1 != '\0');
          pcVar7 = pcVar7 + -1;
          pcVar3 = (char *)buffer_size;
          do {
            cVar1 = *pcVar3;
            *pcVar7 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar3[1];
            pcVar3 = pcVar3 + 2;
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
          uVar6 = 0xffffffff;
          pcVar3 = acStack_110;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + (uint)bVar9 * -2 + 1;
          } while (cVar1 != '\0');
          in_stack_00000024 = (char *)(~uVar6 - 1);
          shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0049d460
                    ((CInputString *)acStack_110);
        }
        engine_2d_c_clearInputAndWait_FUN_00403260();
        in_stack_0000003c = 1;
      }
      if (iVar5 == 8) {
        shape_edittool_cpp_CInputString_backspace_FUN_0049d5d0((CInputString *)acStack_118);
      }
      else if (((((g_CharacterClassificationTable[(byte)((char)iVar5 + 1)] & 8U) != 0) &&
                (iVar5 != 0x5c)) && (iVar5 != 0x3a)) &&
              ((g_CharacterClassificationTable[(byte)((char)iVar5 + 1)] & 2U) == 0)) {
        shape_edittool_cpp_CInputString_deleteSelection_FUN_0049d580((CInputString *)acStack_118);
        in_stack_fffffcc8 = 0x49ffa9;
        shape_edittool_cpp_CInputString_insertChar_FUN_0049d480
                  ((CInputString *)(acStack_144 + 0x24),(char)iVar5,1);
        shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0049d460
                  ((CInputString *)(acStack_144 + 0x28));
      }
    }
    shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0049d6c0
              ((CInputString *)(acStack_118 + 4));
  } while( true );
  pcVar3 = acStack_118;
  do {
    cVar1 = *pcVar3;
    *in_stack_00000054 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    in_stack_00000054[1] = cVar1;
    in_stack_00000054 = in_stack_00000054 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(in_stack_00000044);
  g_InputKeyMask = in_stack_0000002c;
  return true;
}


// Assembly code:
// 0049fb70: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
// 0049fb71: PUSH ESI
// 0049fb72: PUSH EDI
// 0049fb73: PUSH EBP
// 0049fb74: SUB ESP,0x350
// 0049fb7a: MOV EBP,dword ptr [ESP + 0x370]
//   XREF to: Stack[0x10] (READ)
// 0049fb81: CMP dword ptr [ESP + 0x36c],0x0
//   XREF to: Stack[0xc] (READ)
// 0049fb89: JZ 0x0049fddb
//   XREF to: 0049fddb (CONDITIONAL_JUMP)
// 0049fb8f: CMP dword ptr [0x02cf1cd0],0x0
//   Label: LAB_0049fb8f
//   XREF to: 02cf1cd0 (READ)
// 0049fb96: JNZ 0x0049fbbb
//   XREF to: 0049fbbb (CONDITIONAL_JUMP)
// 0049fb98: MOV ESI,0x622eae
//   XREF to: 00622eae (DATA)
// 0049fb9d: MOV EDI,0x8d
// 0049fba2: PUSH 0x622ec4
//   XREF to: 00622ec4 (DATA)
// 0049fba7: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0049fbad: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0049fbb3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0049fbb8: ADD ESP,0x4
// 0049fbbb: MOV EAX,[0x02cf1cd0]
//   Label: LAB_0049fbbb
//   XREF to: 02cf1cd0 (READ)
// 0049fbc0: PUSH 0x6a
// 0049fbc2: MOV ECX,dword ptr [EAX + 0x3168]
// 0049fbc8: PUSH EAX
// 0049fbc9: MOV dword ptr [0x02cf2668],ECX
//   XREF to: 02cf2668 (WRITE)
// 0049fbcf: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 0049fbd4: ADD ESP,0x8
// 0049fbd7: PUSH 0x0
// 0049fbd9: MOV EDX,dword ptr [ESP + 0x36c]
//   XREF to: Stack[0x8] (READ)
// 0049fbe0: PUSH EDX
// 0049fbe1: MOV [0x02cf266c],EAX
//   XREF to: 02cf266c (WRITE)
// 0049fbe6: ADD EAX,EAX
// 0049fbe8: PUSH EAX
// 0049fbe9: MOV EAX,[0x02cf2668]
//   XREF to: 02cf2668 (READ)
// 0049fbee: ADD EAX,EAX
// 0049fbf0: MOV ECX,EAX
// 0049fbf2: SHL EAX,0x4
// 0049fbf5: SUB EAX,ECX
// 0049fbf7: PUSH EAX
// 0049fbf8: MOV ECX,dword ptr [ESP + 0x374]
//   XREF to: Stack[0x4] (READ)
// 0049fbff: PUSH ECX
// 0049fc00: CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
//   XREF to: 004a0890 (UNCONDITIONAL_CALL)
// 0049fc05: ADD ESP,0x14
// 0049fc08: TEST byte ptr [ESP + 0x378],0x1
//   XREF to: Stack[0x18] (READ)
// 0049fc10: JZ 0x0049fdeb
//   XREF to: 0049fdeb (CONDITIONAL_JUMP)
// 0049fc16: PUSH 0x0
// 0049fc18: PUSH 0x14
// 0049fc1a: MOV EBX,dword ptr [ESP + 0x37c]
//   XREF to: Stack[0x14] (READ)
// 0049fc21: PUSH EBX
// 0049fc22: LEA EAX,[ESP + 0x214]
//   Label: LAB_0049fc22
//   XREF to: Stack[-0x158] (DATA)
// 0049fc29: PUSH EAX
// 0049fc2a: CALL shape_edittool.cpp_CInputString_init_FUN_0049d3d0
//   XREF to: 0049d3d0 (UNCONDITIONAL_CALL)
// 0049fc2f: ADD ESP,0x10
// 0049fc32: MOV EDI,0x7f
// 0049fc37: MOV EAX,[0x006793a8]
//   XREF to: 006793a8 (READ)
// 0049fc3c: XOR ESI,ESI
// 0049fc3e: MOV dword ptr [ESP + 0x348],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0049fc45: MOV dword ptr [0x006793a8],EDI
//   XREF to: 006793a8 (WRITE)
// 0049fc4b: MOV dword ptr [ESP + 0x34c],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0049fc52: MOV EAX,dword ptr [ESP + 0x364]
//   Label: LAB_0049fc52
//   XREF to: Stack[0x4] (READ)
// 0049fc59: PUSH EAX
// 0049fc5a: CALL shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80
//   XREF to: 004a0f80 (UNCONDITIONAL_CALL)
// 0049fc5f: ADD ESP,0x4
// 0049fc62: LEA EAX,[ESP + 0x208]
//   XREF to: Stack[-0x158] (DATA)
// 0049fc69: PUSH EAX
// 0049fc6a: CALL crt_string.c_strupr_FUN_00600770
//   XREF to: 00600770 (UNCONDITIONAL_CALL)
// 0049fc6f: ADD ESP,0x4
// 0049fc72: MOV EAX,dword ptr [ESP + 0x36c]
//   XREF to: Stack[0xc] (READ)
// 0049fc79: CMP byte ptr [EAX],0x0
// 0049fc7c: JZ 0x0049fd10
//   XREF to: 0049fd10 (CONDITIONAL_JUMP)
// 0049fc82: PUSH 0x62318d
//   XREF to: 0062318d (DATA)
// 0049fc87: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 0049fc8c: ADD ESP,0x4
// 0049fc8f: MOV EDI,ESP
// 0049fc91: MOV ESI,EAX
// 0049fc93: PUSH EDI
// 0049fc94: MOV AL,byte ptr [ESI]
//   Label: LAB_0049fc94
// 0049fc96: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x360] (DATA)
// 0049fc98: CMP AL,0x0
// 0049fc9a: JZ 0x0049fcac
//   XREF to: 0049fcac (CONDITIONAL_JUMP)
// 0049fc9c: MOV AL,byte ptr [ESI + 0x1]
// 0049fc9f: ADD ESI,0x2
// 0049fca2: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x35f] (WRITE)
// 0049fca5: ADD EDI,0x2
// 0049fca8: CMP AL,0x0
// 0049fcaa: JNZ 0x0049fc94
//   XREF to: 0049fc94 (CONDITIONAL_JUMP)
// 0049fcac: POP EDI
//   Label: LAB_0049fcac
// 0049fcad: MOV ESI,dword ptr [ESP + 0x36c]
//   XREF to: Stack[0xc] (READ)
// 0049fcb4: MOV EDI,ESP
// 0049fcb6: PUSH EDI
// 0049fcb7: SUB ECX,ECX
// 0049fcb9: DEC ECX
// 0049fcba: MOV AL,0x0
// 0049fcbc: SCASB.REPNE ES:EDI
// 0049fcbe: DEC EDI
// 0049fcbf: MOV AL,byte ptr [ESI]
//   Label: LAB_0049fcbf
// 0049fcc1: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x360] (DATA)
// 0049fcc3: CMP AL,0x0
// 0049fcc5: JZ 0x0049fcd7
//   XREF to: 0049fcd7 (CONDITIONAL_JUMP)
// 0049fcc7: MOV AL,byte ptr [ESI + 0x1]
// 0049fcca: ADD ESI,0x2
// 0049fccd: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x35f] (WRITE)
// 0049fcd0: ADD EDI,0x2
// 0049fcd3: CMP AL,0x0
// 0049fcd5: JNZ 0x0049fcbf
//   XREF to: 0049fcbf (CONDITIONAL_JUMP)
// 0049fcd7: POP EDI
//   Label: LAB_0049fcd7
// 0049fcd8: PUSH 0xffff
// 0049fcdd: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 0049fce2: ADD ESP,0x4
// 0049fce5: PUSH -0x1
// 0049fce7: MOV EDX,dword ptr [0x02cf2aac]
//   XREF to: 02cf2aac (READ)
// 0049fced: PUSH EDX
// 0049fcee: MOV ECX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 0049fcf4: PUSH ECX
// 0049fcf5: MOV EBX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0049fcfb: PUSH EBX
// 0049fcfc: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x360] (DATA)
// 0049fd00: PUSH EAX
// 0049fd01: MOV ESI,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 0049fd07: PUSH ESI
// 0049fd08: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 0049fd0d: ADD ESP,0x18
// 0049fd10: CMP dword ptr [ESP + 0x34c],0x0
//   Label: LAB_0049fd10
//   XREF to: Stack[-0x14] (READ)
// 0049fd18: JZ 0x0049fdf6
//   XREF to: 0049fdf6 (CONDITIONAL_JUMP)
// 0049fd1e: MOV EBX,dword ptr [0x02cf2ab0]
//   XREF to: 02cf2ab0 (READ)
// 0049fd24: PUSH 0xffff
//   Label: LAB_0049fd24
// 0049fd29: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 0049fd2e: ADD ESP,0x4
// 0049fd31: PUSH -0x1
// 0049fd33: MOV EAX,[0x02d0255c]
//   XREF to: 02d0255c (READ)
// 0049fd38: MOV EDX,dword ptr [0x02cf266c]
//   XREF to: 02cf266c (READ)
// 0049fd3e: PUSH EBX
// 0049fd3f: ADD EAX,EDX
// 0049fd41: PUSH EAX
// 0049fd42: MOV ECX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0049fd48: PUSH ECX
// 0049fd49: PUSH 0x623199
//   XREF to: 00623199 (DATA)
// 0049fd4e: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 0049fd53: ADD ESP,0x4
// 0049fd56: PUSH EAX
// 0049fd57: MOV EBX,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 0049fd5d: PUSH EBX
// 0049fd5e: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 0049fd63: ADD ESP,0x18
// 0049fd66: PUSH 0x6231a4
//   XREF to: 006231a4 (DATA)
// 0049fd6b: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 0049fd70: ADD ESP,0x4
// 0049fd73: PUSH EAX
// 0049fd74: MOV ESI,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 0049fd7a: PUSH ESI
// 0049fd7b: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 0049fd80: MOV EDI,dword ptr [0x02cf266c]
//   XREF to: 02cf266c (READ)
// 0049fd86: MOV ECX,EAX
// 0049fd88: MOV EAX,[0x02d0255c]
//   XREF to: 02d0255c (READ)
// 0049fd8d: ADD ESP,0x8
// 0049fd90: ADD EAX,EDI
// 0049fd92: PUSH EAX
// 0049fd93: ADD ECX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0049fd99: PUSH ECX
// 0049fd9a: LEA EAX,[ESP + 0x210]
//   XREF to: Stack[-0x158] (DATA)
// 0049fda1: PUSH EAX
// 0049fda2: CALL shape_edittool.cpp_CInputString_draw_FUN_0049d9b0
//   XREF to: 0049d9b0 (UNCONDITIONAL_CALL)
// 0049fda7: ADD ESP,0xc
// 0049fdaa: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0049fdaf: CMP dword ptr [ESP + 0x34c],0x0
//   XREF to: Stack[-0x14] (READ)
// 0049fdb7: JNZ 0x0049fe01
//   XREF to: 0049fe01 (CONDITIONAL_JUMP)
// 0049fdb9: CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00
//   Label: LAB_0049fdb9
//   XREF to: 005f2f00 (UNCONDITIONAL_CALL)
// 0049fdbe: TEST EAX,EAX
// 0049fdc0: JNZ 0x0049fe55
//   XREF to: 0049fe55 (CONDITIONAL_JUMP)
// 0049fdc6: LEA EAX,[ESP + 0x208]
//   XREF to: Stack[-0x158] (DATA)
// 0049fdcd: PUSH EAX
// 0049fdce: CALL shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0
//   XREF to: 0049d6c0 (UNCONDITIONAL_CALL)
// 0049fdd3: ADD ESP,0x4
// 0049fdd6: JMP 0x0049fc52
//   XREF to: 0049fc52 (UNCONDITIONAL_JUMP)
// 0049fddb: MOV dword ptr [ESP + 0x36c],0x62318c
//   Label: LAB_0049fddb
//   XREF to: Stack[0xc] (WRITE)
//   XREF to: 0062318c (DATA)
// 0049fde6: JMP 0x0049fb8f
//   XREF to: 0049fb8f (UNCONDITIONAL_JUMP)
// 0049fdeb: PUSH 0x0
//   Label: LAB_0049fdeb
// 0049fded: PUSH 0x14
// 0049fdef: PUSH 0x0
// 0049fdf1: JMP 0x0049fc22
//   XREF to: 0049fc22 (UNCONDITIONAL_JUMP)
// 0049fdf6: MOV EBX,dword ptr [0x02cf2aac]
//   Label: LAB_0049fdf6
//   XREF to: 02cf2aac (READ)
// 0049fdfc: JMP 0x0049fd24
//   XREF to: 0049fd24 (UNCONDITIONAL_JUMP)
// 0049fe01: LEA ESI,[ESP + 0x208]
//   Label: LAB_0049fe01
//   XREF to: Stack[-0x158] (DATA)
// 0049fe08: MOV EDI,dword ptr [ESP + 0x374]
//   XREF to: Stack[0x14] (READ)
// 0049fe0f: MOV ECX,dword ptr [ESP + 0x364]
//   XREF to: Stack[0x4] (READ)
// 0049fe16: PUSH EDI
// 0049fe17: MOV AL,byte ptr [ESI]
//   Label: LAB_0049fe17
//   XREF to: Stack[-0x158] (DATA)
// 0049fe19: MOV byte ptr [EDI],AL
// 0049fe1b: CMP AL,0x0
// 0049fe1d: JZ 0x0049fe2f
//   XREF to: 0049fe2f (CONDITIONAL_JUMP)
// 0049fe1f: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x157] (READ)
// 0049fe22: ADD ESI,0x2
// 0049fe25: MOV byte ptr [EDI + 0x1],AL
// 0049fe28: ADD EDI,0x2
// 0049fe2b: CMP AL,0x0
// 0049fe2d: JNZ 0x0049fe17
//   XREF to: 0049fe17 (CONDITIONAL_JUMP)
// 0049fe2f: POP EDI
//   Label: LAB_0049fe2f
// 0049fe30: PUSH ECX
// 0049fe31: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 0049fe36: ADD ESP,0x4
// 0049fe39: MOV EAX,dword ptr [ESP + 0x348]
//   XREF to: Stack[-0x18] (READ)
// 0049fe40: MOV [0x006793a8],EAX
//   XREF to: 006793a8 (WRITE)
// 0049fe45: MOV EAX,0x1
// 0049fe4a: ADD ESP,0x350
// 0049fe50: POP EBP
// 0049fe51: POP EDI
// 0049fe52: POP ESI
// 0049fe53: POP EBX
// 0049fe54: RET
// 0049fe55: MOV EBX,dword ptr [0x0067cf44]
//   Label: LAB_0049fe55
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 0049fe5b: PUSH EBX
//   XREF to: 02dcd7d4 (DATA)
// 0049fe5c: CALL engine_keys.cpp_CKeys_getInputKey_FUN_00502460
//   XREF to: 00502460 (UNCONDITIONAL_CALL)
// 0049fe61: ADD ESP,0x4
// 0049fe64: MOV EBX,EAX
// 0049fe66: CMP EAX,0x1b
// 0049fe69: JZ 0x0049ffc1
//   XREF to: 0049ffc1 (CONDITIONAL_JUMP)
// 0049fe6f: CMP EAX,0xd
// 0049fe72: JNZ 0x0049ff4d
//   XREF to: 0049ff4d (CONDITIONAL_JUMP)
// 0049fe78: CMP byte ptr [ESP + 0x208],0x0
//   XREF to: Stack[-0x158] (READ)
// 0049fe80: JZ 0x0049ff4d
//   XREF to: 0049ff4d (CONDITIONAL_JUMP)
// 0049fe86: MOV DL,0x2e
// 0049fe88: LEA ESI,[ESP + 0x208]
//   XREF to: Stack[-0x158] (DATA)
// 0049fe8f: MOV AL,byte ptr [ESI]
//   Label: LAB_0049fe8f
//   XREF to: Stack[-0x158] (DATA)
// 0049fe91: CMP AL,DL
// 0049fe93: JZ 0x0049fea7
//   XREF to: 0049fea7 (CONDITIONAL_JUMP)
// 0049fe95: CMP AL,0x0
// 0049fe97: JZ 0x0049fea5
//   XREF to: 0049fea5 (CONDITIONAL_JUMP)
// 0049fe99: INC ESI
// 0049fe9a: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x157] (DATA)
// 0049fe9c: CMP AL,DL
// 0049fe9e: JZ 0x0049fea7
//   XREF to: 0049fea7 (CONDITIONAL_JUMP)
// 0049fea0: INC ESI
// 0049fea1: CMP AL,0x0
// 0049fea3: JNZ 0x0049fe8f
//   XREF to: 0049fe8f (CONDITIONAL_JUMP)
// 0049fea5: SUB ESI,ESI
//   Label: LAB_0049fea5
// 0049fea7: TEST ESI,ESI
//   Label: LAB_0049fea7
// 0049fea9: JNZ 0x0049ff3c
//   XREF to: 0049ff3c (CONDITIONAL_JUMP)
// 0049feaf: CMP DL,byte ptr [EBP]
// 0049feb2: JZ 0x0049fee2
//   XREF to: 0049fee2 (CONDITIONAL_JUMP)
// 0049feb4: MOV ESI,0x6231af
//   XREF to: 006231af (DATA)
// 0049feb9: LEA EDI,[ESP + 0x208]
//   XREF to: Stack[-0x158] (DATA)
// 0049fec0: PUSH EDI
// 0049fec1: SUB ECX,ECX
// 0049fec3: DEC ECX
// 0049fec4: MOV AL,0x0
// 0049fec6: SCASB.REPNE ES:EDI
// 0049fec8: DEC EDI
// 0049fec9: MOV AL,byte ptr [ESI]
//   Label: LAB_0049fec9
//   XREF to: 006231af (READ)
//   XREF to: 006231b1 (READ)
// 0049fecb: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x158] (DATA)
// 0049fecd: CMP AL,0x0
// 0049fecf: JZ 0x0049fee1
//   XREF to: 0049fee1 (CONDITIONAL_JUMP)
// 0049fed1: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006231b0 (READ)
//   XREF to: 006231b2 (READ)
// 0049fed4: ADD ESI,0x2
// 0049fed7: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x157] (WRITE)
// 0049feda: ADD EDI,0x2
// 0049fedd: CMP AL,0x0
// 0049fedf: JNZ 0x0049fec9
//   XREF to: 0049fec9 (CONDITIONAL_JUMP)
// 0049fee1: POP EDI
//   Label: LAB_0049fee1
// 0049fee2: LEA EDI,[ESP + 0x208]
//   Label: LAB_0049fee2
//   XREF to: Stack[-0x158] (DATA)
// 0049fee9: MOV ESI,EBP
// 0049feeb: PUSH EDI
// 0049feec: SUB ECX,ECX
// 0049feee: DEC ECX
// 0049feef: MOV AL,0x0
// 0049fef1: SCASB.REPNE ES:EDI
// 0049fef3: DEC EDI
// 0049fef4: MOV AL,byte ptr [ESI]
//   Label: LAB_0049fef4
// 0049fef6: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x158] (DATA)
// 0049fef8: CMP AL,0x0
// 0049fefa: JZ 0x0049ff0c
//   XREF to: 0049ff0c (CONDITIONAL_JUMP)
// 0049fefc: MOV AL,byte ptr [ESI + 0x1]
// 0049feff: ADD ESI,0x2
// 0049ff02: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x157] (WRITE)
// 0049ff05: ADD EDI,0x2
// 0049ff08: CMP AL,0x0
// 0049ff0a: JNZ 0x0049fef4
//   XREF to: 0049fef4 (CONDITIONAL_JUMP)
// 0049ff0c: POP EDI
//   Label: LAB_0049ff0c
// 0049ff0d: LEA EDI,[ESP + 0x208]
//   XREF to: Stack[-0x158] (DATA)
// 0049ff14: SUB ECX,ECX
// 0049ff16: DEC ECX
// 0049ff17: XOR EAX,EAX
// 0049ff19: SCASB.REPNE ES:EDI
// 0049ff1b: NOT ECX
// 0049ff1d: DEC ECX
// 0049ff1e: LEA EAX,[ESP + 0x208]
//   XREF to: Stack[-0x158] (DATA)
// 0049ff25: PUSH EAX
// 0049ff26: MOV dword ptr [ESP + 0x33c],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 0049ff2d: MOV dword ptr [ESP + 0x340],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 0049ff34: CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460
//   XREF to: 0049d460 (UNCONDITIONAL_CALL)
// 0049ff39: ADD ESP,0x4
// 0049ff3c: MOV ESI,0x1
//   Label: LAB_0049ff3c
// 0049ff41: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0049ff46: MOV dword ptr [ESP + 0x34c],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0049ff4d: CMP EBX,0x8
//   Label: LAB_0049ff4d
// 0049ff50: JZ 0x0049fffe
//   XREF to: 0049fffe (CONDITIONAL_JUMP)
// 0049ff56: MOV AL,BL
// 0049ff58: INC AL
// 0049ff5a: AND EAX,0xff
// 0049ff5f: MOV CH,byte ptr [EAX + 0x6849c4]
//   XREF to: 006849c4 (DATA)
// 0049ff65: TEST CH,0x8
// 0049ff68: JZ 0x0049fdb9
//   XREF to: 0049fdb9 (CONDITIONAL_JUMP)
// 0049ff6e: CMP EBX,0x5c
// 0049ff71: JZ 0x0049fdb9
//   XREF to: 0049fdb9 (CONDITIONAL_JUMP)
// 0049ff77: CMP EBX,0x3a
// 0049ff7a: JZ 0x0049fdb9
//   XREF to: 0049fdb9 (CONDITIONAL_JUMP)
// 0049ff80: TEST CH,0x2
// 0049ff83: JNZ 0x0049fdb9
//   XREF to: 0049fdb9 (CONDITIONAL_JUMP)
// 0049ff89: LEA EAX,[ESP + 0x208]
//   XREF to: Stack[-0x158] (DATA)
// 0049ff90: PUSH EAX
// 0049ff91: CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580
//   XREF to: 0049d580 (UNCONDITIONAL_CALL)
// 0049ff96: ADD ESP,0x4
// 0049ff99: PUSH 0x1
// 0049ff9b: PUSH EBX
// 0049ff9c: LEA EAX,[ESP + 0x210]
//   XREF to: Stack[-0x158] (DATA)
// 0049ffa3: PUSH EAX
// 0049ffa4: CALL shape_edittool.cpp_CInputString_insertChar_FUN_0049d480
//   XREF to: 0049d480 (UNCONDITIONAL_CALL)
// 0049ffa9: ADD ESP,0xc
// 0049ffac: LEA EAX,[ESP + 0x208]
//   XREF to: Stack[-0x158] (DATA)
// 0049ffb3: PUSH EAX
// 0049ffb4: CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460
//   XREF to: 0049d460 (UNCONDITIONAL_CALL)
// 0049ffb9: ADD ESP,0x4
// 0049ffbc: JMP 0x0049fdb9
//   XREF to: 0049fdb9 (UNCONDITIONAL_JUMP)
// 0049ffc1: MOV EDI,dword ptr [ESP + 0x364]
//   Label: LAB_0049ffc1
//   XREF to: Stack[0x4] (READ)
// 0049ffc8: MOV EAX,dword ptr [ESP + 0x374]
//   XREF to: Stack[0x14] (READ)
// 0049ffcf: PUSH EDI
// 0049ffd0: MOV byte ptr [EAX],0x0
// 0049ffd3: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 0049ffd8: ADD ESP,0x4
// 0049ffdb: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0049ffe0: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0049ffe5: MOV EAX,dword ptr [ESP + 0x348]
//   XREF to: Stack[-0x18] (READ)
// 0049ffec: MOV [0x006793a8],EAX
//   XREF to: 006793a8 (WRITE)
// 0049fff1: XOR EAX,EAX
// 0049fff3: ADD ESP,0x350
// 0049fff9: POP EBP
// 0049fffa: POP EDI
// 0049fffb: POP ESI
// 0049fffc: POP EBX
// 0049fffd: RET
// 0049fffe: LEA EAX,[ESP + 0x208]
//   Label: LAB_0049fffe
//   XREF to: Stack[-0x158] (DATA)
// 004a0005: PUSH EAX
// 004a0006: CALL shape_edittool.cpp_CInputString_backspace_FUN_0049d5d0
//   XREF to: 0049d5d0 (UNCONDITIONAL_CALL)
// 004a000b: ADD ESP,0x4
// 004a000e: JMP 0x0049fdb9
//   XREF to: 0049fdb9 (UNCONDITIONAL_JUMP)
