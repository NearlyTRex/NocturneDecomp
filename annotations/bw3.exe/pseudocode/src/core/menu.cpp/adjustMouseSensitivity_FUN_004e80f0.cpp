// Name: core_menu.cpp_adjustMouseSensitivity_FUN_004e80f0
// Address: 004e80f0
// Address Range: [[004e80f0, 004e837f]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_adjustMouseSensitivity_FUN_004e80f0(int *sensitivity_value_ptr,char *window_title)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_adjustMouseSensitivity_FUN_004e80f0(int *sensitivity_value_ptr,char *window_title)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *format_string;
  int local_18;
  
  iVar3 = DAT_005fba18 * 3 >> 0x1f;
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047f3e0
            (g_CEditorToolsPtr,(int)((DAT_005fba18 * 3 + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2,
             0x2c,window_title,0);
  iVar3 = *sensitivity_value_ptr;
  if (iVar3 < 0x4000) {
    *sensitivity_value_ptr = 0x4000;
    goto LAB_004e8153;
  }
  if (iVar3 < 0x40001) {
    if (iVar3 < 0x4000) {
      *sensitivity_value_ptr = 0x4000;
      goto LAB_004e8153;
    }
    if (iVar3 < 0x40001) goto LAB_004e8153;
  }
  *sensitivity_value_ptr = 0x40000;
LAB_004e8153:
  iVar3 = *sensitivity_value_ptr;
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  wincore_winrun_cpp_setCursorPosition_FUN_005809d0
            ((int)(((longlong)(DAT_005fba18 + -1) * (longlong)(iVar3 + -0x4000)) / 0x3c000),
             _DAT_01c5fae0);
  local_18 = 0;
  do {
    shape_edittool_cpp_FUN_0047fa80();
    if (_DAT_01c5fadc != local_18) {
      iVar3 = (int)(((longlong)_DAT_01c5fadc * 0x3c000) / (longlong)(DAT_005fba18 + -1)) + 0x4000;
      local_18 = _DAT_01c5fadc;
    }
    iVar1 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78);
    if (iVar1 != 0) {
      iVar3 = iVar3 + -700;
    }
    iVar1 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78);
    if (iVar1 != 0) {
      iVar3 = iVar3 + 700;
    }
    if (iVar3 < 0x4000) {
      iVar3 = 0x4000;
    }
    else if (0x40000 < iVar3) {
      iVar3 = 0x40000;
    }
    iVar1 = _DAT_01c6b5ac + 1;
    iVar2 = _DAT_01c6b5b4 + -1;
    iVar4 = _DAT_01c6b5b0 + -1;
    iVar5 = _DAT_01c6b5a8 + 1;
    engine_2d_c_fillRectWithBorder_FUN_00403250(iVar5,iVar1,iVar4,iVar2,0,0xff);
    engine_2d_c_fillRectColor_FUN_004031c0
              (iVar5,iVar1,
               (int)(((longlong)(iVar4 - iVar5) * (longlong)(iVar3 + -0x4000)) / 0x3c000) + iVar5,
               iVar2,4);
    format_string = "%4.2f";
    iVar5 = 0;
    iVar4 = 0xff;
    iVar2 = _DAT_01c6b5b4 + _DAT_01c6b5ac;
    iVar1 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(_DAT_01c5b0e0,0x41);
    engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004b0ff0
              (_DAT_01c5b0e0,_DAT_01c6b5a8,_DAT_01c6b5b0,(iVar2 - iVar1) / 2,iVar4,iVar5,
               format_string);
    wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
    iVar1 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78);
    if (iVar1 != 0) goto LAB_004e8325;
    iVar1 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78);
  } while ((iVar1 == 0) && (iVar1 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar1 == 0));
  *sensitivity_value_ptr = iVar3;
LAB_004e8325:
  shape_edittool_cpp_FUN_0047f970();
  return;
}
