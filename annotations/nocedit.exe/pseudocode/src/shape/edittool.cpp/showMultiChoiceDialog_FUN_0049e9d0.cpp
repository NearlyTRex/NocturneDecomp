// Name: shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0
// Address: 0049e9d0
// Address Range: [[0049e9d0, 0049f055]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_showMultiChoiceDialog_FUN_0049e9d0(CStrList *str_list,char *dialog_title,int dialog_mode)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_showMultiChoiceDialog_FUN_0049e9d0(CStrList *str_list,char *dialog_title,int dialog_mode)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  CEdButton *pCVar10;
  char *pcVar11;
  bool bVar12;
  WatcomTypeInfo *type_info;
  char local_150 [256];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  CEdButton *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  CEdButton *local_18;
  int local_14;
  int iStack_10;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  if ((dialog_title == (char *)0x0) || (iVar2 = *(int *)dialog_title, iVar2 < 1)) {
    return -1;
  }
  type_info = &g_CEdButtonTypeInfo;
  iVar9 = iVar2;
  pvVar3 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     (iVar2 * 0xe4 + 4,"..\\shape\\edittool.cpp",0x412);
  local_18 = __vec_new(pvVar3,iVar9,type_info);
  iVar9 = 0;
  local_48 = 0;
  pCVar10 = local_18;
  if (0 < iVar2) {
    do {
      local_3c = pCVar10;
      pcVar11 = local_150;
      pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)dialog_title,iVar9);
      do {
        cVar1 = *pcVar4;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      pcVar11 = local_150;
      do {
        pcVar4 = pcVar11;
        if (*pcVar11 == '^') goto LAB_0049eae7;
        if (*pcVar11 == '\0') break;
        pcVar4 = pcVar11 + 1;
        if (*pcVar4 == '^') goto LAB_0049eae7;
        pcVar11 = pcVar11 + 2;
      } while (*pcVar4 != '\0');
      pcVar4 = (char *)0x0;
LAB_0049eae7:
      if (pcVar4 != (char *)0x0) {
        pcVar11 = pcVar4 + 1;
        *(char *)&local_3c->shortcut_key = pcVar4[1];
        do {
          cVar1 = *pcVar11;
          *pcVar4 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar11[1];
          pcVar11 = pcVar11 + 2;
          pcVar4[1] = cVar1;
          pcVar4 = pcVar4 + 2;
        } while (cVar1 != '\0');
        shape_edittool_cpp_CStrList_setStringAt_FUN_004a3120
                  ((CStrList *)dialog_title,iVar9,local_150);
      }
      iVar5 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0(local_150);
      if (local_48 < iVar5) {
        local_48 = iVar5;
      }
      local_3c = local_3c + 1;
      iVar9 = iVar9 + 1;
      pCVar10 = local_3c;
    } while (iVar9 < iVar2);
  }
  iVar9 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0("Cancel");
  if (local_48 < iVar9) {
    local_48 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0("Cancel");
  }
  iVar9 = (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -0x80) -
               (uint)((g_WindowWidth >> 0x1f) << 6 < 0)) >> 7;
  local_40 = g_WindowHeight / 0x60;
  if (dialog_mode == 0) {
    iVar8 = local_48 * iVar2;
    iVar5 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
    iVar5 = iVar5 + -1;
    iVar8 = (iVar2 + -1) * (iVar9 + -2) + iVar8 + 1;
  }
  else {
    iVar8 = local_40 + -2;
    iVar5 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
    iVar5 = iVar8 * (iVar2 + -1) + iVar5 * iVar2;
    iVar8 = local_48;
  }
  iVar6 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,(char *)str_list);
  if (iVar6 < iVar8) {
    iVar6 = iVar8;
  }
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_004a0890
            (g_CEditorToolsPtr,iVar6,iVar5,(char *)str_list,0);
  local_34 = (((g_ClipRight - g_ClipLeft) + 1) - iVar8) / 2;
  iVar5 = 0;
  if (0 < iVar2) {
    local_30 = local_40 + -1;
    local_38 = iVar9 + -1;
    local_1c = 0;
    local_20 = 0;
    local_2c = local_48;
    local_24 = 0;
    pCVar10 = local_18;
    do {
      iVar9 = g_ClipLeft + local_34;
      if (dialog_mode == 0) {
        iVar9 = iVar9 + local_24 + local_20;
        iVar8 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
        local_50 = (g_ClipBottom - iVar8) + 1;
        pcVar11 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                            ((CStrList *)dialog_title,iVar5);
        iVar7 = local_48 + iVar9;
        iVar8 = local_50;
        iVar6 = g_ClipBottom;
      }
      else {
        iVar8 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
        local_4c = iVar8 * iVar5 + g_ClipTop + local_1c + -1;
        pcVar11 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                            ((CStrList *)dialog_title,iVar5);
        iVar8 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
        iVar6 = iVar8 + local_4c + -1;
        iVar7 = local_48 + iVar9;
        iVar8 = local_4c;
      }
      shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004a6590
                (pCVar10,iVar9,iVar8,iVar7 + -1,iVar6,pcVar11);
      pCVar10 = pCVar10 + 1;
      local_1c = local_1c + local_30;
      iVar5 = iVar5 + 1;
      local_20 = local_20 + local_38;
      local_24 = local_24 + local_2c;
    } while (iVar5 < iVar2);
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  local_44 = g_InputKeyMask;
  g_InputKeyMask = 0x7f;
  local_14 = 0;
  local_28 = iVar2 + -1;
  iVar9 = -2;
  do {
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_RETURN);
    if (iVar5 != 0) {
      iVar9 = local_14;
    }
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
    if ((iVar5 == 0) &&
       (iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_TAB), iVar5 != 0)) {
      local_14 = local_14 + 1;
    }
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
    if ((iVar5 != 0) &&
       (iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_TAB), iVar5 != 0)) {
      local_14 = local_14 + -1;
    }
    if (local_14 < iVar2) {
      if (local_14 < 0) {
        local_14 = local_28;
      }
    }
    else {
      local_14 = 0;
    }
    while (iVar5 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(), iVar5 != 0) {
      iStack_10 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
      cVar1 = (char)local_18->shortcut_key;
      pCVar10 = local_18;
      for (iVar5 = 0; (cVar1 != '\0' && (iVar5 < iVar2)); iVar5 = iVar5 + 1) {
        iVar8 = toupper((uint)(byte)pCVar10->shortcut_key);
        if (iVar8 == iStack_10) {
          iVar9 = iVar5;
        }
        cVar1 = (char)pCVar10[1].shortcut_key;
        pCVar10 = pCVar10 + 1;
      }
      if (iStack_10 == 0x1b) {
        iVar9 = -1;
      }
    }
    iVar5 = 0;
    pCVar10 = local_18;
    if (0 < iVar2) {
      do {
        iVar8 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830(pCVar10);
        if (iVar8 != 0) {
          iVar9 = iVar5;
        }
        if (pCVar10 == g_ActiveControl) {
          local_14 = iVar5;
        }
        iVar5 = iVar5 + 1;
        pCVar10 = pCVar10 + 1;
      } while (iVar5 < iVar2);
    }
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(g_CEditorToolsPtr);
    iVar5 = 0;
    pCVar10 = local_18;
    if (0 < iVar2) {
      do {
        bVar12 = iVar5 == local_14;
        iVar5 = iVar5 + 1;
        shape_edittool_cpp_CEdButton_paint_FUN_004a65e0(pCVar10,(uint)bVar12);
        pCVar10 = pCVar10 + 1;
      } while (iVar5 < iVar2);
    }
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  } while (iVar9 == -2);
  g_CurrentDebugFilename = "..\\shape\\edittool.cpp";
  g_CurrentDebugLine = 0x49d;
  pvVar3 = __vec_delete(local_18,&g_CEdButtonTypeInfo);
  shape_memdbg_cpp_free_FUN_005fe659(pvVar3);
  g_InputKeyMask = local_44;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  return iVar9;
}
