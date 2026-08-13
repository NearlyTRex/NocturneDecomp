// Name: shape_edittool.cpp_showTextInputDialog_FUN_0046f7e0
// Address: 0046f7e0
// Address Range: [[0046f7e0, 0046f9e0]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_showTextInputDialog_FUN_0046f7e0(char *dialog_title,char *input_buffer,int max_length,int flags,int dialog_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_showTextInputDialog_FUN_0046f7e0(char *dialog_title,char *input_buffer,int max_length,int flags,int dialog_mode)

{
  char cVar1;
  int iVar2;
  int iVar3;
  CInputString *pCVar4;
  char *source_string;
  CInputString local_150;
  
  if (_DAT_01bcd070 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 139;
    core_main_c_displayErrorAndQuit_FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = _DAT_01bcd070->max_char_width;
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x6a);
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  source_string = input_buffer;
  if ((flags & 1U) == 0) {
    source_string = (char *)0x0;
  }
  shape_edittool_cpp_CInputString_init_FUN_0046f0a0(&local_150,source_string,max_length,dialog_mode)
  ;
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00471a80
            (g_CEditorTools_PTR_005b6d50,(g_WindowWidth << 2) / 5,_DAT_01bcd9bc,dialog_title,0);
  iVar2 = INT_005b7630;
  pCVar4 = &local_150;
  INT_005b7630 = 0x7f;
  do {
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004722b0(g_CEditorTools_PTR_005b6d50);
    shape_edittool_cpp_CInputString_draw_FUN_0046f680(&local_150,g_ClipLeft,g_ClipTop);
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    while (iVar3 = wincore_winrun_cpp_wasKeyPressed_FUN_00558b70(), iVar3 != 0) {
      iVar3 = engine_keys_cpp_CKeys_getInputKey_FUN_004c41c0(g_CKeys_PTR_005bac64);
      if (iVar3 == 0x1b) {
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004720c0
                  (g_CEditorTools_PTR_005b6d50);
        engine_2d_c_clearInputAndWait_FUN_00403f50();
        INT_005b7630 = iVar2;
        return 0;
      }
      if (iVar3 == 0xd) goto LAB_0046f968;
      if (iVar3 == 8) {
        shape_edittool_cpp_CInputString_backspace_FUN_0046f2a0(&local_150);
      }
      else if ((g_CharacterClassificationTable[(byte)((char)iVar3 + 1)] & 8) != 0) {
        shape_edittool_cpp_CInputString_deleteSelection_FUN_0046f250(&local_150);
        shape_edittool_cpp_CInputString_insertChar_FUN_0046f150(&local_150,(char)iVar3,1);
        shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0046f130(&local_150);
      }
    }
    shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0046f390(&local_150);
  } while( true );
  while( true ) {
    cVar1 = *(char *)((int)pCVar4 + 1);
    pCVar4 = (CInputString *)((int)pCVar4 + 2);
    input_buffer[1] = cVar1;
    input_buffer = input_buffer + 2;
    if (cVar1 == '\0') break;
LAB_0046f968:
    cVar1 = pCVar4->string_data[0];
    *input_buffer = cVar1;
    if (cVar1 == '\0') break;
  }
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004720c0(g_CEditorTools_PTR_005b6d50);
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  INT_005b7630 = iVar2;
  return 1;
}
