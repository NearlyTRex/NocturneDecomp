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
  int iVar3;
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
  int *piVar24;
  EInputCodeType EVar25;
  int iVar26;
  int iVar27;
  char *pcVar28;
  int iVar29;
  EInputCodeType EVar30;
  char *pcVar31;
  bool bVar32;
  byte bVar33;
  uint window_flags;
  CPickList local_a94;
  char local_6d4 [512];
  char acStack_4d4 [512];
  char local_2d4 [512];
  char local_d4 [200];
  int local_c;
  
  bVar33 = 0;
  if (((g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) && (g_CGamePtr->x_center == 0)) &&
     (iVar29 = core_menu_cpp_calibrateGamepad_FUN_004eb490(), iVar29 == 0)) {
    return;
  }
  local_c = 0;
LAB_004eed8e:
  do {
    _DAT_01d086f0 = 0;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Forward");
    piVar24 = &g_CGamePtr->key_walk;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = piVar24;
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
    piVar24 = &g_CGamePtr->key_backup;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = piVar24;
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
    if (g_CGamePtr->always_run == 0) {
      pcVar2 = &DAT_005dd3b4;
    }
    else {
      pcVar2 = &DAT_005dd3af;
    }
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar2);
    piVar24 = &g_CGamePtr->key_run;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = piVar24;
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
    piVar24 = &g_CGamePtr->key_strafe;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = piVar24;
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
    piVar24 = &g_CGamePtr->key_strafe_left;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = piVar24;
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
    piVar24 = &g_CGamePtr->key_strafe_right;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = piVar24;
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
    piVar24 = &g_CGamePtr->key_left;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = piVar24;
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
    piVar24 = &g_CGamePtr->key_right;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = piVar24;
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
    piVar24 = &g_CGamePtr->key_fire;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = piVar24;
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
    piVar24 = &g_CGamePtr->key_use_item;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = piVar24;
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
    piVar24 = &g_CGamePtr->key_light;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = piVar24;
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
    piVar24 = &g_CGamePtr->key_draw;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = piVar24;
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
    piVar24 = &g_CGamePtr->key_point_up;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = piVar24;
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
    piVar24 = &g_CGamePtr->key_point_down;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = piVar24;
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
    piVar24 = &g_CGamePtr->key_weapon_1;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = piVar24;
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
    piVar24 = &g_CGamePtr->key_weapon_2;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = piVar24;
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
    piVar24 = &g_CGamePtr->key_weapon_3;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = piVar24;
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
    piVar24 = &g_CGamePtr->key_next_weapon;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = piVar24;
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
    piVar24 = &g_CGamePtr->key_prev_weapon;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = piVar24;
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
    piVar24 = &g_CGamePtr->key_next_item;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = piVar24;
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
    piVar24 = &g_CGamePtr->key_prev_item;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = piVar24;
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
    piVar24 = &g_CGamePtr->key_item_desc;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = piVar24;
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
    piVar24 = &g_CGamePtr->key_next_ammo;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = piVar24;
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
    piVar24 = &g_CGamePtr->key_drop;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      core_main_c_FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int **)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = piVar24;
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
    wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
    shape_edittool_cpp_CPickList_ctor_FUN_00481fc0(&local_a94);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Restore defaults");
    iVar29 = 0;
    shape_edittool_cpp_CStrList_add_FUN_00480e70(&local_a94.base,pcVar2);
    if (0 < _DAT_01d086f0) {
      iVar27 = 0;
      do {
        core_menu_cpp_getKeyDisplayName_FUN_004ee960(**(EInputCodeType **)(&DAT_01d086f4 + iVar27));
        _sprintf(local_d4,"%s\t%s");
        iVar27 = iVar27 + 4;
        iVar29 = iVar29 + 1;
        shape_edittool_cpp_CStrList_add_FUN_00480e70(&local_a94.base,local_d4);
      } while (iVar29 < _DAT_01d086f0);
    }
    shape_edittool_cpp_CPickList_setOkButtonText_FUN_00482150(&local_a94,"Select");
    shape_edittool_cpp_CPickList_setCancelButtonText_FUN_004821c0(&local_a94,"Close");
    shape_edittool_cpp_CPickList_setSelectedResult_FUN_00482240(&local_a94,1);
    window_flags = 0;
    iVar29 = local_c;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Edit key settings");
    iVar29 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00482250
                       (&local_a94,pcVar2,iVar29,window_flags);
    if (iVar29 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&local_a94,0);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Forward");
      iVar29 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eeba0
                         ((EInputCodeType *)&g_CGamePtr->key_walk,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005dd5c7);
      iVar27 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eeba0
                         ((EInputCodeType *)&g_CGamePtr->key_backup,pcVar2);
      if (g_CGamePtr->always_run == 0) {
        pcVar2 = &DAT_005dd5d1;
      }
      else {
        pcVar2 = &DAT_005dd5cc;
      }
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar2);
      iVar26 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eeba0
                         ((EInputCodeType *)&g_CGamePtr->key_run,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Strafe on");
      iVar3 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eeba0
                        ((EInputCodeType *)&g_CGamePtr->key_strafe,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Strafe left");
      iVar4 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eeba0
                        ((EInputCodeType *)&g_CGamePtr->key_strafe_left,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Strafe right");
      iVar5 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eeba0
                        ((EInputCodeType *)&g_CGamePtr->key_strafe_right,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Turn left");
      iVar6 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eeba0
                        ((EInputCodeType *)&g_CGamePtr->key_left,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Turn right");
      iVar7 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eeba0
                        ((EInputCodeType *)&g_CGamePtr->key_right,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Fire / Action");
      iVar8 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eeba0
                        ((EInputCodeType *)&g_CGamePtr->key_fire,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Use item");
      iVar9 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eeba0
                        ((EInputCodeType *)&g_CGamePtr->key_use_item,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Lantern");
      iVar10 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eeba0
                         ((EInputCodeType *)&g_CGamePtr->key_light,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005dd62c);
      iVar11 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eeba0
                         ((EInputCodeType *)&g_CGamePtr->key_draw,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Point up");
      iVar12 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eeba0
                         ((EInputCodeType *)&g_CGamePtr->key_point_up,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Point down");
      iVar13 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eeba0
                         ((EInputCodeType *)&g_CGamePtr->key_point_down,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Select Revolver");
      iVar14 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eeba0
                         ((EInputCodeType *)&g_CGamePtr->key_weapon_1,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Select Sword / Axe");
      iVar15 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eeba0
                         ((EInputCodeType *)&g_CGamePtr->key_weapon_2,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Select Cross");
      iVar16 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eeba0
                         ((EInputCodeType *)&g_CGamePtr->key_weapon_3,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Next weapon");
      iVar17 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eeba0
                         ((EInputCodeType *)&g_CGamePtr->key_next_weapon,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Previous weapon");
      iVar18 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eeba0
                         ((EInputCodeType *)&g_CGamePtr->key_prev_weapon,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Next item");
      iVar19 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eeba0
                         ((EInputCodeType *)&g_CGamePtr->key_next_item,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Previous item");
      iVar20 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eeba0
                         ((EInputCodeType *)&g_CGamePtr->key_prev_item,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Item description");
      iVar21 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eeba0
                         ((EInputCodeType *)&g_CGamePtr->key_item_desc,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Next ammo");
      iVar22 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eeba0
                         ((EInputCodeType *)&g_CGamePtr->key_next_ammo,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Drop item or weapon");
      iVar23 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eeba0
                         ((EInputCodeType *)&g_CGamePtr->key_drop,pcVar2);
      if (((((((((((((((((((((((iVar29 == 0 && iVar27 == 0) && iVar26 == 0) && iVar3 == 0) &&
                            iVar4 == 0) && iVar5 == 0) && iVar6 == 0) && iVar7 == 0) && iVar8 == 0)
                       && iVar9 == 0) && iVar10 == 0) && iVar11 == 0) && iVar12 == 0) && iVar13 == 0
                   ) && iVar14 == 0) && iVar15 == 0) && iVar16 == 0) && iVar17 == 0) && iVar18 == 0)
             && iVar19 == 0) && iVar20 == 0) && iVar21 == 0) && iVar22 == 0) && iVar23 == 0) {
        return;
      }
      core_game_cpp_CGame_restoreDefaultControls_FUN_004b6e10(g_CGamePtr);
      shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                (g_CEditorToolsPtr,"One or more keys not valid.  Restoring default controls.");
      return;
    }
    if (iVar29 != 0) {
      iVar27 = iVar29 + -1;
      local_c = iVar29;
      switch(**(uint **)(&DAT_01d086f4 + iVar27 * 4)) {
      case 0x251:
      case 0x252:
      case 0x253:
      case 0x254:
        pcVar2 = local_2d4;
        pcVar28 = (char *)(iVar27 * 0x28 + 0x1d08790);
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
          pcVar31 = pcVar2;
          if (iVar29 == 0) break;
          iVar29 = iVar29 + -1;
          pcVar31 = pcVar2 + (uint)bVar33 * -2 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar31;
        } while (cVar1 != '\0');
        pcVar31 = pcVar31 + -1;
        do {
          cVar1 = *pcVar28;
          *pcVar31 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar28[1];
          pcVar28 = pcVar28 + 2;
          pcVar31[1] = cVar1;
          pcVar31 = pcVar31 + 2;
        } while (cVar1 != '\0');
        shape_edittool_cpp_FUN_0047be90(g_CEditorToolsPtr,local_2d4);
        break;
      case 0x255:
      case 0x256:
        pcVar2 = local_6d4;
        pcVar28 = (char *)(iVar27 * 0x28 + 0x1d08790);
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
          pcVar31 = pcVar2;
          if (iVar29 == 0) break;
          iVar29 = iVar29 + -1;
          pcVar31 = pcVar2 + (uint)bVar33 * -2 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar31;
        } while (cVar1 != '\0');
        pcVar31 = pcVar31 + -1;
        do {
          cVar1 = *pcVar28;
          *pcVar31 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar28[1];
          pcVar28 = pcVar28 + 2;
          pcVar31[1] = cVar1;
          pcVar31 = pcVar31 + 2;
        } while (cVar1 != '\0');
        shape_edittool_cpp_CEditorTools_showError_FUN_0047be40(g_CEditorToolsPtr,local_6d4);
        break;
      default:
        while( true ) {
          if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
            core_game_cpp_CGame_resetKeyState_FUN_004b7140(g_CGamePtr);
          }
          EVar30 = 0xffffffff;
          EVar25 = 0;
          do {
            iVar29 = (*0x01D02F84->vtable->getKeyState)(0x01D02F84,EVar25);
            if ((iVar29 != 0) && (bVar32 = -1 < (int)EVar30, EVar30 = EVar25, bVar32))
            goto LAB_004efc41;
            EVar25 = EVar25 + DIK_ESCAPE;
          } while ((int)EVar25 < 600);
          if (EVar30 == 0xffffffff) break;
LAB_004efc41:
          pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                             ("OK - you can release the key now...");
          shape_edittool_cpp_FUN_0047be90(g_CEditorToolsPtr,pcVar2);
          iVar29 = (*0x01D02F84->vtable->getKeyState)(0x01D02F84,DIK_ESCAPE);
          if (iVar29 != 0) break;
          wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
        }
        iVar29 = (*0x01D02F84->vtable->getKeyState)(0x01D02F84,DIK_ESCAPE);
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
        pcVar28 = (char *)(iVar27 * 0x28 + 0x1d08790);
        iVar29 = -1;
        pcVar2 = acStack_4d4;
        do {
          pcVar31 = pcVar2;
          if (iVar29 == 0) break;
          iVar29 = iVar29 + -1;
          pcVar31 = pcVar2 + (uint)bVar33 * -2 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar31;
        } while (cVar1 != '\0');
        pcVar31 = pcVar31 + -1;
        do {
          cVar1 = *pcVar28;
          *pcVar31 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar28[1];
          pcVar28 = pcVar28 + 2;
          pcVar31[1] = cVar1;
          pcVar31 = pcVar31 + 2;
        } while (cVar1 != '\0');
        shape_edittool_cpp_FUN_0047be90(g_CEditorToolsPtr,acStack_4d4);
        engine_keys_cpp_CKeys_toggleInputMask_FUN_004dfee0(0x01D02F84,1);
LAB_004efd32:
        do {
          wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
          if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
            core_game_cpp_CGame_resetKeyState_FUN_004b7140(g_CGamePtr);
          }
          EVar30 = 0xffffffff;
          EVar25 = 0;
          do {
            iVar29 = (*0x01D02F84->vtable->getKeyState)(0x01D02F84,EVar25);
            if ((iVar29 != 0) && (bVar32 = -1 < (int)EVar30, EVar30 = EVar25, bVar32))
            goto LAB_004efd32;
            EVar25 = EVar25 + DIK_ESCAPE;
          } while ((int)EVar25 < 600);
        } while ((int)EVar30 < 0);
        **(EInputCodeType **)(&DAT_01d086f4 + iVar27 * 4) = EVar30;
        pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                           ("OK - you can release the key now...");
        shape_edittool_cpp_FUN_0047be90(g_CEditorToolsPtr,pcVar2);
        while( true ) {
          if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
            core_game_cpp_CGame_resetKeyState_FUN_004b7140(g_CGamePtr);
          }
          EVar30 = 0xffffffff;
          EVar25 = 0;
          do {
            iVar29 = (*0x01D02F84->vtable->getKeyState)(0x01D02F84,EVar25);
            if ((iVar29 != 0) && (bVar32 = -1 < (int)EVar30, EVar30 = EVar25, bVar32))
            goto LAB_004efdcb;
            EVar25 = EVar25 + DIK_ESCAPE;
          } while ((int)EVar25 < 600);
          if (EVar30 == 0xffffffff) break;
LAB_004efdcb:
          wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
        }
        iVar29 = 0;
        if (0 < _DAT_01d086f0) {
          iVar26 = 0;
          do {
            if ((iVar29 != iVar27) &&
               (**(int **)(&DAT_01d086f4 + iVar26) == **(int **)(&DAT_01d086f4 + iVar27 * 4))) {
              **(int **)(&DAT_01d086f4 + iVar26) = 599;
            }
            iVar29 = iVar29 + 1;
            iVar26 = iVar26 + 4;
          } while (iVar29 < _DAT_01d086f0);
        }
        engine_keys_cpp_CKeys_toggleInputMask_FUN_004dfee0(0x01D02F84,0);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&local_a94,0);
      goto LAB_004eed8e;
    }
    core_game_cpp_CGame_restoreDefaultControls_FUN_004b6e10(g_CGamePtr);
    shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&local_a94,0);
  } while( true );
}
