// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_process_FUN_00412530
// Address: 00412530
// Address Range: [[00412530, 004129e2]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_process_FUN_00412530(CAudioRecPuzzle *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_process_FUN_00412530(CAudioRecPuzzle *this_ptr,float delta_time)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  CAudioRecPuzzle *pCVar9;
  
  if ((this_ptr->power_on == 0) || (this_ptr->solved == 1)) {
    core_event_cpp_CEventList_executeCommands_FUN_0048c150
              (g_CEventListPtr,"ExitFromPuzzle");
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIM_LBUTTON);
    g_MouseButtonFlags.dword = 0;
    core_bmppuzzl_cpp_activatePuzzle_FUN_004119a0(&this_ptr->base,0);
  }
  iVar6 = g_MouseY;
  iVar7 = g_MouseX;
  if (this_ptr->mouse_button != 0) {
    if (this_ptr->click_handled == 0) {
      pvVar1 = (this_ptr->base).vtable;
      this_ptr->click_handled = 1;
      iVar7 = (**(code **)((int)pvVar1 + 0x2c))(this_ptr,iVar7,iVar6);
      if (iVar7 == 0) {
        g_INT_007dffb8 = -1;
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
      iVar7 = this_ptr->buttons[this_ptr->selected_button].enabled;
      if (iVar7 == 2) {
        if (g_INT_007dffb8 == -1) {
          g_INT_007dffb8 = g_MouseX;
        }
        if (10 < ABS((double)(g_MouseX - g_INT_007dffb8))) {
          (**(code **)((int)(this_ptr->base).vtable + 0x34))(this_ptr);
          iVar7 = 0;
          do {
            iVar6 = iVar7 + 1;
            (**(code **)((int)(this_ptr->base).vtable + 0x38))(this_ptr,iVar7);
            iVar7 = iVar6;
          } while (iVar6 < 3);
        }
      }
      else if (iVar7 == 3) {
        iVar7 = 5;
LAB_0041269c:
        do {
          iVar6 = (**(code **)((int)(this_ptr->base).vtable + 0x54))(this_ptr,iVar7);
          if (iVar6 != 0) {
            this_ptr->previous_speed_setting = this_ptr->speed_setting;
            this_ptr->speed_setting = iVar7 + -5;
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
              iVar7 = iVar7 + 1;
              if (9 < iVar7) break;
              goto LAB_0041269c;
            }
            this_ptr->cursor_index = 1;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 10);
      }
    }
LAB_00412610:
    pCVar9 = this_ptr;
    for (iVar7 = 0; iVar7 < this_ptr->button_count + 1; iVar7 = iVar7 + 1) {
      pCVar9->buttons[0].visible = 0;
      pCVar9 = (CAudioRecPuzzle *)&pCVar9->click_handled;
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
    iVar7 = 0;
    pCVar9 = this_ptr;
    do {
      iVar6 = 0;
      iVar5 = (int)&this_ptr->buttons[10].bitmap.opa + iVar7;
      do {
        if (iVar6 == pCVar9->knob_positions[0]) {
          *(uint *)(iVar5 + 0x7c) = 1;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < 5);
      iVar7 = iVar7 + 0xdc;
      pCVar9 = (CAudioRecPuzzle *)&pCVar9->background;
    } while (iVar7 != 0x294);
    if (this_ptr->transport_state == 1) {
      sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->clip_sfx[0]);
      sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->clip_sfx[1]);
      sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->clip_sfx[2]);
    }
    if (this_ptr->transport_state != 1) {
      iVar7 = this_ptr->knob_positions[2];
      iVar6 = this_ptr->knob_positions[1];
      iVar5 = this_ptr->transport_state;
      iVar2 = this_ptr->speed_setting;
      iVar3 = this_ptr->knob_positions[0];
      if ((this_ptr->playback_started == 0) &&
         (iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->clip_sfx[0]), iVar4 == 0)) {
        (**(code **)((int)(this_ptr->base).vtable + 0x58))(this_ptr,iVar3,iVar6,iVar7,iVar2,iVar5);
        this_ptr->playback_started = 1;
        return;
      }
      if ((this_ptr->playback_started != 0) &&
         (iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->clip_sfx[0]), iVar4 == 0)) {
        this_ptr->transport_state = 1;
        this_ptr->playback_started = 0;
        if (((iVar3 == this_ptr->solution[0]) &&
            (((iVar6 == this_ptr->solution[1] && (iVar7 == this_ptr->solution[2])) &&
             (iVar2 == this_ptr->solution[3])))) && (iVar5 == this_ptr->solution[4])) {
          core_event_cpp_CEventList_executeCommands_FUN_0048c150
                    (g_CEventListPtr,"AudioPuzzleSuccess");
          this_ptr->solved = 1;
          return;
        }
      }
    }
    return;
  }
  if (this_ptr->previous_mouse_button != 0) {
    this_ptr->selected_button = -1;
    g_INT_007dffb8 = -1;
  }
  this_ptr->cursor_index = 0;
  uVar8 = 0;
  pCVar9 = this_ptr;
