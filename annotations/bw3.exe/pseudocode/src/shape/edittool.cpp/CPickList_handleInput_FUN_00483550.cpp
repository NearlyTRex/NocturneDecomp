// Name: shape_edittool.cpp_CPickList_handleInput_FUN_00483550
// Address: 00483550
// Address Range: [[00483550, 0048396a]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CPickList_handleInput_FUN_00483550(CPickList *this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CPickList_handleInput_FUN_00483550(CPickList *this_ptr)

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
  iVar2 = (*0x01D70A78->vtable->getAndClearKeyState)(0x01D70A78,DIK_RETURN);
  if (iVar2 != 0) {
    if (this_ptr->selection_state == 1) {
      return -1;
    }
    iVar2 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00484ca0
                      (this_ptr,this_ptr->current_index);
    if (iVar2 != 0) {
      this_ptr->confirmed_flag = 1;
      return 0;
    }
  }
  iVar2 = (*0x01D70A78->vtable->getAndClearKeyState)(0x01D70A78,DIK_ESCAPE);
  if (iVar2 != 0) {
    return -1;
  }
  iVar2 = (*0x01D70A78->vtable->getKeyState)(0x01D70A78,DIK_LCONTROL);
  if (iVar2 != 0) {
    iVar2 = (*0x01D70A78->vtable->getAndClearKeyState)(0x01D70A78,DIK_NUMPAD0);
    if (iVar2 != 0) {
      shape_edittool_cpp_CStrList_copyToClipboard_FUN_00482740(&this_ptr->base);
    }
    iVar2 = (*0x01D70A78->vtable->getAndClearKeyState)(0x01D70A78,DIK_C);
    if (iVar2 != 0) {
      shape_edittool_cpp_CStrList_copyToClipboard_FUN_00482740(&this_ptr->base);
    }
  }
  iVar5 = 0;
  iVar2 = (*0x01D70A78->vtable->getKeyState)(0x01D70A78,DIK_LSHIFT);
  if ((iVar2 == 0) &&
     (iVar2 = (*0x01D70A78->vtable->getAndClearKeyState)(0x01D70A78,DIK_TAB), iVar2 != 0)) {
    iVar5 = 1;
  }
  iVar2 = (*0x01D70A78->vtable->getKeyState)(0x01D70A78,DIK_LSHIFT);
  if ((iVar2 != 0) &&
     (iVar2 = (*0x01D70A78->vtable->getAndClearKeyState)(0x01D70A78,DIK_TAB), iVar2 != 0)) {
    iVar5 = -1;
  }
  iVar2 = 0;
  do {
    iVar6 = this_ptr->selection_state + iVar5;
    this_ptr->selection_state = iVar6;
    if (1 < iVar6) {
      this_ptr->selection_state = -1;
      goto LAB_0048365a;
    }
    if (iVar6 < -1) {
      this_ptr->selection_state = 1;
LAB_00483797:
      if (this_ptr->cancel_button_text[0] != '\0') {
        if (this_ptr->selection_state != -1) {
          return 0;
        }
        goto LAB_0048365a;
      }
    }
    else if ((iVar6 != 0) || (this_ptr->ok_button_text[0] != '\0')) {
      if (this_ptr->selection_state == 1) goto LAB_00483797;
      if (this_ptr->selection_state != -1) {
        return 0;
      }
      goto LAB_0048365a;
    }
    iVar2 = iVar2 + 1;
    if (9 < iVar2) {
      if (this_ptr->selection_state != -1) {
        return 0;
      }
LAB_0048365a:
      str1 = this_ptr->search_text_buffer;
      do {
        do {
          do {
            iVar2 = wincore_winrun_cpp_wasKeyPressed_FUN_00580800();
            if (iVar2 == 0) {
              iVar2 = (*0x01D70A78->vtable->getAndClearKeyState)(0x01D70A78,DIK_NUMPAD8);
              if (iVar2 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index + -1;
              }
              iVar2 = (*0x01D70A78->vtable->getAndClearKeyState)(0x01D70A78,DIK_NUMPAD2);
              if (iVar2 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index + 1;
              }
              iVar2 = (*0x01D70A78->vtable->getAndClearKeyState)(0x01D70A78,DIK_NUMPAD7);
              if (iVar2 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = 0;
              }
              iVar2 = (*0x01D70A78->vtable->getAndClearKeyState)(0x01D70A78,DIK_NUMPAD1);
              if (iVar2 != 0) {
                iVar2 = (this_ptr->base).item_count;
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = iVar2;
              }
              iVar2 = (*0x01D70A78->vtable->getAndClearKeyState)(0x01D70A78,DIK_NUMPAD9);
              if (iVar2 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index - this_ptr->page_size;
                this_ptr->scroll_top = this_ptr->scroll_top - this_ptr->page_size;
              }
              iVar2 = (*0x01D70A78->vtable->getAndClearKeyState)(0x01D70A78,DIK_NUMPAD3);
              if (iVar2 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index + this_ptr->page_size;
                this_ptr->scroll_top = this_ptr->scroll_top + this_ptr->page_size;
              }
              iVar2 = (*0x01D70A78->vtable->getAndClearKeyState)(0x01D70A78,DIK_NUMPAD4);
              if (iVar2 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index - this_ptr->rows_per_column;
              }
              iVar2 = (*0x01D70A78->vtable->getAndClearKeyState)(0x01D70A78,DIK_NUMPAD6);
              if (iVar2 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index + this_ptr->rows_per_column;
              }
              return 0;
            }
            iVar2 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004df590(0x01D70A78);
            if (iVar2 == 8) {
              this_ptr->search_text_buffer[0] = '\0';
            }
          } while (this_ptr->hotkey_capacity != 0);
          if (((&DAT_006074b8)[(byte)((char)iVar2 + 1)] & 0xe0) != 0) {
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
        pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00482440
                           (&this_ptr->base,this_ptr->current_index);
        iVar2 = _stricmp(str1,pcVar3);
        if (iVar2 < 1) {
          this_ptr->current_index = 0;
        }
        while (this_ptr->current_index < (this_ptr->base).item_count) {
          pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00482440
                             (&this_ptr->base,this_ptr->current_index);
          iVar2 = _stricmp(str1,pcVar3);
          if (iVar2 < 1) break;
          this_ptr->current_index = this_ptr->current_index + 1;
        }
      } while( true );
    }
  } while( true );
}
