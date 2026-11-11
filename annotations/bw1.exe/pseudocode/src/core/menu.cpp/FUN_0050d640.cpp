// Name: core_menu.cpp_FUN_0050d640
// Address: 0050d640
// Address Range: [[0050d640, 0050eff3]]
// Convention: unknown
// Signature: void core_menu_cpp_FUN_0050d640(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_menu_cpp_FUN_0050d640(void)

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
  int iVar27;
  int iVar28;
  int *piVar29;
  EInputCodeType EVar30;
  int iVar31;
  int iVar32;
  EInputCodeType EVar33;
  char *pcVar34;
  int iVar35;
  char *pcVar36;
  bool bVar37;
  byte bVar38;
  uint uVar39;
  CPickList local_c94;
  char local_8d4 [512];
  char acStack_6d4 [512];
  char acStack_4d4 [512];
  char local_2d4 [512];
  char local_d4 [200];
  int local_c;
  
  bVar38 = 0;
  if (((g_CGamePtr->game_control != CONTROL_MODE_GAMEPAD) || (g_CGamePtr->x_center != 0)) ||
     (iVar32 = core_menu_cpp_calibrateGamepad_FUN_0050a2b0(), iVar32 != 0)) {
    local_c = 0;
LAB_0050d66e:
    _DAT_01d21458 = 0;
    if (g_CGamePtr->game_control != CONTROL_MODE_POINT_AND_CLICK) {
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Fire / Action");
      piVar29 = &g_CGamePtr->key_fire;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        core_main_c_FUN_005030e0("Too many custom keys!");
      }
      pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
      do {
        cVar1 = *pcVar2;
        *pcVar34 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar34[1] = cVar1;
        pcVar34 = pcVar34 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Forward");
      piVar29 = &g_CGamePtr->key_walk;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        core_main_c_FUN_005030e0("Too many custom keys!");
      }
      pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
      do {
        cVar1 = *pcVar2;
        *pcVar34 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar34[1] = cVar1;
        pcVar34 = pcVar34 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e8389);
      piVar29 = &g_CGamePtr->key_backup;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        core_main_c_FUN_005030e0("Too many custom keys!");
      }
      pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
      do {
        cVar1 = *pcVar2;
        *pcVar34 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar34[1] = cVar1;
        pcVar34 = pcVar34 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Strafe on");
      piVar29 = &g_CGamePtr->key_strafe;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        core_main_c_FUN_005030e0("Too many custom keys!");
      }
      pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
      do {
        cVar1 = *pcVar2;
        *pcVar34 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar34[1] = cVar1;
        pcVar34 = pcVar34 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Strafe left");
      piVar29 = &g_CGamePtr->key_strafe_left;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        core_main_c_FUN_005030e0("Too many custom keys!");
      }
      pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
      do {
        cVar1 = *pcVar2;
        *pcVar34 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar34[1] = cVar1;
        pcVar34 = pcVar34 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Strafe right");
      piVar29 = &g_CGamePtr->key_strafe_right;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        core_main_c_FUN_005030e0("Too many custom keys!");
      }
      pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
      do {
        cVar1 = *pcVar2;
        *pcVar34 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar34[1] = cVar1;
        pcVar34 = pcVar34 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Turn left");
      piVar29 = &g_CGamePtr->key_left;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        core_main_c_FUN_005030e0("Too many custom keys!");
      }
      pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
      do {
        cVar1 = *pcVar2;
        *pcVar34 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar34[1] = cVar1;
        pcVar34 = pcVar34 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Turn right");
      piVar29 = &g_CGamePtr->key_right;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        core_main_c_FUN_005030e0("Too many custom keys!");
      }
      pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
      do {
        cVar1 = *pcVar2;
        *pcVar34 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar34[1] = cVar1;
        pcVar34 = pcVar34 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Point up");
      piVar29 = &g_CGamePtr->key_point_up;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        core_main_c_FUN_005030e0("Too many custom keys!");
      }
      pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
      do {
        cVar1 = *pcVar2;
        *pcVar34 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar34[1] = cVar1;
        pcVar34 = pcVar34 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Point down");
      piVar29 = &g_CGamePtr->key_point_down;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        core_main_c_FUN_005030e0("Too many custom keys!");
      }
      pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
      do {
        cVar1 = *pcVar2;
        *pcVar34 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar34[1] = cVar1;
        pcVar34 = pcVar34 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Quick turn");
      piVar29 = &g_CGamePtr->key_quick_turn;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        core_main_c_FUN_005030e0("Too many custom keys!");
      }
      pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
      do {
        cVar1 = *pcVar2;
        *pcVar34 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar34[1] = cVar1;
        pcVar34 = pcVar34 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
    }
    if (g_CGamePtr->always_run == 0) {
      pcVar2 = "Run";
    }
    else {
      pcVar2 = "Walk";
    }
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar2);
    piVar29 = &g_CGamePtr->key_run;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar34 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar34[1] = cVar1;
      pcVar34 = pcVar34 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Use item");
    piVar29 = &g_CGamePtr->key_use_item;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar34 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar34[1] = cVar1;
      pcVar34 = pcVar34 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Flashlight");
    piVar29 = &g_CGamePtr->key_light;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar34 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar34[1] = cVar1;
      pcVar34 = pcVar34 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Night Vision");
    piVar29 = &g_CGamePtr->key_infrared;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar34 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar34[1] = cVar1;
      pcVar34 = pcVar34 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Journal");
    piVar29 = &g_CGamePtr->key_field_notes;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar34 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar34[1] = cVar1;
      pcVar34 = pcVar34 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Map");
    piVar29 = &g_CGamePtr->key_map;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar34 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar34[1] = cVar1;
      pcVar34 = pcVar34 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Compass");
    piVar29 = &g_CGamePtr->key_compass;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar34 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar34[1] = cVar1;
      pcVar34 = pcVar34 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("SPS");
    piVar29 = &g_CGamePtr->key_sps;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar34 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar34[1] = cVar1;
      pcVar34 = pcVar34 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Draw");
    piVar29 = &g_CGamePtr->key_draw;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar34 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar34[1] = cVar1;
      pcVar34 = pcVar34 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Select pistol weapons");
    piVar29 = &g_CGamePtr->key_weapon_1;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar34 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar34[1] = cVar1;
      pcVar34 = pcVar34 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Select assault weapons");
    piVar29 = &g_CGamePtr->key_weapon_2;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar34 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar34[1] = cVar1;
      pcVar34 = pcVar34 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Select energy weapons");
    piVar29 = &g_CGamePtr->key_weapon_3;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar34 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar34[1] = cVar1;
      pcVar34 = pcVar34 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Select melee weapons");
    piVar29 = &g_CGamePtr->key_weapon_5;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar34 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar34[1] = cVar1;
      pcVar34 = pcVar34 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Next weapon");
    piVar29 = &g_CGamePtr->key_next_weapon;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar34 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar34[1] = cVar1;
      pcVar34 = pcVar34 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Previous weapon");
    piVar29 = &g_CGamePtr->key_prev_weapon;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar34 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar34[1] = cVar1;
      pcVar34 = pcVar34 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Next item");
    piVar29 = &g_CGamePtr->key_next_item;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar34 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar34[1] = cVar1;
      pcVar34 = pcVar34 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Previous item");
    piVar29 = &g_CGamePtr->key_prev_item;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar34 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar34[1] = cVar1;
      pcVar34 = pcVar34 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Item description");
    piVar29 = &g_CGamePtr->key_item_desc;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar34 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar34[1] = cVar1;
      pcVar34 = pcVar34 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Next ammo");
    piVar29 = &g_CGamePtr->key_next_ammo;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar34 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar34 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar34[1] = cVar1;
      pcVar34 = pcVar34 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    engine_special_cpp_clearScreen_FUN_0057dc40();
    wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
    shape_edittool_cpp_CPickList_ctor_FUN_0049a620(&local_c94);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Restore defaults");
    iVar32 = 0;
    shape_edittool_cpp_CStrList_add_FUN_004994d0(&local_c94.base,pcVar2);
    if (0 < _DAT_01d21458) {
      iVar35 = 0;
      do {
        core_menu_cpp_getKeyDisplayName_FUN_0050d220(**(EInputCodeType **)(&DAT_01d2145c + iVar35));
        _sprintf(local_d4,"%s\t%s");
        iVar35 = iVar35 + 4;
        iVar32 = iVar32 + 1;
        shape_edittool_cpp_CStrList_add_FUN_004994d0(&local_c94.base,local_d4);
      } while (iVar32 < _DAT_01d21458);
    }
    shape_edittool_cpp_CPickList_setOkButtonText_FUN_0049a7b0(&local_c94,"Select");
    shape_edittool_cpp_CPickList_setCancelButtonText_FUN_0049a820(&local_c94,"Close");
    shape_edittool_cpp_CPickList_setSelectedResult_FUN_0049a8a0(&local_c94,1);
    uVar39 = 0;
    iVar32 = local_c;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Edit key settings");
    iVar32 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0
                       (&local_c94,pcVar2,iVar32,uVar39);
    if (-1 < iVar32) {
      if (iVar32 != 0) {
        iVar35 = iVar32 + -1;
        local_c = iVar32;
        switch(**(uint **)(&DAT_01d2145c + iVar35 * 4)) {
        case 0x251:
        case 0x252:
        case 0x253:
        case 0x254:
          pcVar2 = local_8d4;
          pcVar34 = (char *)(iVar35 * 0x28 + 0x1d214e0);
          do {
            cVar1 = *pcVar34;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar34[1];
            pcVar34 = pcVar34 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          pcVar34 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                              (" is assigned to the gamepad.  Can't assign a key.");
          iVar32 = -1;
          pcVar2 = local_8d4;
          do {
            pcVar36 = pcVar2;
            if (iVar32 == 0) break;
            iVar32 = iVar32 + -1;
            pcVar36 = pcVar2 + (uint)bVar38 * -2 + 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar36;
          } while (cVar1 != '\0');
          pcVar36 = pcVar36 + -1;
          do {
            cVar1 = *pcVar34;
            *pcVar36 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar34[1];
            pcVar34 = pcVar34 + 2;
            pcVar36[1] = cVar1;
            pcVar36 = pcVar36 + 2;
          } while (cVar1 != '\0');
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
                    (g_CEditorToolsPtr,local_8d4);
          break;
        case 0x255:
        case 0x256:
          pcVar2 = local_2d4;
          pcVar34 = (char *)(iVar35 * 0x28 + 0x1d214e0);
          do {
            cVar1 = *pcVar34;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar34[1];
            pcVar34 = pcVar34 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          pcVar34 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                              (" is assigned to the mouse.  Can't assign a key.");
          iVar32 = -1;
          pcVar2 = local_2d4;
          do {
            pcVar36 = pcVar2;
            if (iVar32 == 0) break;
            iVar32 = iVar32 + -1;
            pcVar36 = pcVar2 + (uint)bVar38 * -2 + 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar36;
          } while (cVar1 != '\0');
          pcVar36 = pcVar36 + -1;
          do {
            cVar1 = *pcVar34;
            *pcVar36 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar34[1];
            pcVar34 = pcVar34 + 2;
            pcVar36[1] = cVar1;
            pcVar36 = pcVar36 + 2;
          } while (cVar1 != '\0');
          shape_edittool_cpp_FUN_004943a0(g_CEditorToolsPtr,local_2d4);
          break;
        default:
          while( true ) {
            if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
              core_game_cpp_CGame_resetKeyState_FUN_004d0960(g_CGamePtr);
            }
            EVar33 = 0xffffffff;
            EVar30 = 0;
            do {
              iVar32 = (*0x01D1BCA0->vtable->getKeyState)(0x01D1BCA0,EVar30);
              if ((iVar32 != 0) && (bVar37 = -1 < (int)EVar33, EVar33 = EVar30, bVar37))
              goto LAB_0050e832;
              EVar30 = EVar30 + DIK_ESCAPE;
            } while ((int)EVar30 < 600);
            if (((g_CGamePtr->game_control != CONTROL_MODE_POINT_AND_CLICK) ||
                ((EVar33 != DIM_LBUTTON && (EVar33 != DIM_RBUTTON)))) && (EVar33 == 0xffffffff))
            break;
LAB_0050e832:
            pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                               ("OK - you can release the key now...");
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
                      (g_CEditorToolsPtr,pcVar2);
            iVar32 = (*0x01D1BCA0->vtable->getKeyState)(0x01D1BCA0,DIK_ESCAPE);
            if (iVar32 != 0) break;
            wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
          }
          iVar32 = (*0x01D1BCA0->vtable->getKeyState)(0x01D1BCA0,DIK_ESCAPE);
          if (iVar32 != 0) goto LAB_0050ea74;
          pcVar34 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                              ("Press new key or button for ");
          pcVar2 = acStack_4d4;
          do {
            cVar1 = *pcVar34;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar34[1];
            pcVar34 = pcVar34 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          pcVar34 = (char *)(iVar35 * 0x28 + 0x1d214e0);
          iVar32 = -1;
          pcVar2 = acStack_4d4;
          do {
            pcVar36 = pcVar2;
            if (iVar32 == 0) break;
            iVar32 = iVar32 + -1;
            pcVar36 = pcVar2 + (uint)bVar38 * -2 + 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar36;
          } while (cVar1 != '\0');
          pcVar36 = pcVar36 + -1;
          do {
            cVar1 = *pcVar34;
            *pcVar36 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar34[1];
            pcVar34 = pcVar34 + 2;
            pcVar36[1] = cVar1;
            pcVar36 = pcVar36 + 2;
          } while (cVar1 != '\0');
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
                    (g_CEditorToolsPtr,acStack_4d4);
          engine_keys_cpp_CKeys_toggleInputMask_FUN_004fd2b0(0x01D1BCA0,1);
LAB_0050e940:
          do {
            wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
            if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
              core_game_cpp_CGame_resetKeyState_FUN_004d0960(g_CGamePtr);
            }
            EVar33 = 0xffffffff;
            EVar30 = 0;
            do {
              iVar32 = (*0x01D1BCA0->vtable->getKeyState)(0x01D1BCA0,EVar30);
              if ((iVar32 != 0) && (bVar37 = -1 < (int)EVar33, EVar33 = EVar30, bVar37))
              goto LAB_0050e940;
              EVar30 = EVar30 + DIK_ESCAPE;
            } while ((int)EVar30 < 600);
            if (((g_CGamePtr->game_control == CONTROL_MODE_POINT_AND_CLICK) &&
                ((EVar33 == DIM_LBUTTON || (EVar33 == DIM_RBUTTON)))) || (EVar33 == ~DIK_1)) {
              pcVar34 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                                  ("Mouse buttons cannot be redefined");
              pcVar2 = acStack_6d4;
              goto LAB_0050e9b4;
            }
          } while ((int)EVar33 < 0);
          **(EInputCodeType **)(&DAT_01d2145c + iVar35 * 4) = EVar33;
          goto LAB_0050ea16;
        }
        goto LAB_0050e771;
      }
      core_game_cpp_FUN_004d0400(g_CGamePtr);
      shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&local_c94,0);
      goto LAB_0050d66e;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&local_c94,0);
    uVar39 = 0;
    if (g_CGamePtr->game_control != CONTROL_MODE_POINT_AND_CLICK) {
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Forward");
      uVar3 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                        ((EInputCodeType *)&g_CGamePtr->key_walk,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Back");
      uVar4 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                        ((EInputCodeType *)&g_CGamePtr->key_backup,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Strafe on");
      uVar5 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                        ((EInputCodeType *)&g_CGamePtr->key_strafe,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Strafe left");
      uVar6 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                        ((EInputCodeType *)&g_CGamePtr->key_strafe_left,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Strafe right");
      uVar7 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                        ((EInputCodeType *)&g_CGamePtr->key_strafe_right,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Turn left");
      uVar8 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                        ((EInputCodeType *)&g_CGamePtr->key_left,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Turn right");
      uVar9 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                        ((EInputCodeType *)&g_CGamePtr->key_right,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Fire / Action");
      uVar10 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                         ((EInputCodeType *)&g_CGamePtr->key_fire,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Point up");
      uVar11 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                         ((EInputCodeType *)&g_CGamePtr->key_point_up,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Point down");
      uVar12 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                         ((EInputCodeType *)&g_CGamePtr->key_point_down,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Quick turn");
      uVar39 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                         ((EInputCodeType *)&g_CGamePtr->key_quick_turn,pcVar2);
      uVar39 = uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12 |
               uVar39;
    }
    if (g_CGamePtr->always_run == 0) {
      pcVar2 = "Run";
    }
    else {
      pcVar2 = "Walk";
    }
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar2);
    iVar32 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->key_run,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Use item");
    iVar35 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->key_use_item,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Flashlight");
    iVar31 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->key_light,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Night Vision");
    iVar13 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->key_infrared,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Journal");
    iVar14 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->key_field_notes,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Map");
    iVar15 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->key_map,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Compass");
    iVar16 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->key_compass,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("SPS");
    iVar17 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->key_sps,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Draw");
    iVar18 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->key_draw,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Select pistol weapons");
    iVar19 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->key_weapon_1,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Select assault weapons");
    iVar20 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->key_weapon_2,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Select energy weapons");
    iVar21 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->key_weapon_3,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Select grenade weapons");
    iVar22 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->key_weapon_4,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Select melee weapons");
    iVar23 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->key_weapon_5,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Next weapon");
    iVar24 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->key_next_weapon,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Previous weapon");
    iVar25 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->key_prev_weapon,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Next item");
    iVar26 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->key_next_item,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Previous item");
    iVar27 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->key_prev_item,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Item description");
    iVar28 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->key_item_desc,pcVar2);
    if (((((((((((((((((((uVar39 != 0 || iVar32 != 0) || iVar35 != 0) || iVar31 != 0) || iVar13 != 0
                      ) || iVar14 != 0) || iVar15 != 0) || iVar16 != 0) || iVar17 != 0) ||
                 iVar18 != 0) || iVar19 != 0) || iVar20 != 0) || iVar21 != 0) || iVar22 != 0) ||
            iVar23 != 0) || iVar24 != 0) || iVar25 != 0) || iVar26 != 0) || iVar27 != 0) ||
        iVar28 != 0) {
      core_game_cpp_FUN_004d0400(g_CGamePtr);
      shape_edittool_cpp_FUN_004943a0(g_CEditorToolsPtr,"One or more keys not valid.  Restoring default controls.");
      return;
    }
  }
  return;
LAB_0050ea74:
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&local_c94,0);
  goto LAB_0050d66e;
  while( true ) {
    cVar1 = pcVar34[1];
    pcVar34 = pcVar34 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
    if (cVar1 == '\0') break;
LAB_0050e9b4:
    cVar1 = *pcVar34;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
  }
  pcVar34 = (char *)(iVar35 * 0x28 + 0x1d214e0);
  iVar32 = -1;
  pcVar2 = acStack_6d4;
  do {
    pcVar36 = pcVar2;
    if (iVar32 == 0) break;
    iVar32 = iVar32 + -1;
    pcVar36 = pcVar2 + (uint)bVar38 * -2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar36;
  } while (cVar1 != '\0');
  pcVar36 = pcVar36 + -1;
  do {
    cVar1 = *pcVar34;
    *pcVar36 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar34[1];
    pcVar34 = pcVar34 + 2;
    pcVar36[1] = cVar1;
    pcVar36 = pcVar36 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
            (g_CEditorToolsPtr,acStack_6d4);
LAB_0050ea16:
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("OK - you can release the key now...");
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
            (g_CEditorToolsPtr,pcVar2);
  while( true ) {
    if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
      core_game_cpp_CGame_resetKeyState_FUN_004d0960(g_CGamePtr);
    }
    EVar33 = 0xffffffff;
    EVar30 = 0;
    do {
      iVar32 = (*0x01D1BCA0->vtable->getKeyState)(0x01D1BCA0,EVar30);
      if ((iVar32 != 0) && (bVar37 = -1 < (int)EVar33, EVar33 = EVar30, bVar37)) goto LAB_0050ea66;
      EVar30 = EVar30 + DIK_ESCAPE;
    } while ((int)EVar30 < 600);
    if (((g_CGamePtr->game_control != CONTROL_MODE_POINT_AND_CLICK) ||
        ((EVar33 != DIM_LBUTTON && (EVar33 != DIM_RBUTTON)))) && (EVar33 == 0xffffffff)) break;
LAB_0050ea66:
    wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
  }
  iVar32 = 0;
  if (0 < _DAT_01d21458) {
    iVar31 = 0;
    do {
      if ((iVar32 != iVar35) &&
         (**(int **)(&DAT_01d2145c + iVar31) == **(int **)(&DAT_01d2145c + iVar35 * 4))) {
        **(int **)(&DAT_01d2145c + iVar31) = 599;
      }
      iVar32 = iVar32 + 1;
      iVar31 = iVar31 + 4;
    } while (iVar32 < _DAT_01d21458);
  }
  engine_keys_cpp_CKeys_toggleInputMask_FUN_004fd2b0(0x01D1BCA0,0);
LAB_0050e771:
  shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&local_c94,0);
  goto LAB_0050d66e;
}
