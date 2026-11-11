// Name: unkaddr_0059aa80.cpp_CAudioRecPuzzle_process_FUN_0059b5a0
// Address: 0059b5a0
// Address Range: [[0059b5a0, 0059b8f3]]
// Convention: __cdecl
// Signature: void __cdecl unkaddr_0059aa80_cpp_CAudioRecPuzzle_process_FUN_0059b5a0(CAudioRecPuzzle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl unkaddr_0059aa80_cpp_CAudioRecPuzzle_process_FUN_0059b5a0(CAudioRecPuzzle *this_ptr)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CAudioRecPuzzle *pCVar5;
  uint uVar6;
  
  if (this_ptr->power_on == 0) {
    core_event_cpp_CEventList_executeCommands_FUN_004894f0
              (0x01C38BC0,"?ExitFromPuzzle" + 1);
    unkaddr_0059aa80_cpp_FUN_0059ab70(this_ptr,0);
    (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x200);
  }
  uVar1 = _DAT_01c2a380;
  iVar2 = _DAT_01c2a37c;
  if (this_ptr->mouse_button == 0) {
    if (this_ptr->previous_mouse_button != 0) {
      this_ptr->selected_button = -1;
      _DAT_026677e4 = -1;
    }
    this_ptr->cursor_index = 0;
    uVar6 = 0;
    pCVar5 = this_ptr;
    if (0 < this_ptr->button_count) {
      do {
        if ((pCVar5->buttons[0].visible == 1) &&
           (((iVar2 = pCVar5->buttons[0].enabled, iVar2 == 2 || (iVar2 == 3)) &&
            (iVar2 = (**(code **)((int)this_ptr->vtable + 0x54))(this_ptr,uVar6), iVar2 != 0)))) {
          if (uVar6 < 0xc) {
            if (3 < uVar6) {
              if (4 < uVar6) {
                if (uVar6 < 6) goto LAB_0059b866;
                if (uVar6 != 9) {
                  this_ptr->cursor_index = 1;
                  goto LAB_0059b86d;
                }
              }
              goto LAB_0059b885;
            }
            if (uVar6 == 2) goto LAB_0059b866;
LAB_0059b88e:
            this_ptr->cursor_index = 1;
          }
          else {
            if (0xc < uVar6) {
              if (0x14 < uVar6) {
                if (0x15 < uVar6) {
                  if (uVar6 < 0x17) goto LAB_0059b866;
                  if (uVar6 != 0x1a) {
                    this_ptr->cursor_index = 1;
                    goto LAB_0059b86d;
                  }
                }
LAB_0059b885:
                this_ptr->cursor_index = 2;
                goto LAB_0059b86d;
              }
              if (uVar6 < 0x10) goto LAB_0059b88e;
              if (uVar6 < 0x11) goto LAB_0059b885;
              if (uVar6 != 0x11) {
                this_ptr->cursor_index = 1;
                goto LAB_0059b86d;
              }
            }
LAB_0059b866:
            this_ptr->cursor_index = 3;
          }
        }
LAB_0059b86d:
        uVar6 = uVar6 + 1;
        pCVar5 = (CAudioRecPuzzle *)&pCVar5->click_handled;
      } while ((int)uVar6 < this_ptr->button_count);
    }
  }
  else if (this_ptr->click_handled == 0) {
    this_ptr->click_handled = 1;
    iVar2 = (**(code **)((int)this_ptr->vtable + 0x2c))(this_ptr,iVar2,uVar1);
    if (iVar2 == 0) {
      _DAT_026677e4 = 0xffffffff;
      return;
    }
    if (this_ptr->buttons[this_ptr->selected_button].enabled == 1) {
      if (this_ptr->selected_button == 0) {
        this_ptr->power_on = 0;
      }
      else {
        this_ptr->power_on = 1;
      }
    }
  }
  else {
    iVar2 = this_ptr->buttons[this_ptr->selected_button].enabled;
    if (iVar2 == 2) {
      if (_DAT_026677e4 == -1) {
        _DAT_026677e4 = _DAT_01c2a37c;
      }
      if (_DAT_005ef59c < ABS((double)(_DAT_01c2a37c - _DAT_026677e4))) {
        (**(code **)((int)this_ptr->vtable + 0x34))(this_ptr);
        iVar2 = 0;
        do {
          iVar4 = iVar2 + 1;
          (**(code **)((int)this_ptr->vtable + 0x38))(this_ptr,iVar2);
          iVar2 = iVar4;
        } while (iVar4 < 3);
      }
    }
    else if (iVar2 == 3) {
      iVar2 = 5;
      do {
        while (iVar4 = (**(code **)((int)this_ptr->vtable + 0x54))(this_ptr,iVar2), iVar4 == 0) {
LAB_0059b7d2:
          iVar2 = iVar2 + 1;
          if (9 < iVar2) goto LAB_0059b640;
        }
        iVar4 = iVar2 + -5;
        this_ptr->speed_setting = iVar4;
        if ((iVar4 < 4) && (0 < iVar4)) {
          this_ptr->cursor_index = 1;
          goto LAB_0059b7d2;
        }
        if (this_ptr->speed_setting == 4) {
          this_ptr->cursor_index = 2;
        }
        else {
          this_ptr->cursor_index = 3;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 10);
    }
  }
LAB_0059b640:
  iVar2 = 0;
  pCVar5 = this_ptr;
  if (0 < this_ptr->button_count) {
    do {
      pCVar5->buttons[0].visible = 0;
      iVar2 = iVar2 + 1;
      pCVar5 = (CAudioRecPuzzle *)&pCVar5->click_handled;
    } while (iVar2 < this_ptr->button_count);
  }
  this_ptr->buttons[this_ptr->speed_setting + 5].visible = 1;
  this_ptr->buttons[this_ptr->transport_state + 2].visible = 1;
  if (this_ptr->transport_state == 1) {
    this_ptr->buttons[0xb].visible = 1;
  }
  else {
    this_ptr->buttons[10].visible = 1;
  }
  if (this_ptr->power_on == 0) {
    this_ptr->buttons[1].visible = 1;
  }
  else {
    this_ptr->buttons[0].visible = 1;
  }
  iVar2 = 0;
  pCVar5 = this_ptr;
  do {
    iVar4 = (int)&this_ptr->buttons[10].bitmap.width + iVar2;
    iVar3 = 0;
    do {
      if (iVar3 == pCVar5->knob_positions[0]) {
        *(uint *)(iVar4 + 0x74) = 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x2c;
    } while (iVar3 < 5);
    iVar2 = iVar2 + 0xdc;
    pCVar5 = (CAudioRecPuzzle *)&pCVar5->background;
  } while (iVar2 != 0x294);
  return;
}
