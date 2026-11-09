// Name: core_menu.cpp_FUN_004eed60
// Address: 004eed60
// Address Range: [[004eed60, 004f0221]]
// Convention: unknown
// Signature: void core_menu_cpp_FUN_004eed60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_menu_cpp_FUN_004eed60(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  byte *puVar25;
  int iVar26;
  int iVar27;
  char *pcVar28;
  int iVar29;
  char *pcVar30;
  bool bVar31;
  byte bVar32;
  uint window_flags;
  CPickList local_a94;
  char local_6d4 [512];
  char acStack_4d4 [512];
  char local_2d4 [512];
  char local_d4 [200];
  int local_c;
  
  bVar32 = 0;
  if (((*(int *)&g_CGamePtr->field_0xd0 == 2) && (*(int *)&g_CGamePtr->field_0xb8 == 0)) &&
     (iVar29 = core_menu_cpp_FUN_004eb490(), iVar29 == 0)) {
    return;
  }
  local_c = 0;
LAB_004eed8e:
  do {
    _DAT_01d086f0 = 0;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Forward");
    puVar25 = &g_CGamePtr->field_0x28;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(byte **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = puVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005dd3aa);
    puVar25 = &g_CGamePtr->field_0x2c;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(byte **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = puVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    if (*(int *)&g_CGamePtr->field_0xac == 0) {
      pcVar2 = &DAT_005dd3b4;
    }
    else {
      pcVar2 = &DAT_005dd3af;
    }
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar2);
    puVar25 = &g_CGamePtr->field_0x30;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(byte **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = puVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Strafe on");
    puVar25 = &g_CGamePtr->field_0x34;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(byte **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = puVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Strafe left");
    puVar25 = &g_CGamePtr->field_0x38;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(byte **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = puVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Strafe right");
    puVar25 = &g_CGamePtr->field_0x3c;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(byte **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = puVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Turn left");
    puVar25 = &g_CGamePtr->field_0x44;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(byte **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = puVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Turn right");
    puVar25 = &g_CGamePtr->field_0x40;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(byte **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = puVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Fire Gun/ Action");
    puVar25 = &g_CGamePtr->field_0x48;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(byte **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = puVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Use item");
    puVar25 = &g_CGamePtr->field_0x4c;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(byte **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = puVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Lantern");
    puVar25 = &g_CGamePtr->field_0x50;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(byte **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = puVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Draw Gun");
    puVar25 = &g_CGamePtr->field_0x68;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(byte **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = puVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Point up");
    puVar25 = &g_CGamePtr->field_0x74;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(byte **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = puVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Point down");
    puVar25 = &g_CGamePtr->field_0x78;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(byte **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = puVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Select Revolver");
    puVar25 = &g_CGamePtr->field_0x7c;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(byte **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = puVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Select Sword / Axe");
    puVar25 = &g_CGamePtr->field_0x80;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(byte **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = puVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Select Cross");
    puVar25 = &g_CGamePtr->field_0x84;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(byte **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = puVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Next weapon");
    puVar25 = &g_CGamePtr->field_0x90;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(byte **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = puVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Previous weapon");
    puVar25 = &g_CGamePtr->field_0x94;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(byte **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = puVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Next item");
    puVar25 = &g_CGamePtr->field_0x98;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(byte **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = puVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Previous item");
    puVar25 = &g_CGamePtr->field_0x9c;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(byte **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = puVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Item description");
    puVar25 = &g_CGamePtr->field_0xa0;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(byte **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = puVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Next ammo");
    puVar25 = &g_CGamePtr->field_0xa4;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(byte **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = puVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Drop item or weapon");
    puVar25 = &g_CGamePtr->field_0xaf0;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(byte **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = puVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    engine_special_cpp_clearScreen_FUN_0055b1f0();
    wincore_wddvmem_cpp_FUN_00589560();
    shape_edittool_cpp_CPickList_ctor_FUN_00481fc0(&local_a94);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Restore defaults");
    iVar29 = 0;
    shape_edittool_cpp_CStrList_add_FUN_00480e70((CStrList *)&local_a94,pcVar2);
    if (0 < _DAT_01d086f0) {
      iVar26 = 0x1d08790;
      iVar27 = 0;
      do {
        uVar3 = core_menu_cpp_getKeyDisplayName_FUN_004ee960
                          (**(uint **)(&DAT_01d086f4 + iVar27));
        FUN_005b7790(local_d4,"%s\t%s",iVar26,uVar3);
        iVar27 = iVar27 + 4;
        iVar29 = iVar29 + 1;
        iVar26 = iVar26 + 0x28;
        shape_edittool_cpp_CStrList_add_FUN_00480e70((CStrList *)&local_a94,local_d4);
      } while (iVar29 < _DAT_01d086f0);
    }
    shape_edittool_cpp_CPickList_setOkButtonText_FUN_00482150(&local_a94,"Select");
    shape_edittool_cpp_CPickList_setCancelButtonText_FUN_004821c0(&local_a94,"Close");
    shape_edittool_cpp_FUN_00482240(&local_a94,1);
    window_flags = 0;
    iVar29 = local_c;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Edit key settings");
    iVar29 = shape_edittool_cpp_FUN_00482250(&local_a94,pcVar2,iVar29,window_flags);
    if (iVar29 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&local_a94,0);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Forward");
      iVar29 = core_menu_cpp_FUN_004eeba0((EInputCodeType *)&g_CGamePtr->field_0x28,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005dd5c7);
      iVar26 = core_menu_cpp_FUN_004eeba0((EInputCodeType *)&g_CGamePtr->field_0x2c,pcVar2);
      if (*(int *)&g_CGamePtr->field_0xac == 0) {
        pcVar2 = &DAT_005dd5d1;
      }
      else {
        pcVar2 = &DAT_005dd5cc;
      }
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar2);
      iVar27 = core_menu_cpp_FUN_004eeba0((EInputCodeType *)&g_CGamePtr->field_0x30,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Strafe on");
      iVar4 = core_menu_cpp_FUN_004eeba0((EInputCodeType *)&g_CGamePtr->field_0x34,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Strafe left");
      iVar5 = core_menu_cpp_FUN_004eeba0((EInputCodeType *)&g_CGamePtr->field_0x38,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Strafe right");
      iVar6 = core_menu_cpp_FUN_004eeba0((EInputCodeType *)&g_CGamePtr->field_0x3c,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Turn left");
      iVar7 = core_menu_cpp_FUN_004eeba0((EInputCodeType *)&g_CGamePtr->field_0x44,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Turn right");
      iVar8 = core_menu_cpp_FUN_004eeba0((EInputCodeType *)&g_CGamePtr->field_0x40,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Fire / Action");
      iVar9 = core_menu_cpp_FUN_004eeba0((EInputCodeType *)&g_CGamePtr->field_0x48,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Use item");
      iVar10 = core_menu_cpp_FUN_004eeba0((EInputCodeType *)&g_CGamePtr->field_0x4c,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Lantern");
      iVar11 = core_menu_cpp_FUN_004eeba0((EInputCodeType *)&g_CGamePtr->field_0x50,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005dd62c);
      iVar12 = core_menu_cpp_FUN_004eeba0((EInputCodeType *)&g_CGamePtr->field_0x68,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Point up");
      iVar13 = core_menu_cpp_FUN_004eeba0((EInputCodeType *)&g_CGamePtr->field_0x74,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Point down");
      iVar14 = core_menu_cpp_FUN_004eeba0((EInputCodeType *)&g_CGamePtr->field_0x78,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Select Revolver");
      iVar15 = core_menu_cpp_FUN_004eeba0((EInputCodeType *)&g_CGamePtr->field_0x7c,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Select Sword / Axe");
      iVar16 = core_menu_cpp_FUN_004eeba0((EInputCodeType *)&g_CGamePtr->field_0x80,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Select Cross");
      iVar17 = core_menu_cpp_FUN_004eeba0((EInputCodeType *)&g_CGamePtr->field_0x84,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Next weapon");
      iVar18 = core_menu_cpp_FUN_004eeba0((EInputCodeType *)&g_CGamePtr->field_0x90,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Previous weapon");
      iVar19 = core_menu_cpp_FUN_004eeba0((EInputCodeType *)&g_CGamePtr->field_0x94,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Next item");
      iVar20 = core_menu_cpp_FUN_004eeba0((EInputCodeType *)&g_CGamePtr->field_0x98,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Previous item");
      iVar21 = core_menu_cpp_FUN_004eeba0((EInputCodeType *)&g_CGamePtr->field_0x9c,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Item description");
      iVar22 = core_menu_cpp_FUN_004eeba0((EInputCodeType *)&g_CGamePtr->field_0xa0,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Next ammo");
      iVar23 = core_menu_cpp_FUN_004eeba0((EInputCodeType *)&g_CGamePtr->field_0xa4,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Drop item or weapon");
      iVar24 = core_menu_cpp_FUN_004eeba0((EInputCodeType *)&g_CGamePtr->field_0xaf0,pcVar2);
      if (((((((((((((((((((((((iVar29 == 0 && iVar26 == 0) && iVar27 == 0) && iVar4 == 0) &&
                            iVar5 == 0) && iVar6 == 0) && iVar7 == 0) && iVar8 == 0) && iVar9 == 0)
                       && iVar10 == 0) && iVar11 == 0) && iVar12 == 0) && iVar13 == 0) &&
                   iVar14 == 0) && iVar15 == 0) && iVar16 == 0) && iVar17 == 0) && iVar18 == 0) &&
              iVar19 == 0) && iVar20 == 0) && iVar21 == 0) && iVar22 == 0) && iVar23 == 0) &&
          iVar24 == 0) {
        return;
      }
      core_game_cpp_FUN_004b6e10(g_CGamePtr);
      shape_edittool_cpp_FUN_0047be40(g_CEditorToolsPtr,"One or more keys not valid.  Restoring default controls.");
      return;
    }
    if (iVar29 != 0) {
      iVar26 = iVar29 + -1;
      local_c = iVar29;
      switch(**(uint **)(&DAT_01d086f4 + iVar26 * 4)) {
      case 0x251:
      case 0x252:
      case 0x253:
      case 0x254:
        pcVar2 = local_2d4;
        pcVar28 = (char *)(iVar26 * 0x28 + 0x1d08790);
        do {
          cVar1 = *pcVar28;
          *pcVar2 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar28[1];
          pcVar28 = pcVar28 + 2;
          pcVar2[1] = cVar1;
          pcVar2 = pcVar2 + 2;
        } while (cVar1 != '\0');
        pcVar28 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                            (" is assigned to the gamepad.  Can't assign a key.");
        iVar29 = -1;
        pcVar2 = local_2d4;
        do {
          pcVar30 = pcVar2;
          if (iVar29 == 0) break;
          iVar29 = iVar29 + -1;
          pcVar30 = pcVar2 + (uint)bVar32 * -2 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar30;
        } while (cVar1 != '\0');
        pcVar30 = pcVar30 + -1;
        do {
          cVar1 = *pcVar28;
          *pcVar30 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar28[1];
          pcVar28 = pcVar28 + 2;
          pcVar30[1] = cVar1;
          pcVar30 = pcVar30 + 2;
        } while (cVar1 != '\0');
        shape_edittool_cpp_FUN_0047be90(g_CEditorToolsPtr,local_2d4);
        break;
      case 0x255:
      case 0x256:
        pcVar2 = local_6d4;
        pcVar28 = (char *)(iVar26 * 0x28 + 0x1d08790);
        do {
          cVar1 = *pcVar28;
          *pcVar2 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar28[1];
          pcVar28 = pcVar28 + 2;
          pcVar2[1] = cVar1;
          pcVar2 = pcVar2 + 2;
        } while (cVar1 != '\0');
        pcVar28 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                            (" is assigned to the mouse.  Can't assign a key.");
        iVar29 = -1;
        pcVar2 = local_6d4;
        do {
          pcVar30 = pcVar2;
          if (iVar29 == 0) break;
          iVar29 = iVar29 + -1;
          pcVar30 = pcVar2 + (uint)bVar32 * -2 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar30;
        } while (cVar1 != '\0');
        pcVar30 = pcVar30 + -1;
        do {
          cVar1 = *pcVar28;
          *pcVar30 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar28[1];
          pcVar28 = pcVar28 + 2;
          pcVar30[1] = cVar1;
          pcVar30 = pcVar30 + 2;
        } while (cVar1 != '\0');
        shape_edittool_cpp_FUN_0047be40(g_CEditorToolsPtr,local_6d4);
        break;
      default:
        while( true ) {
          if (*(int *)&g_CGamePtr->field_0xd0 == 2) {
            core_game_cpp_CGame_resetKeyState_FUN_004b7140(g_CGamePtr);
          }
          iVar29 = -1;
          iVar27 = 0;
          do {
            iVar4 = (*(code *)**(uint **)0x01D02F84)(0x01D02F84,iVar27);
            if ((iVar4 != 0) && (bVar31 = -1 < iVar29, iVar29 = iVar27, bVar31)) goto LAB_004efc41;
            iVar27 = iVar27 + 1;
          } while (iVar27 < 600);
          if (iVar29 == -1) break;
LAB_004efc41:
          pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                             ("OK - you can release the key now...");
          shape_edittool_cpp_FUN_0047be90(g_CEditorToolsPtr,pcVar2);
          iVar29 = (*(code *)**(uint **)0x01D02F84)(0x01D02F84,1);
          if (iVar29 != 0) break;
          wincore_wddvmem_cpp_FUN_00589560();
        }
        iVar29 = (*(code *)**(uint **)0x01D02F84)(0x01D02F84,1);
        if (iVar29 != 0) {
          engine_2d_c_clearInputAndWait_FUN_004032b0();
          shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&local_a94,0);
          goto LAB_004eed8e;
        }
        pcVar28 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                            ("Press new key or button for ");
        pcVar2 = acStack_4d4;
        do {
          cVar1 = *pcVar28;
          *pcVar2 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar28[1];
          pcVar28 = pcVar28 + 2;
          pcVar2[1] = cVar1;
          pcVar2 = pcVar2 + 2;
        } while (cVar1 != '\0');
        pcVar28 = (char *)(iVar26 * 0x28 + 0x1d08790);
        iVar29 = -1;
        pcVar2 = acStack_4d4;
        do {
          pcVar30 = pcVar2;
          if (iVar29 == 0) break;
          iVar29 = iVar29 + -1;
          pcVar30 = pcVar2 + (uint)bVar32 * -2 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar30;
        } while (cVar1 != '\0');
        pcVar30 = pcVar30 + -1;
        do {
          cVar1 = *pcVar28;
          *pcVar30 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar28[1];
          pcVar28 = pcVar28 + 2;
          pcVar30[1] = cVar1;
          pcVar30 = pcVar30 + 2;
        } while (cVar1 != '\0');
        shape_edittool_cpp_FUN_0047be90(g_CEditorToolsPtr,acStack_4d4);
        engine_keys_cpp_CKeys_toggleInputMask_FUN_004dfee0(0x01D02F84,1);
LAB_004efd32:
        do {
          wincore_wddvmem_cpp_FUN_00589560();
          if (*(int *)&g_CGamePtr->field_0xd0 == 2) {
            core_game_cpp_CGame_resetKeyState_FUN_004b7140(g_CGamePtr);
          }
          iVar29 = -1;
          iVar27 = 0;
          do {
            iVar4 = (*(code *)**(uint **)0x01D02F84)(0x01D02F84,iVar27);
            if ((iVar4 != 0) && (bVar31 = -1 < iVar29, iVar29 = iVar27, bVar31)) goto LAB_004efd32;
            iVar27 = iVar27 + 1;
          } while (iVar27 < 600);
        } while (iVar29 < 0);
        **(int **)(&DAT_01d086f4 + iVar26 * 4) = iVar29;
        pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                           ("OK - you can release the key now...");
        shape_edittool_cpp_FUN_0047be90(g_CEditorToolsPtr,pcVar2);
        while( true ) {
          if (*(int *)&g_CGamePtr->field_0xd0 == 2) {
            core_game_cpp_CGame_resetKeyState_FUN_004b7140(g_CGamePtr);
          }
          iVar29 = -1;
          iVar27 = 0;
          do {
            iVar4 = (*(code *)**(uint **)0x01D02F84)(0x01D02F84,iVar27);
            if ((iVar4 != 0) && (bVar31 = -1 < iVar29, iVar29 = iVar27, bVar31)) goto LAB_004efdcb;
            iVar27 = iVar27 + 1;
          } while (iVar27 < 600);
          if (iVar29 == -1) break;
LAB_004efdcb:
          wincore_wddvmem_cpp_FUN_00589560();
        }
        iVar29 = 0;
        if (0 < _DAT_01d086f0) {
          iVar27 = 0;
          do {
            if ((iVar29 != iVar26) &&
               (**(int **)(&DAT_01d086f4 + iVar27) == **(int **)(&DAT_01d086f4 + iVar26 * 4))) {
              **(int **)(&DAT_01d086f4 + iVar27) = 599;
            }
            iVar29 = iVar29 + 1;
            iVar27 = iVar27 + 4;
          } while (iVar29 < _DAT_01d086f0);
        }
        engine_keys_cpp_CKeys_toggleInputMask_FUN_004dfee0(0x01D02F84,0);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&local_a94,0);
      goto LAB_004eed8e;
    }
    core_game_cpp_FUN_004b6e10(g_CGamePtr);
    shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&local_a94,0);
  } while( true );
}
