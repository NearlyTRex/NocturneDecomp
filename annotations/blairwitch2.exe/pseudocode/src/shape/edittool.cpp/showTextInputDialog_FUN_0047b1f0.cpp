// Name: shape_edittool.cpp_showTextInputDialog_FUN_0047b1f0
// Address: 0047b1f0
// Address Range: [[0047b1f0, 0047b652]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_showTextInputDialog_FUN_0047b1f0(char *dialog_title,char *input_buffer,int max_length,int flags,int dialog_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_showTextInputDialog_FUN_0047b1f0(char *dialog_title,char *input_buffer,int max_length,int flags,int dialog_mode)

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
  uint local_14;
  
  if (_DAT_01c25590 == (CBitFont *)0x0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    core_main_c_FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = _DAT_01c25590->max_char_width;
  _DAT_01c25f7c = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(_DAT_01c25590,0x6a);
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  source_string = input_buffer;
  if ((flags & 1U) == 0) {
    source_string = (char *)0x0;
  }
  shape_edittool_cpp_CInputString_init_FUN_0047a9d0(&local_320,source_string,max_length,dialog_mode)
  ;
  iVar2 = (int)((DAT_006141b8 + (DAT_006141b8 >> 0x1f) * -0x80) -
               (uint)((DAT_006141b8 >> 0x1f) << 6 < 0)) >> 7;
  iVar3 = DAT_006141bc / 0x60;
  iVar4 = shape_edittool_cpp_calculateButtonHeight_FUN_00485380((char *)0x0);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047e1d0
            (g_CEditorToolsPtr,(DAT_006141b8 << 2) / 5,iVar4 + iVar3 * 2 + _DAT_01c25f7c,
             dialog_title,0);
  iVar3 = shape_edittool_cpp_calculateButtonWidth_FUN_004852f0("Cancel");
  iVar4 = ((_DAT_01c35e48 + _DAT_01c35e50) - iVar2) / 2 - iVar3;
  iVar2 = (_DAT_01c35e48 + _DAT_01c35e50 + iVar2) / 2;
  iVar5 = shape_edittool_cpp_calculateButtonHeight_FUN_00485380((char *)0x0);
  local_18 = (_DAT_01c35e54 - iVar5) + 1;
  shape_edittool_cpp_CEdButton_ctor_FUN_00484e20(&local_fc);
  shape_edittool_cpp_CEdButton_ctor_FUN_00484e20(&local_1e0);
  shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_00484ed0
            (&local_fc,iVar4 + 1,local_18,iVar4 + iVar3,_DAT_01c35e54,&DAT_005d1f51);
  shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_00484ed0
            (&local_1e0,iVar2,local_18,iVar3 + iVar2 + -1,_DAT_01c35e54,"Cancel");
  local_14 = DAT_006141cc;
  DAT_006141cc = 0x7f;
  iVar2 = 0;
LAB_0047b3b6:
  shape_edittool_cpp_FUN_0047e870(g_CEditorToolsPtr);
  shape_edittool_cpp_FUN_0047eff0(g_CEditorToolsPtr,1);
  shape_edittool_cpp_FUN_0047afb0(&local_320,_DAT_01c35e48,_DAT_01c35e4c);
  shape_edittool_cpp_FUN_00484f20(&local_fc,iVar2 == 0);
  shape_edittool_cpp_FUN_00484f20(&local_1e0,iVar2 == 1);
  shape_edittool_cpp_FUN_0047f210(g_CEditorToolsPtr,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
  iVar3 = (*0x01D02F84->vtable->getKeyState)(0x01D02F84,DIK_LSHIFT);
  if ((iVar3 == 0) &&
     (iVar3 = (*0x01D02F84->vtable->getAndClearKeyState)(0x01D02F84,DIK_TAB), iVar3 != 0)) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = (*0x01D02F84->vtable->getKeyState)(0x01D02F84,DIK_LSHIFT);
  if ((iVar3 != 0) &&
     (iVar3 = (*0x01D02F84->vtable->getAndClearKeyState)(0x01D02F84,DIK_TAB), iVar3 != 0)) {
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
  while (iVar3 = wincore_winrun_cpp_wasKeyPressed_FUN_0058eb40(), iVar3 != 0) {
    iVar3 = engine_keys_cpp_CKeys_getInputKey_FUN_004dfe90(0x01D02F84);
    if (iVar3 == 0x1b) {
LAB_0047b4ba:
      iVar2 = 0;
      goto LAB_0047b4bc;
    }
    if (iVar3 == 0xd) {
      if (iVar2 != 0) goto LAB_0047b4ba;
      goto LAB_0047b56b;
    }
    if (iVar3 == 8) {
      shape_edittool_cpp_CInputString_backspace_FUN_0047abd0(&local_320);
    }
    else if (((&DAT_0061ed94)[(byte)((char)iVar3 + 1)] & 8) != 0) {
      shape_edittool_cpp_CInputString_deleteSelection_FUN_0047ab80(&local_320);
      shape_edittool_cpp_CInputString_insertChar_FUN_0047aa80(&local_320,(char)iVar3,1);
      shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0047aa60(&local_320);
    }
  }
  shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0047acc0(&local_320);
  iVar3 = shape_edittool_cpp_CEdButton_wasClicked_FUN_00485240(&local_fc);
  if (iVar3 != 0) {
LAB_0047b56b:
    iVar2 = 1;
    goto LAB_0047b575;
  }
  if (&local_fc == _DAT_01c26410) {
    iVar2 = 0;
  }
  iVar3 = shape_edittool_cpp_CEdButton_wasClicked_FUN_00485240(&local_1e0);
  if (iVar3 == 0) {
    if (&local_1e0 == _DAT_01c26410) {
      iVar2 = 1;
    }
    goto LAB_0047b3b6;
  }
  iVar2 = 0;
  goto LAB_0047b4bc;
  while( true ) {
    cVar1 = *(char *)((int)pCVar6 + 1);
    pCVar6 = (CInputString *)((int)pCVar6 + 2);
    input_buffer[1] = cVar1;
    input_buffer = input_buffer + 2;
    if (cVar1 == '\0') break;
LAB_0047b575:
    cVar1 = pCVar6->string_data[0];
    *input_buffer = cVar1;
    if (cVar1 == '\0') break;
  }
LAB_0047b4bc:
  shape_edittool_cpp_FUN_0047e760(g_CEditorToolsPtr);
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  DAT_006141cc = local_14;
  shape_edittool_cpp_CEdButton_dtor_FUN_00484e50(&local_1e0,0);
  shape_edittool_cpp_CEdButton_dtor_FUN_00484e50(&local_fc,0);
  return iVar2;
}
