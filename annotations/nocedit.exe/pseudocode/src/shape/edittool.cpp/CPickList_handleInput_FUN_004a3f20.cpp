// Name: shape_edittool.cpp_CPickList_handleInput_FUN_004a3f20
// Address: 004a3f20
// Address Range: [[004a3f20, 004a433a]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CPickList_handleInput_FUN_004a3f20(CPickList * this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CPickList_handleInput_FUN_004a3f20(CPickList *this_ptr)

{
  char *str1;
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  uint uStack00000010;
  uint uStack00000054;
  uint uStack0000007c;
  uint uStack000000bc;
  uint uStack000000d0;
  uint uStack000000e4;
  uint uStack000000f8;
  uint uStack0000010c;
  uint uStack00000120;
  uint uStack00000134;
  
  bVar8 = 0;
  iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1c);
  if (iVar3 != 0) {
    if (this_ptr->selection_state == 1) {
      return -1;
    }
    iVar3 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_004a54e0
                      (this_ptr,this_ptr->current_index);
    if (iVar3 != 0) {
      this_ptr->confirmed_flag = 1;
      return 0;
    }
  }
  iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
  if (iVar3 != 0) {
    return -1;
  }
  uStack00000010 = 0x4a3f94;
  iVar3 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
  if (iVar3 != 0) {
    iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x52);
    if (iVar3 != 0) {
      shape_edittool_cpp_CStrList_copyToClipboard_FUN_004a3270(&this_ptr->base_strlist);
    }
    iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2e);
    if (iVar3 != 0) {
      uStack00000054 = 0x4a3fd2;
      shape_edittool_cpp_CStrList_copyToClipboard_FUN_004a3270(&this_ptr->base_strlist);
    }
  }
  iVar6 = 0;
  uStack00000054 = 0x4a3fe3;
  iVar3 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
  if ((iVar3 == 0) && (iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xf), iVar3 != 0)) {
    iVar6 = 1;
  }
  uStack0000007c = 0x4a3ffa;
  iVar3 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
  if ((iVar3 != 0) && (iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xf), iVar3 != 0)) {
    iVar6 = -1;
  }
  iVar3 = 0;
  do {
    iVar7 = this_ptr->selection_state + iVar6;
    this_ptr->selection_state = iVar7;
    if (1 < iVar7) {
      this_ptr->selection_state = -1;
      goto LAB_004a402a;
    }
    if (iVar7 < -1) {
      this_ptr->selection_state = 1;
LAB_004a4167:
      if (this_ptr->cancel_button_text[0] != '\0') {
        if (this_ptr->selection_state != -1) {
          return 0;
        }
        goto LAB_004a402a;
      }
    }
    else if ((iVar7 != 0) || (this_ptr->ok_button_text[0] != '\0')) {
      if (this_ptr->selection_state == 1) goto LAB_004a4167;
      if (this_ptr->selection_state != -1) {
        return 0;
      }
      goto LAB_004a402a;
    }
    iVar3 = iVar3 + 1;
    if (9 < iVar3) {
      if (this_ptr->selection_state != -1) {
        return 0;
      }
LAB_004a402a:
      str1 = this_ptr->search_text_buffer;
      do {
        do {
          do {
            bVar2 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
            if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) == 0) {
              iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x48);
              if (iVar3 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index + -1;
              }
              uStack000000bc = 0x4a41ed;
              iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x50);
              if (iVar3 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index + 1;
              }
              uStack000000d0 = 0x4a4215;
              iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x47);
              if (iVar3 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = 0;
              }
              uStack000000e4 = 0x4a423a;
              iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4f);
              if (iVar3 != 0) {
                iVar3 = (this_ptr->base_strlist).item_count;
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = iVar3;
              }
              uStack000000f8 = 0x4a425d;
              iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x49);
              if (iVar3 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index - this_ptr->page_size;
                this_ptr->scroll_top = this_ptr->scroll_top - this_ptr->page_size;
              }
              uStack0000010c = 0x4a42a0;
              iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x51);
              if (iVar3 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index + this_ptr->page_size;
                this_ptr->scroll_top = this_ptr->scroll_top + this_ptr->page_size;
              }
              uStack00000120 = 0x4a42e3;
              iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4b);
              if (iVar3 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index - this_ptr->vertical_page_size;
              }
              uStack00000134 = 0x4a4312;
              iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4d);
              if (iVar3 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index + this_ptr->vertical_page_size;
              }
              return 0;
            }
            iVar3 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
            if (iVar3 == 8) {
              this_ptr->search_text_buffer[0] = '\0';
            }
          } while (this_ptr->hotkey_capacity != 0);
          if ((g_CharacterClassificationTable[(byte)((char)iVar3 + 1)] & 0xe0U) != 0) {
            uVar5 = 0xffffffff;
            pcVar4 = str1;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar4 + (uint)bVar8 * -2 + 1;
            } while (cVar1 != '\0');
            uVar5 = ~uVar5;
            if (uVar5 - 1 < 99) {
              this_ptr->cancel_button_text[uVar5 + 99] = (char)iVar3;
              this_ptr->search_text_buffer[uVar5] = '\0';
            }
          }
        } while (this_ptr->search_text_buffer[0] == '\0');
        pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                           (&this_ptr->base_strlist,this_ptr->current_index);
        iVar3 = crt_string_c_stricmp_FUN_005fe7f0(str1,pcVar4);
        if (iVar3 < 1) {
          this_ptr->current_index = 0;
        }
        while (this_ptr->current_index < (this_ptr->base_strlist).item_count) {
          pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                             (&this_ptr->base_strlist,this_ptr->current_index);
          iVar3 = crt_string_c_stricmp_FUN_005fe7f0(str1,pcVar4);
          if (iVar3 < 1) break;
          this_ptr->current_index = this_ptr->current_index + 1;
        }
      } while( true );
    }
  } while( true );
}
