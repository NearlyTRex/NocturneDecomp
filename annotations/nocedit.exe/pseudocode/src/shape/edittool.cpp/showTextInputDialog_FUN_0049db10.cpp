// Name: shape_edittool.cpp_showTextInputDialog_FUN_0049db10
// Address: 0049db10
// Address Range: [[0049db10, 0049df72]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_showTextInputDialog_FUN_0049db10(int dialog_mode, char * prompt_text, char * input_buffer, int buffer_size, int dialog_flags)

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
  byte auStack_1bc [28];
  byte auStack_1a0 [108];
  byte auStack_134 [292];
  
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
    if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) == 0) break;
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
