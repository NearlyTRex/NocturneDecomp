// Name: core_menu.cpp_configureCustomKeys_FUN_00511890
// Address: 00511890
// Address Range: [[00511890, 00511dfd]]
// Convention: __cdecl
// Signature: void core_menu.cpp_configureCustomKeys_FUN_00511890(void)

#include "nocturne.h"

void __cdecl core_menu_cpp_configureCustomKeys_FUN_00511890(void)

{
  char cVar1;
  uint uVar2;
  CGame *pCVar3;
  int iVar4;
  int iVar5;
  char (*pacVar6) [256];
  BADSPACEBASE *in_ESP;
  char *pcVar7;
  char (*pacVar8) [256];
  char *pcVar9;
  byte bVar10;
  CGame *in_stack_fffffeec;
  char *pcVar11;
  
  bVar10 = 0;
  pacVar6 = g_ControlsMenuTextBuffers;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffffeec);
  iVar4 = 0;
  do {
    *(char (**) [256])((int)g_ControlOptionsMenuPointers + iVar4) = pacVar6;
    iVar4 = iVar4 + 4;
    pacVar6 = pacVar6 + 1;
  } while (iVar4 != 0x24);
  do {
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    core_moon_cpp_CMoon_update_FUN_00529d60(&g_CMoonInstance,g_CGamePtr->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_00529ed0(&g_CMoonInstance);
    uVar2 = g_CGamePtr->game_control;
    if (uVar2 == 0) {
LAB_00511c13:
      g_CGamePtr->game_control = 0;
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Control : Keyboard");
    }
    else {
      if (uVar2 < 2) {
        pcVar11 = "Control : Keyboard/Mouse";
      }
      else {
        if (uVar2 != 2) goto LAB_00511c13;
        pcVar11 = "Control : Gamepad";
      }
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar11);
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(g_ControlsMenuTextBuffers[0],pcVar11);
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Customize Keys");
    crt_stdio_c_sprintf_FUN_005fdbd0(g_ControlsMenuTextBuffers[1],pcVar11);
    if (g_CGamePtr->always_run == 0) {
      pcVar11 = "Always run : OFF";
    }
    else {
      pcVar11 = "Always run : ON";
    }
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar11);
    crt_stdio_c_sprintf_FUN_005fdbd0(g_ControlsMenuTextBuffers[2],pcVar11);
    uVar2 = g_CGamePtr->aim_mode;
    if (uVar2 == 0) {
LAB_005119ab:
      g_CGamePtr->aim_mode = 0;
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Aiming : Auto");
    }
    else if (uVar2 < 2) {
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Aiming : Kindof auto");
    }
    else {
      if (uVar2 != 2) goto LAB_005119ab;
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Aiming : Manual");
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(g_ControlsMenuTextBuffers[3],pcVar11);
    if (g_CGamePtr->auto_use_health == 0) {
      pcVar11 = "Auto use health : Off";
    }
    else {
      pcVar11 = "Auto use health : On";
    }
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar11);
    crt_stdio_c_sprintf_FUN_005fdbd0(g_ControlsMenuTextBuffers[4],pcVar11);
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("X-axis sensitivity : ");
    pcVar7 = g_ControlsMenuTextBuffers[5];
    do {
      cVar1 = *pcVar11;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xffffff28,"%5.2f",
               (double)g_CGamePtr->x_mouse_sensitivity * 1.52587890625e-05);
    pcVar11 = &stack0xffffff2c;
    iVar4 = -1;
    pacVar6 = g_ControlsMenuTextBuffers + 5;
    do {
      pacVar8 = pacVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pacVar8 = (char (*) [256])((int)pacVar6 + (uint)bVar10 * -2 + 1);
      pcVar7 = *pacVar6;
      pacVar6 = pacVar8;
    } while (*pcVar7 != '\0');
    pcVar7 = pacVar8[-1] + 0xff;
    do {
      cVar1 = *pcVar11;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Y-axis sensitivity : ");
    pcVar7 = &stack0xffffff30;
    pcVar9 = g_ControlsMenuTextBuffers[6];
    do {
      cVar1 = *pcVar11;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    iVar4 = 7;
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff30,"%5.2f");
    iVar5 = -1;
    pacVar6 = g_ControlsMenuTextBuffers + 6;
    do {
      pacVar8 = pacVar6;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pacVar8 = (char (*) [256])((int)pacVar6 + (uint)bVar10 * -2 + 1);
      pcVar11 = *pacVar6;
      pacVar6 = pacVar8;
    } while (*pcVar11 != '\0');
    pcVar11 = pacVar8[-1] + 0xff;
    do {
      cVar1 = *pcVar7;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    if (g_CGamePtr->game_control == 1) {
      if (g_CGamePtr->invert_mouse_y_axis == 0) {
        pcVar11 = "Invert Y Axis : OFF";
      }
      else {
        pcVar11 = "Invert Y Axis : ON";
      }
LAB_00511b4c:
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar11);
      crt_stdio_c_sprintf_FUN_005fdbd0(g_ControlsMenuTextBuffers[7],pcVar11);
      iVar4 = 8;
    }
    else if (g_CGamePtr->game_control == 2) {
      pcVar11 = "Calibrate";
      goto LAB_00511b4c;
    }
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Control Options");
    iVar4 = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000
                      (g_ControlOptionsMenuPointers,iVar4,(int *)&stack0x00000040,0xfa,(int)pcVar11)
    ;
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
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("Adjust X-Axis sensitivity");
      core_menu_cpp_adjustMouseSensitivity_FUN_005107c0(&g_CGamePtr->x_mouse_sensitivity,pcVar11);
      break;
    case 6:
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("Adjust Y-Axis sensitivity");
      core_menu_cpp_adjustMouseSensitivity_FUN_005107c0(&g_CGamePtr->y_mouse_sensitivity,pcVar11);
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
    if ((iVar4 != 0) &&
       (((g_CGamePtr->game_control != 2 || (g_CGamePtr->x_center != 0)) ||
        (iVar4 = core_menu_cpp_calibrateGamepad_FUN_005104d0(), iVar4 != 0)))) {
      return;
    }
  } while( true );
}