LAB_0041271d:
  if (this_ptr->button_count + 1 <= (int)uVar8) goto LAB_00412610;
  if (pCVar9->buttons[0].visible != 1) {
LAB_0041272f:
    uVar8 = uVar8 + 1;
    pCVar9 = (CAudioRecPuzzle *)&pCVar9->click_handled;
    goto LAB_0041271d;
  }
  iVar7 = pCVar9->buttons[0].enabled;
  if ((iVar7 != 2) && (iVar7 != 3)) {
    uVar8 = uVar8 + 1;
    pCVar9 = (CAudioRecPuzzle *)&pCVar9->click_handled;
    goto LAB_0041271d;
  }
  iVar7 = (**(code **)((int)(this_ptr->base).vtable + 0x54))(this_ptr,uVar8);
  if (iVar7 == 0) goto LAB_0041272f;
  if (uVar8 < 0xc) {
    if (3 < uVar8) {
      if (4 < uVar8) {
        if (uVar8 < 6) goto LAB_00412771;
        if (uVar8 != 9) {
          this_ptr->cursor_index = 1;
          uVar8 = uVar8 + 1;
          pCVar9 = (CAudioRecPuzzle *)&pCVar9->click_handled;
          goto LAB_0041271d;
        }
      }
LAB_00412789:
      this_ptr->cursor_index = 2;
      uVar8 = uVar8 + 1;
      pCVar9 = (CAudioRecPuzzle *)&pCVar9->click_handled;
      goto LAB_0041271d;
    }
    if (uVar8 != 2) {
LAB_00412792:
      this_ptr->cursor_index = 1;
      uVar8 = uVar8 + 1;
      pCVar9 = (CAudioRecPuzzle *)&pCVar9->click_handled;
      goto LAB_0041271d;
    }
  }
  else if (0xc < uVar8) {
    if (0x14 < uVar8) {
      if (uVar8 < 0x16) goto LAB_00412789;
      if (uVar8 < 0x17) goto LAB_00412771;
      if (uVar8 != 0x1a) {
        this_ptr->cursor_index = 1;
        uVar8 = uVar8 + 1;
        pCVar9 = (CAudioRecPuzzle *)&pCVar9->click_handled;
        goto LAB_0041271d;
      }
      goto LAB_00412789;
    }
    if (uVar8 < 0x10) goto LAB_00412792;
    if (uVar8 < 0x11) goto LAB_00412789;
    if (uVar8 != 0x11) {
      this_ptr->cursor_index = 1;
      uVar8 = uVar8 + 1;
      pCVar9 = (CAudioRecPuzzle *)&pCVar9->click_handled;
      goto LAB_0041271d;
    }
  }
LAB_00412771:
  this_ptr->cursor_index = 3;
  uVar8 = uVar8 + 1;
  pCVar9 = (CAudioRecPuzzle *)&pCVar9->click_handled;
  goto LAB_0041271d;
}
