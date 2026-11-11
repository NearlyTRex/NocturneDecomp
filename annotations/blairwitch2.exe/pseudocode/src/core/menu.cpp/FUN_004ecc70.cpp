// Name: core_menu.cpp_FUN_004ecc70
// Address: 004ecc70
// Address Range: [[004ecc70, 004ed207]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_FUN_004ecc70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_FUN_004ecc70(void)

{
  char cVar1;
  EAimMode EVar2;
  CGame *pCVar3;
  CDemonSet *this_ptr;
  int iVar4;
  char *pcVar5;
  EControlMode EVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  char local_114 [256];
  int local_14;
  
  bVar11 = 0;
  iVar7 = 0x1d06b80;
  local_14 = 0;
  core_game_cpp_CGame_saveClockTime_FUN_004b3000(g_CGamePtr);
  iVar4 = 0;
  do {
    *(int *)(iVar4 + 0x1d07480) = iVar7;
    iVar4 = iVar4 + 4;
    iVar7 = iVar7 + 0x100;
  } while (iVar4 != 0x24);
  do {
    pcVar8 = local_114;
    pcVar9 = local_114;
    core_game_cpp_CGame_updateDT_FUN_004b3010(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    g_CDemonSetPtr->rendering_mode = 1;
    core_set_cpp_CDemonSet_setFlatColor_FUN_005344c0(this_ptr,50000,50000,0x10000);
    g_CDemonSetPtr->ambient_base_quick = 0xdac;
    core_moon_cpp_CMoon_update_FUN_005024a0(&g_CMoonInstance,g_CGamePtr->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_00502510(&g_CMoonInstance);
    pCVar3 = g_CGamePtr;
    g_CDemonSetPtr->rendering_mode = 0;
    switch(pCVar3->game_control) {
    case CONTROL_MODE_KEYBOARD:
      pcVar5 = ">Control : Keyboard" + 1;
      pCVar3->game_control = CONTROL_MODE_KEYBOARD;
      break;
    case CONTROL_MODE_MOUSE:
      pcVar5 = "Control : Keyboard/Mouse";
      break;
    case CONTROL_MODE_GAMEPAD:
      pcVar5 = "Control : Gamepad";
      break;
    case CONTROL_MODE_POINT_AND_CLICK:
      pcVar5 = "Control : Mouse";
      break;
    default:
      goto switchD_004ecd3f_default;
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar5);
    _sprintf((char *)0x1d06b80,pcVar5);
switchD_004ecd3f_default:
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Customize Keys");
    _sprintf((char *)0x1d06c80,pcVar5);
    if (g_CGamePtr->always_run == 0) {
      pcVar5 = "Always run : OFF";
    }
    else {
      pcVar5 = "Always run : ON";
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar5);
    _sprintf((char *)0x1d06d80,pcVar5);
    EVar2 = g_CGamePtr->aim_mode;
    if (EVar2 == AIM_MODE_AUTO) {
LAB_004ecdd4:
      g_CGamePtr->aim_mode = AIM_MODE_AUTO;
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Aiming : Auto");
    }
    else if (EVar2 < AIM_MODE_MANUAL) {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Aiming : Kindof auto");
    }
    else {
      if (EVar2 != AIM_MODE_MANUAL) goto LAB_004ecdd4;
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Aiming : Manual");
    }
    _sprintf((char *)0x1d06e80,pcVar5);
    if (g_CGamePtr->auto_use_health == 0) {
      pcVar5 = "Auto use health : Off";
    }
    else {
      pcVar5 = "Auto use health : On";
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar5);
    _sprintf((char *)0x1d06f80,pcVar5);
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("X-axis sensitivity : ");
    pcVar10 = (char *)0x1d07080;
    do {
      cVar1 = *pcVar5;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    _sprintf(local_114,"%5.2f");
    iVar4 = -1;
    pcVar5 = (char *)0x1d07080;
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
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Y-axis sensitivity : ");
    pcVar5 = (char *)0x1d07180;
    do {
      cVar1 = *pcVar8;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    _sprintf(local_114,"%5.2f");
    iVar4 = 7;
    iVar7 = -1;
    pcVar8 = (char *)0x1d07180;
    do {
      pcVar5 = pcVar8;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
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
    if (g_CGamePtr->game_control == CONTROL_MODE_MOUSE) {
      if (g_CGamePtr->invert_mouse_y_axis == 0) {
        pcVar9 = "Invert Y Axis : OFF";
      }
      else {
        pcVar9 = "Invert Y Axis : ON";
      }
LAB_004ecf73:
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar9);
      _sprintf((char *)0x1d07280,pcVar9);
      iVar4 = 8;
    }
    else if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
      pcVar9 = "Calibrate";
      goto LAB_004ecf73;
    }
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Control Options");
    iVar4 = core_menu_cpp_FUN_004eb0e0((char **)0x1d07480,iVar4,&local_14,0x122,pcVar9);
    wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
    pCVar3 = g_CGamePtr;
    switch(iVar4) {
    case 0:
      if (_DAT_01d0612c == 1) {
        EVar6 = g_CGamePtr->game_control - CONTROL_MODE_MOUSE;
        g_CGamePtr->game_control = EVar6;
        if ((int)EVar6 < 0) {
          pCVar3->game_control = CONTROL_MODE_POINT_AND_CLICK;
        }
      }
      else {
        EVar6 = g_CGamePtr->game_control + CONTROL_MODE_MOUSE;
        g_CGamePtr->game_control = EVar6;
        if (3 < (int)EVar6) {
          pCVar3->game_control = CONTROL_MODE_KEYBOARD;
        }
      }
      break;
    case 1:
      core_menu_cpp_FUN_004eed60();
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
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                         ("Adjust X-Axis sensitivity");
      core_menu_cpp_adjustMouseSensitivity_FUN_004eb7c0(&g_CGamePtr->x_mouse_sensitivity,pcVar9);
      break;
    case 6:
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                         ("Adjust Y-Axis sensitivity");
      core_menu_cpp_adjustMouseSensitivity_FUN_004eb7c0(&g_CGamePtr->y_mouse_sensitivity,pcVar9);
      break;
    case 7:
      if (g_CGamePtr->game_control == CONTROL_MODE_MOUSE) {
        g_CGamePtr->invert_mouse_y_axis = (uint)(g_CGamePtr->invert_mouse_y_axis == 0);
      }
      else if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
        core_menu_cpp_FUN_004eb490();
      }
    }
    iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
    if ((iVar4 != 0) &&
       (((g_CGamePtr->game_control != CONTROL_MODE_GAMEPAD || (g_CGamePtr->x_center != 0)) ||
        (iVar4 = core_menu_cpp_FUN_004eb490(), iVar4 != 0)))) {
      return;
    }
  } while( true );
}
