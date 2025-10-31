// Name: shape_edittool.cpp_showTextInputDialog_FUN_0049db10
// Address: 0049db10
// Address Range: [[0049db10, 0049df72]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_showTextInputDialog_FUN_0049db10(int dialog_mode, char * prompt_text, char * input_buffer, int buffer_size, int dialog_flags)
// Cross-references:
//   shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_004a0400 (004a0400) at 004a0418 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 (004a03d0) at 004a03e8 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00622eae
//   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
//   TerminatedCString s_Cancel_00622f83
//   TerminatedCString s_OK_00622f8a
//   TerminatedCString s_Cancel_00622f8d
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_InputKeyMask = 0x7f
//   CKeys* g_CKeysPtr = 02dcd7d4
//   char[256] g_CharacterClassificationTable
//   CBitFont* g_EditorFont
//   CEditorTools g_CEditorToolsPtr
//   int g_FontCharacterHeight
//   int g_FontCharacterWidth
//   CEdButton* g_ActiveButton
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   void* g_CKeysPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   engine_keys.cpp_CKeys_getInputKey_FUN_00502460
//   shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
//   shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0
//   shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0
//   shape_edittool.cpp_CEdButton_dtor_FUN_004a6510
//   shape_edittool.cpp_CEdButton_paint_FUN_004a65e0
//   shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590
//   shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830
//   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
//   shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_004a1230
//   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   shape_edittool.cpp_CInputString_backspace_FUN_0049d5d0
//   shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580
//   shape_edittool.cpp_CInputString_draw_FUN_0049d9b0
//   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0
//   shape_edittool.cpp_CInputString_init_FUN_0049d3d0
//   shape_edittool.cpp_CInputString_insertChar_FUN_0049d480
//   shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_showTextInputDialog_FUN_0049db10
          (int dialog_mode,char *prompt_text,char *input_buffer,int buffer_size,int dialog_flags)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined3 extraout_var;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  char *in_stack_00000018;
  uint in_stack_0000001c;
  int in_stack_0000009c;
  int in_stack_fffffcec;
  int in_stack_fffffcf0;
  undefined1 auStack_1bc [28];
  undefined1 auStack_1a0 [108];
  undefined1 auStack_134 [292];
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  pcVar6 = prompt_text;
  if ((in_stack_0000001c & 1) == 0) {
    pcVar6 = (char *)0x0;
  }
  shape_edittool_cpp_CInputString_init_FUN_0049d3d0
            ((CInputString *)&stack0xfffffcec,pcVar6,(int)input_buffer,dialog_flags,
             in_stack_fffffcec,in_stack_fffffcf0);
  iVar3 = (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -0x80) -
               (uint)((g_WindowWidth >> 0x1f) << 6 < 0)) >> 7;
  iVar4 = g_WindowHeight / 0x60;
  iVar5 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_004a0890
            (g_CEditorToolsPtr,(g_WindowWidth << 2) / 5,iVar5 + iVar4 * 2 + g_FontCharacterWidth,
             in_stack_00000018,0);
  iVar4 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0("Cancel");
  iVar5 = ((g_ClipLeft + g_ClipRight) - iVar3) / 2 - iVar4;
  iVar3 = (g_ClipLeft + g_ClipRight + iVar3) / 2;
  shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
  shape_edittool_cpp_CEdButton_ctor_FUN_004a64e0((CEdButton *)(auStack_134 + 0x58));
  shape_edittool_cpp_CEdButton_ctor_FUN_004a64e0((CEdButton *)auStack_1bc);
  shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004a6590
            ((CEdButton *)(auStack_134 + 0x60),iVar5 + 1,buffer_size,iVar5 + iVar4,g_ClipBottom,
             "OK");
  shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004a6590
            ((CEdButton *)(auStack_1bc + 8),iVar3,dialog_flags,iVar4 + iVar3 + -1,g_ClipBottom,
             "Cancel");
  g_InputKeyMask = 0x7f;
  iVar3 = 0;
