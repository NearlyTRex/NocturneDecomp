// Name: core_menu.cpp_adjustMouseSensitivity_FUN_004cfbc0
// Address: 004cfbc0
// Address Range: [[004cfbc0, 004cfe4f]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_adjustMouseSensitivity_FUN_004cfbc0(int *sensitivity_value_ptr,char *window_title)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_adjustMouseSensitivity_FUN_004cfbc0(int *sensitivity_value_ptr,char *window_title)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *format_string;
  CKeys *pCVar6;
  
  iVar3 = DAT_005b761c * 3 >> 0x1f;
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00471a80
            (g_CEditorTools_PTR_005b6d50,
             (int)((DAT_005b761c * 3 + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2,0x2c,window_title,
             0);
  iVar3 = *sensitivity_value_ptr;
  if (iVar3 < 0x4000) {
    *sensitivity_value_ptr = 0x4000;
    goto LAB_004cfc23;
  }
  if (iVar3 < 0x40001) {
    if (iVar3 < 0x4000) {
      *sensitivity_value_ptr = 0x4000;
      goto LAB_004cfc23;
    }
    if (iVar3 < 0x40001) goto LAB_004cfc23;
  }
  *sensitivity_value_ptr = 0x40000;
LAB_004cfc23:
  iVar3 = *sensitivity_value_ptr;
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  wincore_winrun_cpp_setCursorPosition_FUN_00558d60
            ((int)(((longlong)(DAT_005b761c + -1) * (longlong)(iVar3 + -0x4000)) / 0x3c000),
             _DAT_01bd1d90);
  pCVar6 = (CKeys *)0x0;
  do {
    shape_edittool_cpp_FUN_004722b0(g_CEditorTools_PTR_005b6d50);
    if (_DAT_01bd1d8c != pCVar6) {
      iVar3 = (int)(((longlong)(int)_DAT_01bd1d8c * 0x3c000) / (longlong)(DAT_005b761c + -1)) +
              0x4000;
    }
    iVar1 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_NUMPAD4);
    if (iVar1 != 0) {
      iVar3 = iVar3 + -700;
    }
    iVar1 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_NUMPAD6);
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
    engine_2d_c_fillRectWithBorder_FUN_00403ef0(iVar5,iVar1,iVar4,iVar2,0,0xff);
    engine_2d_c_fillRectColor_FUN_00403e60
              (iVar5,iVar1,
               (int)(((longlong)(iVar4 - iVar5) * (longlong)(iVar3 + -0x4000)) / 0x3c000) + iVar5,
               iVar2,4);
    format_string = "%4.2f";
    iVar5 = 0;
    iVar4 = 0xff;
    iVar2 = _DAT_01c00c64 + _DAT_01c00c5c;
    iVar1 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x41);
    engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_00490e30
              (_DAT_01bcd070,_DAT_01c00c58,_DAT_01c00c60,(iVar2 - iVar1) / 2,iVar4,iVar5,
               format_string);
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    pCVar6 = g_CKeys_PTR_005bac64;
    iVar1 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_ESCAPE);
    if (iVar1 != 0) goto LAB_004cfdf5;
    iVar1 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_RETURN);
  } while ((iVar1 == 0) &&
          (iVar1 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)
                             (g_CKeys_PTR_005bac64,DIM_LBUTTON), iVar1 == 0));
  *sensitivity_value_ptr = iVar3;
LAB_004cfdf5:
  shape_edittool_cpp_FUN_004720c0(g_CEditorTools_PTR_005b6d50);
  return;
}
