// Name: shape_edittool.cpp_showTextInputDialog_FUN_00493720
// Address: 00493720
// Address Range: [[00493720, 00493b92]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_showTextInputDialog_FUN_00493720(char *dialog_title,char *input_buffer,int max_length,int flags,int dialog_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_showTextInputDialog_FUN_00493720(char *dialog_title,char *input_buffer,int max_length,int flags,int dialog_mode)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CInputString *pCVar6;
  char *source_string;
  CInputString local_320;
  char acStack_31f [319];
  CEdButton local_1e0;
  CEdButton local_fc;
  int local_18;
  uint local_14;
  
  if (_DAT_01c3eb50 == (CBitFont *)0x0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa4;
    core_main_c_FUN_005030e0("gEdFont must be set by the application.");
  }
  _DAT_01c3f538 = *(uint *)(_DAT_01c3eb50 + 0x41e8);
  _DAT_01c3f53c = engine_font_cpp_FUN_004c4510(_DAT_01c3eb50,0x6a);
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  source_string = input_buffer;
  if ((flags & 1U) == 0) {
    source_string = (char *)0x0;
  }
  shape_edittool_cpp_CInputString_init_FUN_00492ec0(&local_320,source_string,max_length,dialog_mode)
  ;
  iVar2 = (int)((DAT_0061b498 + (DAT_0061b498 >> 0x1f) * -0x80) -
               (uint)((DAT_0061b498 >> 0x1f) << 6 < 0)) >> 7;
  iVar3 = DAT_0061b49c / 0x60;
  iVar4 = shape_edittool_cpp_FUN_0049d9e0((char *)0x0);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00496840
            (g_CEditorToolsPtr,(DAT_0061b498 << 2) / 5,iVar4 + iVar3 * 2 + _DAT_01c3f53c,
             dialog_title,0);
  iVar3 = shape_edittool_cpp_FUN_0049d950("Cancel");
  iVar4 = ((_DAT_01c4f008 + _DAT_01c4f010) - iVar2) / 2 - iVar3;
  iVar2 = (_DAT_01c4f008 + _DAT_01c4f010 + iVar2) / 2;
  iVar5 = shape_edittool_cpp_FUN_0049d9e0((char *)0x0);
  local_18 = (_DAT_01c4f014 - iVar5) + 1;
  shape_edittool_cpp_CEdButton_ctor_FUN_0049d480(&local_fc);
  shape_edittool_cpp_CEdButton_ctor_FUN_0049d480(&local_1e0);
  shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_0049d530
            (&local_fc,iVar4 + 1,local_18,iVar4 + iVar3,_DAT_01c4f014,"OK");
  shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_0049d530
            (&local_1e0,iVar2,local_18,iVar3 + iVar2 + -1,_DAT_01c4f014,"Cancel");
  local_14 = DAT_0061b4ac;
  DAT_0061b4ac = 0x7f;
  iVar2 = 0;
  while( true ) {
    shape_edittool_cpp_FUN_00496ee0(g_CEditorToolsPtr);
    shape_edittool_cpp_FUN_00497660(g_CEditorToolsPtr,1);
    shape_edittool_cpp_FUN_004934b0(&local_320,_DAT_01c4f008,_DAT_01c4f00c);
    shape_edittool_cpp_FUN_0049d580(&local_fc,iVar2 == 0);
    shape_edittool_cpp_FUN_0049d580(&local_1e0,iVar2 == 1);
    shape_edittool_cpp_FUN_00497870(g_CEditorToolsPtr,0);
    wincore_wddvmem_cpp_FUN_005acff0();
    iVar3 = (*(code *)**(uint **)0x01D1BCA0)(0x01D1BCA0,0x2a);
    if ((iVar3 == 0) &&
       (iVar3 = (**(code **)(*(int *)0x01D1BCA0 + 4))(0x01D1BCA0,0xf), iVar3 != 0)) {
      iVar2 = iVar2 + 1;
    }
    iVar3 = (*(code *)**(uint **)0x01D1BCA0)(0x01D1BCA0,0x2a);
    if ((iVar3 != 0) &&
       (iVar3 = (**(code **)(*(int *)0x01D1BCA0 + 4))(0x01D1BCA0,0xf), iVar3 != 0)) {
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
    if (_DAT_02c9be70 != 0) break;
    while (iVar3 = wincore_winrun_cpp_wasKeyPressed_FUN_005b2580(), iVar3 != 0) {
      iVar3 = engine_keys_cpp_CKeys_getInputKey_FUN_004fd260(0x01D1BCA0);
      if (iVar3 == 0x1b) {
LAB_004939f6:
        iVar2 = 0;
        goto LAB_004939f8;
      }
      if (iVar3 == 0xd) {
        if (iVar2 != 0) goto LAB_004939f6;
        goto LAB_00493aae;
      }
      if (iVar3 == 8) {
        shape_edittool_cpp_CInputString_backspace_FUN_004930c0(&local_320);
      }
      else if (((&DAT_00626114)[(byte)((char)iVar3 + 1)] & 8) != 0) {
        shape_edittool_cpp_CInputString_deleteSelection_FUN_00493070(&local_320);
        shape_edittool_cpp_CInputString_insertChar_FUN_00492f70(&local_320,(char)iVar3,1);
        shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_00492f50(&local_320);
      }
    }
    shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_004931b0(&local_320);
    iVar3 = shape_edittool_cpp_CEdButton_wasClicked_FUN_0049d8a0(&local_fc);
    if (iVar3 != 0) {
LAB_00493aae:
      iVar2 = 1;
      goto LAB_00493ab8;
    }
    if (&local_fc == _DAT_01c3f5d0) {
      iVar2 = 0;
    }
    iVar3 = shape_edittool_cpp_CEdButton_wasClicked_FUN_0049d8a0(&local_1e0);
    if (iVar3 != 0) break;
    if (&local_1e0 == _DAT_01c3f5d0) {
      iVar2 = 1;
    }
  }
  iVar2 = 0;
  goto LAB_004939f8;
  while( true ) {
    cVar1 = *(char *)(pCVar6 + 1);
    pCVar6 = pCVar6 + 2;
    input_buffer[1] = cVar1;
    input_buffer = input_buffer + 2;
    if (cVar1 == '\0') break;
LAB_00493ab8:
    cVar1 = *(char *)pCVar6;
    *input_buffer = cVar1;
    if (cVar1 == '\0') break;
  }
LAB_004939f8:
  shape_edittool_cpp_FUN_00496dd0(g_CEditorToolsPtr);
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  DAT_0061b4ac = local_14;
  shape_edittool_cpp_CEdButton_dtor_FUN_0049d4b0(&local_1e0,0);
  shape_edittool_cpp_CEdButton_dtor_FUN_0049d4b0(&local_fc,0);
  return iVar2;
}
