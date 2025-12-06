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
  bool bVar3;
  void *pvVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  undefined3 extraout_var;
  int iVar9;
  int iVar10;
  CEdButton *pCVar11;
  BADSPACEBASE *in_ESP;
  int left;
  CEdButton *pCVar12;
  char *pcVar13;
  int index;
  CEdButton *pCVar14;
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
  pvVar4 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     (iVar2 * 0xe4 + 4,"..\\shape\\edittool.cpp",0x412);
  pvVar4 = crt_memory_c_constructTypedObjectArray_FUN_00601272
                     (pvVar4,(int)element_count,in_stack_fffffeb8);
  iVar10 = 0;
  local_38 = 0;
  if (0 < iVar2) {
    do {
      local_2c = pvVar4;
      pcVar13 = &stack0xfffffec0;
      pcVar5 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(in_stack_00000018,iVar10);
      do {
        cVar1 = *pcVar5;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar13 = &stack0xfffffeb8;
      do {
        pcVar5 = pcVar13;
        if (*pcVar13 == '^') goto LAB_0049eae7;
        if (*pcVar13 == '\0') break;
        pcVar5 = pcVar13 + 1;
        if (*pcVar5 == '^') goto LAB_0049eae7;
        pcVar13 = pcVar13 + 2;
      } while (*pcVar5 != '\0');
      pcVar5 = (char *)0x0;
LAB_0049eae7:
      if (pcVar5 != (char *)0x0) {
        pcVar13 = pcVar5 + 1;
        *(char *)(local_34 + 4) = pcVar5[1];
        do {
          cVar1 = *pcVar13;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar13[1];
          pcVar13 = pcVar13 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
        shape_edittool_cpp_CStrList_setStringAt_FUN_004a3120
                  (in_stack_00000010,iVar10,&stack0xfffffeb8);
      }
      iVar6 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0(&stack0xfffffebc);
      if (local_38 < iVar6) {
        local_38 = iVar6;
      }
      local_2c = (void *)((int)local_2c + 0xe4);
      iVar10 = iVar10 + 1;
      pvVar4 = local_2c;
    } while (iVar10 < iVar2);
  }
  iVar10 = shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0("Cancel");
  if (local_34 < iVar10) {
    local_30 = (void *)shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0("Cancel");
  }
  iVar10 = (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -0x80) -
                (uint)((g_WindowWidth >> 0x1f) << 6 < 0)) >> 7;
  iVar6 = g_WindowHeight / 0x60;
  if (in_stack_00000024 == (CStrList *)0x0) {
    iVar7 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
    iVar7 = iVar7 + -1;
    pvVar4 = (void *)((iVar2 + -1) * (iVar10 + -2) + (int)local_30 * iVar2 + 1);
  }
  else {
    iVar7 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
    iVar7 = (iVar6 + -2) * (iVar2 + -1) + iVar7 * iVar2;
    pvVar4 = local_2c;
  }
  pvVar8 = (void *)engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80
                             (g_EditorFont,(char *)in_stack_00000020);
  if ((int)pvVar8 < (int)pvVar4) {
    pvVar8 = pvVar4;
  }
  pcVar13 = (char *)0x0;
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_004a0890
            (g_CEditorToolsPtr,(int)pvVar8,iVar7,(char *)in_stack_00000024,0);
  iVar7 = g_ClipRight - g_ClipLeft;
  index = 0;
  if (0 < iVar2) {
    str_list = (CStrList *)0x0;
    iVar15 = 0;
    do {
      left = g_ClipLeft + ((iVar7 + 1) - (int)pvVar4) / 2;
      if (in_stack_00000030 == 0) {
        left = (int)&str_list->item_count + left + iVar15;
        shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
        pcVar13 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(in_stack_00000024,index);
        pvVar8 = local_30;
        iVar9 = g_ClipBottom;
      }
      else {
        shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
        shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(in_stack_00000020,index);
        iVar9 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
        iVar9 = (int)local_2c + iVar9 + -1;
        pvVar8 = local_2c;
      }
      shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004a6590
                ((CEdButton *)dialog_mode,left,(int)pvVar8,iVar6 + left + -1,iVar9,pcVar13);
      dialog_mode = dialog_mode + 0xe4;
      index = index + 1;
      str_list = (CStrList *)((int)str_list + iVar10 + -1);
      iVar15 = iVar15 + local_24;
    } while (index < iVar2);
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  g_InputKeyMask = 0x7f;
  uStack00000014 = 0;
  pCVar14 = (CEdButton *)0xfffffffe;
  do {
    iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1c);
    if (iVar10 != 0) {
      pCVar14 = in_stack_00000028;
    }
    iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
    if (iVar10 == 0) {
      (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xf);
    }
    iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
    if ((iVar10 != 0) && (iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xf), iVar10 != 0)
       ) {
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
    while (bVar3 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(),
          CONCAT31 /* combine 2-byte values */(extraout_var,bVar3) != 0) {
      in_stack_00000084 =
           (void *)engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
      cVar1 = (char)in_stack_0000007c->shortcut_key;
      pCVar11 = in_stack_0000007c;
      for (pCVar12 = (CEdButton *)0x0; (cVar1 != '\0' && ((int)pCVar12 < iVar2));
          pCVar12 = (CEdButton *)((int)&pCVar12->enabled + 1)) {
        iVar10 = crt_ctype_c_toupper_FUN_005ff9e0((uint)(byte)pCVar11->shortcut_key);
        if (iVar10 == in_stack_00000088) {
          pCVar14 = pCVar12;
        }
        cVar1 = (char)pCVar11[1].shortcut_key;
        pCVar11 = pCVar11 + 1;
      }
      if (in_stack_0000007c == (CEdButton *)0x1b) {
        pCVar14 = (CEdButton *)0xffffffff;
      }
    }
    pCVar11 = (CEdButton *)0x0;
    pCVar12 = in_stack_00000078;
    if (0 < iVar2) {
      do {
        iVar10 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830(pCVar12);
        if (iVar10 != 0) {
          pCVar14 = pCVar11;
        }
        if (pCVar12 == g_ActiveButton) {
          in_stack_0000007c = pCVar11;
        }
        pCVar11 = (CEdButton *)((int)&pCVar11->enabled + 1);
        pCVar12 = pCVar12 + 1;
      } while ((int)pCVar11 < iVar2);
    }
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(g_CEditorToolsPtr);
    iVar10 = 0;
    pCVar12 = in_stack_0000007c;
    if (0 < iVar2) {
      do {
        bVar3 = iVar10 == in_stack_00000080;
        iVar10 = iVar10 + 1;
        shape_edittool_cpp_CEdButton_paint_FUN_004a65e0(pCVar12,(uint)bVar3);
        pCVar12 = pCVar12 + 1;
      } while (iVar10 < iVar2);
    }
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  } while (pCVar14 == (CEdButton *)0xfffffffe);
  g_CurrentDebugFilename = "..\\shape\\edittool.cpp";
  g_CurrentDebugLine = 0x49d;
  pvVar4 = crt_memory_c_freeSingleInstance_FUN_005fe632(in_stack_00000084,&g_CEdButtonTypeInfo);
  crt_memory_c_free_FUN_005fe659(pvVar4);
  g_InputKeyMask = in_stack_00000060;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  return (int)pCVar14;
}
