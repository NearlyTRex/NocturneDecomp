// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_process_FUN_00416790
// Address: 00416790
// Address Range: [[00416790, 00416ce8]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_process_FUN_00416790(CAudioRecPuzzle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_process_FUN_00416790(CAudioRecPuzzle *this_ptr)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  CAudioRecPuzzle *pCVar9;
  
  core_event_cpp_CEventList_executeCommands_FUN_004a1b70
            (0x01C51D80,"AudioRecPuzzleActive");
  if (this_ptr->transport_state == 100) {
    this_ptr->transport_state = 1;
    uVar8 = sound_sndmain_cpp_startSfx_FUN_00572d20("REC-FOWARD-SWITCH.WAV");
    this_ptr->switch_sfx = uVar8;
  }
  if ((this_ptr->power_on == 0) || (this_ptr->solved == 1)) {
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,"ExitFromPuzzle");
    (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x200);
    _DAT_01c43544 = 0;
    engine_alphabit_cpp_FUN_00415be0(this_ptr,0);
  }
  uVar3 = _DAT_01c43540;
  iVar7 = _DAT_01c4353c;
  if (this_ptr->mouse_button != 0) {
    if (this_ptr->click_handled == 0) {
      this_ptr->click_handled = 1;
      iVar7 = (**(code **)((int)this_ptr->vtable + 0x2c))(this_ptr,iVar7,uVar3);
      if (iVar7 == 0) {
        DAT_007c397c = 0xffffffff;
        return;
      }
      if (this_ptr->buttons[this_ptr->selected_button].enabled == 1) {
        if (this_ptr->selected_button == 0) {
          sound_sndmain_cpp_startSfx_FUN_00572d20("rec-on-switch.wav");
          this_ptr->power_on = 0;
        }
        else {
          this_ptr->power_on = 1;
        }
      }
    }
    else {
      iVar7 = this_ptr->buttons[this_ptr->selected_button].enabled;
      if (iVar7 == 2) {
        if (DAT_007c397c == -1) {
          DAT_007c397c = _DAT_01c4353c;
        }
        if (_DAT_005d3fc2 < ABS((double)(_DAT_01c4353c - DAT_007c397c))) {
          (**(code **)((int)this_ptr->vtable + 0x34))(this_ptr);
          iVar7 = 0;
          do {
            iVar6 = iVar7 + 1;
            (**(code **)((int)this_ptr->vtable + 0x38))(this_ptr,iVar7);
            iVar7 = iVar6;
          } while (iVar6 < 3);
        }
      }
      else if (iVar7 == 3) {
        iVar7 = 5;
LAB_00416963:
        do {
          iVar6 = (**(code **)((int)this_ptr->vtable + 0x54))(this_ptr,iVar7);
          if (iVar6 != 0) {
            this_ptr->previous_speed_setting = this_ptr->speed_setting;
            this_ptr->speed_setting = iVar7 + -5;
            sound_sndmain_cpp_startSfx_FUN_00572d20("rec-forward-switch.wav");
            if (this_ptr->previous_speed_setting != this_ptr->speed_setting) {
              this_ptr->transport_state = 100;
            }
            if ((3 < this_ptr->speed_setting) || (this_ptr->speed_setting < 1)) {
              if (this_ptr->speed_setting == 4) {
                this_ptr->cursor_index = 2;
              }
              else {
                this_ptr->cursor_index = 3;
              }
              iVar7 = iVar7 + 1;
              if (9 < iVar7) break;
              goto LAB_00416963;
            }
            this_ptr->cursor_index = 1;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 10);
      }
    }
LAB_00416890:
    pCVar9 = this_ptr;
    for (iVar7 = 0; iVar7 < this_ptr->button_count + 1; iVar7 = iVar7 + 1) {
      pCVar9->buttons[0].visible = 0;
      pCVar9 = (CAudioRecPuzzle *)&pCVar9->click_handled;
    }
    this_ptr->buttons[this_ptr->speed_setting + 5].visible = 1;
    this_ptr->buttons[this_ptr->transport_state + 2].visible = 1;
    if ((this_ptr->transport_state == 1) || (this_ptr->transport_state == 100)) {
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
    iVar7 = 0;
    pCVar9 = this_ptr;
    do {
      iVar6 = 0;
      iVar5 = (int)&this_ptr->buttons[9].height + iVar7;
      do {
        if (iVar6 == pCVar9->knob_positions[0]) {
          *(uint *)(iVar5 + 0x88) = 1;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < 5);
      iVar7 = iVar7 + 0xdc;
      pCVar9 = (CAudioRecPuzzle *)&pCVar9->background;
    } while (iVar7 != 0x294);
    if (this_ptr->transport_state == 1) {
      sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->clip_sfx[0]);
      sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->clip_sfx[1]);
      sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->clip_sfx[2]);
    }
    if ((this_ptr->transport_state != 1) && (this_ptr->transport_state != 100)) {
      iVar7 = this_ptr->speed_setting;
      iVar6 = this_ptr->knob_positions[1];
      iVar5 = this_ptr->transport_state;
      iVar1 = this_ptr->knob_positions[2];
      iVar2 = this_ptr->knob_positions[0];
      if ((this_ptr->playback_started == 0) &&
         (iVar4 = sound_sndmain_cpp_FUN_005735a0(this_ptr->clip_sfx[0]), iVar4 == 0)) {
        (**(code **)((int)this_ptr->vtable + 0x58))(this_ptr,iVar2,iVar6,iVar1,iVar7,iVar5);
        this_ptr->playback_started = 1;
        return;
      }
      if ((this_ptr->playback_started != 0) &&
         (iVar4 = sound_sndmain_cpp_FUN_005735a0(this_ptr->clip_sfx[0]), iVar4 == 0)) {
        this_ptr->transport_state = 100;
        this_ptr->playback_started = 0;
        if (((iVar2 == this_ptr->solution[0]) &&
            (((iVar6 == this_ptr->solution[1] && (iVar1 == this_ptr->solution[2])) &&
             (iVar7 == this_ptr->solution[3])))) && (iVar5 == this_ptr->solution[4])) {
          core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                    (0x01C51D80,"AudioPuzzleSuccess");
          this_ptr->solved = 1;
          return;
        }
      }
    }
    return;
  }
  if (this_ptr->previous_mouse_button != 0) {
    this_ptr->selected_button = -1;
    DAT_007c397c = -1;
  }
  this_ptr->cursor_index = 0;
  uVar8 = 0;
  pCVar9 = this_ptr;
