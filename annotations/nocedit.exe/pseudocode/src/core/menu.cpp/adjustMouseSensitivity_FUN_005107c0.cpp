// Name: core_menu.cpp_adjustMouseSensitivity_FUN_005107c0
// Address: 005107c0
// Address Range: [[005107c0, 00510a4f]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_adjustMouseSensitivity_FUN_005107c0(int *sensitivity_value_ptr,char *window_title)

#include "nocturne.h"

void __cdecl core_menu_cpp_adjustMouseSensitivity_FUN_005107c0(int *sensitivity_value_ptr,char *window_title)

{
  int iVar1;
  int iVar6;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar7;
  int iVar8;
  int iVar5;
  int color_mode;
  int color_value;
  char *format_string;
  CKeys *pCVar6;
  double dVar7;
  
  iVar3 = g_WindowWidth * 3 >> 0x1f;
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_004a0890
            (g_CEditorToolsPtr,(int)((g_WindowWidth * 3 + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2
             ,0x2c,window_title,0);
  iVar8 = *sensitivity_value_ptr;
  if (iVar8 < 0x4000) {
    *sensitivity_value_ptr = 0x4000;
    goto LAB_00510823;
  }
  if (iVar8 < 0x40001) {
    if (iVar8 < 0x4000) {
      *sensitivity_value_ptr = 0x4000;
      goto LAB_00510823;
    }
    if (iVar8 < 0x40001) goto LAB_00510823;
  }
  *sensitivity_value_ptr = 0x40000;
LAB_00510823:
  iVar8 = *sensitivity_value_ptr;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  wincore_winrun_cpp_setCursorPosition_FUN_005f30d0
            ((int)(((longlong)(g_WindowWidth + -1) * (longlong)(iVar8 + -0x4000)) / 0x3c000),
             g_MouseY);
  pCVar6 = (CKeys *)0x0;
  do {
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(g_CEditorToolsPtr);
    if ((CKeys *)g_MouseX != pCVar6) {
      iVar8 = (int)(((longlong)g_MouseX * 0x3c000) / (longlong)(g_WindowWidth + -1)) + 0x4000;
    }
    iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD4);
    if (iVar1 != 0) {
      iVar8 = iVar8 + -700;
    }
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD6);
    if (iVar6 != 0) {
      iVar8 = iVar8 + 700;
    }
    if (iVar8 < 0x4000) {
      iVar8 = 0x4000;
    }
    else if (0x40000 < iVar8) {
      iVar8 = 0x40000;
    }
    iVar6 = g_ClipTop + 1;
    iVar2 = g_ClipBottom + -1;
    iVar4 = g_ClipRight + -1;
    iVar5 = g_ClipLeft + 1;
    engine_2d_c_fillRectWithBorder_FUN_00403200(iVar5,iVar6,iVar4,iVar2,0,0xff);
    engine_2d_c_fillRectColor_FUN_00403170
              (iVar5,iVar6,
               (int)(((longlong)(iVar4 - iVar5) * (longlong)(iVar8 + -0x4000)) / 0x3c000) + iVar5,
               iVar2,4);
    dVar7 = (double)iVar8 * 1.52587890625e-05;
    format_string = "%4.2f";
    color_value = 0;
    color_mode = 0xff;
    iVar7 = g_ClipBottom + g_ClipTop;
    iVar6 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_EditorFont,0x41);
    engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf30
              (g_EditorFont,g_ClipLeft,g_ClipRight,(iVar7 - iVar6) / 2,color_mode,color_value,
               format_string,dVar7);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    pCVar6 = g_CKeysPtr;
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar6 != 0) goto LAB_005109f5;
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_RETURN);
  } while ((iVar6 == 0) &&
          (iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIM_LBUTTON), iVar6 == 0));
  *sensitivity_value_ptr = iVar8;
LAB_005109f5:
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  return;
}
