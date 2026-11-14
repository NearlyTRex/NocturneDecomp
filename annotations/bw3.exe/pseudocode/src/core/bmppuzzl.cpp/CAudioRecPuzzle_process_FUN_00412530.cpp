// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_process_FUN_00412530
// Address: 00412530
// Address Range: [[00412530, 004129e2]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_process_FUN_00412530(CAudioRecPuzzle *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_process_FUN_00412530(CAudioRecPuzzle *this_ptr,float delta_time)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  CAudioRecPuzzle *pCVar10;
  
  if ((this_ptr->power_on == 0) || (this_ptr->solved == 1)) {
    core_event_cpp_CEventList_executeCommands_FUN_0048c150
              (0x01C6E360,"?ExitFromPuzzle" + 1);
    (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x200);
    _DAT_01c5fae4 = 0;
    core_bmppuzzl_cpp_activatePuzzle_FUN_004119a0(&this_ptr->base,0);
  }
  uVar4 = _DAT_01c5fae0;
  iVar8 = _DAT_01c5fadc;
  if (this_ptr->mouse_button != 0) {
    if (this_ptr->click_handled == 0) {
      pvVar1 = (this_ptr->base).vtable;
      this_ptr->click_handled = 1;
      iVar8 = (**(code **)((int)pvVar1 + 0x2c))(this_ptr,iVar8,uVar4);
      if (iVar8 == 0) {
        DAT_007dffb8 = 0xffffffff;
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
      iVar8 = this_ptr->buttons[this_ptr->selected_button].enabled;
      if (iVar8 == 2) {
        if (DAT_007dffb8 == -1) {
          DAT_007dffb8 = _DAT_01c5fadc;
        }
        if (_DAT_005b67be < ABS((double)(_DAT_01c5fadc - DAT_007dffb8))) {
          (**(code **)((int)(this_ptr->base).vtable + 0x34))(this_ptr);
          iVar8 = 0;
          do {
            iVar7 = iVar8 + 1;
            (**(code **)((int)(this_ptr->base).vtable + 0x38))(this_ptr,iVar8);
            iVar8 = iVar7;
          } while (iVar7 < 3);
        }
      }
      else if (iVar8 == 3) {
        iVar8 = 5;
LAB_0041269c:
        do {
          iVar7 = (**(code **)((int)(this_ptr->base).vtable + 0x54))(this_ptr,iVar8);
          if (iVar7 != 0) {
            this_ptr->previous_speed_setting = this_ptr->speed_setting;
            this_ptr->speed_setting = iVar8 + -5;
            if (this_ptr->previous_speed_setting != this_ptr->speed_setting) {
              this_ptr->transport_state = 1;
            }
            if ((3 < this_ptr->speed_setting) || (this_ptr->speed_setting < 1)) {
              if (this_ptr->speed_setting == 4) {
                this_ptr->cursor_index = 2;
              }
              else {
                this_ptr->cursor_index = 3;
              }
              iVar8 = iVar8 + 1;
              if (9 < iVar8) break;
              goto LAB_0041269c;
            }
            this_ptr->cursor_index = 1;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < 10);
      }
    }
LAB_00412610:
    pCVar10 = this_ptr;
    for (iVar8 = 0; iVar8 < this_ptr->button_count + 1; iVar8 = iVar8 + 1) {
      pCVar10->buttons[0].visible = 0;
      pCVar10 = (CAudioRecPuzzle *)&pCVar10->click_handled;
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
    iVar8 = 0;
    pCVar10 = this_ptr;
    do {
      iVar7 = 0;
      iVar6 = (int)&this_ptr->buttons[10].bitmap.opa + iVar8;
      do {
        if (iVar7 == pCVar10->knob_positions[0]) {
          *(uint *)(iVar6 + 0x7c) = 1;
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0x2c;
      } while (iVar7 < 5);
      iVar8 = iVar8 + 0xdc;
      pCVar10 = (CAudioRecPuzzle *)&pCVar10->background;
    } while (iVar8 != 0x294);
    if (this_ptr->transport_state == 1) {
      sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->clip_sfx[0]);
      sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->clip_sfx[1]);
      sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->clip_sfx[2]);
    }
    if (this_ptr->transport_state != 1) {
      iVar8 = this_ptr->knob_positions[2];
      iVar7 = this_ptr->knob_positions[1];
      iVar6 = this_ptr->transport_state;
      iVar2 = this_ptr->speed_setting;
      iVar3 = this_ptr->knob_positions[0];
      if ((this_ptr->playback_started == 0) &&
         (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->clip_sfx[0]), iVar5 == 0)) {
        (**(code **)((int)(this_ptr->base).vtable + 0x58))(this_ptr,iVar3,iVar7,iVar8,iVar2,iVar6);
        this_ptr->playback_started = 1;
        return;
      }
      if ((this_ptr->playback_started != 0) &&
         (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->clip_sfx[0]), iVar5 == 0)) {
        this_ptr->transport_state = 1;
        this_ptr->playback_started = 0;
        if (((iVar3 == this_ptr->solution[0]) &&
            (((iVar7 == this_ptr->solution[1] && (iVar8 == this_ptr->solution[2])) &&
             (iVar2 == this_ptr->solution[3])))) && (iVar6 == this_ptr->solution[4])) {
          core_event_cpp_CEventList_executeCommands_FUN_0048c150
                    (0x01C6E360,"AudioPuzzleSuccess");
          this_ptr->solved = 1;
          return;
        }
      }
    }
    return;
  }
  if (this_ptr->previous_mouse_button != 0) {
    this_ptr->selected_button = -1;
    DAT_007dffb8 = -1;
  }
  this_ptr->cursor_index = 0;
  uVar9 = 0;
  pCVar10 = this_ptr;