LAB_004169fc:
  if (this_ptr->button_count + 1 <= (int)uVar8) goto LAB_00416890;
  if (pCVar9->buttons[0].visible != 1) {
LAB_00416a11:
    uVar8 = uVar8 + 1;
    pCVar9 = (CAudioRecPuzzle *)&pCVar9->click_handled;
    goto LAB_004169fc;
  }
  iVar7 = pCVar9->buttons[0].enabled;
  if ((iVar7 != 2) && (iVar7 != 3)) {
    uVar8 = uVar8 + 1;
    pCVar9 = (CAudioRecPuzzle *)&pCVar9->click_handled;
    goto LAB_004169fc;
  }
  iVar7 = (**(code **)((int)this_ptr->vtable + 0x54))(this_ptr,uVar8);
  if (iVar7 == 0) goto LAB_00416a11;
  if (uVar8 < 0xc) {
    if (3 < uVar8) {
      if (4 < uVar8) {
        if (uVar8 < 6) goto LAB_00416a53;
        if (uVar8 != 9) {
          this_ptr->cursor_index = 1;
          uVar8 = uVar8 + 1;
          pCVar9 = (CAudioRecPuzzle *)&pCVar9->click_handled;
          goto LAB_004169fc;
        }
      }
LAB_00416a6b:
      this_ptr->cursor_index = 2;
      uVar8 = uVar8 + 1;
      pCVar9 = (CAudioRecPuzzle *)&pCVar9->click_handled;
      goto LAB_004169fc;
    }
    if (uVar8 != 2) {
LAB_00416a74:
      this_ptr->cursor_index = 1;
      uVar8 = uVar8 + 1;
      pCVar9 = (CAudioRecPuzzle *)&pCVar9->click_handled;
      goto LAB_004169fc;
    }
  }
  else if (0xc < uVar8) {
    if (0x14 < uVar8) {
      if (uVar8 < 0x16) goto LAB_00416a6b;
      if (uVar8 < 0x17) goto LAB_00416a53;
      if (uVar8 != 0x1a) {
        this_ptr->cursor_index = 1;
        uVar8 = uVar8 + 1;
        pCVar9 = (CAudioRecPuzzle *)&pCVar9->click_handled;
        goto LAB_004169fc;
      }
      goto LAB_00416a6b;
    }
    if (uVar8 < 0x10) goto LAB_00416a74;
    if (uVar8 < 0x11) goto LAB_00416a6b;
    if (uVar8 != 0x11) {
      this_ptr->cursor_index = 1;
      uVar8 = uVar8 + 1;
      pCVar9 = (CAudioRecPuzzle *)&pCVar9->click_handled;
      goto LAB_004169fc;
    }
  }
LAB_00416a53:
  this_ptr->cursor_index = 3;
  uVar8 = uVar8 + 1;
  pCVar9 = (CAudioRecPuzzle *)&pCVar9->click_handled;
  goto LAB_004169fc;
}
