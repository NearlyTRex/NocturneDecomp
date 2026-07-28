// Name: core_menu.cpp_configureCustomKeys_FUN_004d0d20
// Address: 004d0d20
// Address Range: [[004d0d20, 004d128d]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_configureCustomKeys_FUN_004d0d20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_configureCustomKeys_FUN_004d0d20(void)

{
  char cVar1;
  EAimMode EVar2;
  CGame *pCVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  EControlMode EVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  ulonglong uVar12;
  char local_114 [256];
  int local_14;
  
  bVar11 = 0;
  iVar6 = 0x1cc65b0;
  local_14 = 0;
  core_game_cpp_CGame_saveClockTime_FUN_0049a890(0x01C775EC);
  iVar4 = 0;
  do {
    *(int *)(iVar4 + 0x1cc6eb0) = iVar6;
    iVar4 = iVar4 + 4;
    iVar6 = iVar6 + 0x100;
  } while (iVar4 != 0x24);
  do {
    pcVar8 = local_114;
    pcVar9 = local_114;
    core_game_cpp_CGame_updateDT_FUN_0049a8a0(0x01C775EC);
    core_moon_cpp_CMoon_update_FUN_004deae0((CMoon *)0x1cc5780,0x01C775EC->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_004dec50((CMoon *)0x1cc5780);
    EVar7 = 0x01C775EC->game_control;
    if (EVar7 == CONTROL_MODE_KEYBOARD) {
LAB_004d10a3:
      0x01C775EC->game_control = CONTROL_MODE_KEYBOARD;
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Control : Keyboard");
    }
    else {
      if (EVar7 < CONTROL_MODE_GAMEPAD) {
        pcVar5 = "Control : Keyboard/Mouse";
      }
      else {
        if (EVar7 != CONTROL_MODE_GAMEPAD) goto LAB_004d10a3;
        pcVar5 = "Control : Gamepad";
      }
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar5);
    }
    _sprintf(CONCAT44(pcVar5,0x1cc65b0));
    support_newmsg_cpp_getLocalizedString_FUN_004ee370("Customize Keys");
    _sprintf(0x1cc66b0);
    if (0x01C775EC->always_run == 0) {
      pcVar5 = "Always run : OFF";
    }
    else {
      pcVar5 = "Always run : ON";
    }
    support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar5);
    _sprintf(0x1cc67b0);
    EVar2 = 0x01C775EC->aim_mode;
    if (EVar2 == AIM_MODE_AUTO) {
LAB_004d0e3b:
      0x01C775EC->aim_mode = AIM_MODE_AUTO;
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Aiming : Auto");
      uVar12 = CONCAT44(pcVar5,0x1cc68b0);
    }
    else if (EVar2 < AIM_MODE_MANUAL) {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Aiming : Kindof auto");
      uVar12 = CONCAT44(pcVar5,0x1cc68b0);
    }
    else {
      if (EVar2 != AIM_MODE_MANUAL) goto LAB_004d0e3b;
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Aiming : Manual");
      uVar12 = CONCAT44(pcVar5,0x1cc68b0);
    }
    _sprintf(uVar12);
    if (0x01C775EC->auto_use_health == 0) {
      pcVar5 = "Auto use health : Off";
    }
    else {
      pcVar5 = "Auto use health : On";
    }
    support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar5);
    _sprintf(0x1cc69b0);
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("X-axis sensitivity : ");
    pcVar10 = (char *)0x1cc6ab0;
    do {
      cVar1 = *pcVar5;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    _sprintf(local_114,"%5.2f",
               (double)0x01C775EC->x_mouse_sensitivity * 1.52587890625e-05);
    iVar4 = -1;
    pcVar5 = (char *)0x1cc6ab0;
    do {
      pcVar10 = pcVar5;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar10 = pcVar5 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar1 = *pcVar8;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Y-axis sensitivity : ");
    pcVar5 = (char *)0x1cc6bb0;
    do {
      cVar1 = *pcVar8;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    iVar4 = 7;
    _sprintf(local_114,"%5.2f",
               (double)0x01C775EC->y_mouse_sensitivity * 1.52587890625e-05);
    iVar6 = -1;
    pcVar8 = (char *)0x1cc6bb0;
    do {
      pcVar5 = pcVar8;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar5 = pcVar8 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar9;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    if (0x01C775EC->game_control == CONTROL_MODE_MOUSE) {
      if (0x01C775EC->invert_mouse_y_axis == 0) {
        pcVar8 = "Invert Y Axis : OFF";
      }
      else {
        pcVar8 = "Invert Y Axis : ON";
      }
LAB_004d0fdc:
      support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar8);
      _sprintf(0x1cc6cb0);
      iVar4 = 8;
    }
    else if (0x01C775EC->game_control == CONTROL_MODE_GAMEPAD) {
      pcVar8 = "Calibrate";
      goto LAB_004d0fdc;
    }
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Control Options");
    iVar4 = core_menu_cpp_renderMenuAndGetChoice_FUN_004cf440
                      ((char **)0x1cc6eb0,iVar4,&local_14,0xfa,pcVar8);
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    pCVar3 = 0x01C775EC;
    switch(iVar4) {
    case 0:
      if (_DAT_01cc5b5c == 1) {
        EVar7 = 0x01C775EC->game_control - CONTROL_MODE_MOUSE;
        0x01C775EC->game_control = EVar7;
        if ((int)EVar7 < 0) {
          pCVar3->game_control = CONTROL_MODE_GAMEPAD;
        }
      }
      else {
        EVar7 = 0x01C775EC->game_control + CONTROL_MODE_MOUSE;
        0x01C775EC->game_control = EVar7;
        if (2 < (int)EVar7) {
          pCVar3->game_control = CONTROL_MODE_KEYBOARD;
        }
      }
      break;
    case 1:
      core_menu_cpp_configureCustomKeyBindings_FUN_004d2d00();
      break;
    case 2:
      0x01C775EC->always_run = (uint)(0x01C775EC->always_run == 0);
      break;
    case 3:
      if (0x01C775EC->aim_mode == AIM_MODE_AUTO) {
        0x01C775EC->aim_mode = AIM_MODE_MANUAL;
      }
      else {
        0x01C775EC->aim_mode = AIM_MODE_AUTO;
      }
      break;
    case 4:
      0x01C775EC->auto_use_health = (uint)(0x01C775EC->auto_use_health == 0);
      break;
    case 5:
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                         ("Adjust X-Axis sensitivity");
      core_menu_cpp_adjustMouseSensitivity_FUN_004cfbc0(&DAT_005b9354->x_mouse_sensitivity,pcVar8);
      break;
    case 6:
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                         ("Adjust Y-Axis sensitivity");
      core_menu_cpp_adjustMouseSensitivity_FUN_004cfbc0(&DAT_005b9354->y_mouse_sensitivity,pcVar8);
      break;
    case 7:
      if (0x01C775EC->game_control == CONTROL_MODE_MOUSE) {
        0x01C775EC->invert_mouse_y_axis = (uint)(0x01C775EC->invert_mouse_y_axis == 0);
      }
      else if (0x01C775EC->game_control == CONTROL_MODE_GAMEPAD) {
        core_menu_cpp_calibrateGamepad_FUN_004cf8d0();
      }
    }
    iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64);
    if ((iVar4 != 0) &&
       (((0x01C775EC->game_control != CONTROL_MODE_GAMEPAD || (0x01C775EC->x_center != 0)) ||
        (iVar4 = core_menu_cpp_calibrateGamepad_FUN_004cf8d0(), iVar4 != 0)))) {
      return;
    }
  } while( true );
}
