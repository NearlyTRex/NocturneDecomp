// Name: shape_edittool.cpp_CEditorTools_createModalWindow_FUN_004a0970
// Address: 004a0970
// Address Range: [[004a0970, 004a0dc2]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_createModalWindow_FUN_004a0970(CEditorTools * this_ptr, int left, int top, int right, int bottom, char * text_content, int window_flags)
// Cross-references:
//   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890 (004a0890) at 004a0934 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00622eae
//   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
//   TerminatedCString s_shape_edittool_cpp_0062339e
//   TerminatedCString s_Can_t_open_another_windo_006233b4
//   TerminatedCString s_j_006233d3
//   TerminatedCString s_shape_edittool_cpp_006233d5
//   TerminatedCString s_shape_edittool_cpp_006233eb
//   TerminatedCString s_Out_of_memory_to_open_ed_00623401
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   char[200] g_TextWrapBuffer
//   undefined4 DAT_02cf0df8
//   CBitFont* g_EditorFont
//   int g_WindowStackCount
//   SWindow[5] g_WindowStack
//   undefined4 DAT_02cf1ce4
//   undefined4 DAT_02cf1ce8
//   undefined4 DAT_02cf1cec
//   undefined4 DAT_02cf1cf0
//   undefined4 DAT_02cf1cf4
//   undefined4 DAT_02cf1cf8
//   undefined4 DAT_02cf1cfc
//   undefined4 DAT_02cf1d00
//   undefined4 DAT_02cf1d04
//   undefined4 DAT_02cf1d08
//   undefined4 DAT_02cf1d0c
//   undefined4 DAT_02cf1d10
//   undefined4 DAT_02cf1d14
//   undefined4 DAT_02cf1d17
//   undefined4 DAT_02cf1d18
//   undefined4 DAT_02cf1ea8
//   undefined4 DAT_02cf1eac
//   undefined4 DAT_02cf1eb0
//   undefined4 DAT_02cf1eb4
//   undefined4 DAT_02cf1eb8
//   int g_FontCharacterHeight
//   int g_FontCharacterWidth
//   void*[1024] g_ScreenBufferArray
//   int g_ViewportCenterXFixed
//   int g_ViewportCenterYFixed
//   int g_ViewportRightFixed
//   int g_ViewportBottomFixed
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   int g_ViewportWidth
//   int g_ViewportHeight
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_setupViewportAndClipping_FUN_00401800
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   engine_font.cpp_CBitFont_wrapText_FUN_004d0010
//   shape_edittool.cpp_CEditorTools_backupScreen_FUN_0049e410
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_createModalWindow_FUN_004a0970
          (CEditorTools *this_ptr,int left,int top,int right,int bottom,char *text_content,
          int window_flags)

