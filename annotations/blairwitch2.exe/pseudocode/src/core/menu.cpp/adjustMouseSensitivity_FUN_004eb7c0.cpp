// Name: core_menu.cpp_adjustMouseSensitivity_FUN_004eb7c0
// Address: 004eb7c0
// Address Range: [[004eb7c0, 004eba4f]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_adjustMouseSensitivity_FUN_004eb7c0(int *sensitivity_value_ptr,char *window_title)

#include "nocturne.h"

void __cdecl core_menu_cpp_adjustMouseSensitivity_FUN_004eb7c0(int *sensitivity_value_ptr,char *window_title)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *format_string;
  CKeys *pCVar6;
  
  iVar3 = g_INT_006141b8 * 3 >> 0x1f;
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047e1d0
            (g_CEditorToolsPtr,
             (int)((g_INT_006141b8 * 3 + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2,0x2c,
             window_title,0);
  iVar3 = *sensitivity_value_ptr;
  if (iVar3 < 0x4000) {
    *sensitivity_value_ptr = 0x4000;
    goto LAB_004eb823;
  }
  if (iVar3 < 0x40001) {
    if (iVar3 < 0x4000) {
      *sensitivity_value_ptr = 0x4000;
      goto LAB_004eb823;
    }
    if (iVar3 < 0x40001) goto LAB_004eb823;
  }
  *sensitivity_value_ptr = 0x40000;
LAB_004eb823:
  iVar3 = *sensitivity_value_ptr;
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  wincore_winrun_cpp_setCursorPosition_FUN_0058ed10
            ((int)(((longlong)(g_INT_006141b8 + -1) * (longlong)(iVar3 + -0x4000)) / 0x3c000),
             g_INT_01c2a380);
  pCVar6 = (CKeys *)0x0;
  do {
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_0047e870(g_CEditorToolsPtr);
    if ((CKeys *)g_INT_01c2a37c != pCVar6) {
      iVar3 = (int)(((longlong)g_INT_01c2a37c * 0x3c000) / (longlong)(g_INT_006141b8 + -1)) + 0x4000
      ;
    }
    iVar1 = (*g_CKeys_PTR_00617dd4->vtable->getAndClearKeyState)(g_CKeys_PTR_00617dd4,DIK_NUMPAD4);
    if (iVar1 != 0) {
      iVar3 = iVar3 + -700;
    }
    iVar1 = (*g_CKeys_PTR_00617dd4->vtable->getAndClearKeyState)(g_CKeys_PTR_00617dd4,DIK_NUMPAD6);
    if (iVar1 != 0) {
      iVar3 = iVar3 + 700;
    }
    if (iVar3 < 0x4000) {
      iVar3 = 0x4000;
    }
    else if (0x40000 < iVar3) {
      iVar3 = 0x40000;
    }
    iVar1 = g_INT_01c35e4c + 1;
    iVar2 = g_INT_01c35e54 + -1;
    iVar4 = g_INT_01c35e50 + -1;
    iVar5 = g_INT_01c35e48 + 1;
    engine_2d_c_fillRectWithBorder_FUN_00403250(iVar5,iVar1,iVar4,iVar2,0,0xff);
    engine_2d_c_fillRectColor_FUN_004031c0
              (iVar5,iVar1,
               (int)(((longlong)(iVar4 - iVar5) * (longlong)(iVar3 + -0x4000)) / 0x3c000) + iVar5,
               iVar2,4);
    format_string = "%4.2f";
    iVar5 = 0;
    iVar4 = 0xff;
    iVar2 = g_INT_01c35e54 + g_INT_01c35e4c;
    iVar1 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(g_CBitFont_PTR_01c25590,0x41);
    engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004a93f0
              (g_CBitFont_PTR_01c25590,g_INT_01c35e48,g_INT_01c35e50,(iVar2 - iVar1) / 2,iVar4,iVar5
               ,format_string);
    wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
    pCVar6 = g_CKeys_PTR_00617dd4;
    iVar1 = (*g_CKeys_PTR_00617dd4->vtable->getAndClearKeyState)(g_CKeys_PTR_00617dd4,DIK_ESCAPE);
    if (iVar1 != 0) goto LAB_004eb9f5;
    iVar1 = (*g_CKeys_PTR_00617dd4->vtable->getAndClearKeyState)(g_CKeys_PTR_00617dd4,DIK_RETURN);
  } while ((iVar1 == 0) &&
          (iVar1 = (*g_CKeys_PTR_00617dd4->vtable->getAndClearKeyState)
                             (g_CKeys_PTR_00617dd4,DIM_LBUTTON), iVar1 == 0));
  *sensitivity_value_ptr = iVar3;
LAB_004eb9f5:
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_0047e760(g_CEditorToolsPtr);
  return;
}
