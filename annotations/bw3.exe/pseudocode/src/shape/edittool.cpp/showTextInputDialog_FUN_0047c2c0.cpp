// Name: shape_edittool.cpp_showTextInputDialog_FUN_0047c2c0
// Address: 0047c2c0
// Address Range: [[0047c2c0, 0047c732]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_showTextInputDialog_FUN_0047c2c0(char *dialog_title,char *input_buffer,int max_length,int flags,int dialog_mode)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_showTextInputDialog_FUN_0047c2c0(char *dialog_title,char *input_buffer,int max_length,int flags,int dialog_mode)

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
  
  if (g_CBitFont_PTR_01c5b0e0 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 167;
    core_main_c_displayErrorAndQuit_FUN_004e4330("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_CBitFont_PTR_01c5b0e0->max_char_width;
  g_INT_01c5bae4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(g_CBitFont_PTR_01c5b0e0,0x6a)
  ;
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  source_string = input_buffer;
  if ((flags & 1U) == 0) {
    source_string = (char *)0x0;
  }
  shape_edittool_cpp_CInputString_init_FUN_0047ba60(&local_320,source_string,max_length,dialog_mode)
  ;
  iVar2 = (int)((g_INT_005fba18 + (g_INT_005fba18 >> 0x1f) * -0x80) -
               (uint)((g_INT_005fba18 >> 0x1f) << 6 < 0)) >> 7;
  iVar3 = g_INT_005fba1c / 0x60;
  iVar4 = shape_edittool_cpp_calculateButtonHeight_FUN_00486580((char *)0x0);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047f3e0
            (g_CEditorToolsPtr,(g_INT_005fba18 << 2) / 5,iVar4 + iVar3 * 2 + g_INT_01c5bae4,
             dialog_title,0);
  iVar3 = shape_edittool_cpp_calculateButtonWidth_FUN_004864f0("Cancel");
  iVar4 = ((g_INT_01c6b5a8 + g_INT_01c6b5b0) - iVar2) / 2 - iVar3;
  iVar2 = (g_INT_01c6b5a8 + g_INT_01c6b5b0 + iVar2) / 2;
  iVar5 = shape_edittool_cpp_calculateButtonHeight_FUN_00486580((char *)0x0);
  local_18 = (g_INT_01c6b5b4 - iVar5) + 1;
  shape_edittool_cpp_CEdButton_ctor_FUN_00486020(&local_fc);
  shape_edittool_cpp_CEdButton_ctor_FUN_00486020(&local_1e0);
  shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004860d0
            (&local_fc,iVar4 + 1,local_18,iVar4 + iVar3,g_INT_01c6b5b4,"OK");
  shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004860d0
            (&local_1e0,iVar2,local_18,iVar3 + iVar2 + -1,g_INT_01c6b5b4,"Cancel");
  local_14 = g_InputKeyMask;
  g_InputKeyMask = 0x7f;
  iVar2 = 0;
  while( true ) {
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_0047fa80(g_CEditorToolsPtr);
    shape_edittool_cpp_CEditorTools_drawWindowSeparator_FUN_00480200(g_CEditorToolsPtr,1);
    shape_edittool_cpp_CInputString_draw_FUN_0047c050(&local_320,g_INT_01c6b5a8,g_INT_01c6b5ac);
    shape_edittool_cpp_CEdButton_paint_FUN_00486120(&local_fc,(uint)(iVar2 == 0));
    shape_edittool_cpp_CEdButton_paint_FUN_00486120(&local_1e0,(uint)(iVar2 == 1));
    shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_00480410(g_CEditorToolsPtr,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
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
    if (g_InputDisabled != 0) break;
    while (iVar3 = wincore_winrun_cpp_wasKeyPressed_FUN_00580800(), iVar3 != 0) {
      iVar3 = engine_keys_cpp_CKeys_getInputKey_FUN_004df580(g_CKeysPtr);
      if (iVar3 == 0x1b) {
LAB_0047c596:
        iVar2 = 0;
        goto LAB_0047c598;
      }
      if (iVar3 == 0xd) {
        if (iVar2 != 0) goto LAB_0047c596;
        goto LAB_0047c64e;
      }
      if (iVar3 == 8) {
        shape_edittool_cpp_CInputString_backspace_FUN_0047bc60(&local_320);
      }
      else if ((g_CharacterClassificationTable[(byte)((char)iVar3 + 1)] & 8) != 0) {
        shape_edittool_cpp_CInputString_deleteSelection_FUN_0047bc10(&local_320);
        shape_edittool_cpp_CInputString_insertChar_FUN_0047bb10(&local_320,(char)iVar3,1);
        shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0047baf0(&local_320);
      }
    }
    shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0047bd50(&local_320);
    iVar3 = shape_edittool_cpp_CEdButton_wasClicked_FUN_00486440(&local_fc);
    if (iVar3 != 0) {
LAB_0047c64e:
      iVar2 = 1;
      goto LAB_0047c658;
    }
    if (&local_fc == (CEdButton *)g_ActiveControl) {
      iVar2 = 0;
    }
    iVar3 = shape_edittool_cpp_CEdButton_wasClicked_FUN_00486440(&local_1e0);
    if (iVar3 != 0) break;
    if (&local_1e0 == (CEdButton *)g_ActiveControl) {
      iVar2 = 1;
    }
  }
  iVar2 = 0;
  goto LAB_0047c598;
  while( true ) {
    cVar1 = *(char *)((int)pCVar6 + 1);
    pCVar6 = (CInputString *)((int)pCVar6 + 2);
    input_buffer[1] = cVar1;
    input_buffer = input_buffer + 2;
    if (cVar1 == '\0') break;
LAB_0047c658:
    cVar1 = pCVar6->string_data[0];
    *input_buffer = cVar1;
    if (cVar1 == '\0') break;
  }
LAB_0047c598:
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_0047f970(g_CEditorToolsPtr);
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  g_InputKeyMask = local_14;
  shape_edittool_cpp_CEdButton_dtor_FUN_00486050(&local_1e0,0);
  shape_edittool_cpp_CEdButton_dtor_FUN_00486050(&local_fc,0);
  return iVar2;
}