{
  SWindow *pSVar1;
  CBitFont *this_ptr_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  SWindow *pSVar9;
  char *buffer;
  char *pcVar10;
  int iVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined4 *puVar14;
  byte bVar15;
  int in_stack_00000020;
  byte in_stack_00000028;
  int local_1c;
  int local_18;
  undefined4 *puVar16;
  
  bVar15 = 0;
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  if (4 < g_WindowStackCount) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x7b8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open another window!");
  }
  iVar2 = g_WindowStackCount;
  pSVar9 = g_WindowStack + g_WindowStackCount;
  iVar3 = (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -0x80) -
               (uint)((g_WindowWidth >> 0x1f) << 6 < 0)) >> 7;
  local_1c = g_WindowHeight / 0x60;
  bottom = bottom - iVar3;
  pcVar10 = text_content + -local_1c;
  window_flags = window_flags + iVar3;
  in_stack_00000020 = in_stack_00000020 + local_1c;
  if (bottom < 0) {
    bottom = 0;
  }
  if (g_WindowWidth < window_flags) {
    window_flags = g_WindowWidth;
  }
  pSVar1 = g_WindowStack + g_WindowStackCount;
  g_WindowStackCount = g_WindowStackCount + 1;
  pSVar1->text_buffer[0] = '\0';
  local_18 = 0;
  if (text_content != (char *)0x0) {
    buffer = g_WindowStack[iVar2].text_buffer;
    iVar4 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                      (g_EditorFont,text_content,g_TextWrapBuffer,0x14,200,
                       (window_flags - bottom) + iVar3 * -2);
    iVar11 = 0;
    if (0 < iVar4) {
      pcVar13 = g_TextWrapBuffer;
      do {
        iVar11 = iVar11 + 1;
        iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(buffer,"%s\n",pcVar13);
        buffer = buffer + iVar5;
        pcVar13 = pcVar13 + 200;
      } while (iVar11 < iVar4);
    }
    this_ptr_00 = g_EditorFont;
    if (0 < iVar4) {
      buffer[-1] = 0;
      local_1c = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40
                           (this_ptr_00,g_WindowStack[iVar2].text_buffer);
      local_1c = g_FontCharacterWidth + local_1c;
      iVar4 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40(g_EditorFont,"j");
      if (0 < iVar4 + g_FontCharacterWidth) {
        local_18 = iVar4 + g_FontCharacterWidth;
      }
      in_stack_00000020 = in_stack_00000020 + local_18 / 2;
      pcVar10 = pcVar10 + -(local_18 / 2);
    }
  }
  text_content = pcVar10;
  if ((int)text_content < 0) {
    text_content = (char *)0x0;
  }
  if (g_WindowHeight < in_stack_00000020) {
    in_stack_00000020 = g_WindowHeight;
  }
  if ((in_stack_00000028 & 1) == 0) {
    if (g_WindowStackCount == 1) {
      shape_edittool_cpp_CEditorTools_backupScreen_FUN_0049e410((CEditorTools *)right);
    }
    g_WindowStack[iVar2].backup_width = g_WindowWidth;
    iVar4 = g_WindowStack[iVar2].backup_width * g_BitsPerPixel;
    g_WindowStack[iVar2].backup_height = g_WindowHeight;
    iVar11 = iVar4 >> 0x1f;
    uVar6 = (int)((iVar4 + iVar11 * -8) - (uint)(iVar11 << 2 < 0)) >> 3;
    iVar4 = g_WindowStack[iVar2].backup_height;
    g_WindowStack[iVar2].backup_x_offset = 0;
    g_WindowStack[iVar2].backup_y_offset = 0;
    pvVar7 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       (iVar4 * uVar6,"..\\shape\\edittool.cpp",0x807);
    g_WindowStack[iVar2].screen_backup_buffer = pvVar7;
    if (pvVar7 == (void *)0x0) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 0x809;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory to open editor window.");
    }
    puVar16 = (undefined4 *)g_WindowStack[iVar2].screen_backup_buffer;
    iVar4 = 0;
    if (0 < g_WindowStack[iVar2].backup_height) {
      do {
        iVar11 = g_WindowStack[iVar2].backup_x_offset * g_BitsPerPixel;
        iVar5 = iVar11 >> 0x1f;
        puVar12 = (undefined4 *)
                  ((int)g_ScreenBufferArray[g_WindowStack[iVar2].backup_y_offset + iVar4] +
                  ((int)((iVar11 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3));
        puVar14 = puVar16;
        for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar14 = *puVar12;
          puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
          puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
        }
        for (uVar8 = uVar6 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar14 = *(undefined1 *)puVar12;
          puVar12 = (undefined4 *)((int)puVar12 + (uint)bVar15 * -2 + 1);
          puVar14 = (undefined4 *)((int)puVar14 + (uint)bVar15 * -2 + 1);
        }
        puVar16 = (undefined4 *)((int)puVar16 + uVar6);
        iVar4 = iVar4 + 1;
      } while (iVar4 < g_WindowStack[iVar2].backup_height);
    }
  }
  else {
    g_WindowStack[iVar2].screen_backup_buffer = (void *)0x0;
  }
  g_WindowStack[iVar2].saved_clip_left = g_ClipLeft;
  g_WindowStack[iVar2].saved_clip_top = g_ClipTop;
  g_WindowStack[iVar2].saved_clip_right = g_ClipRight;
  g_WindowStack[iVar2].saved_clip_bottom = g_ClipBottom;
  g_WindowStack[iVar2].saved_viewport_center_x = g_ViewportCenterXFixed;
  g_WindowStack[iVar2].saved_viewport_center_y = g_ViewportCenterYFixed;
  g_WindowStack[iVar2].saved_viewport_right = g_ViewportRightFixed;
  g_WindowStack[iVar2].saved_viewport_bottom = g_ViewportBottomFixed;
  g_WindowStack[iVar2].saved_viewport_width = g_ViewportWidth;
  g_WindowStack[iVar2].saved_viewport_height = g_ViewportHeight;
  pSVar9->left = bottom;
  g_WindowStack[iVar2].top = (int)text_content;
  g_WindowStack[iVar2].right = window_flags;
  g_WindowStack[iVar2].bottom = in_stack_00000020;
  engine_2d_c_setupViewportAndClipping_FUN_00401800
            (bottom + iVar3,(int)(text_content + local_18 + local_1c),(window_flags - iVar3) + -1,
             (in_stack_00000020 - local_1c) + -1);
  return;
}


