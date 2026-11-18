// Name: core_menu.cpp_configureCustomKeys_FUN_004d0d20
// Address: 004d0d20
// Address Range: [[004d0d20, 004d128d]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_configureCustomKeys_FUN_004d0d20(void)

#include "nocturne.h"

void __cdecl core_menu_cpp_configureCustomKeys_FUN_004d0d20(void)

{
  char cVar1;
  EAimMode EVar2;
  CGame *pCVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char (*pacVar7) [256];
  EControlMode EVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char (*pacVar12) [256];
  byte bVar13;
  char local_114 [256];
  int local_14;
  
  bVar13 = 0;
  pacVar7 = g_ControlsMenuTextBuffers;
  local_14 = 0;
  core_game_cpp_CGame_saveClockTime_FUN_0049a890(g_CGamePtr);
  iVar4 = 0;
  do {
    *(char (**) [256])((int)g_ControlOptionsMenuPointers + iVar4) = pacVar7;
    iVar4 = iVar4 + 4;
    pacVar7 = pacVar7 + 1;
  } while (iVar4 != 0x24);
  do {
    pcVar9 = local_114;
    pcVar10 = local_114;
    core_game_cpp_CGame_updateDT_FUN_0049a8a0(g_CGamePtr);
    core_moon_cpp_CMoon_update_FUN_004deae0(&g_CMoonInstance,g_CGamePtr->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_004dec50(&g_CMoonInstance);
    EVar8 = g_CGamePtr->game_control;
    if (EVar8 == CONTROL_MODE_KEYBOARD) {
LAB_004d10a3:
      g_CGamePtr->game_control = CONTROL_MODE_KEYBOARD;
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Control : Keyboard");
    }
    else {
      if (EVar8 < CONTROL_MODE_GAMEPAD) {
        pcVar5 = "Control : Keyboard/Mouse";
      }
      else {
        if (EVar8 != CONTROL_MODE_GAMEPAD) goto LAB_004d10a3;
        pcVar5 = "Control : Gamepad";
      }
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar5);
    }
    _sprintf(g_ControlsMenuTextBuffers[0],pcVar5);
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Customize Keys");
    _sprintf(g_ControlsMenuTextBuffers[1],pcVar5);
    if (g_CGamePtr->always_run == 0) {
      pcVar5 = "Always run : OFF";
    }
    else {
      pcVar5 = "Always run : ON";
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar5);
    _sprintf(g_ControlsMenuTextBuffers[2],pcVar5);
    EVar2 = g_CGamePtr->aim_mode;
    if (EVar2 == AIM_MODE_AUTO) {
LAB_004d0e3b:
      g_CGamePtr->aim_mode = AIM_MODE_AUTO;
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Aiming : Auto");
    }
    else if (EVar2 < AIM_MODE_MANUAL) {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Aiming : Kindof auto");
    }
    else {
      if (EVar2 != AIM_MODE_MANUAL) goto LAB_004d0e3b;
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Aiming : Manual");
    }
    _sprintf(g_ControlsMenuTextBuffers[3],pcVar5);
    if (g_CGamePtr->auto_use_health == 0) {
      pcVar5 = "Auto use health : Off";
    }
    else {
      pcVar5 = "Auto use health : On";
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar5);
    _sprintf(g_ControlsMenuTextBuffers[4],pcVar5);
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("X-axis sensitivity : ");
    pcVar11 = g_ControlsMenuTextBuffers[5];
    do {
      cVar1 = *pcVar5;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    _sprintf(local_114,"%5.2f",(double)g_CGamePtr->x_mouse_sensitivity * 1.52587890625e-05
              );
    iVar4 = -1;
    pacVar7 = g_ControlsMenuTextBuffers + 5;
    do {
      pacVar12 = pacVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pacVar12 = (char (*) [256])((int)pacVar7 + (uint)bVar13 * -2 + 1);
      pcVar5 = *pacVar7;
      pacVar7 = pacVar12;
    } while (*pcVar5 != '\0');
    pcVar5 = pacVar12[-1] + 0xff;
    do {
      cVar1 = *pcVar9;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Y-axis sensitivity : ");
    pcVar5 = g_ControlsMenuTextBuffers[6];
    do {
      cVar1 = *pcVar9;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    iVar4 = 7;
    _sprintf(local_114,"%5.2f",(double)g_CGamePtr->y_mouse_sensitivity * 1.52587890625e-05
              );
    iVar6 = -1;
    pacVar7 = g_ControlsMenuTextBuffers + 6;
    do {
      pacVar12 = pacVar7;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pacVar12 = (char (*) [256])((int)pacVar7 + (uint)bVar13 * -2 + 1);
      pcVar9 = *pacVar7;
      pacVar7 = pacVar12;
    } while (*pcVar9 != '\0');
    pcVar9 = pacVar12[-1] + 0xff;
    do {
      cVar1 = *pcVar10;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    if (g_CGamePtr->game_control == CONTROL_MODE_MOUSE) {
      if (g_CGamePtr->invert_mouse_y_axis == 0) {
        pcVar9 = "Invert Y Axis : OFF";
      }
      else {
        pcVar9 = "Invert Y Axis : ON";
      }
LAB_004d0fdc:
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar9);
      _sprintf(g_ControlsMenuTextBuffers[7],pcVar9);
      iVar4 = 8;
    }
    else if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
      pcVar9 = "Calibrate";
      goto LAB_004d0fdc;
    }
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Control Options");
    iVar4 = core_menu_cpp_renderMenuAndGetChoice_FUN_004cf440
                      (g_ControlOptionsMenuPointers,iVar4,&local_14,0xfa,pcVar9);
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    pCVar3 = g_CGamePtr;
    switch(iVar4) {
    case 0:
      if (g_MenuLeftRightPressed == 1) {
        EVar8 = g_CGamePtr->game_control - CONTROL_MODE_MOUSE;
        g_CGamePtr->game_control = EVar8;
        if ((int)EVar8 < 0) {
          pCVar3->game_control = CONTROL_MODE_GAMEPAD;
        }
      }
      else {
        EVar8 = g_CGamePtr->game_control + CONTROL_MODE_MOUSE;
        g_CGamePtr->game_control = EVar8;
        if (2 < (int)EVar8) {
          pCVar3->game_control = CONTROL_MODE_KEYBOARD;
        }
      }
      break;
    case 1:
      core_menu_cpp_configureCustomKeyBindings_FUN_004d2d00();
      break;
    case 2:
      g_CGamePtr->always_run = (uint)(g_CGamePtr->always_run == 0);
      break;
    case 3:
      if (g_CGamePtr->aim_mode == AIM_MODE_AUTO) {
        g_CGamePtr->aim_mode = AIM_MODE_MANUAL;
      }
      else {
        g_CGamePtr->aim_mode = AIM_MODE_AUTO;
      }
      break;
    case 4:
      g_CGamePtr->auto_use_health = (uint)(g_CGamePtr->auto_use_health == 0);
      break;
    case 5:
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                         ("Adjust X-Axis sensitivity");
      core_menu_cpp_adjustMouseSensitivity_FUN_004cfbc0(&g_CGamePtr->x_mouse_sensitivity,pcVar9);
      break;
    case 6:
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                         ("Adjust Y-Axis sensitivity");
      core_menu_cpp_adjustMouseSensitivity_FUN_004cfbc0(&g_CGamePtr->y_mouse_sensitivity,pcVar9);
      break;
    case 7:
      if (g_CGamePtr->game_control == CONTROL_MODE_MOUSE) {
        g_CGamePtr->invert_mouse_y_axis = (uint)(g_CGamePtr->invert_mouse_y_axis == 0);
      }
      else if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
        core_menu_cpp_calibrateGamepad_FUN_004cf8d0();
      }
    }
    iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_ESCAPE);
    if (iVar4 != 0) {
      if (g_CGamePtr->game_control != CONTROL_MODE_GAMEPAD) {
        return;
      }
      if (g_CGamePtr->x_center != 0) {
        return;
      }
      local_114[4] = -0x7f;
      local_114[5] = '\x12';
      local_114[6] = 'M';
      local_114[7] = '\0';
      iVar4 = core_menu_cpp_calibrateGamepad_FUN_004cf8d0();
      if (iVar4 != 0) {
        return;
      }
    }
  } while( true );
}
