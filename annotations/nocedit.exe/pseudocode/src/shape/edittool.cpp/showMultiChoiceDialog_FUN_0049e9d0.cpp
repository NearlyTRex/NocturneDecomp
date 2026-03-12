// Name: shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0
// Address: 0049e9d0
// Address Range: [[0049e9d0, 0049f055]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_showMultiChoiceDialog_FUN_0049e9d0(CStrList *str_list,char *dialog_title,int dialog_mode)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_showMultiChoiceDialog_FUN_0049e9d0(CStrList *str_list,char *dialog_title,int dialog_mode)

{
  char cVar2;
  void *pvVar3;
  CEdButton *object_ptr;
  char *pcVar4;
  int iVar5;
  int iVar3;
  int iVar4;
  int iVar10;
  int iVar6;
  int iVar11;
  int iVar7;
  int iVar12;
  int iVar13;
  void *ptr;
  int iVar8;
  int iVar9;
  CEdButton *pCVar10;
  char *pcVar14;
  char *pcVar15;
  int left;
  CEdButton *pCVar16;
  char *pcVar11;
  int iVar17;
  bool bVar12;
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
  WatcomTypeInfo *type_info;
  char cVar1;
  int iVar2;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_width;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_EditorFont,0x6a);
  if ((dialog_title == (char *)0x0) || (iVar2 = *(int *)dialog_title, iVar2 < 1)) {
    return -1;
  }
  type_info = &g_CEdButtonTypeInfo;
  iVar3 = iVar2;
  pvVar3 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     (iVar2 * 0xe4 + 4,"..\\shape\\edittool.cpp",0x412);
  object_ptr = __vec_new(pvVar3,iVar3,type_info);
  iVar9 = 0;
  local_48 = 0;
  local_3c = object_ptr;
  if (0 < iVar2) {
    do {
      pcVar11 = local_150;
      pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)dialog_title,iVar9);
      do {
        cVar1 = *pcVar4;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar2 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar11[1] = cVar2;
        pcVar11 = pcVar11 + 2;
      } while (cVar2 != '\0');
      pcVar15 = local_150;
      do {
        pcVar14 = pcVar15;
        if (*pcVar15 == '^') goto LAB_0049eae7;
        if (*pcVar15 == '\0') break;
        pcVar14 = pcVar15 + 1;
        if (*pcVar14 == '^') goto LAB_0049eae7;
        pcVar15 = pcVar15 + 2;
      } while (*pcVar14 != '\0');
      pcVar14 = (char *)0x0;