// Assembly code:
// 004a0970: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_createModalWindow_FUN_004a0970
// 004a0971: PUSH ESI
// 004a0972: PUSH EDI
// 004a0973: PUSH EBP
// 004a0974: SUB ESP,0x18
// 004a0977: MOV EDI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x18] (READ)
// 004a097b: CMP dword ptr [0x02cf1cd0],0x0
//   XREF to: 02cf1cd0 (READ)
// 004a0982: JZ 0x004a0d76
//   XREF to: 004a0d76 (CONDITIONAL_JUMP)
// 004a0988: MOV EAX,[0x02cf1cd0]
//   Label: LAB_004a0988
//   XREF to: 02cf1cd0 (READ)
// 004a098d: PUSH 0x6a
// 004a098f: MOV EDX,dword ptr [EAX + 0x3168]
// 004a0995: PUSH EAX
// 004a0996: MOV dword ptr [0x02cf2668],EDX
//   XREF to: 02cf2668 (WRITE)
// 004a099c: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004a09a1: MOV ESI,dword ptr [0x02cf1cdc]
//   XREF to: 02cf1cdc (READ)
// 004a09a7: ADD ESP,0x8
// 004a09aa: MOV [0x02cf266c],EAX
//   XREF to: 02cf266c (WRITE)
// 004a09af: CMP ESI,0x5
// 004a09b2: JL 0x004a09d6
//   XREF to: 004a09d6 (CONDITIONAL_JUMP)
// 004a09b4: MOV EBP,0x62339e
//   XREF to: 0062339e (DATA)
// 004a09b9: MOV EAX,0x7b8
// 004a09be: PUSH 0x6233b4
//   XREF to: 006233b4 (DATA)
// 004a09c3: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 004a09c9: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004a09ce: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a09d3: ADD ESP,0x4
// 004a09d6: MOV EDX,dword ptr [0x02cf1cdc]
//   Label: LAB_004a09d6
//   XREF to: 02cf1cdc (READ)
// 004a09dc: MOV EAX,EDX
// 004a09de: SHL EAX,0x4
// 004a09e1: SUB EAX,EDX
// 004a09e3: SHL EAX,0x2
// 004a09e6: ADD EAX,EDX
// 004a09e8: MOV EBX,0x2cf1ce0
//   XREF to: 02cf1ce0 (DATA)
// 004a09ed: SHL EAX,0x3
// 004a09f0: ADD EBX,EAX
// 004a09f2: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 004a09f7: MOV EDX,EAX
// 004a09f9: SAR EDX,0x1f
// 004a09fc: SHL EDX,0x7
// 004a09ff: SBB EAX,EDX
// 004a0a01: SAR EAX,0x7
// 004a0a04: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004a0a08: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004a0a0d: MOV EDX,EAX
// 004a0a0f: MOV ESI,0x60
// 004a0a14: SAR EDX,0x1f
// 004a0a17: IDIV ESI
// 004a0a19: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 004a0a1d: MOV EBP,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x10] (READ)
// 004a0a21: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 004a0a25: MOV EDX,dword ptr [0x02cf1cdc]
//   XREF to: 02cf1cdc (READ)
// 004a0a2b: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x28] (DATA)
// 004a0a2e: INC EDX
// 004a0a2f: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 004a0a33: MOV dword ptr [0x02cf1cdc],EDX
//   XREF to: 02cf1cdc (WRITE)
// 004a0a39: SUB ECX,EAX
// 004a0a3b: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 004a0a3e: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x14] (READ)
// 004a0a42: SUB ESI,EAX
// 004a0a44: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 004a0a48: MOV dword ptr [ESP + 0x30],ECX
//   XREF to: Stack[0x8] (WRITE)
// 004a0a4c: ADD EBP,EAX
// 004a0a4e: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 004a0a51: MOV dword ptr [ESP + 0x34],ESI
//   XREF to: Stack[0xc] (WRITE)
// 004a0a55: ADD EDX,EAX
// 004a0a57: MOV dword ptr [ESP + 0x38],EBP
//   XREF to: Stack[0x10] (WRITE)
// 004a0a5b: MOV dword ptr [ESP + 0x3c],EDX
//   XREF to: Stack[0x14] (WRITE)
// 004a0a5f: TEST ECX,ECX
// 004a0a61: JL 0x004a0d9e
//   XREF to: 004a0d9e (CONDITIONAL_JUMP)
// 004a0a67: MOV EAX,dword ptr [ESP + 0x38]
//   Label: LAB_004a0a67
//   XREF to: Stack[0x10] (READ)
// 004a0a6b: MOV EBP,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004a0a71: CMP EAX,EBP
// 004a0a73: JLE 0x004a0a79
//   XREF to: 004a0a79 (CONDITIONAL_JUMP)
// 004a0a75: MOV dword ptr [ESP + 0x38],EBP
//   XREF to: Stack[0x10] (WRITE)
// 004a0a79: XOR EAX,EAX
//   Label: LAB_004a0a79
// 004a0a7b: MOV byte ptr [EBX + 0x38],0x0
//   XREF to: 02cf1d18 (DATA)
// 004a0a7f: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004a0a83: TEST EDI,EDI
// 004a0a85: JZ 0x004a0b64
//   XREF to: 004a0b64 (CONDITIONAL_JUMP)
// 004a0a8b: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x10] (READ)
// 004a0a8f: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 004a0a93: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 004a0a97: SUB EDX,ECX
// 004a0a99: ADD EAX,EAX
// 004a0a9b: SUB EDX,EAX
// 004a0a9d: PUSH EDX
// 004a0a9e: PUSH 0xc8
// 004a0aa3: PUSH 0x14
// 004a0aa5: PUSH 0x2cf0d30
//   XREF to: 02cf0d30 (DATA)
// 004a0aaa: PUSH EDI
// 004a0aab: MOV ESI,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 004a0ab1: PUSH ESI
// 004a0ab2: LEA EBP,[EBX + 0x38]
// 004a0ab5: CALL engine_font.cpp_CBitFont_wrapText_FUN_004d0010
//   XREF to: 004d0010 (UNCONDITIONAL_CALL)
// 004a0aba: ADD ESP,0x18
// 004a0abd: XOR ESI,ESI
// 004a0abf: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004a0ac3: TEST EAX,EAX
// 004a0ac5: JLE 0x004a0af0
//   XREF to: 004a0af0 (CONDITIONAL_JUMP)
// 004a0ac7: MOV EDI,0x2cf0d30
//   XREF to: 02cf0d30 (DATA)
// 004a0acc: PUSH EDI
//   Label: LAB_004a0acc
//   XREF to: 02cf0d30 (DATA)
//   XREF to: 02cf0df8 (DATA)
// 004a0acd: PUSH 0x6233cf
//   XREF to: 006233cf (DATA)
// 004a0ad2: PUSH EBP
// 004a0ad3: INC ESI
// 004a0ad4: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004a0ad9: ADD ESP,0xc
// 004a0adc: ADD EBP,EAX
// 004a0ade: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004a0ae2: ADD EDI,0xc8
// 004a0ae8: CMP ESI,EAX
// 004a0aea: JL 0x004a0acc
//   XREF to: 004a0acc (CONDITIONAL_JUMP)
// 004a0aec: LEA EAX,[EAX]
// 004a0af0: CMP dword ptr [ESP + 0xc],0x0
//   Label: LAB_004a0af0
//   XREF to: Stack[-0x1c] (READ)
// 004a0af5: JLE 0x004a0b64
//   XREF to: 004a0b64 (CONDITIONAL_JUMP)
// 004a0af7: LEA EAX,[EBX + 0x38]
// 004a0afa: PUSH EAX
// 004a0afb: MOV ECX,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 004a0b01: DEC EBP
// 004a0b02: PUSH ECX
// 004a0b03: MOV byte ptr [EBP],0x0
//   XREF to: 02cf1d17 (DATA)
// 004a0b07: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
//   XREF to: 004cff40 (UNCONDITIONAL_CALL)
// 004a0b0c: ADD ESP,0x8
// 004a0b0f: MOV EDX,dword ptr [0x02cf266c]
//   XREF to: 02cf266c (READ)
// 004a0b15: PUSH 0x6233d3
//   XREF to: 006233d3 (DATA)
// 004a0b1a: MOV ESI,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 004a0b20: ADD EDX,EAX
// 004a0b22: PUSH ESI
// 004a0b23: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 004a0b27: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
//   XREF to: 004cff40 (UNCONDITIONAL_CALL)
// 004a0b2c: ADD ESP,0x8
// 004a0b2f: MOV EDI,dword ptr [0x02cf266c]
//   XREF to: 02cf266c (READ)
// 004a0b35: MOV EBP,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 004a0b39: ADD EAX,EDI
// 004a0b3b: CMP EAX,EBP
// 004a0b3d: JLE 0x004a0b43
//   XREF to: 004a0b43 (CONDITIONAL_JUMP)
// 004a0b3f: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004a0b43: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004a0b43
//   XREF to: Stack[-0x24] (READ)
// 004a0b47: MOV EDX,EAX
// 004a0b49: SAR EDX,0x1f
// 004a0b4c: SUB EAX,EDX
// 004a0b4e: SAR EAX,0x1
// 004a0b50: MOV ECX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x14] (READ)
// 004a0b54: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 004a0b58: ADD ECX,EAX
// 004a0b5a: SUB EDX,EAX
// 004a0b5c: MOV dword ptr [ESP + 0x3c],ECX
//   XREF to: Stack[0x14] (WRITE)
// 004a0b60: MOV dword ptr [ESP + 0x34],EDX
//   XREF to: Stack[0xc] (WRITE)
// 004a0b64: CMP dword ptr [ESP + 0x34],0x0
//   Label: LAB_004a0b64
//   XREF to: Stack[0xc] (READ)
// 004a0b69: JL 0x004a0da9
//   XREF to: 004a0da9 (CONDITIONAL_JUMP)
// 004a0b6f: MOV EAX,dword ptr [ESP + 0x3c]
//   Label: LAB_004a0b6f
//   XREF to: Stack[0x14] (READ)
// 004a0b73: MOV EBP,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004a0b79: CMP EAX,EBP
// 004a0b7b: JLE 0x004a0b81
//   XREF to: 004a0b81 (CONDITIONAL_JUMP)
// 004a0b7d: MOV dword ptr [ESP + 0x3c],EBP
//   XREF to: Stack[0x14] (WRITE)
// 004a0b81: TEST byte ptr [ESP + 0x44],0x1
//   Label: LAB_004a0b81
//   XREF to: Stack[0x1c] (READ)
// 004a0b86: JNZ 0x004a0db4
//   XREF to: 004a0db4 (CONDITIONAL_JUMP)
// 004a0b8c: CMP dword ptr [0x02cf1cdc],0x1
//   XREF to: 02cf1cdc (READ)
// 004a0b93: JNZ 0x004a0ba2
//   XREF to: 004a0ba2 (CONDITIONAL_JUMP)
// 004a0b95: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 004a0b99: PUSH EDX
// 004a0b9a: CALL shape_edittool.cpp_CEditorTools_backupScreen_FUN_0049e410
//   XREF to: 0049e410 (UNCONDITIONAL_CALL)
// 004a0b9f: ADD ESP,0x4
// 004a0ba2: MOV EAX,[0x00679394]
//   Label: LAB_004a0ba2
//   XREF to: 00679394 (READ)
// 004a0ba7: MOV dword ptr [EBX + 0x1d4],EAX
//   XREF to: 02cf1eb4 (DATA)
// 004a0bad: MOV ECX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 004a0bb3: MOV EDX,dword ptr [EBX + 0x1d4]
//   XREF to: 02cf1eb4 (DATA)
// 004a0bb9: IMUL EDX,ECX
// 004a0bbc: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004a0bc1: MOV dword ptr [EBX + 0x1d8],EAX
//   XREF to: 02cf1eb8 (DATA)
// 004a0bc7: MOV EAX,EDX
// 004a0bc9: SAR EDX,0x1f
// 004a0bcc: SHL EDX,0x3
// 004a0bcf: SBB EAX,EDX
// 004a0bd1: SAR EAX,0x3
// 004a0bd4: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004a0bd8: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 004a0bdc: MOV EAX,dword ptr [EBX + 0x1d8]
//   XREF to: 02cf1eb8 (DATA)
// 004a0be2: IMUL EAX,ESI
// 004a0be5: PUSH 0x807
// 004a0bea: PUSH 0x6233d5
//   XREF to: 006233d5 (DATA)
// 004a0bef: MOV dword ptr [EBX + 0x1cc],0x0
//   XREF to: 02cf1eac (DATA)
// 004a0bf9: PUSH EAX
// 004a0bfa: MOV dword ptr [EBX + 0x1d0],0x0
//   XREF to: 02cf1eb0 (DATA)
// 004a0c04: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 004a0c09: ADD ESP,0xc
// 004a0c0c: MOV dword ptr [EBX + 0x1c8],EAX
//   XREF to: 02cf1ea8 (DATA)
// 004a0c12: TEST EAX,EAX
// 004a0c14: JNZ 0x004a0c38
//   XREF to: 004a0c38 (CONDITIONAL_JUMP)
// 004a0c16: MOV EBP,0x6233eb
//   XREF to: 006233eb (DATA)
// 004a0c1b: MOV EAX,0x809
// 004a0c20: PUSH 0x623401
//   XREF to: 00623401 (DATA)
// 004a0c25: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 004a0c2b: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004a0c30: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a0c35: ADD ESP,0x4
// 004a0c38: MOV EAX,dword ptr [EBX + 0x1c8]
//   Label: LAB_004a0c38
//   XREF to: 02cf1ea8 (DATA)
// 004a0c3e: MOV EDX,dword ptr [EBX + 0x1d8]
//   XREF to: 02cf1eb8 (DATA)
// 004a0c44: XOR EBP,EBP
// 004a0c46: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004a0c4a: TEST EDX,EDX
// 004a0c4c: JLE 0x004a0cb0
//   XREF to: 004a0cb0 (CONDITIONAL_JUMP)
// 004a0c4e: MOV ECX,dword ptr [0x0067939c]
//   Label: LAB_004a0c4e
//   XREF to: 0067939c (READ)
// 004a0c54: MOV EDX,dword ptr [EBX + 0x1cc]
//   XREF to: 02cf1eac (DATA)
// 004a0c5a: IMUL EDX,ECX
// 004a0c5d: MOV EAX,dword ptr [EBX + 0x1d0]
//   XREF to: 02cf1eb0 (DATA)
// 004a0c63: ADD EAX,EBP
// 004a0c65: LEA ESI,[EAX*0x4 + 0x0]
// 004a0c6c: MOV EAX,EDX
// 004a0c6e: SAR EDX,0x1f
// 004a0c71: SHL EDX,0x3
// 004a0c74: SBB EAX,EDX
// 004a0c76: SAR EAX,0x3
// 004a0c79: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 004a0c7d: MOV ESI,dword ptr [ESI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 004a0c83: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 004a0c87: ADD ESI,EAX
// 004a0c89: PUSH EDI
// 004a0c8a: MOV EAX,ECX
// 004a0c8c: SHR ECX,0x2
// 004a0c8f: MOVSD.REP ES:EDI,ESI
// 004a0c91: MOV CL,AL
// 004a0c93: AND CL,0x3
// 004a0c96: MOVSB.REP ES:EDI,ESI
// 004a0c98: POP EDI
// 004a0c99: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 004a0c9d: LEA ESI,[EDI + EAX*0x1]
// 004a0ca0: INC EBP
// 004a0ca1: MOV EDI,dword ptr [EBX + 0x1d8]
//   XREF to: 02cf1eb8 (DATA)
// 004a0ca7: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 004a0cab: CMP EBP,EDI
// 004a0cad: JL 0x004a0c4e
//   XREF to: 004a0c4e (CONDITIONAL_JUMP)
// 004a0caf: NOP
// 004a0cb0: MOV EAX,[0x02d02558]
//   Label: LAB_004a0cb0
//   XREF to: 02d02558 (READ)
// 004a0cb5: MOV dword ptr [EBX + 0x10],EAX
//   XREF to: 02cf1cf0 (DATA)
// 004a0cb8: MOV EAX,[0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a0cbd: MOV dword ptr [EBX + 0x14],EAX
//   XREF to: 02cf1cf4 (DATA)
// 004a0cc0: MOV EAX,[0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a0cc5: MOV dword ptr [EBX + 0x18],EAX
//   XREF to: 02cf1cf8 (DATA)
// 004a0cc8: MOV EAX,[0x02d02564]
//   XREF to: 02d02564 (READ)
// 004a0ccd: MOV dword ptr [EBX + 0x1c],EAX
//   XREF to: 02cf1cfc (DATA)
// 004a0cd0: MOV EAX,[0x02d02548]
//   XREF to: 02d02548 (READ)
// 004a0cd5: MOV dword ptr [EBX + 0x20],EAX
//   XREF to: 02cf1d00 (DATA)
// 004a0cd8: MOV EAX,[0x02d0254c]
//   XREF to: 02d0254c (READ)
// 004a0cdd: MOV dword ptr [EBX + 0x24],EAX
//   XREF to: 02cf1d04 (DATA)
// 004a0ce0: MOV EAX,[0x02d02550]
//   XREF to: 02d02550 (READ)
// 004a0ce5: MOV dword ptr [EBX + 0x28],EAX
//   XREF to: 02cf1d08 (DATA)
// 004a0ce8: MOV EAX,[0x02d02554]
//   XREF to: 02d02554 (READ)
// 004a0ced: MOV dword ptr [EBX + 0x2c],EAX
//   XREF to: 02cf1d0c (DATA)
// 004a0cf0: MOV EAX,[0x02d02568]
//   XREF to: 02d02568 (READ)
// 004a0cf5: MOV dword ptr [EBX + 0x30],EAX
//   XREF to: 02cf1d10 (DATA)
// 004a0cf8: MOV EAX,[0x02d0256c]
//   XREF to: 02d0256c (READ)
// 004a0cfd: MOV dword ptr [EBX + 0x34],EAX
//   XREF to: 02cf1d14 (DATA)
// 004a0d00: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 004a0d04: MOV dword ptr [EBX],EAX
//   XREF to: 02cf1ce0 (DATA)
// 004a0d06: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 004a0d0a: MOV dword ptr [EBX + 0x4],EAX
//   XREF to: 02cf1ce4 (DATA)
// 004a0d0d: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x10] (READ)
// 004a0d11: MOV dword ptr [EBX + 0x8],EAX
//   XREF to: 02cf1ce8 (DATA)
// 004a0d14: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x14] (READ)
// 004a0d18: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 004a0d1c: MOV dword ptr [EBX + 0xc],EAX
//   XREF to: 02cf1cec (DATA)
// 004a0d1f: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 004a0d23: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 004a0d27: ADD EBP,EAX
// 004a0d29: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 004a0d2c: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x10] (READ)
// 004a0d30: ADD EDX,EAX
// 004a0d32: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 004a0d36: MOV EBX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x14] (READ)
// 004a0d3a: SUB ECX,EAX
// 004a0d3c: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 004a0d3f: MOV dword ptr [ESP + 0x34],EDX
//   XREF to: Stack[0xc] (WRITE)
// 004a0d43: SUB EBX,EAX
// 004a0d45: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 004a0d49: MOV dword ptr [ESP + 0x3c],EBX
//   XREF to: Stack[0x14] (WRITE)
// 004a0d4d: LEA ESI,[EDX + EAX*0x1]
// 004a0d50: LEA EAX,[EBX + -0x1]
// 004a0d53: PUSH EAX
// 004a0d54: MOV dword ptr [ESP + 0x3c],ECX
//   XREF to: Stack[0x10] (WRITE)
// 004a0d58: LEA EAX,[ECX + -0x1]
// 004a0d5b: PUSH EAX
// 004a0d5c: PUSH ESI
// 004a0d5d: PUSH EBP
// 004a0d5e: MOV dword ptr [ESP + 0x40],EBP
//   XREF to: Stack[0x8] (WRITE)
// 004a0d62: MOV dword ptr [ESP + 0x44],ESI
//   XREF to: Stack[0xc] (WRITE)
// 004a0d66: CALL engine_2d.c_setupViewportAndClipping_FUN_00401800
//   XREF to: 00401800 (UNCONDITIONAL_CALL)
// 004a0d6b: ADD ESP,0x10
// 004a0d6e: ADD ESP,0x18
// 004a0d71: POP EBP
// 004a0d72: POP EDI
// 004a0d73: POP ESI
// 004a0d74: POP EBX
// 004a0d75: RET
// 004a0d76: MOV ECX,0x622eae
//   Label: LAB_004a0d76
//   XREF to: 00622eae (PARAM)
// 004a0d7b: MOV EBX,0x8d
// 004a0d80: PUSH 0x622ec4
//   XREF to: 00622ec4 (DATA)
// 004a0d85: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004a0d8b: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 004a0d91: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a0d96: ADD ESP,0x4
// 004a0d99: JMP 0x004a0988
//   XREF to: 004a0988 (UNCONDITIONAL_JUMP)
// 004a0d9e: XOR ESI,ESI
//   Label: LAB_004a0d9e
// 004a0da0: MOV dword ptr [ESP + 0x30],ESI
//   XREF to: Stack[0x8] (WRITE)
// 004a0da4: JMP 0x004a0a67
//   XREF to: 004a0a67 (UNCONDITIONAL_JUMP)
// 004a0da9: XOR EDI,EDI
//   Label: LAB_004a0da9
// 004a0dab: MOV dword ptr [ESP + 0x34],EDI
//   XREF to: Stack[0xc] (WRITE)
// 004a0daf: JMP 0x004a0b6f
//   XREF to: 004a0b6f (UNCONDITIONAL_JUMP)
// 004a0db4: MOV dword ptr [EBX + 0x1c8],0x0
//   Label: LAB_004a0db4
//   XREF to: 02cf1ea8 (DATA)
// 004a0dbe: JMP 0x004a0cb0
//   XREF to: 004a0cb0 (UNCONDITIONAL_JUMP)
