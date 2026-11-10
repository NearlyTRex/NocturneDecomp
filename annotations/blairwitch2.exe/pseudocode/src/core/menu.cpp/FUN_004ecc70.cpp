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
  uint uVar2;
  CGame *pCVar3;
  CDemonSet *this_ptr;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  char local_114 [256];
  int local_14;
  
  bVar10 = 0;
  iVar6 = 0x1d06b80;
  local_14 = 0;
  core_game_cpp_CGame_saveClockTime_FUN_004b3000(g_CGamePtr);
  iVar4 = 0;
  do {
    *(int *)(iVar4 + 0x1d07480) = iVar6;
    iVar4 = iVar4 + 4;
    iVar6 = iVar6 + 0x100;
  } while (iVar4 != 0x24);
  do {
    pcVar7 = local_114;
    pcVar8 = local_114;
    core_game_cpp_CGame_updateDT_FUN_004b3010(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    g_CDemonSetPtr->rendering_mode = 1;
    core_set_cpp_CDemonSet_setFlatColor_FUN_005344c0(this_ptr,50000,50000,0x10000);
    g_CDemonSetPtr->ambient_base_quick = 0xdac;
    core_moon_cpp_FUN_005024a0(&g_CMoonInstance);
    core_moon_cpp_FUN_00502510();
    pCVar3 = g_CGamePtr;
    g_CDemonSetPtr->rendering_mode = 0;
    switch(*(uint *)&pCVar3->field_0xd0) {
    case 0:
      pcVar5 = ">Control : Keyboard" + 1;
      *(uint *)&pCVar3->field_0xd0 = 0;
      break;
    case 1:
      pcVar5 = "Control : Keyboard/Mouse";
      break;
    case 2:
      pcVar5 = "Control : Gamepad";
      break;
    case 3:
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
    uVar2 = *(uint *)&g_CGamePtr->field_0xd8;
    if (uVar2 == 0) {
LAB_004ecdd4:
      *(uint *)&g_CGamePtr->field_0xd8 = 0;
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Aiming : Auto");
    }
    else if (uVar2 < 2) {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Aiming : Kindof auto");
    }
    else {
      if (uVar2 != 2) goto LAB_004ecdd4;
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Aiming : Manual");
    }
    _sprintf((char *)0x1d06e80,pcVar5);
    if (*(int *)&g_CGamePtr->field_0xdc == 0) {
      pcVar5 = "Auto use health : Off";
    }
    else {
      pcVar5 = "Auto use health : On";
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar5);
    _sprintf((char *)0x1d06f80,pcVar5);
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("X-axis sensitivity : ");
    pcVar9 = (char *)0x1d07080;
    do {
      cVar1 = *pcVar5;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    _sprintf(local_114,"%5.2f");
    iVar4 = -1;
    pcVar5 = (char *)0x1d07080;
    do {
      pcVar9 = pcVar5;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar5 + (uint)bVar10 * -2 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar1 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar1 = *pcVar7;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Y-axis sensitivity : ");
    pcVar5 = (char *)0x1d07180;
    do {
      cVar1 = *pcVar7;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    _sprintf(local_114,"%5.2f");
    iVar4 = 7;
    iVar6 = -1;
    pcVar7 = (char *)0x1d07180;
    do {
      pcVar5 = pcVar7;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar5 = pcVar7 + (uint)bVar10 * -2 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar8;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    if (*(int *)&g_CGamePtr->field_0xd0 == 1) {
      if (g_CGamePtr->invert_mouse_y_axis == 0) {
        pcVar8 = "Invert Y Axis : OFF";
      }
      else {
        pcVar8 = "Invert Y Axis : ON";
      }
LAB_004ecf73:
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar8);
      _sprintf((char *)0x1d07280,pcVar8);
      iVar4 = 8;
    }
    else if (*(int *)&g_CGamePtr->field_0xd0 == 2) {
      pcVar8 = "Calibrate";
      goto LAB_004ecf73;
    }
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Control Options");
    iVar4 = core_menu_cpp_FUN_004eb0e0((char **)0x1d07480,iVar4,&local_14,0x122,pcVar8);
    wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
    pCVar3 = g_CGamePtr;
    switch(iVar4) {
    case 0:
      if (_DAT_01d0612c == 1) {
        iVar4 = *(int *)&g_CGamePtr->field_0xd0 + -1;
        *(int *)&g_CGamePtr->field_0xd0 = iVar4;
        if (iVar4 < 0) {
          *(uint *)&pCVar3->field_0xd0 = 3;
        }
      }
      else {
        iVar4 = *(int *)&g_CGamePtr->field_0xd0 + 1;
        *(int *)&g_CGamePtr->field_0xd0 = iVar4;
        if (3 < iVar4) {
          *(uint *)&pCVar3->field_0xd0 = 0;
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
      if (*(int *)&g_CGamePtr->field_0xd8 == 0) {
        *(uint *)&g_CGamePtr->field_0xd8 = 2;
      }
      else {
        *(uint *)&g_CGamePtr->field_0xd8 = 0;
      }
      break;
    case 4:
      *(uint *)&g_CGamePtr->field_0xdc = (uint)(*(int *)&g_CGamePtr->field_0xdc == 0);
      break;
    case 5:
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                         ("Adjust X-Axis sensitivity");
      core_menu_cpp_adjustMouseSensitivity_FUN_004eb7c0(&g_CGamePtr->x_mouse_sensitivity,pcVar8);
      break;
    case 6:
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                         ("Adjust Y-Axis sensitivity");
      core_menu_cpp_adjustMouseSensitivity_FUN_004eb7c0(&g_CGamePtr->y_mouse_sensitivity,pcVar8);
      break;
    case 7:
      if (*(int *)&g_CGamePtr->field_0xd0 == 1) {
        g_CGamePtr->invert_mouse_y_axis = (uint)(g_CGamePtr->invert_mouse_y_axis == 0);
      }
      else if (*(int *)&g_CGamePtr->field_0xd0 == 2) {
        core_menu_cpp_FUN_004eb490();
      }
    }
    iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
    if ((iVar4 != 0) &&
       (((*(int *)&g_CGamePtr->field_0xd0 != 2 || (g_CGamePtr->x_center != 0)) ||
        (iVar4 = core_menu_cpp_FUN_004eb490(), iVar4 != 0)))) {
      return;
    }
  } while( true );
}
