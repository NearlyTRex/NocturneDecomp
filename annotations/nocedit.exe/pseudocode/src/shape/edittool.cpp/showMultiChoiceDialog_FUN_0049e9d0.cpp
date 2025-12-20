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
  char *pcVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  CEdButton *pCVar10;
  BADSPACEBASE *in_ESP;
  int left;
  CEdButton *pCVar11;
  char *pcVar12;
  int index;
  CEdButton *pCVar13;
  bool bVar14;
  int iVar15;
  CStrList *in_stack_00000010;
  uint uStack00000014;
  CStrList *in_stack_00000018;
  CStrList *in_stack_00000020;
  CStrList *in_stack_00000024;
  CEdButton *in_stack_00000028;
  int in_stack_00000030;
  int in_stack_00000060;
  CEdButton *in_stack_00000064;
  CEdButton *in_stack_00000078;
  CEdButton *in_stack_0000007c;
  int in_stack_00000080;
  void *in_stack_00000084;
  int in_stack_00000088;
  WatcomTypeInfo *element_count;
  WatcomTypeInfo *in_stack_fffffeb8;
  int local_38;
  int local_34;
  void *local_30;
  void *local_2c;
  int local_24;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  if ((in_stack_00000010 == (CStrList *)0x0) || (iVar2 = in_stack_00000010->item_count, iVar2 < 1))
  {
    return -1;
  }
  element_count = &g_CEdButtonTypeInfo;
  pvVar3 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     (iVar2 * 0xe4 + 4,"..\\shape\\edittool.cpp",0x412);
  pvVar3 = crt_memory_c_constructTypedObjectArray_FUN_00601272
                     (pvVar3,(int)element_count,in_stack_fffffeb8);
  iVar9 = 0;
  local_38 = 0;
  if (0 < iVar2) {
    do {
      local_2c = pvVar3;
      pcVar12 = &stack0xfffffec0;
      pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(in_stack_00000018,iVar9);
      do {
        cVar1 = *pcVar4;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar12 = &stack0xfffffeb8;
      do {
        pcVar4 = pcVar12;
        if (*pcVar12 == '^') goto LAB_0049eae7;
        if (*pcVar12 == '\0') break;
        pcVar4 = pcVar12 + 1;
        if (*pcVar4 == '^') goto LAB_0049eae7;
        pcVar12 = pcVar12 + 2;
      } while (*pcVar4 != '\0');
      pcVar4 = (char *)0x0;
LAB_0049eae7:
      if (pcVar4 != (char *)0x0) {
        pcVar12 = pcVar4 + 1;
        *(char *)(local_34 + 4) = pcVar4[1];
        do {
          cVar1 = *pcVar12;
          *pcVar4 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar12[1];
          pcVar12 = pcVar12 + 2;
          pcVar4[1] = cVar1;
          pcVar4 = pcVar4 + 2;
        } while (cVar1 != '\0');
        shape_edittool_cpp_CStrList_setStringAt_FUN_004a3120
                  (in_stack_00000010,iVar9,&stack0xfffffeb8);
      }
      iVar5 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0(&stack0xfffffebc);
      if (local_38 < iVar5) {
        local_38 = iVar5;
      }
      local_2c = (void *)((int)local_2c + 0xe4);
      iVar9 = iVar9 + 1;
      pvVar3 = local_2c;
    } while (iVar9 < iVar2);
  }
  iVar9 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0("Cancel");
  if (local_34 < iVar9) {
    local_30 = (void *)shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0("Cancel");
  }
  iVar9 = (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -0x80) -
               (uint)((g_WindowWidth >> 0x1f) << 6 < 0)) >> 7;
  iVar5 = g_WindowHeight / 0x60;
  if (in_stack_00000024 == (CStrList *)0x0) {
    iVar6 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
    iVar6 = iVar6 + -1;
    pvVar3 = (void *)((iVar2 + -1) * (iVar9 + -2) + (int)local_30 * iVar2 + 1);
  }
  else {
    iVar6 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
    iVar6 = (iVar5 + -2) * (iVar2 + -1) + iVar6 * iVar2;
    pvVar3 = local_2c;
  }
  pvVar7 = (void *)engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80
                             (g_EditorFont,(char *)in_stack_00000020);
  if ((int)pvVar7 < (int)pvVar3) {
    pvVar7 = pvVar3;
  }
  pcVar12 = (char *)0x0;
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_004a0890
            (g_CEditorToolsPtr,(int)pvVar7,iVar6,(char *)in_stack_00000024,0);
  iVar6 = g_ClipRight - g_ClipLeft;
  index = 0;
  if (0 < iVar2) {
    str_list = (CStrList *)0x0;
    iVar15 = 0;
    do {
      left = g_ClipLeft + ((iVar6 + 1) - (int)pvVar3) / 2;
      if (in_stack_00000030 == 0) {
        left = (int)&str_list->item_count + left + iVar15;
        shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
        pcVar12 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(in_stack_00000024,index);
        pvVar7 = local_30;
        iVar8 = g_ClipBottom;
      }
      else {
        shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
        shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(in_stack_00000020,index);
        iVar8 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
        iVar8 = (int)local_2c + iVar8 + -1;
        pvVar7 = local_2c;
      }
      shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004a6590
                ((CEdButton *)dialog_mode,left,(int)pvVar7,iVar5 + left + -1,iVar8,pcVar12);
      dialog_mode = dialog_mode + 0xe4;
      index = index + 1;
      str_list = (CStrList *)((int)str_list + iVar9 + -1);
      iVar15 = iVar15 + local_24;
    } while (index < iVar2);
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  g_InputKeyMask = 0x7f;
  uStack00000014 = 0;
  pCVar13 = (CEdButton *)0xfffffffe;
  do {
    iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1c);
    if (iVar9 != 0) {
      pCVar13 = in_stack_00000028;
    }
    iVar9 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
    if (iVar9 == 0) {
      (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xf);
    }
    iVar9 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
    if ((iVar9 != 0) &&
       (iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xf), iVar9 != 0)) {
      in_stack_00000078 = (CEdButton *)(in_stack_00000078[-1].button_text + 199);
    }
    if ((int)in_stack_00000078 < iVar2) {
      if ((int)in_stack_00000078 < 0) {
        in_stack_00000078 = in_stack_00000064;
      }
    }
    else {
      in_stack_00000078 = (CEdButton *)0x0;
    }
    while (iVar9 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(), iVar9 != 0) {
      in_stack_00000084 =
           (void *)engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
      cVar1 = (char)in_stack_0000007c->shortcut_key;
      pCVar10 = in_stack_0000007c;
      for (pCVar11 = (CEdButton *)0x0; (cVar1 != '\0' && ((int)pCVar11 < iVar2));
          pCVar11 = (CEdButton *)((int)&pCVar11->enabled + 1)) {
        iVar9 = crt_ctype_c_toupper_FUN_005ff9e0((uint)(byte)pCVar10->shortcut_key);
        if (iVar9 == in_stack_00000088) {
          pCVar13 = pCVar11;
        }
        cVar1 = (char)pCVar10[1].shortcut_key;
        pCVar10 = pCVar10 + 1;
      }
      if (in_stack_0000007c == (CEdButton *)0x1b) {
        pCVar13 = (CEdButton *)0xffffffff;
      }
    }
    pCVar10 = (CEdButton *)0x0;
    pCVar11 = in_stack_00000078;
    if (0 < iVar2) {
      do {
        iVar9 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830(pCVar11);
        if (iVar9 != 0) {
          pCVar13 = pCVar10;
        }
        if (pCVar11 == g_ActiveButton) {
          in_stack_0000007c = pCVar10;
        }
        pCVar10 = (CEdButton *)((int)&pCVar10->enabled + 1);
        pCVar11 = pCVar11 + 1;
      } while ((int)pCVar10 < iVar2);
    }
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(g_CEditorToolsPtr);
    iVar9 = 0;
    pCVar11 = in_stack_0000007c;
    if (0 < iVar2) {
      do {
        bVar14 = iVar9 == in_stack_00000080;
        iVar9 = iVar9 + 1;
        shape_edittool_cpp_CEdButton_paint_FUN_004a65e0(pCVar11,(uint)bVar14);
        pCVar11 = pCVar11 + 1;
      } while (iVar9 < iVar2);
    }
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  } while (pCVar13 == (CEdButton *)0xfffffffe);
  g_CurrentDebugFilename = "..\\shape\\edittool.cpp";
  g_CurrentDebugLine = 0x49d;
  pvVar3 = crt_memory_c_freeSingleInstance_FUN_005fe632(in_stack_00000084,&g_CEdButtonTypeInfo);
  crt_memory_c_free_FUN_005fe659(pvVar3);
  g_InputKeyMask = in_stack_00000060;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  return (int)pCVar13;
}
