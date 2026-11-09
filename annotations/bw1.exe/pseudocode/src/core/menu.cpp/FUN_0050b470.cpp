// Name: core_menu.cpp_FUN_0050b470
// Address: 0050b470
// Address Range: [[0050b470, 0050ba10]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_FUN_0050b470(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_FUN_0050b470(void)

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
  ulonglong uVar11;
  char local_114 [256];
  int local_14;
  
  bVar10 = 0;
  iVar6 = 0x1d1f6e0;
  local_14 = 0;
  core_game_cpp_CGame_saveClockTime_FUN_004cbf10(g_CGamePtr);
  iVar4 = 0;
  do {
    *(int *)(iVar4 + 0x1d1ffe0) = iVar6;
    iVar4 = iVar4 + 4;
    iVar6 = iVar6 + 0x100;
  } while (iVar4 != 0x24);
  do {
    pcVar7 = local_114;
    pcVar8 = local_114;
    core_game_cpp_FUN_004cbf20();
    this_ptr = g_CDemonSetPtr;
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 1;
    core_set_cpp_FUN_00555770(this_ptr,50000,50000,0x10000);
    *(uint *)&g_CDemonSetPtr->field_0x15ae94 = 0xdac;
    core_moon_cpp_FUN_00521e40();
    pCVar3 = g_CGamePtr;
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 0;
    switch(*(uint *)&pCVar3->field_0xd0) {
    case 0:
      pcVar5 = "Control : Keyboard";
      *(uint *)&pCVar3->field_0xd0 = 0;
      break;
    case 1:
      pcVar5 = "Control : Keyboard/Mouse";
      break;
    case 2:
      pcVar5 = "Control : Gamepad";
      break;
    case 3:
      pcVar5 = "Control : Point & Click";
      break;
    default:
      goto switchD_0050b521_default;
    }
    support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar5);
    FUN_005bfb40(0x1d1f6e0);
switchD_0050b521_default:
    support_newmsg_cpp_getLocalizedString_FUN_00531090("Customize Keys");
    FUN_005bfb40(0x1d1f7e0);
    if (*(int *)&g_CGamePtr->field_0xac == 0) {
      pcVar5 = "Always run : OFF";
    }
    else {
      pcVar5 = "Always run : ON";
    }
    support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar5);
    FUN_005bfb40(0x1d1f8e0);
    uVar2 = *(uint *)&g_CGamePtr->field_0xd8;
    if (uVar2 == 0) {
LAB_0050b5b6:
      *(uint *)&g_CGamePtr->field_0xd8 = 0;
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Aiming : Auto");
      uVar11 = CONCAT44(pcVar5,0x1d1f9e0);
    }
    else if (uVar2 < 2) {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Aiming : Kindof auto");
      uVar11 = CONCAT44(pcVar5,0x1d1f9e0);
    }
    else {
      if (uVar2 != 2) goto LAB_0050b5b6;
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Aiming : Manual");
      uVar11 = CONCAT44(pcVar5,0x1d1f9e0);
    }
    FUN_005bfb40(uVar11);
    if (*(int *)&g_CGamePtr->field_0xdc == 0) {
      pcVar5 = "Auto use health : Off";
    }
    else {
      pcVar5 = "Auto use health : On";
    }
    support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar5);
    FUN_005bfb40(0x1d1fae0);
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00531090("X-axis sensitivity : ");
    pcVar9 = (char *)0x1d1fbe0;
    do {
      cVar1 = *pcVar5;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    FUN_005bfb40
              (local_114,"%5.2f",(double)*(int *)&g_CGamePtr->field_0xb0 * _DAT_005e801a);
    iVar4 = -1;
    pcVar5 = (char *)0x1d1fbe0;
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
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Y-axis sensitivity : ");
    pcVar5 = (char *)0x1d1fce0;
    do {
      cVar1 = *pcVar7;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    FUN_005bfb40
              (local_114,"%5.2f",(double)*(int *)&g_CGamePtr->field_0xb4 * _DAT_005e801a);
    iVar4 = 7;
    iVar6 = -1;
    pcVar7 = (char *)0x1d1fce0;
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
      if (*(int *)&g_CGamePtr->field_0xa8 == 0) {
        pcVar8 = "Invert Y Axis : OFF";
      }
      else {
        pcVar8 = "Invert Y Axis : ON";
      }
LAB_0050b755:
      support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar8);
      FUN_005bfb40(0x1d1fde0);
      iVar4 = 8;
    }
    else if (*(int *)&g_CGamePtr->field_0xd0 == 2) {
      pcVar8 = "Calibrate";
      goto LAB_0050b755;
    }
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Control Options");
    iVar4 = core_menu_cpp_renderMenuAndGetChoice_FUN_00509e20
                      ((char **)0x1d1ffe0,iVar4,&local_14,0x32,pcVar8);
    wincore_wddvmem_cpp_FUN_005acff0();
    pCVar3 = g_CGamePtr;
    switch(iVar4) {
    case 0:
      if (_DAT_01d1ee8c == 1) {
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
      if ((*(int *)&g_CGamePtr->field_0xd0 != 3) &&
         (iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4), iVar4 != 0)) {
        *(uint *)(iVar4 + 0xc1d8) = 0;
      }
      break;
    case 1:
      core_menu_cpp_FUN_0050d640();
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
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         ("Adjust X-Axis sensitivity");
      core_menu_cpp_adjustMouseSensitivity_FUN_0050a5e0((int *)&g_CGamePtr->field_0xb0,pcVar8);
      break;
    case 6:
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         ("Adjust Y-Axis sensitivity");
      core_menu_cpp_adjustMouseSensitivity_FUN_0050a5e0((int *)&g_CGamePtr->field_0xb4,pcVar8);
      break;
    case 7:
      if (*(int *)&g_CGamePtr->field_0xd0 == 1) {
        *(uint *)&g_CGamePtr->field_0xa8 = (uint)(*(int *)&g_CGamePtr->field_0xa8 == 0);
      }
      else if (*(int *)&g_CGamePtr->field_0xd0 == 2) {
        core_menu_cpp_FUN_0050a2b0();
      }
    }
    iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0);
    if ((iVar4 != 0) &&
       (((*(int *)&g_CGamePtr->field_0xd0 != 2 || (*(int *)&g_CGamePtr->field_0xb8 != 0)) ||
        (iVar4 = core_menu_cpp_FUN_0050a2b0(), iVar4 != 0)))) {
      return;
    }
  } while( true );
}