LAB_0049dcd6:
  shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(g_CEditorToolsPtr);
  shape_edittool_cpp_CEditorTools_drawWindowSeparator_FUN_004a1230(g_CEditorToolsPtr,1);
  shape_edittool_cpp_CInputString_draw_FUN_0049d9b0
            ((CInputString *)&stack0xfffffd18,g_ClipLeft,g_ClipTop);
  shape_edittool_cpp_CEdButton_paint_FUN_004a65e0
            ((CEdButton *)(auStack_134 + 0x74),(uint)(iVar3 == 0));
  shape_edittool_cpp_CEdButton_paint_FUN_004a65e0((CEdButton *)auStack_1a0,(uint)(iVar3 == 1));
  shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
  if ((iVar4 == 0) && (iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xf), iVar4 != 0)) {
    iVar3 = iVar3 + 1;
  }
  iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
  if ((iVar4 != 0) && (iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xf), iVar4 != 0)) {
    iVar3 = iVar3 + -1;
  }
  if (iVar3 < 2) {
    if (iVar3 < 0) {
      iVar3 = 1;
    }
  }
  else {
    iVar3 = 0;
  }
  while( true ) {
    bVar2 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
    if (CONCAT31(extraout_var,bVar2) == 0) break;
    iVar4 = engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
    if (iVar4 == 0x1b) {
LAB_0049ddda:
      iVar3 = 0;
      goto LAB_0049dddc;
    }
    if (iVar4 == 0xd) {
      if (iVar3 != 0) goto LAB_0049ddda;
      goto LAB_0049de8b;
    }
    if (iVar4 == 8) {
      shape_edittool_cpp_CInputString_backspace_FUN_0049d5d0((CInputString *)&stack0xfffffd7c);
    }
    else if ((g_CharacterClassificationTable[(byte)((char)iVar4 + 1)] & 8U) != 0) {
      shape_edittool_cpp_CInputString_deleteSelection_FUN_0049d580((CInputString *)&stack0xfffffd7c)
      ;
      shape_edittool_cpp_CInputString_insertChar_FUN_0049d480
                ((CInputString *)&stack0xfffffd88,(char)iVar4,1);
      shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0049d460
                ((CInputString *)&stack0xfffffd8c);
    }
  }
  shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0049d6c0((CInputString *)&stack0xfffffd80)
  ;
  iVar4 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830((CEdButton *)(auStack_134 + 0xdc));
  if (iVar4 != 0) {
LAB_0049de8b:
    pcVar6 = &stack0xfffffd88;
    iVar3 = 1;
    goto LAB_0049de95;
  }
  if ((CEdButton *)(auStack_134 + 0xe0) == g_ActiveButton) {
    iVar3 = 0;
  }
  iVar4 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830((CEdButton *)(auStack_1a0 + 0x68));
  if (iVar4 == 0) {
    if ((CEdButton *)auStack_134 == g_ActiveButton) {
      iVar3 = 1;
    }
    goto LAB_0049dcd6;
  }
  iVar3 = 0;
  goto LAB_0049dddc;
  while( true ) {
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    prompt_text[1] = cVar1;
    prompt_text = prompt_text + 2;
    if (cVar1 == '\0') break;
LAB_0049de95:
    cVar1 = *pcVar6;
    *prompt_text = cVar1;
    if (cVar1 == '\0') break;
  }
LAB_0049dddc:
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  g_InputKeyMask = in_stack_0000009c;
  shape_edittool_cpp_CEdButton_dtor_FUN_004a6510((CEdButton *)(auStack_134 + 4));
  shape_edittool_cpp_CEdButton_dtor_FUN_004a6510((CEdButton *)(auStack_134 + 0xec));
  return iVar3;
}


