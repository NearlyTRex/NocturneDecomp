// Name: FUN_0046f7e0
// Address: 0046f7e0
// Address Range: [[0046f7e0, 0046f9e0]]
// Convention: unknown
// Signature: undefined4 FUN_0046f7e0(undefined4 param_1,char *param_2,undefined4 param_3,byte param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0046f7e0(uint param_1,char *param_2,uint param_3,byte param_4,uint param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char local_150 [320];
  
  if (_DAT_01bcd070 == 0) {
    _DAT_01cc4800 = "..\\shape\\edittool.cpp";
    _DAT_01cc4804 = 0x8b;
    FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = *(uint *)(_DAT_01bcd070 + 0x3168);
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x6a);
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  pcVar4 = param_2;
  if ((param_4 & 1) == 0) {
    pcVar4 = (char *)0x0;
  }
  shape_edittool_cpp_CInputString_init_FUN_0046f0a0(local_150,pcVar4,param_3,param_5);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00471a80
            (0x01BCD074,(DAT_005b761c << 2) / 5,_DAT_01bcd9bc,param_1,0);
  uVar2 = DAT_005b7630;
  pcVar4 = local_150;
  DAT_005b7630 = 0x7f;
  do {
    FUN_004722b0(0x01BCD074);
    shape_edittool_cpp_CInputString_draw_FUN_0046f680(local_150,_DAT_01c00c58,_DAT_01c00c5c);
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    while (iVar3 = wincore_winrun_cpp_wasKeyPressed_FUN_00558b70(), iVar3 != 0) {
      iVar3 = engine_keys_cpp_CKeys_getInputKey_FUN_004c41c0(INT_005bac64);
      if (iVar3 == 0x1b) {
        FUN_004720c0(0x01BCD074);
        engine_2d_c_clearInputAndWait_FUN_00403f50();
        DAT_005b7630 = uVar2;
        return 0;
      }
      if (iVar3 == 0xd) goto LAB_0046f968;
      if (iVar3 == 8) {
        shape_edittool_cpp_CInputString_backspace_FUN_0046f2a0(local_150);
      }
      else if (((&DAT_005c168c)[(byte)((char)iVar3 + 1)] & 8) != 0) {
        shape_edittool_cpp_CInputString_deleteSelection_FUN_0046f250(local_150);
        shape_edittool_cpp_CInputString_insertChar_FUN_0046f150(local_150,iVar3,1);
        shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0046f130(local_150);
      }
    }
    shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0046f390(local_150);
  } while( true );
  while( true ) {
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    param_2[1] = cVar1;
    param_2 = param_2 + 2;
    if (cVar1 == '\0') break;
LAB_0046f968:
    cVar1 = *pcVar4;
    *param_2 = cVar1;
    if (cVar1 == '\0') break;
  }
  FUN_004720c0(0x01BCD074);
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  DAT_005b7630 = uVar2;
  return 1;
}
