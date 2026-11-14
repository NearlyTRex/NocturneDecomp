// Name: core_menu.cpp_FUN_004eba50
// Address: 004eba50
// Address Range: [[004eba50, 004ebcdf]]
// Convention: unknown
// Signature: void core_menu_cpp_FUN_004eba50(int *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_menu_cpp_FUN_004eba50(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *format_string;
  int iStack_18;
  
  iVar3 = DAT_006141b8 * 3 >> 0x1f;
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047e1d0
            (g_CEditorToolsPtr,(int)((DAT_006141b8 * 3 + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2,
             0x2c,param_2,0);
  iVar3 = *param_1;
  if (iVar3 < 0x3fff) {
    *param_1 = 0x3fff;
    goto LAB_004ebab3;
  }
  if (iVar3 < 0x10000) {
    if (iVar3 < 0x3fff) {
      *param_1 = 0x3fff;
      goto LAB_004ebab3;
    }
    if (iVar3 < 0x10000) goto LAB_004ebab3;
  }
  *param_1 = 0xffff;
LAB_004ebab3:
  iVar3 = *param_1;
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  wincore_winrun_cpp_setCursorPosition_FUN_0058ed10
            ((int)(((longlong)(DAT_006141b8 + -1) * (longlong)(iVar3 + -0x3fff)) / 0xc000),
             _DAT_01c2a380);
  iStack_18 = 0;
  do {
    shape_edittool_cpp_FUN_0047e870();
    if (_DAT_01c2a37c != iStack_18) {
      iVar3 = (int)(((longlong)_DAT_01c2a37c * 0xc000) / (longlong)(DAT_006141b8 + -1)) + 0x3fff;
      iStack_18 = _DAT_01c2a37c;
    }
    iVar1 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
    if (iVar1 != 0) {
      iVar3 = iVar3 + -700;
    }
    iVar1 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
    if (iVar1 != 0) {
      iVar3 = iVar3 + 700;
    }
    if (iVar3 < 0x3fff) {
      iVar3 = 0x3fff;
    }
    else if (0xffff < iVar3) {
      iVar3 = 0xffff;
    }
    iVar1 = _DAT_01c35e4c + 1;
    iVar2 = _DAT_01c35e54 + -1;
    iVar4 = _DAT_01c35e50 + -1;
    iVar5 = _DAT_01c35e48 + 1;
    engine_2d_c_fillRectWithBorder_FUN_00403250(iVar5,iVar1,iVar4,iVar2,0,0xff);
    engine_2d_c_fillRectColor_FUN_004031c0
              (iVar5,iVar1,
               (int)(((longlong)(iVar4 - iVar5) * (longlong)(iVar3 + -0x3fff)) / 0xc000) + iVar5,
               iVar2,4);
    format_string = "%4.2f";
    iVar5 = 0;
    iVar4 = 0xff;
    iVar2 = _DAT_01c35e54 + _DAT_01c35e4c;
    iVar1 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(_DAT_01c25590,0x41);
    engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004a93f0
              (_DAT_01c25590,_DAT_01c35e48,_DAT_01c35e50,(iVar2 - iVar1) / 2,iVar4,iVar5,
               format_string);
    wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
    iVar1 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
    if (iVar1 != 0) goto LAB_004ebc85;
    iVar1 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
  } while ((iVar1 == 0) && (iVar1 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar1 == 0));
  *param_1 = iVar3;
LAB_004ebc85:
  shape_edittool_cpp_FUN_0047e760();
  return;
}