LAB_0049eae7:
      if (pcVar14 != (char *)0x0) {
        pcVar15 = pcVar14 + 1;
        *(char *)&local_3c->shortcut_key = pcVar14[1];
        do {
          cVar2 = *pcVar15;
          *pcVar14 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar15[1];
          pcVar15 = pcVar15 + 2;
          pcVar14[1] = cVar2;
          pcVar14 = pcVar14 + 2;
        } while (cVar2 != '\0');
        shape_edittool_cpp_CStrList_setStringAt_FUN_004a3120
                  ((CStrList *)dialog_title,iVar9,local_150);
      }
      iVar5 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0(local_150);
      if (local_48 < iVar5) {
        local_48 = iVar5;
      }
      iVar9 = iVar9 + 1;
      local_3c = local_3c + 1;
    } while (iVar9 < iVar2);
  }
  iVar3 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0("Cancel");
  if (local_48 < iVar3) {
    local_48 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0("Cancel");
  }
  iVar3 = (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -0x80) -
               (uint)((g_WindowWidth >> 0x1f) << 6 < 0)) >> 7;
  iVar4 = g_WindowHeight / 0x60;
  if (dialog_mode == 0) {
    iVar8 = local_48 * iVar2;
    iVar10 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
    iVar10 = iVar10 + -1;
    iVar12 = (iVar2 + -1) * (iVar3 + -2) + iVar8 + 1;
  }
  else {
    iVar10 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
    iVar10 = (iVar4 + -2) * (iVar2 + -1) + iVar10 * iVar2;
    iVar12 = local_48;
  }
  iVar6 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,(char *)str_list);
  if (iVar6 < iVar12) {
    iVar6 = iVar12;
  }
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_004a0890
            (g_CEditorToolsPtr,iVar6,iVar10,(char *)str_list,0);
  iVar10 = g_ClipRight - g_ClipLeft;
  iVar17 = 0;
  if (0 < iVar2) {
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
    pCVar10 = object_ptr;
    do {
      left = g_ClipLeft + ((iVar10 + 1) - iVar12) / 2;
      if (dialog_mode == 0) {
        left = left + local_24 + local_20;
        iVar11 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
        iVar11 = (g_ClipBottom - iVar11) + 1;
        pcVar15 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                            ((CStrList *)dialog_title,iVar17);
        iVar13 = g_ClipBottom;
      }
      else {
        iVar11 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
        iVar11 = iVar11 * iVar17 + g_ClipTop + local_1c + -1;
        pcVar15 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                            ((CStrList *)dialog_title,iVar17);
        iVar13 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
        iVar13 = iVar13 + iVar11 + -1;
      }
      iVar7 = local_48 + left;
      shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004a6590
                (pCVar10,left,iVar11,iVar7 + -1,iVar13,pcVar15);
      pCVar10 = pCVar10 + 1;
      local_1c = local_1c + iVar4 + -1;
      iVar17 = iVar17 + 1;
      local_20 = local_20 + iVar3 + -1;
      local_24 = local_24 + local_48;
    } while (iVar17 < iVar2);
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  iVar4 = g_InputKeyMask;
  g_InputKeyMask = 0x7f;
  local_14 = 0;
  iVar3 = -2;
  do {
    iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_RETURN);
    if (iVar10 != 0) {
      iVar3 = local_14;
    }
    iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
    if ((iVar10 == 0) &&
       (iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_TAB), iVar10 != 0)) {
      local_14 = local_14 + 1;
    }
    iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
    if ((iVar10 != 0) &&
       (iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_TAB), iVar10 != 0)) {
      local_14 = local_14 + -1;
    }
    if (local_14 < iVar2) {
      if (local_14 < 0) {
        local_14 = iVar2 + -1;
      }
    }
    else {
      local_14 = 0;
    }
    while (iVar10 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(), iVar10 != 0) {
      iVar12 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
      cVar2 = (char)object_ptr->shortcut_key;
      pCVar16 = object_ptr;
      for (iVar10 = 0; (cVar2 != '\0' && (iVar10 < iVar2)); iVar10 = iVar10 + 1) {
        iVar17 = toupper((uint)(byte)pCVar16->shortcut_key);
        if (iVar17 == iVar12) {
          iVar3 = iVar10;
        }
        cVar2 = (char)pCVar16[1].shortcut_key;
        pCVar16 = pCVar16 + 1;
      }
      if (iVar12 == 0x1b) {
        iVar3 = -1;
      }
    }
    iVar10 = 0;
    pCVar16 = object_ptr;
    if (0 < iVar2) {
      do {
        iVar12 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830(pCVar16);
        if (iVar12 != 0) {
          iVar3 = iVar10;
        }
        if (pCVar16 == g_ActiveControl) {
          local_14 = iVar10;
        }
        iVar10 = iVar10 + 1;
        pCVar16 = pCVar16 + 1;
      } while (iVar10 < iVar2);
    }
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(g_CEditorToolsPtr);
    iVar10 = 0;
    pCVar16 = object_ptr;
    if (0 < iVar2) {
      do {
        bVar12 = iVar10 == local_14;
        iVar10 = iVar10 + 1;
        shape_edittool_cpp_CEdButton_paint_FUN_004a65e0(pCVar16,(uint)bVar12);
        pCVar16 = pCVar16 + 1;
      } while (iVar10 < iVar2);
    }
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  } while (iVar3 == -2);
  g_CurrentDebugFilename = "..\\shape\\edittool.cpp";
  g_CurrentDebugLine = 0x49d;
  ptr = __vec_delete(object_ptr,&g_CEdButtonTypeInfo);
  shape_memdbg_cpp_free_FUN_005fe659(ptr);
  g_InputKeyMask = iVar4;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  return iVar3;
}
