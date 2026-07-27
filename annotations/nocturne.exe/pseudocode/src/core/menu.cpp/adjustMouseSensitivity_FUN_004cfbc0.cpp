// Name: core_menu.cpp_adjustMouseSensitivity_FUN_004cfbc0
// Address: 004cfbc0
// Address Range: [[004cfbc0, 004cfe4f]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_adjustMouseSensitivity_FUN_004cfbc0(int *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_adjustMouseSensitivity_FUN_004cfbc0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_18;
  
  iVar3 = DAT_005b761c * 3 >> 0x1f;
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00471a80
            (0x01BCD074,(int)((DAT_005b761c * 3 + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2,0x2c,
             param_2,0);
  iVar3 = *param_1;
  if (iVar3 < 0x4000) {
    *param_1 = 0x4000;
    goto LAB_004cfc23;
  }
  if (iVar3 < 0x40001) {
    if (iVar3 < 0x4000) {
      *param_1 = 0x4000;
      goto LAB_004cfc23;
    }
    if (iVar3 < 0x40001) goto LAB_004cfc23;
  }
  *param_1 = 0x40000;
LAB_004cfc23:
  iVar3 = *param_1;
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  wincore_winrun_cpp_setCursorPosition_FUN_00558d60
            ((int)(((longlong)(DAT_005b761c + -1) * (longlong)(iVar3 + -0x4000)) / 0x3c000),
             _DAT_01bd1d90);
  local_18 = 0;
  do {
    shape_edittool_cpp_FUN_004722b0();
    if (_DAT_01bd1d8c != local_18) {
      iVar3 = (int)(((longlong)_DAT_01bd1d8c * 0x3c000) / (longlong)(DAT_005b761c + -1)) + 0x4000;
      local_18 = _DAT_01bd1d8c;
    }
    iVar1 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x4b);
    if (iVar1 != 0) {
      iVar3 = iVar3 + -700;
    }
    iVar1 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x4d);
    if (iVar1 != 0) {
      iVar3 = iVar3 + 700;
    }
    if (iVar3 < 0x4000) {
      iVar3 = 0x4000;
    }
    else if (0x40000 < iVar3) {
      iVar3 = 0x40000;
    }
    iVar1 = _DAT_01c00c5c + 1;
    iVar2 = _DAT_01c00c64 + -1;
    iVar4 = _DAT_01c00c60 + -1;
    iVar5 = _DAT_01c00c58 + 1;
    engine_2d_c_fillRectWithBorder_FUN_00403ef0(iVar5,iVar1,iVar4,iVar2,0,0xff,iVar1,iVar2);
    engine_2d_c_fillRectColor_FUN_00403e60
              (iVar5,iVar1,
               (int)(((longlong)(iVar4 - iVar5) * (longlong)(iVar3 + -0x4000)) / 0x3c000) + iVar5,
               iVar2,4);
    iVar2 = _DAT_01c00c64 + _DAT_01c00c5c;
    iVar1 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0
                      (_DAT_01bcd070,0x41,0xff,0,"%4.2f",(double)iVar3 * 1.52587890625e-05);
    engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_00490e30
              (_DAT_01bcd070,_DAT_01c00c58,_DAT_01c00c60,(iVar2 - iVar1) / 2);
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    iVar1 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64);
    if (iVar1 != 0) goto LAB_004cfdf5;
    iVar1 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64);
  } while ((iVar1 == 0) &&
          (iVar1 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64), iVar1 == 0));
  *param_1 = iVar3;
LAB_004cfdf5:
  shape_edittool_cpp_FUN_004720c0();
  return;
}
