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
  iVar6 = 0x1d74128;
  local_14 = 0;
  core_game_cpp_FUN_004b4430(g_CGamePtr);
  iVar4 = 0;
  do {
    *(int *)(iVar4 + 0x1d74a28) = iVar6;
    iVar4 = iVar4 + 4;
    iVar6 = iVar6 + 0x100;
  } while (iVar4 != 0x24);
  do {
    pcVar7 = local_114;
    pcVar8 = local_114;
    core_game_cpp_FUN_004b4440();
    this_ptr = g_CDemonSetPtr;
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 1;
    core_set_cpp_FUN_0053b100(this_ptr,50000,50000,0x10000);
    *(uint *)&g_CDemonSetPtr->field_0x15ae94 = 0xdac;
    core_moon_cpp_FUN_004f9670();
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 0;
    switch(*(uint *)&g_CGamePtr->field_0xd4) {
    case 0:
      pcVar5 = "Control : Keyboard";
      *(uint *)&g_CGamePtr->field_0xd4 = 0;
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
      goto switchD_004e9030_default;
    }
    support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar5);
    FUN_005a28c0(0x1d74128);
switchD_004e9030_default:
    support_newmsg_cpp_getLocalizedString_FUN_00508960("Customize Keys");
    FUN_005a28c0(0x1d74228);
    if (*(int *)&g_CGamePtr->field_0xb0 == 0) {
      pcVar5 = "Always Run : Off";
    }
    else {
      pcVar5 = "Always Run : On";
    }
    support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar5);
    FUN_005a28c0(0x1d74328);
    uVar2 = *(uint *)&g_CGamePtr->field_0xdc;
    if (uVar2 == 0) {
LAB_004e90c5:
      *(uint *)&g_CGamePtr->field_0xdc = 0;
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Aiming : Auto");
      uVar11 = CONCAT44(pcVar5,0x1d74428);
    }
    else if (uVar2 < 2) {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Aiming : Kindof auto");
      uVar11 = CONCAT44(pcVar5,0x1d74428);
    }
    else {
      if (uVar2 != 2) goto LAB_004e90c5;
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Aiming : Manual");
      uVar11 = CONCAT44(pcVar5,0x1d74428);
    }
    FUN_005a28c0(uVar11);
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00508960("X-Axis Sensitivity : ");
    pcVar9 = (char *)0x1d74528;
    do {
      cVar1 = *pcVar5;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    FUN_005a28c0
              (local_114,"%5.2f",(double)*(int *)&g_CGamePtr->field_0xb4 * _DAT_005c774e);
    iVar4 = -1;
    pcVar5 = (char *)0x1d74528;
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
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Y-Axis Sensitivity : ");
    pcVar5 = (char *)0x1d74628;
    do {
      cVar1 = *pcVar7;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    FUN_005a28c0
              (local_114,"%5.2f",(double)*(int *)&g_CGamePtr->field_0xb8 * _DAT_005c774e);
    iVar4 = 6;
    iVar6 = -1;
    pcVar7 = (char *)0x1d74628;
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
    if (*(int *)&g_CGamePtr->field_0xd4 == 1) {
      if (*(int *)&g_CGamePtr->field_0xac == 0) {
        pcVar7 = "Invert Y Axis : Off";
      }
      else {
        pcVar7 = "Invert Y Axis : On";
      }
LAB_004e922e:
      support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar7);
      FUN_005a28c0(0x1d74728);
      iVar4 = 7;
    }
    else if (*(int *)&g_CGamePtr->field_0xd4 == 2) {
      pcVar7 = "Calibrate";
      goto LAB_004e922e;
    }
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Control Options");
    iVar4 = core_menu_cpp_FUN_004e7860((char **)0x1d74a28,iVar4,&local_14,200,pcVar7);
    wincore_wddvmem_cpp_FUN_0057a8a0();
    pCVar3 = g_CGamePtr;
    switch(iVar4) {
    case 0:
      if (_DAT_01d737d4 == 1) {
        iVar4 = *(int *)&g_CGamePtr->field_0xd4 + -1;
        *(int *)&g_CGamePtr->field_0xd4 = iVar4;
        if (iVar4 < 0) {
          *(uint *)&pCVar3->field_0xd4 = 3;
        }
      }
      else {
        iVar4 = *(int *)&g_CGamePtr->field_0xd4 + 1;
        *(int *)&g_CGamePtr->field_0xd4 = iVar4;
        if (3 < iVar4) {
          *(uint *)&pCVar3->field_0xd4 = 0;
        }
      }
      if ((*(int *)&g_CGamePtr->field_0xd4 != 3) &&
         (iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04), iVar4 != 0)) {
        *(uint *)(iVar4 + 0xcdd4) = 0;
      }
      break;
    case 1:
      core_menu_cpp_FUN_004eae80();
      break;
    case 2:
      *(uint *)&g_CGamePtr->field_0xb0 = (uint)(*(int *)&g_CGamePtr->field_0xb0 == 0);
      break;
    case 3:
      if (*(int *)&g_CGamePtr->field_0xdc == 0) {
        *(uint *)&g_CGamePtr->field_0xdc = 2;
      }
      else {
        *(uint *)&g_CGamePtr->field_0xdc = 0;
      }
      break;
    case 4:
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                         ("Adjust X-Axis Sensitivity");
      core_menu_cpp_adjustMouseSensitivity_FUN_004e80f0((int *)&g_CGamePtr->field_0xb4,pcVar7);
      break;
    case 5:
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                         ("Adjust Y-Axis Sensitivity");
      core_menu_cpp_adjustMouseSensitivity_FUN_004e80f0((int *)&g_CGamePtr->field_0xb8,pcVar7);
      break;
    case 6:
      if (*(int *)&g_CGamePtr->field_0xd4 == 1) {
        *(uint *)&g_CGamePtr->field_0xac = (uint)(*(int *)&g_CGamePtr->field_0xac == 0);
      }
      else if (*(int *)&g_CGamePtr->field_0xd4 == 2) {
        core_menu_cpp_FUN_004e7dc0();
      }
    }
    iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78);
    if ((iVar4 != 0) &&
       (((*(int *)&g_CGamePtr->field_0xd4 != 2 || (*(int *)&g_CGamePtr->field_0xbc != 0)) ||
        (iVar4 = core_menu_cpp_FUN_004e7dc0(), iVar4 != 0)))) {
      return;
    }
  } while( true );
}
