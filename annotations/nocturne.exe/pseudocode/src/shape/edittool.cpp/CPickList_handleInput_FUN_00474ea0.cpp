// Name: shape_edittool.cpp_CPickList_handleInput_FUN_00474ea0
// Address: 00474ea0
// Address Range: [[00474ea0, 00475229]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CPickList_handleInput_FUN_00474ea0(CPickList *this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CPickList_handleInput_FUN_00474ea0(CPickList *this_ptr)

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
                        (this_ptr,this_ptr->current_index), iVar2 != 0)) {
LAB_0047509f:
    this_ptr->confirmed_flag = 1;
    return 0;
  }
  iVar2 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_ESCAPE);
  if (iVar2 != 0) {
    return -1;
  }
  iVar2 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LCONTROL);
  if (iVar2 != 0) {
    iVar2 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_NUMPAD0);
    if (iVar2 != 0) {
      shape_edittool_cpp_CStrList_copyToClipboard_FUN_00474380(&this_ptr->base);
    }
    iVar2 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_C);
    if (iVar2 != 0) {
      shape_edittool_cpp_CStrList_copyToClipboard_FUN_00474380(&this_ptr->base);
    }
  }
  str1 = this_ptr->search_text_buffer;
  do {
    do {
      while( true ) {
        iVar2 = wincore_winrun_cpp_wasKeyPressed_FUN_00558b70();
        if (iVar2 == 0) {
          iVar2 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)
                            (g_CKeys_PTR_005bac64,DIK_NUMPAD8);
          if (iVar2 != 0) {
            this_ptr->search_text_buffer[0] = '\0';
            this_ptr->current_index = this_ptr->current_index + -1;
          }
          iVar2 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)
                            (g_CKeys_PTR_005bac64,DIK_NUMPAD2);
          if (iVar2 != 0) {
            this_ptr->search_text_buffer[0] = '\0';
            this_ptr->current_index = this_ptr->current_index + 1;
          }
          iVar2 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)
                            (g_CKeys_PTR_005bac64,DIK_NUMPAD7);
          if (iVar2 != 0) {
            this_ptr->search_text_buffer[0] = '\0';
            this_ptr->current_index = 0;
          }
          iVar2 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)
                            (g_CKeys_PTR_005bac64,DIK_NUMPAD1);
          if (iVar2 != 0) {
            iVar2 = (this_ptr->base).item_count;
            this_ptr->search_text_buffer[0] = '\0';
            this_ptr->current_index = iVar2;
          }
          iVar2 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)
                            (g_CKeys_PTR_005bac64,DIK_NUMPAD9);
          if (iVar2 != 0) {
            this_ptr->search_text_buffer[0] = '\0';
            this_ptr->current_index = this_ptr->current_index - this_ptr->page_size;
            this_ptr->scroll_top = this_ptr->scroll_top - this_ptr->page_size;
          }
          iVar2 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)
                            (g_CKeys_PTR_005bac64,DIK_NUMPAD3);
          if (iVar2 != 0) {
            this_ptr->search_text_buffer[0] = '\0';
            this_ptr->current_index = this_ptr->current_index + this_ptr->page_size;
            this_ptr->scroll_top = this_ptr->scroll_top + this_ptr->page_size;
          }
          iVar2 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)
                            (g_CKeys_PTR_005bac64,DIK_NUMPAD4);
          if (iVar2 != 0) {
            this_ptr->search_text_buffer[0] = '\0';
            this_ptr->current_index = this_ptr->current_index - this_ptr->vertical_page_size;
          }
          iVar2 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)
                            (g_CKeys_PTR_005bac64,DIK_NUMPAD6);
          if (iVar2 != 0) {
            this_ptr->search_text_buffer[0] = '\0';
            this_ptr->current_index = this_ptr->current_index + this_ptr->vertical_page_size;
          }
          return 0;
        }
        iVar2 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004c41d0(g_CKeys_PTR_005bac64);
        if (iVar2 == 8) {
          this_ptr->search_text_buffer[0] = '\0';
        }
        cVar1 = this_ptr->hotkeys[0];
        if (cVar1 == '\0') break;
        pCVar6 = this_ptr;
        for (iVar7 = 0; (cVar1 != '\0' && (iVar7 < (this_ptr->base).item_count)); iVar7 = iVar7 + 1)
        {
          iVar4 = toupper((uint)(byte)pCVar6->hotkeys[0]);
          if (iVar4 == iVar2) {
            this_ptr->current_index = iVar7;
            shape_edittool_cpp_CPickList_validateScrollBounds_FUN_00475db0(this_ptr);
            iVar4 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00476040
                              (this_ptr,this_ptr->current_index);
            if (iVar4 != 0) goto LAB_0047509f;
          }
          cVar1 = pCVar6->hotkeys[1];
          pCVar6 = (CPickList *)((int)&(pCVar6->base).item_count + 1);
        }
      }
      cStack_14 = (char)iVar2;
      if ((g_CharacterClassificationTable[(byte)(cStack_14 + 1)] & 0xe0) != 0) {
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
          this_ptr->search_text_buffer[uVar5 - 1] = cStack_14;
          this_ptr->search_text_buffer[uVar5] = '\0';
        }
      }
    } while (this_ptr->search_text_buffer[0] == '\0');
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080
                       (&this_ptr->base,this_ptr->current_index);
    iVar2 = _stricmp(str1,pcVar3);
    if (iVar2 < 1) {
      this_ptr->current_index = 0;
    }
    while (this_ptr->current_index < (this_ptr->base).item_count) {
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080
                         (&this_ptr->base,this_ptr->current_index);
      iVar2 = _stricmp(str1,pcVar3);
      if (iVar2 < 1) break;
      this_ptr->current_index = this_ptr->current_index + 1;
    }
  } while( true );
}
