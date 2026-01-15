// Name: shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0
// Address: 0049e9d0
// Address Range: [[0049e9d0, 0049f055]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0(CStrList * str_list, char * dialog_title, int dialog_mode)

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_showMultiChoiceDialog_FUN_0049e9d0
          (CStrList *str_list,char *dialog_title,int dialog_mode)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  CEdButton *object_ptr;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  CEdButton *pCVar12;
  int unaff_EBP;
  int left;
  char *pcVar13;
  bool bVar14;
  WatcomTypeInfo *type_info;
  int local_48;
  CEdButton *local_3c;
  int local_24;
  int local_20;
  int local_1c;
  int local_14;
  
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
  iVar11 = iVar2;
  pvVar3 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     (iVar2 * 0xe4 + 4,"..\\shape\\edittool.cpp",0x412);
  object_ptr = crt_memory_c_constructTypedObjectArray_FUN_00601272(pvVar3,iVar11,type_info);
  iVar11 = 0;
  local_48 = 0;
  local_3c = object_ptr;
  if (0 < iVar2) {
    do {
      pcVar13 = &stack0xfffffeb0;
      pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)dialog_title,iVar11)
      ;
      do {
        cVar1 = *pcVar4;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar13 = &stack0xfffffeb0;
      do {
        pcVar4 = pcVar13;
        if (*pcVar13 == '^') goto LAB_0049eae7;
        if (*pcVar13 == '\0') break;
        pcVar4 = pcVar13 + 1;
        if (*pcVar4 == '^') goto LAB_0049eae7;
        pcVar13 = pcVar13 + 2;
      } while (*pcVar4 != '\0');
      pcVar4 = (char *)0x0;
LAB_0049eae7:
      if (pcVar4 != (char *)0x0) {
        pcVar13 = pcVar4 + 1;
        *(char *)&local_3c->shortcut_key = pcVar4[1];
        do {
          cVar1 = *pcVar13;
          *pcVar4 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar13[1];
          pcVar13 = pcVar13 + 2;
          pcVar4[1] = cVar1;
          pcVar4 = pcVar4 + 2;
        } while (cVar1 != '\0');
        shape_edittool_cpp_CStrList_setStringAt_FUN_004a3120
                  ((CStrList *)dialog_title,iVar11,&stack0xfffffeb0);
      }
      iVar5 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0(&stack0xfffffeb0);
      if (local_48 < iVar5) {
        local_48 = iVar5;
      }
      iVar11 = iVar11 + 1;
      local_3c = local_3c + 1;
    } while (iVar11 < iVar2);
  }
  iVar11 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0("Cancel");
  if (local_48 < iVar11) {
    local_48 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0("Cancel");
  }
  iVar11 = (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -0x80) -
                (uint)((g_WindowWidth >> 0x1f) << 6 < 0)) >> 7;
  iVar5 = g_WindowHeight / 0x60;
  if (dialog_mode == 0) {
    iVar6 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
    iVar6 = iVar6 + -1;
    iVar9 = (iVar2 + -1) * (iVar11 + -2) + local_48 * iVar2 + 1;
  }
  else {
    iVar6 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
    iVar6 = (iVar5 + -2) * (iVar2 + -1) + iVar6 * iVar2;
    iVar9 = local_48;
  }
  iVar7 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,(char *)str_list);
  if (iVar7 < iVar9) {
    iVar7 = iVar9;
  }
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_004a0890
            (g_CEditorToolsPtr,iVar7,iVar6,(char *)str_list,0);
  iVar6 = g_ClipRight - g_ClipLeft;
  iVar7 = 0;
  if (0 < iVar2) {
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
    pCVar12 = object_ptr;
    do {
      left = g_ClipLeft + ((iVar6 + 1) - iVar9) / 2;
      if (dialog_mode == 0) {
        left = left + local_24 + local_20;
        iVar8 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
        iVar8 = (g_ClipBottom - iVar8) + 1;
        pcVar13 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                            ((CStrList *)dialog_title,iVar7);
        iVar10 = g_ClipBottom;
      }
      else {
        iVar8 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
        iVar8 = iVar8 * iVar7 + g_ClipTop + local_1c + -1;
        pcVar13 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                            ((CStrList *)dialog_title,iVar7);
        iVar10 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
        iVar10 = iVar10 + iVar8 + -1;
      }
      shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004a6590
                (pCVar12,left,iVar8,local_48 + left + -1,iVar10,pcVar13);
      pCVar12 = pCVar12 + 1;
      local_1c = local_1c + iVar5 + -1;
      iVar7 = iVar7 + 1;
      local_20 = local_20 + iVar11 + -1;
      local_24 = local_24 + local_48;
    } while (iVar7 < iVar2);
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  iVar5 = g_InputKeyMask;
  g_InputKeyMask = 0x7f;
  local_14 = 0;
  iVar11 = -2;
  do {
    iVar6 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1c);
    if (iVar6 != 0) {
      iVar11 = unaff_EBP;
    }
    iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
    if (iVar6 == 0) {
      (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xf);
    }
    iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
    if (iVar6 != 0) {
      (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xf);
    }
    if (local_14 < iVar2) {
      if (local_14 < 0) {
        local_14 = iVar2 + -1;
      }
    }
    else {
      local_14 = 0;
    }
    while (iVar6 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(), iVar6 != 0) {
      iVar9 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
      cVar1 = (char)object_ptr->shortcut_key;
      pCVar12 = object_ptr;
      for (iVar6 = 0; (cVar1 != '\0' && (iVar6 < iVar2)); iVar6 = iVar6 + 1) {
        iVar7 = crt_ctype_c_toupper_FUN_005ff9e0((uint)(byte)pCVar12->shortcut_key);
        if (iVar7 == iVar9) {
          iVar11 = iVar6;
        }
        cVar1 = (char)pCVar12[1].shortcut_key;
        pCVar12 = pCVar12 + 1;
      }
      if (iVar9 == 0x1b) {
        iVar11 = -1;
      }
    }
    iVar6 = 0;
    pCVar12 = object_ptr;
    if (0 < iVar2) {
      do {
        iVar9 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830(pCVar12);
        if (iVar9 != 0) {
          iVar11 = iVar6;
        }
        if (pCVar12 == g_ActiveButton) {
          local_14 = iVar6;
        }
        iVar6 = iVar6 + 1;
        pCVar12 = pCVar12 + 1;
      } while (iVar6 < iVar2);
    }
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(g_CEditorToolsPtr);
    iVar6 = 0;
    pCVar12 = object_ptr;
    if (0 < iVar2) {
      do {
        bVar14 = iVar6 == local_14;
        iVar6 = iVar6 + 1;
        shape_edittool_cpp_CEdButton_paint_FUN_004a65e0(pCVar12,(uint)bVar14);
        pCVar12 = pCVar12 + 1;
      } while (iVar6 < iVar2);
    }
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  } while (iVar11 == -2);
  g_CurrentDebugFilename = "..\\shape\\edittool.cpp";
  g_CurrentDebugLine = 0x49d;
  pvVar3 = crt_memory_c_freeSingleInstance_FUN_005fe632(object_ptr,&g_CEdButtonTypeInfo);
  crt_memory_c_free_FUN_005fe659(pvVar3);
  g_InputKeyMask = iVar5;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  return iVar11;
}
