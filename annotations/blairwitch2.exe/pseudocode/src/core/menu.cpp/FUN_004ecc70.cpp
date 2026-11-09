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
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  ulonglong uVar12;
  char local_114 [256];
  uint local_14;
  
  bVar11 = 0;
  iVar6 = 0x1d06b80;
  local_14 = 0;
  core_game_cpp_FUN_004b3000(g_CGamePtr);
  iVar4 = 0;
  do {
    *(int *)(iVar4 + 0x1d07480) = iVar6;
    iVar4 = iVar4 + 4;
    iVar6 = iVar6 + 0x100;
  } while (iVar4 != 0x24);
  do {
    pcVar8 = local_114;
    pcVar9 = local_114;
    core_game_cpp_FUN_004b3010(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 1;
    core_set_cpp_FUN_005344c0(this_ptr,50000,50000,0x10000);
    *(uint *)&g_CDemonSetPtr->field_0x15ae94 = 0xdac;
    core_moon_cpp_FUN_005024a0(&g_CMoonInstance);
    core_moon_cpp_FUN_00502510();
    pCVar3 = g_CGamePtr;
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 0;
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
    support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar5);
    FUN_005b7790(0x1d06b80);
switchD_004ecd3f_default:
    support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Customize Keys");
    FUN_005b7790(0x1d06c80);
    if (*(int *)&g_CGamePtr->field_0xac == 0) {
      pcVar5 = "Always run : OFF";
    }
    else {
      pcVar5 = "Always run : ON";
    }
    support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar5);
    FUN_005b7790(0x1d06d80);
    uVar2 = *(uint *)&g_CGamePtr->field_0xd8;
    if (uVar2 == 0) {
LAB_004ecdd4:
      *(uint *)&g_CGamePtr->field_0xd8 = 0;
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Aiming : Auto");
      uVar12 = CONCAT44(pcVar5,0x1d06e80);
    }
    else if (uVar2 < 2) {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Aiming : Kindof auto");
      uVar12 = CONCAT44(pcVar5,0x1d06e80);
    }
    else {
      if (uVar2 != 2) goto LAB_004ecdd4;
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Aiming : Manual");
      uVar12 = CONCAT44(pcVar5,0x1d06e80);
    }
    FUN_005b7790(uVar12);
    if (*(int *)&g_CGamePtr->field_0xdc == 0) {
      pcVar5 = "Auto use health : Off";
    }
    else {
      pcVar5 = "Auto use health : On";
    }
    support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar5);
    FUN_005b7790(0x1d06f80);
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
    FUN_005b7790
              (local_114,"%5.2f",(double)*(int *)&g_CGamePtr->field_0xb0 * _DAT_005dd0ad);
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
    FUN_005b7790
              (local_114,"%5.2f",(double)*(int *)&g_CGamePtr->field_0xb4 * _DAT_005dd0ad);
    uVar7 = 7;
    iVar4 = -1;
    pcVar8 = (char *)0x1d07180;
    do {
      pcVar5 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
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
    if (*(int *)&g_CGamePtr->field_0xd0 == 1) {
      if (*(int *)&g_CGamePtr->field_0xa8 == 0) {
        pcVar9 = "Invert Y Axis : OFF";
      }
      else {
        pcVar9 = "Invert Y Axis : ON";
      }
LAB_004ecf73:
      support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar9);
      FUN_005b7790(0x1d07280);
      uVar7 = 8;
    }
    else if (*(int *)&g_CGamePtr->field_0xd0 == 2) {
      pcVar9 = "Calibrate";
      goto LAB_004ecf73;
    }
    support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Control Options");
    uVar7 = core_menu_cpp_FUN_004eb0e0(0x1d07480,uVar7,&local_14,0x122);
    wincore_wddvmem_cpp_FUN_00589560();
    pCVar3 = g_CGamePtr;
    switch(uVar7) {
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
      *(uint *)&g_CGamePtr->field_0xac = (uint)(*(int *)&g_CGamePtr->field_0xac == 0);
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
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                         ("Adjust X-Axis sensitivity");
      core_menu_cpp_adjustMouseSensitivity_FUN_004eb7c0((int *)&g_CGamePtr->field_0xb0,pcVar9);
      break;
    case 6:
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                         ("Adjust Y-Axis sensitivity");
      core_menu_cpp_adjustMouseSensitivity_FUN_004eb7c0((int *)&g_CGamePtr->field_0xb4,pcVar9);
      break;
    case 7:
      if (*(int *)&g_CGamePtr->field_0xd0 == 1) {
        *(uint *)&g_CGamePtr->field_0xa8 = (uint)(*(int *)&g_CGamePtr->field_0xa8 == 0);
      }
      else if (*(int *)&g_CGamePtr->field_0xd0 == 2) {
        core_menu_cpp_FUN_004eb490();
      }
    }
    iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
    if ((iVar4 != 0) &&
       (((*(int *)&g_CGamePtr->field_0xd0 != 2 || (*(int *)&g_CGamePtr->field_0xb8 != 0)) ||
        (iVar4 = core_menu_cpp_FUN_004eb490(), iVar4 != 0)))) {
      return;
    }
  } while( true );
}
