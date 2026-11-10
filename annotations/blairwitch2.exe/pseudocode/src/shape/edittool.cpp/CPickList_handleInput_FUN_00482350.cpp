// Name: shape_edittool.cpp_CPickList_handleInput_FUN_00482350
// Address: 00482350
// Address Range: [[00482350, 0048276a]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CPickList_handleInput_FUN_00482350(CPickList *this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CPickList_handleInput_FUN_00482350(CPickList *this_ptr)

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
  iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0x1c);
  if (iVar2 != 0) {
    if (this_ptr->selection_state == 1) {
      return -1;
    }
    iVar2 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00483aa0
                      (this_ptr,this_ptr->current_index);
    if (iVar2 != 0) {
      this_ptr->confirmed_flag = 1;
      return 0;
    }
  }
  iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,1);
  if (iVar2 != 0) {
    return -1;
  }
  iVar2 = (*(code *)**(uint **)0x01D02F84)(0x01D02F84,0x1d);
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0x52);
    if (iVar2 != 0) {
      shape_edittool_cpp_CStrList_copyToClipboard_FUN_00481540(&this_ptr->base);
    }
    iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0x2e);
    if (iVar2 != 0) {
      shape_edittool_cpp_CStrList_copyToClipboard_FUN_00481540(&this_ptr->base);
    }
  }
  iVar5 = 0;
  iVar2 = (*(code *)**(uint **)0x01D02F84)(0x01D02F84,0x2a);
  if ((iVar2 == 0) &&
     (iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0xf), iVar2 != 0)) {
    iVar5 = 1;
  }
  iVar2 = (*(code *)**(uint **)0x01D02F84)(0x01D02F84,0x2a);
  if ((iVar2 != 0) &&
     (iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0xf), iVar2 != 0)) {
    iVar5 = -1;
  }
  iVar2 = 0;
  do {
    iVar6 = this_ptr->selection_state + iVar5;
    this_ptr->selection_state = iVar6;
    if (1 < iVar6) {
      this_ptr->selection_state = -1;
      goto LAB_0048245a;
    }
    if (iVar6 < -1) {
      this_ptr->selection_state = 1;
LAB_00482597:
      if (this_ptr->cancel_button_text[0] != '\0') {
        if (this_ptr->selection_state != -1) {
          return 0;
        }
        goto LAB_0048245a;
      }
    }
    else if ((iVar6 != 0) || (this_ptr->ok_button_text[0] != '\0')) {
      if (this_ptr->selection_state == 1) goto LAB_00482597;
      if (this_ptr->selection_state != -1) {
        return 0;
      }
      goto LAB_0048245a;
    }
    iVar2 = iVar2 + 1;
    if (9 < iVar2) {
      if (this_ptr->selection_state != -1) {
        return 0;
      }
LAB_0048245a:
      str1 = this_ptr->search_text_buffer;
      do {
        do {
          do {
            iVar2 = wincore_winrun_cpp_wasKeyPressed_FUN_0058eb40();
            if (iVar2 == 0) {
              iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0x48);
              if (iVar2 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index + -1;
              }
              iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0x50);
              if (iVar2 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index + 1;
              }
              iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0x47);
              if (iVar2 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = 0;
              }
              iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0x4f);
              if (iVar2 != 0) {
                iVar2 = (this_ptr->base).item_count;
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = iVar2;
              }
              iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0x49);
              if (iVar2 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index - this_ptr->page_size;
                this_ptr->scroll_top = this_ptr->scroll_top - this_ptr->page_size;
              }
              iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0x51);
              if (iVar2 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index + this_ptr->page_size;
                this_ptr->scroll_top = this_ptr->scroll_top + this_ptr->page_size;
              }
              iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0x4b);
              if (iVar2 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index - this_ptr->rows_per_column;
              }
              iVar2 = (**(code **)(*(int *)0x01D02F84 + 4))(0x01D02F84,0x4d);
              if (iVar2 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index + this_ptr->rows_per_column;
              }
              return 0;
            }
            iVar2 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004dfea0(0x01D02F84);
            if (iVar2 == 8) {
              this_ptr->search_text_buffer[0] = '\0';
            }
          } while (this_ptr->hotkey_capacity != 0);
          if (((&DAT_0061ed94)[(byte)((char)iVar2 + 1)] & 0xe0) != 0) {
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
        pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00481240
                           (&this_ptr->base,this_ptr->current_index);
        iVar2 = _stricmp(str1,pcVar3);
        if (iVar2 < 1) {
          this_ptr->current_index = 0;
        }
        while (this_ptr->current_index < (this_ptr->base).item_count) {
          pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00481240
                             (&this_ptr->base,this_ptr->current_index);
          iVar2 = _stricmp(str1,pcVar3);
          if (iVar2 < 1) break;
          this_ptr->current_index = this_ptr->current_index + 1;
        }
      } while( true );
    }
  } while( true );
}