LAB_0041271d:
  if (this_ptr->button_count + 1 <= (int)uVar9) goto LAB_00412610;
  if (pCVar10->buttons[0].visible != 1) {
LAB_0041272f:
    uVar9 = uVar9 + 1;
    pCVar10 = (CAudioRecPuzzle *)&pCVar10->click_handled;
    goto LAB_0041271d;
  }
  iVar8 = pCVar10->buttons[0].enabled;
  if ((iVar8 != 2) && (iVar8 != 3)) {
    uVar9 = uVar9 + 1;
    pCVar10 = (CAudioRecPuzzle *)&pCVar10->click_handled;
    goto LAB_0041271d;
  }
  iVar8 = (**(code **)((int)(this_ptr->base).vtable + 0x54))(this_ptr,uVar9);
  if (iVar8 == 0) goto LAB_0041272f;
  if (uVar9 < 0xc) {
    if (3 < uVar9) {
      if (4 < uVar9) {
        if (uVar9 < 6) goto LAB_00412771;
        if (uVar9 != 9) {
          this_ptr->cursor_index = 1;
          uVar9 = uVar9 + 1;
          pCVar10 = (CAudioRecPuzzle *)&pCVar10->click_handled;
          goto LAB_0041271d;
        }
      }
LAB_00412789:
      this_ptr->cursor_index = 2;
      uVar9 = uVar9 + 1;
      pCVar10 = (CAudioRecPuzzle *)&pCVar10->click_handled;
      goto LAB_0041271d;
    }
    if (uVar9 != 2) {
LAB_00412792:
      this_ptr->cursor_index = 1;
      uVar9 = uVar9 + 1;
      pCVar10 = (CAudioRecPuzzle *)&pCVar10->click_handled;
      goto LAB_0041271d;
    }
  }
  else if (0xc < uVar9) {
    if (0x14 < uVar9) {
      if (uVar9 < 0x16) goto LAB_00412789;
      if (uVar9 < 0x17) goto LAB_00412771;
      if (uVar9 != 0x1a) {
        this_ptr->cursor_index = 1;
        uVar9 = uVar9 + 1;
        pCVar10 = (CAudioRecPuzzle *)&pCVar10->click_handled;
        goto LAB_0041271d;
      }
      goto LAB_00412789;
    }
    if (uVar9 < 0x10) goto LAB_00412792;
    if (uVar9 < 0x11) goto LAB_00412789;
    if (uVar9 != 0x11) {
      this_ptr->cursor_index = 1;
      uVar9 = uVar9 + 1;
      pCVar10 = (CAudioRecPuzzle *)&pCVar10->click_handled;
      goto LAB_0041271d;
    }
  }
LAB_00412771:
  this_ptr->cursor_index = 3;
  uVar9 = uVar9 + 1;
  pCVar10 = (CAudioRecPuzzle *)&pCVar10->click_handled;
  goto LAB_0041271d;
}