// Assembly code:
// 0049db10: PUSH EBX
//   Label: shape_edittool.cpp_showTextInputDialog_FUN_0049db10
// 0049db11: PUSH ESI
// 0049db12: PUSH EDI
// 0049db13: PUSH EBP
// 0049db14: SUB ESP,0x310
// 0049db1a: MOV EBP,dword ptr [ESP + 0x328]
//   XREF to: Stack[0x8] (READ)
// 0049db21: MOV ESI,dword ptr [ESP + 0x32c]
//   XREF to: Stack[0xc] (READ)
// 0049db28: MOV EBX,dword ptr [ESP + 0x334]
//   XREF to: Stack[0x14] (READ)
// 0049db2f: CMP dword ptr [0x02cf1cd0],0x0
//   XREF to: 02cf1cd0 (READ)
// 0049db36: JZ 0x0049de2d
//   XREF to: 0049de2d (CONDITIONAL_JUMP)
// 0049db3c: MOV EAX,[0x02cf1cd0]
//   Label: LAB_0049db3c
//   XREF to: 02cf1cd0 (READ)
// 0049db41: PUSH 0x6a
// 0049db43: MOV EDX,dword ptr [EAX + 0x3168]
// 0049db49: PUSH EAX
// 0049db4a: MOV dword ptr [0x02cf2668],EDX
//   XREF to: 02cf2668 (WRITE)
// 0049db50: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 0049db55: ADD ESP,0x8
// 0049db58: MOV [0x02cf266c],EAX
//   XREF to: 02cf266c (WRITE)
// 0049db5d: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0049db62: TEST byte ptr [ESP + 0x330],0x1
//   XREF to: Stack[0x10] (READ)
// 0049db6a: JZ 0x0049de55
//   XREF to: 0049de55 (CONDITIONAL_JUMP)
// 0049db70: PUSH EBX
// 0049db71: PUSH ESI
// 0049db72: PUSH EBP
// 0049db73: LEA EAX,[ESP + 0xc]
//   Label: LAB_0049db73
//   XREF to: Stack[-0x320] (DATA)
// 0049db77: PUSH EAX
// 0049db78: CALL shape_edittool.cpp_CInputString_init_FUN_0049d3d0
//   XREF to: 0049d3d0 (UNCONDITIONAL_CALL)
// 0049db7d: ADD ESP,0x10
// 0049db80: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0049db85: MOV EDX,EAX
// 0049db87: SAR EDX,0x1f
// 0049db8a: SHL EDX,0x7
// 0049db8d: SBB EAX,EDX
// 0049db8f: SAR EAX,0x7
// 0049db92: MOV ESI,EAX
// 0049db94: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0049db99: MOV EDX,EAX
// 0049db9b: MOV ECX,0x60
// 0049dba0: SAR EDX,0x1f
// 0049dba3: IDIV ECX
// 0049dba5: PUSH 0x0
// 0049dba7: MOV EBX,EAX
// 0049dba9: CALL shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
//   XREF to: 004a6970 (UNCONDITIONAL_CALL)
// 0049dbae: ADD ESP,0x4
// 0049dbb1: MOV ECX,dword ptr [0x02cf266c]
//   XREF to: 02cf266c (READ)
// 0049dbb7: ADD EBX,EBX
// 0049dbb9: PUSH 0x0
// 0049dbbb: MOV EDX,dword ptr [ESP + 0x328]
//   XREF to: Stack[0x4] (READ)
// 0049dbc2: ADD EAX,EBX
// 0049dbc4: PUSH EDX
// 0049dbc5: ADD EAX,ECX
// 0049dbc7: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0049dbcd: MOV ECX,0x5
// 0049dbd2: SHL EDX,0x2
// 0049dbd5: PUSH EAX
// 0049dbd6: MOV EAX,EDX
// 0049dbd8: SAR EDX,0x1f
// 0049dbdb: IDIV ECX
// 0049dbdd: PUSH EAX
// 0049dbde: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0049dbe4: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0049dbe5: CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
//   XREF to: 004a0890 (UNCONDITIONAL_CALL)
// 0049dbea: ADD ESP,0x14
// 0049dbed: PUSH 0x622f83
//   XREF to: 00622f83 (DATA)
// 0049dbf2: CALL shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0
//   XREF to: 004a68e0 (UNCONDITIONAL_CALL)
// 0049dbf7: MOV ECX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0049dbfd: MOV EDI,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 0049dc03: ADD ECX,EDI
// 0049dc05: MOV EDX,ECX
// 0049dc07: SUB EDX,ESI
// 0049dc09: MOV EBX,EAX
// 0049dc0b: MOV EAX,EDX
// 0049dc0d: SAR EDX,0x1f
// 0049dc10: SUB EAX,EDX
// 0049dc12: SAR EAX,0x1
// 0049dc14: SUB EAX,EBX
// 0049dc16: LEA EDX,[ECX + ESI*0x1]
// 0049dc19: LEA EDI,[EAX + 0x1]
// 0049dc1c: MOV EAX,EDX
// 0049dc1e: SAR EDX,0x1f
// 0049dc21: SUB EAX,EDX
// 0049dc23: SAR EAX,0x1
// 0049dc25: ADD ESP,0x4
// 0049dc28: PUSH 0x0
// 0049dc2a: MOV ESI,EAX
// 0049dc2c: CALL shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
//   XREF to: 004a6970 (UNCONDITIONAL_CALL)
// 0049dc31: MOV EDX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 0049dc37: SUB EDX,EAX
// 0049dc39: ADD ESP,0x4
// 0049dc3c: LEA EAX,[EDX + 0x1]
// 0049dc3f: MOV dword ptr [ESP + 0x308],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0049dc46: LEA EAX,[ESP + 0x224]
//   XREF to: Stack[-0xfc] (DATA)
// 0049dc4d: PUSH EAX
// 0049dc4e: CALL shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0
//   XREF to: 004a64e0 (UNCONDITIONAL_CALL)
// 0049dc53: ADD ESP,0x4
// 0049dc56: LEA EAX,[ESP + 0x140]
//   XREF to: Stack[-0x1e0] (DATA)
// 0049dc5d: PUSH EAX
// 0049dc5e: CALL shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0
//   XREF to: 004a64e0 (UNCONDITIONAL_CALL)
// 0049dc63: ADD ESP,0x4
// 0049dc66: PUSH 0x622f8a
//   XREF to: 00622f8a (DATA)
// 0049dc6b: MOV EAX,[0x02d02564]
//   XREF to: 02d02564 (READ)
// 0049dc70: PUSH EAX
// 0049dc71: LEA EAX,[EDI + EBX*0x1 + -0x1]
// 0049dc75: PUSH EAX
// 0049dc76: MOV EDX,dword ptr [ESP + 0x314]
//   XREF to: Stack[-0x18] (READ)
// 0049dc7d: PUSH EDX
// 0049dc7e: PUSH EDI
// 0049dc7f: LEA EAX,[ESP + 0x238]
//   XREF to: Stack[-0xfc] (DATA)
// 0049dc86: PUSH EAX
// 0049dc87: CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590
//   XREF to: 004a6590 (UNCONDITIONAL_CALL)
// 0049dc8c: ADD ESP,0x18
// 0049dc8f: PUSH 0x622f8d
//   XREF to: 00622f8d (DATA)
// 0049dc94: MOV ECX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 0049dc9a: ADD EBX,ESI
// 0049dc9c: PUSH ECX
// 0049dc9d: DEC EBX
// 0049dc9e: PUSH EBX
// 0049dc9f: MOV EBX,dword ptr [ESP + 0x314]
//   XREF to: Stack[-0x18] (READ)
// 0049dca6: PUSH EBX
// 0049dca7: PUSH ESI
// 0049dca8: LEA EAX,[ESP + 0x154]
//   XREF to: Stack[-0x1e0] (DATA)
// 0049dcaf: PUSH EAX
// 0049dcb0: MOV EDI,0x1
// 0049dcb5: CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590
//   XREF to: 004a6590 (UNCONDITIONAL_CALL)
// 0049dcba: MOV EAX,[0x006793a8]
//   XREF to: 006793a8 (READ)
// 0049dcbf: ADD ESP,0x18
// 0049dcc2: MOV ESI,0x7f
// 0049dcc7: MOV dword ptr [ESP + 0x30c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0049dcce: MOV dword ptr [0x006793a8],ESI
//   XREF to: 006793a8 (WRITE)
// 0049dcd4: XOR ESI,ESI
// 0049dcd6: MOV EAX,[0x00678a60]
//   Label: LAB_0049dcd6
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0049dcdb: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0049dcdc: CALL shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80
//   XREF to: 004a0f80 (UNCONDITIONAL_CALL)
// 0049dce1: ADD ESP,0x4
// 0049dce4: PUSH 0x1
// 0049dce6: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0049dcec: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0049dced: CALL shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_004a1230
//   XREF to: 004a1230 (UNCONDITIONAL_CALL)
// 0049dcf2: ADD ESP,0x8
// 0049dcf5: MOV ECX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 0049dcfb: PUSH ECX
// 0049dcfc: MOV EBX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0049dd02: PUSH EBX
// 0049dd03: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x320] (DATA)
// 0049dd07: PUSH EAX
// 0049dd08: CALL shape_edittool.cpp_CInputString_draw_FUN_0049d9b0
//   XREF to: 0049d9b0 (UNCONDITIONAL_CALL)
// 0049dd0d: ADD ESP,0xc
// 0049dd10: TEST ESI,ESI
// 0049dd12: SETZ AL
// 0049dd15: AND EAX,0xff
// 0049dd1a: PUSH EAX
// 0049dd1b: LEA EAX,[ESP + 0x228]
//   XREF to: Stack[-0xfc] (DATA)
// 0049dd22: PUSH EAX
// 0049dd23: CALL shape_edittool.cpp_CEdButton_paint_FUN_004a65e0
//   XREF to: 004a65e0 (UNCONDITIONAL_CALL)
// 0049dd28: ADD ESP,0x8
// 0049dd2b: CMP ESI,0x1
// 0049dd2e: SETZ AL
// 0049dd31: AND EAX,0xff
// 0049dd36: PUSH EAX
// 0049dd37: LEA EAX,[ESP + 0x144]
//   XREF to: Stack[-0x1e0] (DATA)
// 0049dd3e: PUSH EAX
// 0049dd3f: CALL shape_edittool.cpp_CEdButton_paint_FUN_004a65e0
//   XREF to: 004a65e0 (UNCONDITIONAL_CALL)
// 0049dd44: ADD ESP,0x8
// 0049dd47: PUSH 0x0
// 0049dd49: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0049dd4e: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0049dd4f: CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   XREF to: 004a1380 (UNCONDITIONAL_CALL)
// 0049dd54: ADD ESP,0x8
// 0049dd57: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0049dd5c: PUSH 0x2a
// 0049dd5e: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0049dd63: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0049dd64: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0049dd66: CALL dword ptr [EBX]
// 0049dd68: ADD ESP,0x8
// 0049dd6b: TEST EAX,EAX
// 0049dd6d: JZ 0x0049de5e
//   XREF to: 0049de5e (CONDITIONAL_JUMP)
// 0049dd73: PUSH 0x2a
//   Label: LAB_0049dd73
// 0049dd75: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0049dd7a: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0049dd7b: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0049dd7d: CALL dword ptr [EBX]
// 0049dd7f: ADD ESP,0x8
// 0049dd82: TEST EAX,EAX
// 0049dd84: JZ 0x0049dd9b
//   XREF to: 0049dd9b (CONDITIONAL_JUMP)
// 0049dd86: PUSH 0xf
// 0049dd88: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0049dd8d: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0049dd8e: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0049dd90: CALL dword ptr [EBX + 0x4]
// 0049dd93: ADD ESP,0x8
// 0049dd96: TEST EAX,EAX
// 0049dd98: JZ 0x0049dd9b
//   XREF to: 0049dd9b (CONDITIONAL_JUMP)
// 0049dd9a: DEC ESI
// 0049dd9b: CMP ESI,0x2
//   Label: LAB_0049dd9b
// 0049dd9e: JL 0x0049de7c
//   XREF to: 0049de7c (CONDITIONAL_JUMP)
// 0049dda4: XOR ESI,ESI
// 0049dda6: CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00
//   Label: LAB_0049dda6
//   XREF to: 005f2f00 (UNCONDITIONAL_CALL)
// 0049ddab: TEST EAX,EAX
// 0049ddad: JZ 0x0049df07
//   XREF to: 0049df07 (CONDITIONAL_JUMP)
// 0049ddb3: MOV EBX,dword ptr [0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 0049ddb9: PUSH EBX
//   XREF to: 02dcd7d4 (DATA)
// 0049ddba: CALL engine_keys.cpp_CKeys_getInputKey_FUN_00502460
//   XREF to: 00502460 (UNCONDITIONAL_CALL)
// 0049ddbf: MOV EBX,EAX
// 0049ddc1: ADD ESP,0x4
// 0049ddc4: CMP EAX,0x1b
// 0049ddc7: JZ 0x0049ddda
//   XREF to: 0049ddda (CONDITIONAL_JUMP)
// 0049ddc9: CMP EAX,0xd
// 0049ddcc: JNZ 0x0049deb3
//   XREF to: 0049deb3 (CONDITIONAL_JUMP)
// 0049ddd2: TEST ESI,ESI
// 0049ddd4: JZ 0x0049de8b
//   XREF to: 0049de8b (CONDITIONAL_JUMP)
// 0049ddda: XOR EBX,EAX
//   Label: LAB_0049ddda
// 0049dddc: MOV ESI,dword ptr [0x00678a60]
//   Label: LAB_0049dddc
//   XREF to: 00678a60 (READ)
// 0049dde2: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0049dde3: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 0049dde8: ADD ESP,0x4
// 0049ddeb: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0049ddf0: MOV EAX,dword ptr [ESP + 0x30c]
// 0049ddf7: PUSH 0x0
// 0049ddf9: MOV [0x006793a8],EAX
//   XREF to: 006793a8 (WRITE)
// 0049ddfe: LEA EAX,[ESP + 0x144]
// 0049de05: PUSH EAX
// 0049de06: CALL shape_edittool.cpp_CEdButton_dtor_FUN_004a6510
//   XREF to: 004a6510 (UNCONDITIONAL_CALL)
// 0049de0b: ADD ESP,0x8
// 0049de0e: PUSH 0x0
// 0049de10: LEA EAX,[ESP + 0x228]
// 0049de17: PUSH EAX
// 0049de18: CALL shape_edittool.cpp_CEdButton_dtor_FUN_004a6510
//   XREF to: 004a6510 (UNCONDITIONAL_CALL)
// 0049de1d: ADD ESP,0x8
// 0049de20: MOV EAX,EBX
// 0049de22: ADD ESP,0x310
// 0049de28: POP EBP
// 0049de29: POP EDI
// 0049de2a: POP ESI
// 0049de2b: POP EBX
// 0049de2c: RET
// 0049de2d: MOV ECX,0x622eae
//   Label: LAB_0049de2d
//   XREF to: 00622eae (PARAM)
// 0049de32: MOV EDI,0x8d
// 0049de37: PUSH 0x622ec4
//   XREF to: 00622ec4 (DATA)
// 0049de3c: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0049de42: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0049de48: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0049de4d: ADD ESP,0x4
// 0049de50: JMP 0x0049db3c
//   XREF to: 0049db3c (UNCONDITIONAL_JUMP)
// 0049de55: PUSH EBX
//   Label: LAB_0049de55
// 0049de56: PUSH ESI
// 0049de57: PUSH 0x0
// 0049de59: JMP 0x0049db73
//   XREF to: 0049db73 (UNCONDITIONAL_JUMP)
// 0049de5e: PUSH 0xf
//   Label: LAB_0049de5e
// 0049de60: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0049de65: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0049de66: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0049de68: CALL dword ptr [EBX + 0x4]
// 0049de6b: ADD ESP,0x8
// 0049de6e: TEST EAX,EAX
// 0049de70: JZ 0x0049dd73
//   XREF to: 0049dd73 (CONDITIONAL_JUMP)
// 0049de76: INC ESI
// 0049de77: JMP 0x0049dd73
//   XREF to: 0049dd73 (UNCONDITIONAL_JUMP)
// 0049de7c: TEST ESI,ESI
//   Label: LAB_0049de7c
// 0049de7e: JGE 0x0049dda6
//   XREF to: 0049dda6 (CONDITIONAL_JUMP)
// 0049de84: MOV ESI,EDI
// 0049de86: JMP 0x0049dda6
//   XREF to: 0049dda6 (UNCONDITIONAL_JUMP)
// 0049de8b: MOV ESI,ESP
//   Label: LAB_0049de8b
// 0049de8d: MOV EDI,EBP
// 0049de8f: MOV EBX,0x1
// 0049de94: PUSH EDI
// 0049de95: MOV AL,byte ptr [ESI]
//   Label: LAB_0049de95
// 0049de97: MOV byte ptr [EDI],AL
// 0049de99: CMP AL,0x0
// 0049de9b: JZ 0x0049dead
//   XREF to: 0049dead (CONDITIONAL_JUMP)
// 0049de9d: MOV AL,byte ptr [ESI + 0x1]
// 0049dea0: ADD ESI,0x2
// 0049dea3: MOV byte ptr [EDI + 0x1],AL
// 0049dea6: ADD EDI,0x2
// 0049dea9: CMP AL,0x0
// 0049deab: JNZ 0x0049de95
//   XREF to: 0049de95 (CONDITIONAL_JUMP)
// 0049dead: POP EDI
//   Label: LAB_0049dead
// 0049deae: JMP 0x0049dddc
//   XREF to: 0049dddc (UNCONDITIONAL_JUMP)
// 0049deb3: CMP EAX,0x8
//   Label: LAB_0049deb3
// 0049deb6: JZ 0x0049def7
//   XREF to: 0049def7 (CONDITIONAL_JUMP)
// 0049deb8: INC AL
// 0049deba: AND EAX,0xff
// 0049debf: TEST byte ptr [EAX + 0x6849c4],0x8
//   XREF to: 006849c4 (DATA)
// 0049dec6: JZ 0x0049dda6
//   XREF to: 0049dda6 (CONDITIONAL_JUMP)
// 0049decc: MOV EAX,ESP
// 0049dece: PUSH EAX
// 0049decf: CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580
//   XREF to: 0049d580 (UNCONDITIONAL_CALL)
// 0049ded4: ADD ESP,0x4
// 0049ded7: PUSH 0x1
// 0049ded9: PUSH EBX
// 0049deda: LEA EAX,[ESP + 0x8]
// 0049dede: PUSH EAX
// 0049dedf: CALL shape_edittool.cpp_CInputString_insertChar_FUN_0049d480
//   XREF to: 0049d480 (UNCONDITIONAL_CALL)
// 0049dee4: ADD ESP,0xc
// 0049dee7: MOV EAX,ESP
// 0049dee9: PUSH EAX
// 0049deea: CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460
//   XREF to: 0049d460 (UNCONDITIONAL_CALL)
// 0049deef: ADD ESP,0x4
// 0049def2: JMP 0x0049dda6
//   XREF to: 0049dda6 (UNCONDITIONAL_JUMP)
// 0049def7: MOV EAX,ESP
//   Label: LAB_0049def7
// 0049def9: PUSH EAX
// 0049defa: CALL shape_edittool.cpp_CInputString_backspace_FUN_0049d5d0
//   XREF to: 0049d5d0 (UNCONDITIONAL_CALL)
// 0049deff: ADD ESP,0x4
// 0049df02: JMP 0x0049dda6
//   XREF to: 0049dda6 (UNCONDITIONAL_JUMP)
// 0049df07: MOV EAX,ESP
//   Label: LAB_0049df07
// 0049df09: PUSH EAX
// 0049df0a: CALL shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0
//   XREF to: 0049d6c0 (UNCONDITIONAL_CALL)
// 0049df0f: ADD ESP,0x4
// 0049df12: LEA EAX,[ESP + 0x224]
// 0049df19: PUSH EAX
// 0049df1a: CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830
//   XREF to: 004a6830 (UNCONDITIONAL_CALL)
// 0049df1f: ADD ESP,0x4
// 0049df22: TEST EAX,EAX
// 0049df24: JNZ 0x0049de8b
//   XREF to: 0049de8b (CONDITIONAL_JUMP)
// 0049df2a: LEA EAX,[ESP + 0x224]
// 0049df31: CMP EAX,dword ptr [0x02cf2b00]
//   XREF to: 02cf2b00 (READ)
// 0049df37: JNZ 0x0049df3b
//   XREF to: 0049df3b (CONDITIONAL_JUMP)
// 0049df39: XOR ESI,ESI
// 0049df3b: LEA EAX,[ESP + 0x140]
//   Label: LAB_0049df3b
// 0049df42: PUSH EAX
// 0049df43: CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830
//   XREF to: 004a6830 (UNCONDITIONAL_CALL)
// 0049df48: ADD ESP,0x4
// 0049df4b: TEST EAX,EAX
// 0049df4d: JNZ 0x0049df6c
//   XREF to: 0049df6c (CONDITIONAL_JUMP)
// 0049df4f: LEA EAX,[ESP + 0x140]
// 0049df56: CMP EAX,dword ptr [0x02cf2b00]
//   XREF to: 02cf2b00 (READ)
// 0049df5c: JNZ 0x0049dcd6
//   XREF to: 0049dcd6 (CONDITIONAL_JUMP)
// 0049df62: MOV ESI,0x1
// 0049df67: JMP 0x0049dcd6
//   XREF to: 0049dcd6 (UNCONDITIONAL_JUMP)
// 0049df6c: XOR EBX,EBX
//   Label: LAB_0049df6c
// 0049df6e: JMP 0x0049dddc
//   XREF to: 0049dddc (UNCONDITIONAL_JUMP)
