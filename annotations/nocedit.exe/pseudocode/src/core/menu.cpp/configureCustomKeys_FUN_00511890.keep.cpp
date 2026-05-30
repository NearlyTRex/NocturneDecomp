// Name: core_menu.cpp_configureCustomKeys_FUN_00511890
// Address: 00511890
// MANUAL RECONSTRUCTION
// Address Range: [[00511890, 00511dfd]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_configureCustomKeys_FUN_00511890(void)

#include "nocturne.h"

void __cdecl core_menu_cpp_configureCustomKeys_FUN_00511890(void)

{
  int iVar4;
  char *pcVar5;
  char *pcVar3;
  int iVar5;
  char (*pacVar7) [256];
  EControlMode EVar8;
  EControlMode EVar6;
  char local_114 [256];
  int local_14;
  CGame *pCVar3;
  EAimMode EVar2;

  pacVar7 = g_ControlsMenuTextBuffers;
  local_14 = 0;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  iVar4 = 0;
  do {
    *(char (**) [256])((int)g_ControlOptionsMenuPointers + iVar4) = pacVar7;
    iVar4 = iVar4 + 4;
    pacVar7 = pacVar7 + 1;
  } while (iVar4 != 0x24);
  do {
    core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
    core_moon_cpp_CMoon_update_FUN_00529d60(&g_CMoonInstance,g_CGamePtr->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_00529ed0(&g_CMoonInstance);
    EVar6 = g_CGamePtr->game_control;
    if (EVar6 == CONTROL_MODE_KEYBOARD) {
LAB_00511c13:
      g_CGamePtr->game_control = CONTROL_MODE_KEYBOARD;
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Control : Keyboard");
    }
    else {
      if (EVar6 < CONTROL_MODE_GAMEPAD) {
        pcVar3 = "Control : Keyboard/Mouse";
      }
      else {
        if (EVar6 != CONTROL_MODE_GAMEPAD) goto LAB_00511c13;
        pcVar3 = "Control : Gamepad";
      }
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar3);
    }
    _sprintf(g_ControlsMenuTextBuffers[0],pcVar5);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Customize Keys");
    _sprintf(g_ControlsMenuTextBuffers[1],pcVar3);
    if (g_CGamePtr->always_run == 0) {
      pcVar3 = "Always run : OFF";
    }
    else {
      pcVar3 = "Always run : ON";
    }
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar3);
    _sprintf(g_ControlsMenuTextBuffers[2],pcVar3);
    EVar2 = g_CGamePtr->aim_mode;
    if (EVar2 == AIM_MODE_AUTO) {
LAB_005119ab:
      g_CGamePtr->aim_mode = AIM_MODE_AUTO;
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Aiming : Auto");
    }
    else if (EVar2 < AIM_MODE_MANUAL) {
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Aiming : Kindof auto");
    }
    else {
      if (EVar2 != AIM_MODE_MANUAL) goto LAB_005119ab;
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Aiming : Manual");
    }
    _sprintf(g_ControlsMenuTextBuffers[3],pcVar3);
    if (g_CGamePtr->auto_use_health == 0) {
      pcVar3 = "Auto use health : Off";
    }
    else {
      pcVar3 = "Auto use health : On";
    }
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar3);
    _sprintf(g_ControlsMenuTextBuffers[4],pcVar3);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("X-axis sensitivity : ");
    strcpy(g_ControlsMenuTextBuffers[5],pcVar3);
    _sprintf(local_114,"%5.2f",(double)g_CGamePtr->x_mouse_sensitivity * 1.52587890625e-05
              );
    strcat(g_ControlsMenuTextBuffers[5],local_114);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Y-axis sensitivity : ");
    strcpy(g_ControlsMenuTextBuffers[6],pcVar3);
    iVar5 = 7;
    _sprintf(local_114,"%5.2f",(double)g_CGamePtr->y_mouse_sensitivity * 1.52587890625e-05
              );
    strcat(g_ControlsMenuTextBuffers[6],local_114);
    if (g_CGamePtr->game_control == CONTROL_MODE_MOUSE) {
      if (g_CGamePtr->invert_mouse_y_axis == 0) {
        pcVar3 = "Invert Y Axis : OFF";
      }
      else {
        pcVar3 = "Invert Y Axis : ON";
      }
LAB_00511b4c:
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar3);
      _sprintf(g_ControlsMenuTextBuffers[7],pcVar3);
      iVar5 = 8;
    }
    else if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
      pcVar3 = "Calibrate";
      goto LAB_00511b4c;
    }
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Control Options");
    iVar5 = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000
                      (g_ControlOptionsMenuPointers,iVar5,&local_14,0xfa,pcVar3);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    pCVar3 = g_CGamePtr;
    switch(iVar5) {
    case 0:
      if (g_MenuLeftRightPressed == 1) {
        EVar8 = g_CGamePtr->game_control - CONTROL_MODE_MOUSE;
        g_CGamePtr->game_control = EVar8;
        if ((int)EVar8 < 0) {
          pCVar3->game_control = CONTROL_MODE_GAMEPAD;
        }
      }
      else {
        EVar6 = g_CGamePtr->game_control + CONTROL_MODE_MOUSE;
        g_CGamePtr->game_control = EVar6;
        if (2 < (int)EVar6) {
          pCVar3->game_control = CONTROL_MODE_KEYBOARD;
        }
      }
      break;
    case 1:
      core_menu_cpp_configureCustomKeyBindings_FUN_005138e0();
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
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         ("Adjust X-Axis sensitivity");
      core_menu_cpp_adjustMouseSensitivity_FUN_005107c0(&g_CGamePtr->x_mouse_sensitivity,pcVar3);
      break;
    case 6:
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         ("Adjust Y-Axis sensitivity");
      core_menu_cpp_adjustMouseSensitivity_FUN_005107c0(&g_CGamePtr->y_mouse_sensitivity,pcVar3);
      break;
    case 7:
      if (g_CGamePtr->game_control == CONTROL_MODE_MOUSE) {
        g_CGamePtr->invert_mouse_y_axis = (uint)(g_CGamePtr->invert_mouse_y_axis == 0);
      }
      else if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
        core_menu_cpp_calibrateGamepad_FUN_005104d0();
      }
    }
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar5 != 0) {
      if (g_CGamePtr->game_control != CONTROL_MODE_GAMEPAD) {
        return;
      }
      if (g_CGamePtr->x_center != 0) {
        return;
      }
      local_114[4] = -0xf;
      local_114[5] = '\x1d';
      local_114[6] = 'Q';
      local_114[7] = '\0';
      iVar5 = core_menu_cpp_calibrateGamepad_FUN_005104d0();
      if (iVar5 != 0) {
        return;
      }
    }
  } while( true );
}
