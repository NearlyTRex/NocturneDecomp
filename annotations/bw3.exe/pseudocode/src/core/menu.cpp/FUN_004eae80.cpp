// Name: core_menu.cpp_FUN_004eae80
// Address: 004eae80
// Address Range: [[004eae80, 004ec6ef]]
// Convention: unknown
// Signature: void core_menu_cpp_FUN_004eae80(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_menu_cpp_FUN_004eae80(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
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
  int iVar25;
  int iVar26;
  int *piVar27;
  int iVar28;
  EInputCodeType EVar29;
  int iVar30;
  int iVar31;
  EInputCodeType EVar32;
  char *pcVar33;
  char *pcVar34;
  bool bVar35;
  byte bVar36;
  uint uVar37;
  CPickList local_c94;
  char local_8d4 [512];
  char acStack_6d4 [512];
  char acStack_4d4 [512];
  char local_2d4 [512];
  char local_d4 [200];
  int local_c;
  
  bVar36 = 0;
  if (((g_CGamePtr->game_control != CONTROL_MODE_GAMEPAD) || (g_CGamePtr->x_center != 0)) ||
     (iVar31 = core_menu_cpp_calibrateGamepad_FUN_004e7dc0(), iVar31 != 0)) {
    local_c = 0;
LAB_004eaeae:
    _DAT_01d75c98 = 0;
    if (g_CGamePtr->game_control != CONTROL_MODE_POINT_AND_CLICK) {
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c7a4b);
      piVar27 = &g_CGamePtr->key_fire;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        core_main_c_FUN_004e4330("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Action");
      piVar27 = &g_CGamePtr->key_action;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        core_main_c_FUN_004e4330("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Forward");
      piVar27 = &g_CGamePtr->key_walk;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        core_main_c_FUN_004e4330("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c7a5f);
      piVar27 = &g_CGamePtr->key_backup;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        core_main_c_FUN_004e4330("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Strafe on");
      piVar27 = &g_CGamePtr->key_strafe;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        core_main_c_FUN_004e4330("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Strafe left");
      piVar27 = &g_CGamePtr->key_strafe_left;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        core_main_c_FUN_004e4330("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Strafe right");
      piVar27 = &g_CGamePtr->key_strafe_right;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        core_main_c_FUN_004e4330("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Turn left");
      piVar27 = &g_CGamePtr->key_left;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        core_main_c_FUN_004e4330("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Turn right");
      piVar27 = &g_CGamePtr->key_right;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        core_main_c_FUN_004e4330("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Point up");
      piVar27 = &g_CGamePtr->key_point_up;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        core_main_c_FUN_004e4330("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Point down");
      piVar27 = &g_CGamePtr->key_point_down;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        core_main_c_FUN_004e4330("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Quick turn");
      piVar27 = &g_CGamePtr->key_quick_turn;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        core_main_c_FUN_004e4330("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
    }
    if (g_CGamePtr->always_run == 0) {
      pcVar2 = &DAT_005c7ac0;
    }
    else {
      pcVar2 = &DAT_005c7abb;
    }
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar2);
    piVar27 = &g_CGamePtr->key_run;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Use item");
    piVar27 = &g_CGamePtr->key_use_item;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Lantern");
    piVar27 = &g_CGamePtr->key_light;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Journal");
    piVar27 = &g_CGamePtr->key_field_notes;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c7add);
    piVar27 = &g_CGamePtr->key_map;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Voodoo Doll");
    piVar27 = &g_CGamePtr->key_voodoo_doll;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c7aed);
    piVar27 = &g_CGamePtr->key_draw;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Select conventional weapons")
    ;
    piVar27 = &g_CGamePtr->key_weapon_1;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Select staves");
    piVar27 = &g_CGamePtr->key_weapon_2;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Select Christian weapons")
    ;
    piVar27 = &g_CGamePtr->key_weapon_3;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Select Shaman weapons");
    piVar27 = &g_CGamePtr->key_weapon_4;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Select Pagan weapons");
    piVar27 = &g_CGamePtr->key_weapon_5;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Next weapon");
    piVar27 = &g_CGamePtr->key_next_weapon;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Previous weapon");
    piVar27 = &g_CGamePtr->key_prev_weapon;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Next item");
    piVar27 = &g_CGamePtr->key_next_item;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Previous item");
    piVar27 = &g_CGamePtr->key_prev_item;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    engine_special_cpp_clearScreen_FUN_00560d70();
    wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
    shape_edittool_cpp_CPickList_ctor_FUN_004831c0(&local_c94);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Restore defaults");
    iVar31 = 0;
    shape_edittool_cpp_CStrList_add_FUN_00482070(&local_c94.base,pcVar2);
    if (0 < _DAT_01d75c98) {
      iVar28 = 0;
      do {
        core_menu_cpp_getKeyDisplayName_FUN_004eaa60(**(EInputCodeType **)(&DAT_01d75c9c + iVar28));
        _sprintf(local_d4,"%s\t%s");
        iVar28 = iVar28 + 4;
        iVar31 = iVar31 + 1;
        shape_edittool_cpp_CStrList_add_FUN_00482070(&local_c94.base,local_d4);
      } while (iVar31 < _DAT_01d75c98);
    }
    shape_edittool_cpp_CPickList_setOkButtonText_FUN_00483350(&local_c94,"Select");
    shape_edittool_cpp_CPickList_setCancelButtonText_FUN_004833c0(&local_c94,"Close");
    shape_edittool_cpp_CPickList_setSelectedResult_FUN_00483440(&local_c94,1);
    uVar37 = 0;
    iVar31 = local_c;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Edit key settings");
    iVar31 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00483450
                       (&local_c94,pcVar2,iVar31,uVar37);
    if (-1 < iVar31) {
      if (iVar31 != 0) {
        iVar28 = iVar31 + -1;
        local_c = iVar31;
        switch(**(uint **)(&DAT_01d75c9c + iVar28 * 4)) {
        case 0x251:
        case 0x252:
        case 0x253:
        case 0x254:
          pcVar2 = local_2d4;
          pcVar33 = (char *)(iVar28 * 0x28 + 0x1d75d20);
          do {
            cVar1 = *pcVar33;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar33[1];
            pcVar33 = pcVar33 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          pcVar33 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                              (" is assigned to the gamepad.  Can't assign a key.");
          iVar31 = -1;
          pcVar2 = local_2d4;
          do {
            pcVar34 = pcVar2;
            if (iVar31 == 0) break;
            iVar31 = iVar31 + -1;
            pcVar34 = pcVar2 + (uint)bVar36 * -2 + 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar34;
          } while (cVar1 != '\0');
          pcVar34 = pcVar34 + -1;
          do {
            cVar1 = *pcVar33;
            *pcVar34 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar33[1];
            pcVar33 = pcVar33 + 2;
            pcVar34[1] = cVar1;
            pcVar34 = pcVar34 + 2;
          } while (cVar1 != '\0');
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0
                    (g_CEditorToolsPtr,local_2d4);
          break;
        case 0x255:
        case 0x256:
          pcVar2 = local_8d4;
          pcVar33 = (char *)(iVar28 * 0x28 + 0x1d75d20);
          do {
            cVar1 = *pcVar33;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar33[1];
            pcVar33 = pcVar33 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          pcVar33 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                              (" is assigned to the mouse.  Can't assign a key.");
          iVar31 = -1;
          pcVar2 = local_8d4;
          do {
            pcVar34 = pcVar2;
            if (iVar31 == 0) break;
            iVar31 = iVar31 + -1;
            pcVar34 = pcVar2 + (uint)bVar36 * -2 + 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar34;
          } while (cVar1 != '\0');
          pcVar34 = pcVar34 + -1;
          do {
            cVar1 = *pcVar33;
            *pcVar34 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar33[1];
            pcVar33 = pcVar33 + 2;
            pcVar34[1] = cVar1;
            pcVar34 = pcVar34 + 2;
          } while (cVar1 != '\0');
          shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40(g_CEditorToolsPtr,local_8d4);
          break;
        default:
          while( true ) {
            if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
              core_game_cpp_CGame_resetKeyState_FUN_004b93e0(g_CGamePtr);
            }
            EVar32 = 0xffffffff;
            EVar29 = 0;
            do {
              iVar31 = (*0x01D70A78->vtable->getKeyState)(0x01D70A78,EVar29);
              if ((iVar31 != 0) && (bVar35 = -1 < (int)EVar32, EVar32 = EVar29, bVar35))
              goto LAB_004ebf70;
              EVar29 = EVar29 + DIK_ESCAPE;
            } while ((int)EVar29 < 600);
            if (((g_CGamePtr->game_control != CONTROL_MODE_POINT_AND_CLICK) ||
                ((EVar32 != DIM_LBUTTON && (EVar32 != DIM_RBUTTON)))) && (EVar32 == 0xffffffff))
            break;
LAB_004ebf70:
            pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                               ("OK - you can release the key now...");
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0
                      (g_CEditorToolsPtr,pcVar2);
            iVar31 = (*0x01D70A78->vtable->getKeyState)(0x01D70A78,DIK_ESCAPE);
            if (iVar31 != 0) break;
            wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
          }
          iVar31 = (*0x01D70A78->vtable->getKeyState)(0x01D70A78,DIK_ESCAPE);
          if (iVar31 != 0) goto LAB_004ec1b2;
          pcVar33 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                              ("Press new key or button for ");
          pcVar2 = acStack_6d4;
          do {
            cVar1 = *pcVar33;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar33[1];
            pcVar33 = pcVar33 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          pcVar33 = (char *)(iVar28 * 0x28 + 0x1d75d20);
          iVar31 = -1;
          pcVar2 = acStack_6d4;
          do {
            pcVar34 = pcVar2;
            if (iVar31 == 0) break;
            iVar31 = iVar31 + -1;
            pcVar34 = pcVar2 + (uint)bVar36 * -2 + 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar34;
          } while (cVar1 != '\0');
          pcVar34 = pcVar34 + -1;
          do {
            cVar1 = *pcVar33;
            *pcVar34 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar33[1];
            pcVar33 = pcVar33 + 2;
            pcVar34[1] = cVar1;
            pcVar34 = pcVar34 + 2;
          } while (cVar1 != '\0');
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0
                    (g_CEditorToolsPtr,acStack_6d4);
          engine_keys_cpp_CKeys_toggleInputMask_FUN_004df5d0(0x01D70A78,1);
LAB_004ec07e:
          do {
            wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
            if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
              core_game_cpp_CGame_resetKeyState_FUN_004b93e0(g_CGamePtr);
            }
            EVar32 = 0xffffffff;
            EVar29 = 0;
            do {
              iVar31 = (*0x01D70A78->vtable->getKeyState)(0x01D70A78,EVar29);
              if ((iVar31 != 0) && (bVar35 = -1 < (int)EVar32, EVar32 = EVar29, bVar35))
              goto LAB_004ec07e;
              EVar29 = EVar29 + DIK_ESCAPE;
            } while ((int)EVar29 < 600);
            if (((g_CGamePtr->game_control == CONTROL_MODE_POINT_AND_CLICK) &&
                ((EVar32 == DIM_LBUTTON || (EVar32 == DIM_RBUTTON)))) || (EVar32 == ~DIK_1)) {
              pcVar33 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                                  ("Mouse buttons cannot be redefined");
              pcVar2 = acStack_4d4;
              goto LAB_004ec0f2;
            }
          } while ((int)EVar32 < 0);
          **(EInputCodeType **)(&DAT_01d75c9c + iVar28 * 4) = EVar32;
          goto LAB_004ec154;
        }
        goto LAB_004ebeaf;
      }
      core_game_cpp_FUN_004b8e60(g_CGamePtr);
      shape_edittool_cpp_CPickList_dtor_FUN_004832b0(&local_c94,0);
      goto LAB_004eaeae;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004832b0(&local_c94,0);
    uVar37 = 0;
    if (g_CGamePtr->game_control != CONTROL_MODE_POINT_AND_CLICK) {
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Forward");
      uVar3 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                        ((EInputCodeType *)&g_CGamePtr->key_walk,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c7cbb);
      uVar4 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                        ((EInputCodeType *)&g_CGamePtr->key_backup,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Strafe on");
      uVar5 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                        ((EInputCodeType *)&g_CGamePtr->key_strafe,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Strafe left");
      uVar6 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                        ((EInputCodeType *)&g_CGamePtr->key_strafe_left,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Strafe right");
      uVar7 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                        ((EInputCodeType *)&g_CGamePtr->key_strafe_right,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Turn left");
      uVar8 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                        ((EInputCodeType *)&g_CGamePtr->key_left,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Turn right");
      uVar9 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                        ((EInputCodeType *)&g_CGamePtr->key_right,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c7cf8);
      uVar10 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                         ((EInputCodeType *)&g_CGamePtr->key_fire,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Point up");
      uVar11 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                         ((EInputCodeType *)&g_CGamePtr->key_point_up,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Point down");
      uVar12 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                         ((EInputCodeType *)&g_CGamePtr->key_point_down,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Quick turn");
      uVar37 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                         ((EInputCodeType *)&g_CGamePtr->key_quick_turn,pcVar2);
      uVar37 = uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12 |
               uVar37;
    }
    if (g_CGamePtr->always_run == 0) {
      pcVar2 = &DAT_005c7d21;
    }
    else {
      pcVar2 = &DAT_005c7d1c;
    }
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar2);
    iVar31 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->key_run,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Action");
    iVar28 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->key_action,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Use item");
    iVar30 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->key_use_item,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Lantern");
    iVar13 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->key_light,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Journal");
    iVar14 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->key_field_notes,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c7d45);
    iVar15 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->key_map,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Voodoo Doll");
    iVar16 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->key_voodoo_doll,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c7d55);
    iVar17 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->key_draw,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Select conventional weapons")
    ;
    iVar18 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->key_weapon_1,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Select staves");
    iVar19 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->key_weapon_2,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Select Christian weapons")
    ;
    iVar20 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->key_weapon_3,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Select Shaman weapons");
    iVar21 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->key_weapon_4,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Select Pagan weapons");
    iVar22 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->key_weapon_5,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Next weapon");
    iVar23 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->key_next_weapon,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Previous weapon");
    iVar24 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->key_prev_weapon,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Next item");
    iVar25 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->key_next_item,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Previous item");
    iVar26 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->key_prev_item,pcVar2);
    if (((((((((((((((((uVar37 != 0 || iVar31 != 0) || iVar28 != 0) || iVar30 != 0) || iVar13 != 0)
                   || iVar14 != 0) || iVar15 != 0) || iVar16 != 0) || iVar17 != 0) || iVar18 != 0)
              || iVar19 != 0) || iVar20 != 0) || iVar21 != 0) || iVar22 != 0) || iVar23 != 0) ||
         iVar24 != 0) || iVar25 != 0) || iVar26 != 0) {
      core_game_cpp_FUN_004b8e60(g_CGamePtr);
      shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                (g_CEditorToolsPtr,"One or more keys not valid.  Restoring default controls.");
      return;
    }
  }
  return;
LAB_004ec1b2:
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  shape_edittool_cpp_CPickList_dtor_FUN_004832b0(&local_c94,0);
  goto LAB_004eaeae;
  while( true ) {
    cVar1 = pcVar33[1];
    pcVar33 = pcVar33 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
    if (cVar1 == '\0') break;
LAB_004ec0f2:
    cVar1 = *pcVar33;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
  }
  pcVar33 = (char *)(iVar28 * 0x28 + 0x1d75d20);
  iVar31 = -1;
  pcVar2 = acStack_4d4;
  do {
    pcVar34 = pcVar2;
    if (iVar31 == 0) break;
    iVar31 = iVar31 + -1;
    pcVar34 = pcVar2 + (uint)bVar36 * -2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar34;
  } while (cVar1 != '\0');
  pcVar34 = pcVar34 + -1;
  do {
    cVar1 = *pcVar33;
    *pcVar34 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar33[1];
    pcVar33 = pcVar33 + 2;
    pcVar34[1] = cVar1;
    pcVar34 = pcVar34 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0
            (g_CEditorToolsPtr,acStack_4d4);
LAB_004ec154:
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("OK - you can release the key now...");
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0
            (g_CEditorToolsPtr,pcVar2);
  while( true ) {
    if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
      core_game_cpp_CGame_resetKeyState_FUN_004b93e0(g_CGamePtr);
    }
    EVar32 = 0xffffffff;
    EVar29 = 0;
    do {
      iVar31 = (*0x01D70A78->vtable->getKeyState)(0x01D70A78,EVar29);
      if ((iVar31 != 0) && (bVar35 = -1 < (int)EVar32, EVar32 = EVar29, bVar35)) goto LAB_004ec1a4;
      EVar29 = EVar29 + DIK_ESCAPE;
    } while ((int)EVar29 < 600);
    if (((g_CGamePtr->game_control != CONTROL_MODE_POINT_AND_CLICK) ||
        ((EVar32 != DIM_LBUTTON && (EVar32 != DIM_RBUTTON)))) && (EVar32 == 0xffffffff)) break;
LAB_004ec1a4:
    wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
  }
  iVar31 = 0;
  if (0 < _DAT_01d75c98) {
    iVar30 = 0;
    do {
      if ((iVar31 != iVar28) &&
         (**(int **)(&DAT_01d75c9c + iVar30) == **(int **)(&DAT_01d75c9c + iVar28 * 4))) {
        **(int **)(&DAT_01d75c9c + iVar30) = 599;
      }
      iVar31 = iVar31 + 1;
      iVar30 = iVar30 + 4;
    } while (iVar31 < _DAT_01d75c98);
  }
  engine_keys_cpp_CKeys_toggleInputMask_FUN_004df5d0(0x01D70A78,0);
LAB_004ebeaf:
  shape_edittool_cpp_CPickList_dtor_FUN_004832b0(&local_c94,0);
  goto LAB_004eaeae;
}
