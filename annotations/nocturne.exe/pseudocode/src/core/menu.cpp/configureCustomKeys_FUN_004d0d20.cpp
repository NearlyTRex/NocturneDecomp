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
  char local_114 [256];
  int local_14;
  
  bVar11 = 0;
  iVar6 = 0x1cc65b0;
  local_14 = 0;
  core_game_cpp_CGame_saveClockTime_FUN_0049a890(g_CGame_PTR_005b9354);
  iVar4 = 0;
  do {
    *(int *)(iVar4 + 0x1cc6eb0) = iVar6;
    iVar4 = iVar4 + 4;
    iVar6 = iVar6 + 0x100;
  } while (iVar4 != 0x24);
  do {
    pcVar8 = local_114;
    pcVar9 = local_114;
    core_game_cpp_CGame_updateDT_FUN_0049a8a0(g_CGame_PTR_005b9354);
    core_moon_cpp_CMoon_update_FUN_004deae0
              (&g_CMoon_01cc5780,g_CGame_PTR_005b9354->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_004dec50(&g_CMoon_01cc5780);
    EVar7 = g_CGame_PTR_005b9354->game_control;
    if (EVar7 == CONTROL_MODE_KEYBOARD) {
LAB_004d10a3:
      g_CGame_PTR_005b9354->game_control = CONTROL_MODE_KEYBOARD;
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
    _sprintf((char *)0x1cc65b0,pcVar5);
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Customize Keys");
    _sprintf((char *)0x1cc66b0,pcVar5);
    if (g_CGame_PTR_005b9354->always_run == 0) {
      pcVar5 = "Always run : OFF";
    }
    else {
      pcVar5 = "Always run : ON";
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar5);
    _sprintf((char *)0x1cc67b0,pcVar5);
    EVar2 = g_CGame_PTR_005b9354->aim_mode;
    if (EVar2 == AIM_MODE_AUTO) {
LAB_004d0e3b:
      g_CGame_PTR_005b9354->aim_mode = AIM_MODE_AUTO;
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Aiming : Auto");
    }
    else if (EVar2 < AIM_MODE_MANUAL) {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Aiming : Kindof auto");
    }
    else {
      if (EVar2 != AIM_MODE_MANUAL) goto LAB_004d0e3b;
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Aiming : Manual");
    }
    _sprintf((char *)0x1cc68b0,pcVar5);
    if (g_CGame_PTR_005b9354->auto_use_health == 0) {
      pcVar5 = "Auto use health : Off";
    }
    else {
      pcVar5 = "Auto use health : On";
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar5);
    _sprintf((char *)0x1cc69b0,pcVar5);
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
               (double)g_CGame_PTR_005b9354->x_mouse_sensitivity * 1.52587890625e-05);
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
               (double)g_CGame_PTR_005b9354->y_mouse_sensitivity * 1.52587890625e-05);
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
    if (g_CGame_PTR_005b9354->game_control == CONTROL_MODE_MOUSE) {
      if (g_CGame_PTR_005b9354->invert_mouse_y_axis == 0) {
        pcVar9 = "Invert Y Axis : OFF";
      }
      else {
        pcVar9 = "Invert Y Axis : ON";
      }
LAB_004d0fdc:
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar9);
      _sprintf((char *)0x1cc6cb0,pcVar9);
      iVar4 = 8;
    }
    else if (g_CGame_PTR_005b9354->game_control == CONTROL_MODE_GAMEPAD) {
      pcVar9 = "Calibrate";
      goto LAB_004d0fdc;
    }
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Control Options");
    iVar4 = core_menu_cpp_renderMenuAndGetChoice_FUN_004cf440
                      ((char **)0x1cc6eb0,iVar4,&local_14,0xfa,pcVar9);
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    pCVar3 = g_CGame_PTR_005b9354;
    switch(iVar4) {
    case 0:
      if (_DAT_01cc5b5c == 1) {
        EVar7 = g_CGame_PTR_005b9354->game_control - CONTROL_MODE_MOUSE;
        g_CGame_PTR_005b9354->game_control = EVar7;
        if ((int)EVar7 < 0) {
          pCVar3->game_control = CONTROL_MODE_GAMEPAD;
        }
      }
      else {
        EVar7 = g_CGame_PTR_005b9354->game_control + CONTROL_MODE_MOUSE;
        g_CGame_PTR_005b9354->game_control = EVar7;
        if (2 < (int)EVar7) {
          pCVar3->game_control = CONTROL_MODE_KEYBOARD;
        }
      }
      break;
    case 1:
      core_menu_cpp_configureCustomKeyBindings_FUN_004d2d00();
      break;
    case 2:
      g_CGame_PTR_005b9354->always_run = (uint)(g_CGame_PTR_005b9354->always_run == 0);
      break;
    case 3:
      if (g_CGame_PTR_005b9354->aim_mode == AIM_MODE_AUTO) {
        g_CGame_PTR_005b9354->aim_mode = AIM_MODE_MANUAL;
      }
      else {
        g_CGame_PTR_005b9354->aim_mode = AIM_MODE_AUTO;
      }
      break;
    case 4:
      g_CGame_PTR_005b9354->auto_use_health = (uint)(g_CGame_PTR_005b9354->auto_use_health == 0);
      break;
    case 5:
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                         ("Adjust X-Axis sensitivity");
      core_menu_cpp_adjustMouseSensitivity_FUN_004cfbc0
                (&g_CGame_PTR_005b9354->x_mouse_sensitivity,pcVar9);
      break;
    case 6:
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                         ("Adjust Y-Axis sensitivity");
      core_menu_cpp_adjustMouseSensitivity_FUN_004cfbc0
                (&g_CGame_PTR_005b9354->y_mouse_sensitivity,pcVar9);
      break;
    case 7:
      if (g_CGame_PTR_005b9354->game_control == CONTROL_MODE_MOUSE) {
        g_CGame_PTR_005b9354->invert_mouse_y_axis =
             (uint)(g_CGame_PTR_005b9354->invert_mouse_y_axis == 0);
      }
      else if (g_CGame_PTR_005b9354->game_control == CONTROL_MODE_GAMEPAD) {
        core_menu_cpp_calibrateGamepad_FUN_004cf8d0();
      }
    }
    iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_ESCAPE);
    if (iVar4 != 0) {
      if (g_CGame_PTR_005b9354->game_control != CONTROL_MODE_GAMEPAD) {
        return;
      }
      if (g_CGame_PTR_005b9354->x_center != 0) {
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
