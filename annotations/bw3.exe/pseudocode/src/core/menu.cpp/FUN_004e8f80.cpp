// Name: core_menu.cpp_FUN_004e8f80
// Address: 004e8f80
// Address Range: [[004e8f80, 004e94be]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_FUN_004e8f80(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_FUN_004e8f80(void)

{
  char cVar1;
  EAimMode EVar2;
  CGame *pCVar3;
  CDemonSet *this_ptr;
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
  iVar6 = 0x1d74128;
  local_14 = 0;
  core_game_cpp_CGame_saveClockTime_FUN_004b4430(g_CGamePtr);
  iVar4 = 0;
  do {
    *(int *)(iVar4 + 0x1d74a28) = iVar6;
    iVar4 = iVar4 + 4;
    iVar6 = iVar6 + 0x100;
  } while (iVar4 != 0x24);
  do {
    pcVar8 = local_114;
    pcVar9 = local_114;
    core_game_cpp_FUN_004b4440();
    this_ptr = g_CDemonSetPtr;
    g_CDemonSetPtr->rendering_mode = 1;
    core_set_cpp_CDemonSet_setFlatColor_FUN_0053b100(this_ptr,50000,50000,0x10000);
    g_CDemonSetPtr->ambient_base_quick = 0xdac;
    core_moon_cpp_CMoon_render_FUN_004f9670(&g_CMoonInstance);
    g_CDemonSetPtr->rendering_mode = 0;
    switch(g_CGamePtr->game_control) {
    case CONTROL_MODE_KEYBOARD:
      pcVar5 = "Control : Keyboard";
      g_CGamePtr->game_control = CONTROL_MODE_KEYBOARD;
      break;
    case CONTROL_MODE_MOUSE:
      pcVar5 = "Control : Keyboard/Mouse";
      break;
    case CONTROL_MODE_GAMEPAD:
      pcVar5 = "Control : Gamepad";
      break;
    case CONTROL_MODE_POINT_AND_CLICK:
      pcVar5 = "Control : Point & Click";
      break;
    default:
      goto switchD_004e9030_default;
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar5);
    _sprintf((char *)0x1d74128,pcVar5);
switchD_004e9030_default:
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Customize Keys");
    _sprintf((char *)0x1d74228,pcVar5);
    if (g_CGamePtr->always_run == 0) {
      pcVar5 = "Always Run : Off";
    }
    else {
      pcVar5 = "Always Run : On";
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar5);
    _sprintf((char *)0x1d74328,pcVar5);
    EVar2 = g_CGamePtr->aim_mode;
    if (EVar2 == AIM_MODE_AUTO) {
LAB_004e90c5:
      g_CGamePtr->aim_mode = AIM_MODE_AUTO;
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Aiming : Auto");
    }
    else if (EVar2 < AIM_MODE_MANUAL) {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Aiming : Kindof auto");
    }
    else {
      if (EVar2 != AIM_MODE_MANUAL) goto LAB_004e90c5;
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Aiming : Manual");
    }
    _sprintf((char *)0x1d74428,pcVar5);
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00508960("X-Axis Sensitivity : ");
    pcVar10 = (char *)0x1d74528;
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
    pcVar5 = (char *)0x1d74528;
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
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Y-Axis Sensitivity : ");
    pcVar5 = (char *)0x1d74628;
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
    iVar4 = 6;
    iVar6 = -1;
    pcVar8 = (char *)0x1d74628;
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
    if (g_CGamePtr->game_control == CONTROL_MODE_MOUSE) {
      if (g_CGamePtr->invert_mouse_y_axis == 0) {
        pcVar9 = "Invert Y Axis : Off";
      }
      else {
        pcVar9 = "Invert Y Axis : On";
      }
LAB_004e922e:
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar9);
      _sprintf((char *)0x1d74728,pcVar9);
      iVar4 = 7;
    }
    else if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
      pcVar9 = "Calibrate";
      goto LAB_004e922e;
    }
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Control Options");
    iVar4 = core_menu_cpp_FUN_004e7860((char **)0x1d74a28,iVar4,&local_14,200,pcVar9);
    wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
    pCVar3 = g_CGamePtr;
    switch(iVar4) {
    case 0:
      if (_DAT_01d737d4 == 1) {
        EVar7 = g_CGamePtr->game_control - CONTROL_MODE_MOUSE;
        g_CGamePtr->game_control = EVar7;
        if ((int)EVar7 < 0) {
          pCVar3->game_control = CONTROL_MODE_POINT_AND_CLICK;
        }
      }
      else {
        EVar7 = g_CGamePtr->game_control + CONTROL_MODE_MOUSE;
        g_CGamePtr->game_control = EVar7;
        if (3 < (int)EVar7) {
          pCVar3->game_control = CONTROL_MODE_KEYBOARD;
        }
      }
      if ((g_CGamePtr->game_control != CONTROL_MODE_POINT_AND_CLICK) &&
         (iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04), iVar4 != 0)) {
        *(uint *)(iVar4 + 0xcdd4) = 0;
      }
      break;
    case 1:
      core_menu_cpp_FUN_004eae80();
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
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                         ("Adjust X-Axis Sensitivity");
      core_menu_cpp_adjustMouseSensitivity_FUN_004e80f0(&g_CGamePtr->x_mouse_sensitivity,pcVar9);
      break;
    case 5:
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                         ("Adjust Y-Axis Sensitivity");
      core_menu_cpp_adjustMouseSensitivity_FUN_004e80f0(&g_CGamePtr->y_mouse_sensitivity,pcVar9);
      break;
    case 6:
      if (g_CGamePtr->game_control == CONTROL_MODE_MOUSE) {
        g_CGamePtr->invert_mouse_y_axis = (uint)(g_CGamePtr->invert_mouse_y_axis == 0);
      }
      else if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
        core_menu_cpp_calibrateGamepad_FUN_004e7dc0();
      }
    }
    iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78);
    if ((iVar4 != 0) &&
       (((g_CGamePtr->game_control != CONTROL_MODE_GAMEPAD || (g_CGamePtr->x_center != 0)) ||
        (iVar4 = core_menu_cpp_calibrateGamepad_FUN_004e7dc0(), iVar4 != 0)))) {
      return;
    }
  } while( true );
}
