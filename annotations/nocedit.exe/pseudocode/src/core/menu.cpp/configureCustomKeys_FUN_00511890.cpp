// Name: core_menu.cpp_configureCustomKeys_FUN_00511890
// Address: 00511890
// Address Range: [[00511890, 00511dfd]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_configureCustomKeys_FUN_00511890(void)

#include "nocturne.h"

void __cdecl core_menu_cpp_configureCustomKeys_FUN_00511890(void)

{
  char cVar1;
  uint uVar2;
  CGame *pCVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char (*pacVar7) [256];
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char (*pacVar11) [256];
  byte bVar12;
  char local_114 [256];
  int local_14;
  
  bVar12 = 0;
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
    pcVar8 = local_114;
    pcVar9 = local_114;
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    core_moon_cpp_CMoon_update_FUN_00529d60(&g_CMoonInstance,g_CGamePtr->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_00529ed0(&g_CMoonInstance);
    uVar2 = g_CGamePtr->game_control;
    if (uVar2 == 0) {
LAB_00511c13:
      g_CGamePtr->game_control = 0;
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Control : Keyboard");
    }
    else {
      if (uVar2 < 2) {
        pcVar5 = "Control : Keyboard/Mouse";
      }
      else {
        if (uVar2 != 2) goto LAB_00511c13;
        pcVar5 = "Control : Gamepad";
      }
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar5);
    }
    sprintf(g_ControlsMenuTextBuffers[0],pcVar5);
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Customize Keys");
    sprintf(g_ControlsMenuTextBuffers[1],pcVar5);
    if (g_CGamePtr->always_run == 0) {
      pcVar5 = "Always run : OFF";
    }
    else {
      pcVar5 = "Always run : ON";
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar5);
    sprintf(g_ControlsMenuTextBuffers[2],pcVar5);
    uVar2 = g_CGamePtr->aim_mode;
    if (uVar2 == 0) {
LAB_005119ab:
      g_CGamePtr->aim_mode = 0;
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Aiming : Auto");
    }
    else if (uVar2 < 2) {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Aiming : Kindof auto");
    }
    else {
      if (uVar2 != 2) goto LAB_005119ab;
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Aiming : Manual");
    }
    sprintf(g_ControlsMenuTextBuffers[3],pcVar5);
    if (g_CGamePtr->auto_use_health == 0) {
      pcVar5 = "Auto use health : Off";
    }
    else {
      pcVar5 = "Auto use health : On";
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar5);
    sprintf(g_ControlsMenuTextBuffers[4],pcVar5);
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("X-axis sensitivity : ");
    pcVar10 = g_ControlsMenuTextBuffers[5];
    do {
      cVar1 = *pcVar5;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    sprintf
              (local_114,"%5.2f",(double)g_CGamePtr->x_mouse_sensitivity * 1.52587890625e-05
              );
    iVar4 = -1;
    pacVar7 = g_ControlsMenuTextBuffers + 5;
    do {
      pacVar11 = pacVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pacVar11 = (char (*) [256])((int)pacVar7 + (uint)bVar12 * -2 + 1);
      pcVar5 = *pacVar7;
      pacVar7 = pacVar11;
    } while (*pcVar5 != '\0');
    pcVar5 = pacVar11[-1] + 0xff;
    do {
      cVar1 = *pcVar8;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Y-axis sensitivity : ");
    pcVar5 = g_ControlsMenuTextBuffers[6];
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
    sprintf
              (local_114,"%5.2f",(double)g_CGamePtr->y_mouse_sensitivity * 1.52587890625e-05
              );
    iVar6 = -1;
    pacVar7 = g_ControlsMenuTextBuffers + 6;
    do {
      pacVar11 = pacVar7;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pacVar11 = (char (*) [256])((int)pacVar7 + (uint)bVar12 * -2 + 1);
      pcVar8 = *pacVar7;
      pacVar7 = pacVar11;
    } while (*pcVar8 != '\0');
    pcVar8 = pacVar11[-1] + 0xff;
    do {
      cVar1 = *pcVar9;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    if (g_CGamePtr->game_control == 1) {
      if (g_CGamePtr->invert_mouse_y_axis == 0) {
        pcVar8 = "Invert Y Axis : OFF";
      }
      else {
        pcVar8 = "Invert Y Axis : ON";
      }
LAB_00511b4c:
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar8);
      sprintf(g_ControlsMenuTextBuffers[7],pcVar8);
      iVar4 = 8;
    }
    else if (g_CGamePtr->game_control == 2) {
      pcVar8 = "Calibrate";
      goto LAB_00511b4c;
    }
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Control Options");
    iVar4 = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000
                      (g_ControlOptionsMenuPointers,iVar4,&local_14,0xfa,(int)pcVar8);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    pCVar3 = g_CGamePtr;
    switch(iVar4) {
    case 0:
      if (g_MenuLeftRightPressed == 1) {
        iVar4 = g_CGamePtr->game_control + -1;
        g_CGamePtr->game_control = iVar4;
        if (iVar4 < 0) {
          pCVar3->game_control = 2;
        }
      }
      else {
        iVar4 = g_CGamePtr->game_control + 1;
        g_CGamePtr->game_control = iVar4;
        if (2 < iVar4) {
          pCVar3->game_control = 0;
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
      if (g_CGamePtr->aim_mode == 0) {
        g_CGamePtr->aim_mode = 2;
      }
      else {
        g_CGamePtr->aim_mode = 0;
      }
      break;
    case 4:
      g_CGamePtr->auto_use_health = (uint)(g_CGamePtr->auto_use_health == 0);
      break;
    case 5:
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         ("Adjust X-Axis sensitivity");
      core_menu_cpp_adjustMouseSensitivity_FUN_005107c0(&g_CGamePtr->x_mouse_sensitivity,pcVar8);
      break;
    case 6:
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         ("Adjust Y-Axis sensitivity");
      core_menu_cpp_adjustMouseSensitivity_FUN_005107c0(&g_CGamePtr->y_mouse_sensitivity,pcVar8);
      break;
    case 7:
      if (g_CGamePtr->game_control == 1) {
        g_CGamePtr->invert_mouse_y_axis = (uint)(g_CGamePtr->invert_mouse_y_axis == 0);
      }
      else if (g_CGamePtr->game_control == 2) {
        core_menu_cpp_calibrateGamepad_FUN_005104d0();
      }
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar4 != 0) {
      if (g_CGamePtr->game_control != 2) {
        return;
      }
      if (g_CGamePtr->x_center != 0) {
        return;
      }
      local_114[4] = -0xf;
      local_114[5] = '\x1d';
      local_114[6] = 'Q';
      local_114[7] = '\0';
      iVar4 = core_menu_cpp_calibrateGamepad_FUN_005104d0();
      if (iVar4 != 0) {
        return;
      }
    }
  } while( true );
}
