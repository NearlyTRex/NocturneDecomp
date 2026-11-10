// Name: core_menu.cpp_adjustMouseSensitivity_FUN_0050a5e0
// Address: 0050a5e0
// Address Range: [[0050a5e0, 0050a86f]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_adjustMouseSensitivity_FUN_0050a5e0(int *sensitivity_value_ptr,char *window_title)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_adjustMouseSensitivity_FUN_0050a5e0(int *sensitivity_value_ptr,char *window_title)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *format_string;
  int local_18;
  
  iVar3 = DAT_0061b498 * 3 >> 0x1f;
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00496840
            (g_CEditorToolsPtr,(int)((DAT_0061b498 * 3 + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2,
             0x2c,window_title,0);
  iVar3 = *sensitivity_value_ptr;
  if (iVar3 < 0x4000) {
    *sensitivity_value_ptr = 0x4000;
    goto LAB_0050a643;
  }
  if (iVar3 < 0x40001) {
    if (iVar3 < 0x4000) {
      *sensitivity_value_ptr = 0x4000;
      goto LAB_0050a643;
    }
    if (iVar3 < 0x40001) goto LAB_0050a643;
  }
  *sensitivity_value_ptr = 0x40000;
LAB_0050a643:
  iVar3 = *sensitivity_value_ptr;
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  wincore_winrun_cpp_setCursorPosition_FUN_005b2750
            ((int)(((longlong)(DAT_0061b498 + -1) * (longlong)(iVar3 + -0x4000)) / 0x3c000),
             _DAT_01c43540);
  local_18 = 0;
  do {
    shape_edittool_cpp_FUN_00496ee0();
    if (_DAT_01c4353c != local_18) {
      iVar3 = (int)(((longlong)_DAT_01c4353c * 0x3c000) / (longlong)(DAT_0061b498 + -1)) + 0x4000;
      local_18 = _DAT_01c4353c;
    }
    iVar1 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0);
    if (iVar1 != 0) {
      iVar3 = iVar3 + -700;
    }
    iVar1 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0);
    if (iVar1 != 0) {
      iVar3 = iVar3 + 700;
    }
    if (iVar3 < 0x4000) {
      iVar3 = 0x4000;
    }
    else if (0x40000 < iVar3) {
      iVar3 = 0x40000;
    }
    iVar1 = _DAT_01c4f00c + 1;
    iVar2 = _DAT_01c4f014 + -1;
    iVar4 = _DAT_01c4f010 + -1;
    iVar5 = _DAT_01c4f008 + 1;
    engine_2d_c_fillRectWithBorder_FUN_00403250(iVar5,iVar1,iVar4,iVar2,0,0xff);
    engine_2d_c_fillRectColor_FUN_004031c0
              (iVar5,iVar1,
               (int)(((longlong)(iVar4 - iVar5) * (longlong)(iVar3 + -0x4000)) / 0x3c000) + iVar5,
               iVar2,4);
    format_string = "%4.2f";
    iVar5 = 0;
    iVar4 = 0xff;
    iVar2 = _DAT_01c4f014 + _DAT_01c4f00c;
    iVar1 = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(_DAT_01c3eb50,0x41);
    engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004c23a0
              (_DAT_01c3eb50,_DAT_01c4f008,_DAT_01c4f010,(iVar2 - iVar1) / 2,iVar4,iVar5,
               format_string);
    wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
    iVar1 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0);
    if (iVar1 != 0) goto LAB_0050a815;
    iVar1 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0);
  } while ((iVar1 == 0) && (iVar1 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0), iVar1 == 0));
  *sensitivity_value_ptr = iVar3;
LAB_0050a815:
  shape_edittool_cpp_FUN_00496dd0();
  return;
}
