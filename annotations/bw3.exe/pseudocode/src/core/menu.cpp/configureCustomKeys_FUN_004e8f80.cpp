// Name: core_menu.cpp_configureCustomKeys_FUN_004e8f80
// Address: 004e8f80
// Address Range: [[004e8f80, 004e94be]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_configureCustomKeys_FUN_004e8f80(void)

#include "nocturne.h"

void __cdecl core_menu_cpp_configureCustomKeys_FUN_004e8f80(void)

{
  char cVar1;
  EAimMode EVar2;
  CGame *pCVar3;
  CDemonSet *this_ptr;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  EControlMode EVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  char local_114 [256];
  int local_14;
  
  bVar11 = 0;
  pcVar7 = g_CHAR_ARRAY_01d74128;
  local_14 = 0;
  core_game_cpp_CGame_saveClockTime_FUN_004b4430(g_CGamePtr);
  iVar4 = 0;
  do {
    *(char **)((int)&g_CHAR_PTR_01d74a28 + iVar4) = pcVar7;
    iVar4 = iVar4 + 4;
    pcVar7 = pcVar7 + 0x100;
  } while (iVar4 != 0x24);
  do {
    pcVar9 = local_114;
    pcVar7 = local_114;
    core_game_cpp_CGame_updateDT_FUN_004b4440(g_CGamePtr);
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
    _sprintf(g_CHAR_ARRAY_01d74128,pcVar5);
switchD_004e9030_default:
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Customize Keys");
    _sprintf(g_CHAR_ARRAY_01d74128 + 0x100,pcVar5);
    if (g_CGamePtr->always_run == 0) {
      pcVar5 = "Always Run : Off";
    }
    else {
      pcVar5 = "Always Run : On";
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar5);
    _sprintf(g_CHAR_ARRAY_01d74128 + 0x200,pcVar5);
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
    _sprintf(g_CHAR_ARRAY_01d74128 + 0x300,pcVar5);
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00508960("X-Axis Sensitivity : ");
    pcVar10 = g_CHAR_ARRAY_01d74128 + 0x400;
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
    pcVar5 = g_CHAR_ARRAY_01d74128 + 0x400;
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
      cVar1 = *pcVar9;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Y-Axis Sensitivity : ");
    pcVar5 = g_CHAR_ARRAY_01d74128 + 0x500;
    do {
      cVar1 = *pcVar9;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    _sprintf(local_114,"%5.2f");
    iVar4 = 6;
    iVar6 = -1;
    pcVar9 = g_CHAR_ARRAY_01d74128 + 0x500;
    do {
      pcVar5 = pcVar9;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar5 = pcVar9 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar7;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    if (g_CGamePtr->game_control == CONTROL_MODE_MOUSE) {
      if (g_CGamePtr->invert_mouse_y_axis == 0) {
        pcVar7 = "Invert Y Axis : Off";
      }
      else {
        pcVar7 = "Invert Y Axis : On";
      }
LAB_004e922e:
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar7);
      _sprintf(g_CHAR_ARRAY_01d74128 + 0x600,pcVar7);
      iVar4 = 7;
    }
    else if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
      pcVar7 = "Calibrate";
      goto LAB_004e922e;
    }
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Control Options");
    iVar4 = core_menu_cpp_renderMenuAndGetChoice_FUN_004e7860
                      (&g_CHAR_PTR_01d74a28,iVar4,&local_14,200,pcVar7);
    wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
    pCVar3 = g_CGamePtr;
    switch(iVar4) {
    case 0:
      if (g_INT_01d737d4 == 1) {
        EVar8 = g_CGamePtr->game_control - CONTROL_MODE_MOUSE;
        g_CGamePtr->game_control = EVar8;
        if ((int)EVar8 < 0) {
          pCVar3->game_control = CONTROL_MODE_POINT_AND_CLICK;
        }
      }
      else {
        EVar8 = g_CGamePtr->game_control + CONTROL_MODE_MOUSE;
        g_CGamePtr->game_control = EVar8;
        if (3 < (int)EVar8) {
          pCVar3->game_control = CONTROL_MODE_KEYBOARD;
        }
      }
      if ((g_CGamePtr->game_control != CONTROL_MODE_POINT_AND_CLICK) &&
         (g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14] != (CHero *)0x0)) {
        (g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->player_input).action_state.walk = 0;
      }
      break;
    case 1:
      core_menu_cpp_configureCustomKeyBindings_FUN_004eae80();
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
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                         ("Adjust X-Axis Sensitivity");
      core_menu_cpp_adjustMouseSensitivity_FUN_004e80f0(&g_CGamePtr->x_mouse_sensitivity,pcVar7);
      break;
    case 5:
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                         ("Adjust Y-Axis Sensitivity");
      core_menu_cpp_adjustMouseSensitivity_FUN_004e80f0(&g_CGamePtr->y_mouse_sensitivity,pcVar7);
      break;
    case 6:
      if (g_CGamePtr->game_control == CONTROL_MODE_MOUSE) {
        g_CGamePtr->invert_mouse_y_axis = (uint)(g_CGamePtr->invert_mouse_y_axis == 0);
      }
      else if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
        core_menu_cpp_calibrateGamepad_FUN_004e7dc0();
      }
    }
    iVar4 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_ESCAPE);
    if (iVar4 != 0) {
      if (g_CGamePtr->game_control != CONTROL_MODE_GAMEPAD) {
        return;
      }
      if (g_CGamePtr->x_center != 0) {
        return;
      }
      local_114[4] = -0x4e;
      local_114[5] = -0x6c;
      local_114[6] = 'N';
      local_114[7] = '\0';
      iVar4 = core_menu_cpp_calibrateGamepad_FUN_004e7dc0();
      if (iVar4 != 0) {
        return;
      }
    }
  } while( true );
}
