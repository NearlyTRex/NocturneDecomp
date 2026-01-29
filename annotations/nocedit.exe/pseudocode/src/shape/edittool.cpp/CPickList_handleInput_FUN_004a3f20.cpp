// Name: shape_edittool.cpp_CPickList_handleInput_FUN_004a3f20
// Address: 004a3f20
// Address Range: [[004a3f20, 004a433a]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CPickList_handleInput_FUN_004a3f20(CPickList *this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CPickList_handleInput_FUN_004a3f20(CPickList *this_ptr)

{
  char *str1;
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  
  bVar7 = 0;
  iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1c);
  if (iVar2 != 0) {
    if (this_ptr->selection_state == 1) {
      return -1;
    }
    iVar2 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_004a54e0
                      (this_ptr,this_ptr->current_index);
    if (iVar2 != 0) {
      this_ptr->confirmed_flag = 1;
      return 0;
    }
  }
  iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
  if (iVar2 != 0) {
    return -1;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar2 != 0) {
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x52);
    if (iVar2 != 0) {
      shape_edittool_cpp_CStrList_copyToClipboard_FUN_004a3270(&this_ptr->base);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2e);
    if (iVar2 != 0) {
      shape_edittool_cpp_CStrList_copyToClipboard_FUN_004a3270(&this_ptr->base);
    }
  }
  iVar5 = 0;
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
  if ((iVar2 == 0) &&
     (iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xf), iVar2 != 0)) {
    iVar5 = 1;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
  if ((iVar2 != 0) &&
     (iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xf), iVar2 != 0)) {
    iVar5 = -1;
  }
  iVar2 = 0;
  do {
    iVar6 = this_ptr->selection_state + iVar5;
    this_ptr->selection_state = iVar6;
    if (1 < iVar6) {
      this_ptr->selection_state = -1;
      goto LAB_004a402a;
    }
    if (iVar6 < -1) {
      this_ptr->selection_state = 1;
LAB_004a4167:
      if (this_ptr->cancel_button_text[0] != '\0') {
        if (this_ptr->selection_state != -1) {
          return 0;
        }
        goto LAB_004a402a;
      }
    }
    else if ((iVar6 != 0) || (this_ptr->ok_button_text[0] != '\0')) {
      if (this_ptr->selection_state == 1) goto LAB_004a4167;
      if (this_ptr->selection_state != -1) {
        return 0;
      }
      goto LAB_004a402a;
    }
    iVar2 = iVar2 + 1;
    if (9 < iVar2) {
      if (this_ptr->selection_state != -1) {
        return 0;
      }
LAB_004a402a:
      str1 = this_ptr->search_text_buffer;
      do {
        do {
          do {
            iVar2 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
            if (iVar2 == 0) {
              iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x48);
              if (iVar2 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index + -1;
              }
              iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x50);
              if (iVar2 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index + 1;
              }
              iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x47);
              if (iVar2 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = 0;
              }
              iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4f);
              if (iVar2 != 0) {
                iVar2 = (this_ptr->base).item_count;
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = iVar2;
              }
              iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x49);
              if (iVar2 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index - this_ptr->page_size;
                this_ptr->scroll_top = this_ptr->scroll_top - this_ptr->page_size;
              }
              iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x51);
              if (iVar2 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index + this_ptr->page_size;
                this_ptr->scroll_top = this_ptr->scroll_top + this_ptr->page_size;
              }
              iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4b);
              if (iVar2 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index - this_ptr->vertical_page_size;
              }
              iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4d);
              if (iVar2 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index + this_ptr->vertical_page_size;
              }
              return 0;
            }
            iVar2 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
            if (iVar2 == 8) {
              this_ptr->search_text_buffer[0] = '\0';
            }
          } while (this_ptr->hotkey_capacity != 0);
          if ((g_CharacterClassificationTable[(byte)((char)iVar2 + 1)] & 0xe0U) != 0) {
            uVar4 = 0xffffffff;
            pcVar3 = str1;
            do {
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + (uint)bVar7 * -2 + 1;
            } while (cVar1 != '\0');
            uVar4 = ~uVar4;
            if (uVar4 - 1 < 99) {
              this_ptr->cancel_button_text[uVar4 + 99] = (char)iVar2;
              this_ptr->search_text_buffer[uVar4] = '\0';
            }
          }
        } while (this_ptr->search_text_buffer[0] == '\0');
        pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                           (&this_ptr->base,this_ptr->current_index);
        iVar2 = stricmp(str1,pcVar3);
        if (iVar2 < 1) {
          this_ptr->current_index = 0;
        }
        while (this_ptr->current_index < (this_ptr->base).item_count) {
          pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                             (&this_ptr->base,this_ptr->current_index);
          iVar2 = stricmp(str1,pcVar3);
          if (iVar2 < 1) break;
          this_ptr->current_index = this_ptr->current_index + 1;
        }
      } while( true );
    }
  } while( true );
}
