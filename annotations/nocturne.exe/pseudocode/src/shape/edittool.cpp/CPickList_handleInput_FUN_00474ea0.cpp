// Name: shape_edittool.cpp_CPickList_handleInput_FUN_00474ea0
// Address: 00474ea0
// Address Range: [[00474ea0, 00475229]]
// Convention: unknown
// Signature: undefined4 shape_edittool_cpp_CPickList_handleInput_FUN_00474ea0(CPickList *param_1)

#include "nocturne.h"

uint shape_edittool_cpp_CPickList_handleInput_FUN_00474ea0(CPickList *param_1)

{
  char *str1;
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  CPickList *pCVar6;
  int iVar7;
  byte bVar8;
  char cStack_14;
  
  bVar8 = 0;
  iVar2 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_RETURN);
  if ((iVar2 != 0) &&
     (iVar2 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00476040
                        (param_1,param_1->current_index), iVar2 != 0)) {
LAB_0047509f:
    param_1->confirmed_flag = 1;
    return 0;
  }
  iVar2 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_ESCAPE);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  iVar2 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LCONTROL);
  if (iVar2 != 0) {
    iVar2 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_NUMPAD0);
    if (iVar2 != 0) {
      shape_edittool_cpp_CStrList_copyToClipboard_FUN_00474380(&param_1->base);
    }
    iVar2 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_C);
    if (iVar2 != 0) {
      shape_edittool_cpp_CStrList_copyToClipboard_FUN_00474380(&param_1->base);
    }
  }
  str1 = param_1->search_text_buffer;
  do {
    do {
      while( true ) {
        iVar2 = wincore_winrun_cpp_wasKeyPressed_FUN_00558b70();
        if (iVar2 == 0) {
          iVar2 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)
                            (g_CKeys_PTR_005bac64,DIK_NUMPAD8);
          if (iVar2 != 0) {
            param_1->search_text_buffer[0] = '\0';
            param_1->current_index = param_1->current_index + -1;
          }
          iVar2 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)
                            (g_CKeys_PTR_005bac64,DIK_NUMPAD2);
          if (iVar2 != 0) {
            param_1->search_text_buffer[0] = '\0';
            param_1->current_index = param_1->current_index + 1;
          }
          iVar2 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)
                            (g_CKeys_PTR_005bac64,DIK_NUMPAD7);
          if (iVar2 != 0) {
            param_1->search_text_buffer[0] = '\0';
            param_1->current_index = 0;
          }
          iVar2 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)
                            (g_CKeys_PTR_005bac64,DIK_NUMPAD1);
          if (iVar2 != 0) {
            iVar2 = (param_1->base).item_count;
            param_1->search_text_buffer[0] = '\0';
            param_1->current_index = iVar2;
          }
          iVar2 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)
                            (g_CKeys_PTR_005bac64,DIK_NUMPAD9);
          if (iVar2 != 0) {
            param_1->search_text_buffer[0] = '\0';
            param_1->current_index = param_1->current_index - param_1->page_size;
            param_1->scroll_top = param_1->scroll_top - param_1->page_size;
          }
          iVar2 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)
                            (g_CKeys_PTR_005bac64,DIK_NUMPAD3);
          if (iVar2 != 0) {
            param_1->search_text_buffer[0] = '\0';
            param_1->current_index = param_1->current_index + param_1->page_size;
            param_1->scroll_top = param_1->scroll_top + param_1->page_size;
          }
          iVar2 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)
                            (g_CKeys_PTR_005bac64,DIK_NUMPAD4);
          if (iVar2 != 0) {
            param_1->search_text_buffer[0] = '\0';
            param_1->current_index = param_1->current_index - param_1->vertical_page_size;
          }
          iVar2 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)
                            (g_CKeys_PTR_005bac64,DIK_NUMPAD6);
          if (iVar2 != 0) {
            param_1->search_text_buffer[0] = '\0';
            param_1->current_index = param_1->current_index + param_1->vertical_page_size;
          }
          return 0;
        }
        iVar2 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004c41d0(g_CKeys_PTR_005bac64);
        if (iVar2 == 8) {
          param_1->search_text_buffer[0] = '\0';
        }
        cVar1 = param_1->hotkeys[0];
        if (cVar1 == '\0') break;
        pCVar6 = param_1;
        for (iVar7 = 0; (cVar1 != '\0' && (iVar7 < (param_1->base).item_count)); iVar7 = iVar7 + 1)
        {
          iVar4 = toupper((uint)(byte)pCVar6->hotkeys[0]);
          if (iVar4 == iVar2) {
            param_1->current_index = iVar7;
            shape_edittool_cpp_CPickList_validateScrollBounds_FUN_00475db0(param_1);
            iVar4 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00476040
                              (param_1,param_1->current_index);
            if (iVar4 != 0) goto LAB_0047509f;
          }
          cVar1 = pCVar6->hotkeys[1];
          pCVar6 = (CPickList *)((int)&(pCVar6->base).item_count + 1);
        }
      }
      cStack_14 = (char)iVar2;
      if (((&DAT_005c168c)[(byte)(cStack_14 + 1)] & 0xe0) != 0) {
        uVar5 = 0xffffffff;
        pcVar3 = str1;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + (uint)bVar8 * -2 + 1;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        if (uVar5 - 1 < 99) {
          param_1->search_text_buffer[uVar5 - 1] = cStack_14;
          param_1->search_text_buffer[uVar5] = '\0';
        }
      }
    } while (param_1->search_text_buffer[0] == '\0');
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080
                       (&param_1->base,param_1->current_index);
    iVar2 = _stricmp(str1,pcVar3);
    if (iVar2 < 1) {
      param_1->current_index = 0;
    }
    while (param_1->current_index < (param_1->base).item_count) {
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080
                         (&param_1->base,param_1->current_index);
      iVar2 = _stricmp(str1,pcVar3);
      if (iVar2 < 1) break;
      param_1->current_index = param_1->current_index + 1;
    }
  } while( true );
}
