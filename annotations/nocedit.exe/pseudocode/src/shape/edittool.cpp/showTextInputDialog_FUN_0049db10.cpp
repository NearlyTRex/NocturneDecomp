// Name: shape_edittool.cpp_showTextInputDialog_FUN_0049db10
// Address: 0049db10
// Address Range: [[0049db10, 0049df72]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_showTextInputDialog_FUN_0049db10(char *dialog_title,char *input_buffer,int max_length,int flags,int dialog_mode)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_showTextInputDialog_FUN_0049db10(char *dialog_title,char *input_buffer,int max_length,int flags,int dialog_mode)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CInputString *pCVar6;
  char *source_string;
  CInputString local_320;
  CEdButton local_1e0;
  CEdButton local_fc;
  int local_18;
  int local_14;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_width;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_EditorFont,0x6a);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  source_string = input_buffer;
  if ((flags & 1U) == 0) {
    source_string = (char *)0x0;
  }
  shape_edittool_cpp_CInputString_init_FUN_0049d3d0(&local_320,source_string,max_length,dialog_mode)
  ;
  iVar2 = (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -0x80) -
               (uint)((g_WindowWidth >> 0x1f) << 6 < 0)) >> 7;
  iVar3 = g_WindowHeight / 0x60;
  iVar4 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_004a0890
            (g_CEditorToolsPtr,(g_WindowWidth << 2) / 5,iVar4 + iVar3 * 2 + g_FontCharacterWidth,
             dialog_title,0);
  iVar3 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0("Cancel");
  iVar4 = ((g_ClipLeft + g_ClipRight) - iVar2) / 2 - iVar3;
  iVar2 = (g_ClipLeft + g_ClipRight + iVar2) / 2;
  iVar5 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
  local_18 = (g_ClipBottom - iVar5) + 1;
  shape_edittool_cpp_CEdButton_ctor_FUN_004a64e0(&local_fc);
  shape_edittool_cpp_CEdButton_ctor_FUN_004a64e0(&local_1e0);
  shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004a6590
            (&local_fc,iVar4 + 1,local_18,iVar4 + iVar3,g_ClipBottom,"OK");
  shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004a6590
            (&local_1e0,iVar2,local_18,iVar3 + iVar2 + -1,g_ClipBottom,"Cancel");
  local_14 = g_InputKeyMask;
  g_InputKeyMask = 0x7f;
  iVar2 = 0;
LAB_0049dcd6:
  shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(g_CEditorToolsPtr);
  shape_edittool_cpp_CEditorTools_drawWindowSeparator_FUN_004a1230(g_CEditorToolsPtr,1);
  shape_edittool_cpp_CInputString_draw_FUN_0049d9b0(&local_320,g_ClipLeft,g_ClipTop);
  shape_edittool_cpp_CEdButton_paint_FUN_004a65e0(&local_fc,(uint)(iVar2 == 0));
  shape_edittool_cpp_CEdButton_paint_FUN_004a65e0(&local_1e0,(uint)(iVar2 == 1));
  shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
  if ((iVar3 == 0) &&
     (iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_TAB), iVar3 != 0)) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
  if ((iVar3 != 0) &&
     (iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_TAB), iVar3 != 0)) {
    iVar2 = iVar2 + -1;
  }
  pCVar6 = &local_320;
  if (iVar2 < 2) {
    if (iVar2 < 0) {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 0;
  }
  while (iVar3 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(), iVar3 != 0) {
    iVar3 = engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
    if (iVar3 == 0x1b) {
LAB_0049ddda:
      iVar2 = 0;
      goto LAB_0049dddc;
    }
    if (iVar3 == 0xd) {
      if (iVar2 != 0) goto LAB_0049ddda;
      goto LAB_0049de8b;
    }
    if (iVar3 == 8) {
      shape_edittool_cpp_CInputString_backspace_FUN_0049d5d0(&local_320);
    }
    else if ((g_CharacterClassificationTable[(byte)((char)iVar3 + 1)] & 8) != 0) {
      shape_edittool_cpp_CInputString_deleteSelection_FUN_0049d580(&local_320);
      shape_edittool_cpp_CInputString_insertChar_FUN_0049d480(&local_320,(char)iVar3,1);
      shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0049d460(&local_320);
    }
  }
  shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0049d6c0(&local_320);
  iVar3 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830(&local_fc);
  if (iVar3 != 0) {
LAB_0049de8b:
    iVar2 = 1;
    goto LAB_0049de95;
  }
  if (&local_fc == g_ActiveControl) {
    iVar2 = 0;
  }
  iVar3 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830(&local_1e0);
  if (iVar3 == 0) {
    if (&local_1e0 == g_ActiveControl) {
      iVar2 = 1;
    }
    goto LAB_0049dcd6;
  }
  iVar2 = 0;
  goto LAB_0049dddc;
  while( true ) {
    cVar1 = *(char *)((int)pCVar6 + 1);
    pCVar6 = (CInputString *)((int)pCVar6 + 2);
    input_buffer[1] = cVar1;
    input_buffer = input_buffer + 2;
    if (cVar1 == '\0') break;
LAB_0049de95:
    cVar1 = pCVar6->string_data[0];
    *input_buffer = cVar1;
    if (cVar1 == '\0') break;
  }
LAB_0049dddc:
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  g_InputKeyMask = local_14;
  shape_edittool_cpp_CEdButton_dtor_FUN_004a6510(&local_1e0,0);
  shape_edittool_cpp_CEdButton_dtor_FUN_004a6510(&local_fc,0);
  return iVar2;
}
