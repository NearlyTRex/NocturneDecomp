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
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
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
  byte *puVar29;
  int *piVar30;
  int iVar31;
  int iVar32;
  char *pcVar33;
  int iVar34;
  char *pcVar35;
  bool bVar36;
  byte bVar37;
  uint uVar38;
  CPickList local_c94;
  char local_8d4 [512];
  char acStack_6d4 [512];
  char acStack_4d4 [512];
  char local_2d4 [512];
  char local_d4 [200];
  int local_c;
  
  bVar37 = 0;
  if (((*(int *)&g_CGamePtr->field_0xd0 != 2) || (g_CGamePtr->x_center != 0)) ||
     (iVar32 = core_menu_cpp_calibrateGamepad_FUN_0050a2b0(), iVar32 != 0)) {
    local_c = 0;
LAB_0050d66e:
    _DAT_01d21458 = 0;
    if (*(int *)&g_CGamePtr->field_0xd0 != 3) {
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Fire / Action");
      puVar29 = &g_CGamePtr->field_0x48;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        core_main_c_FUN_005030e0("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Forward");
      piVar30 = &g_CGamePtr->shadow_flag;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        core_main_c_FUN_005030e0("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar30;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e8389);
      piVar30 = &g_CGamePtr->key_walk;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        core_main_c_FUN_005030e0("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(int **)(&DAT_01d2145c + _DAT_01d21458 * 4) = piVar30;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Strafe on");
      puVar29 = &g_CGamePtr->field_0x34;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        core_main_c_FUN_005030e0("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Strafe left");
      puVar29 = &g_CGamePtr->field_0x38;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        core_main_c_FUN_005030e0("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Strafe right");
      puVar29 = &g_CGamePtr->field_0x3c;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        core_main_c_FUN_005030e0("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Turn left");
      puVar29 = &g_CGamePtr->field_0x44;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        core_main_c_FUN_005030e0("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Turn right");
      puVar29 = &g_CGamePtr->field_0x40;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        core_main_c_FUN_005030e0("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Point up");
      puVar29 = &g_CGamePtr->field_0x74;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        core_main_c_FUN_005030e0("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Point down");
      puVar29 = &g_CGamePtr->field_0x78;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        core_main_c_FUN_005030e0("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Quick turn");
      puVar29 = &g_CGamePtr->field_0x70;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        core_main_c_FUN_005030e0("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
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
    puVar29 = &g_CGamePtr->field_0x30;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Use item");
    puVar29 = &g_CGamePtr->field_0x4c;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Flashlight");
    puVar29 = &g_CGamePtr->field_0x50;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Night Vision");
    puVar29 = &g_CGamePtr->field_0x54;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Journal");
    puVar29 = &g_CGamePtr->field_0x58;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Map");
    puVar29 = &g_CGamePtr->field_0x5c;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Compass");
    puVar29 = &g_CGamePtr->field_0x60;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("SPS");
    puVar29 = &g_CGamePtr->field_0x64;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Draw");
    puVar29 = &g_CGamePtr->field_0x68;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Select pistol weapons");
    puVar29 = &g_CGamePtr->field_0x7c;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Select assault weapons");
    puVar29 = &g_CGamePtr->field_0x80;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Select energy weapons");
    puVar29 = &g_CGamePtr->field_0x84;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Select melee weapons");
    puVar29 = &g_CGamePtr->field_0x8c;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Next weapon");
    puVar29 = &g_CGamePtr->field_0x90;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Previous weapon");
    puVar29 = &g_CGamePtr->field_0x94;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Next item");
    puVar29 = &g_CGamePtr->field_0x98;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Previous item");
    puVar29 = &g_CGamePtr->field_0x9c;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Item description");
    puVar29 = &g_CGamePtr->field_0xa0;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Next ammo");
    puVar29 = &g_CGamePtr->field_0xa4;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      core_main_c_FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(byte **)(&DAT_01d2145c + _DAT_01d21458 * 4) = puVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    engine_special_cpp_clearScreen_FUN_0057dc40();
    wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
    shape_edittool_cpp_CPickList_ctor_FUN_0049a620(&local_c94);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Restore defaults");
    iVar32 = 0;
    shape_edittool_cpp_CStrList_add_FUN_004994d0(&local_c94.base,pcVar2);
    if (0 < _DAT_01d21458) {
      iVar34 = 0;
      do {
        core_menu_cpp_getKeyDisplayName_FUN_0050d220(**(EInputCodeType **)(&DAT_01d2145c + iVar34));
        _sprintf(local_d4,"%s\t%s");
        iVar34 = iVar34 + 4;
        iVar32 = iVar32 + 1;
        shape_edittool_cpp_CStrList_add_FUN_004994d0(&local_c94.base,local_d4);
      } while (iVar32 < _DAT_01d21458);
    }
    shape_edittool_cpp_CPickList_setOkButtonText_FUN_0049a7b0(&local_c94,"Select");
    shape_edittool_cpp_CPickList_setCancelButtonText_FUN_0049a820(&local_c94,"Close");
    shape_edittool_cpp_CPickList_setSelectedResult_FUN_0049a8a0(&local_c94,1);
    uVar38 = 0;
    iVar32 = local_c;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Edit key settings");
    iVar32 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0
                       (&local_c94,pcVar2,iVar32,uVar38);
    if (-1 < iVar32) {
      if (iVar32 != 0) {
        iVar34 = iVar32 + -1;
        local_c = iVar32;
        switch(**(uint **)(&DAT_01d2145c + iVar34 * 4)) {
        case 0x251:
        case 0x252:
        case 0x253:
        case 0x254:
          pcVar2 = local_8d4;
          pcVar33 = (char *)(iVar34 * 0x28 + 0x1d214e0);
          do {
            cVar1 = *pcVar33;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar33[1];
            pcVar33 = pcVar33 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          pcVar33 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                              (" is assigned to the gamepad.  Can't assign a key.");
          iVar32 = -1;
          pcVar2 = local_8d4;
          do {
            pcVar35 = pcVar2;
            if (iVar32 == 0) break;
            iVar32 = iVar32 + -1;
            pcVar35 = pcVar2 + (uint)bVar37 * -2 + 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar35;
          } while (cVar1 != '\0');
          pcVar35 = pcVar35 + -1;
          do {
            cVar1 = *pcVar33;
            *pcVar35 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar33[1];
            pcVar33 = pcVar33 + 2;
            pcVar35[1] = cVar1;
            pcVar35 = pcVar35 + 2;
          } while (cVar1 != '\0');
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
                    (g_CEditorToolsPtr,local_8d4);
          break;
        case 0x255:
        case 0x256:
          pcVar2 = local_2d4;
          pcVar33 = (char *)(iVar34 * 0x28 + 0x1d214e0);
          do {
            cVar1 = *pcVar33;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar33[1];
            pcVar33 = pcVar33 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          pcVar33 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                              (" is assigned to the mouse.  Can't assign a key.");
          iVar32 = -1;
          pcVar2 = local_2d4;
          do {
            pcVar35 = pcVar2;
            if (iVar32 == 0) break;
            iVar32 = iVar32 + -1;
            pcVar35 = pcVar2 + (uint)bVar37 * -2 + 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar35;
          } while (cVar1 != '\0');
          pcVar35 = pcVar35 + -1;
          do {
            cVar1 = *pcVar33;
            *pcVar35 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar33[1];
            pcVar33 = pcVar33 + 2;
            pcVar35[1] = cVar1;
            pcVar35 = pcVar35 + 2;
          } while (cVar1 != '\0');
          shape_edittool_cpp_FUN_004943a0(g_CEditorToolsPtr,local_2d4);
          break;
        default:
          while( true ) {
            if (*(int *)&g_CGamePtr->field_0xd0 == 2) {
              core_game_cpp_CGame_resetKeyState_FUN_004d0960(g_CGamePtr);
            }
            iVar32 = -1;
            iVar31 = 0;
            do {
              iVar3 = (*(code *)**(uint **)0x01D1BCA0)(0x01D1BCA0,iVar31);
              if ((iVar3 != 0) && (bVar36 = -1 < iVar32, iVar32 = iVar31, bVar36))
              goto LAB_0050e832;
              iVar31 = iVar31 + 1;
            } while (iVar31 < 600);
            if (((*(int *)&g_CGamePtr->field_0xd0 != 3) || ((iVar32 != 0x200 && (iVar32 != 0x201))))
               && (iVar32 == -1)) break;
LAB_0050e832:
            pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                               ("OK - you can release the key now...");
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
                      (g_CEditorToolsPtr,pcVar2);
            iVar32 = (*(code *)**(uint **)0x01D1BCA0)(0x01D1BCA0,1);
            if (iVar32 != 0) break;
            wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
          }
          iVar32 = (*(code *)**(uint **)0x01D1BCA0)(0x01D1BCA0,1);
          if (iVar32 != 0) goto LAB_0050ea74;
          pcVar33 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                              ("Press new key or button for ");
          pcVar2 = acStack_4d4;
          do {
            cVar1 = *pcVar33;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar33[1];
            pcVar33 = pcVar33 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          pcVar33 = (char *)(iVar34 * 0x28 + 0x1d214e0);
          iVar32 = -1;
          pcVar2 = acStack_4d4;
          do {
            pcVar35 = pcVar2;
            if (iVar32 == 0) break;
            iVar32 = iVar32 + -1;
            pcVar35 = pcVar2 + (uint)bVar37 * -2 + 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar35;
          } while (cVar1 != '\0');
          pcVar35 = pcVar35 + -1;
          do {
            cVar1 = *pcVar33;
            *pcVar35 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar33[1];
            pcVar33 = pcVar33 + 2;
            pcVar35[1] = cVar1;
            pcVar35 = pcVar35 + 2;
          } while (cVar1 != '\0');
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
                    (g_CEditorToolsPtr,acStack_4d4);
          engine_keys_cpp_CKeys_toggleInputMask_FUN_004fd2b0(0x01D1BCA0,1);
LAB_0050e940:
          do {
            wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
            if (*(int *)&g_CGamePtr->field_0xd0 == 2) {
              core_game_cpp_CGame_resetKeyState_FUN_004d0960(g_CGamePtr);
            }
            iVar32 = -1;
            iVar31 = 0;
            do {
              iVar3 = (*(code *)**(uint **)0x01D1BCA0)(0x01D1BCA0,iVar31);
              if ((iVar3 != 0) && (bVar36 = -1 < iVar32, iVar32 = iVar31, bVar36))
              goto LAB_0050e940;
              iVar31 = iVar31 + 1;
            } while (iVar31 < 600);
            if (((*(int *)&g_CGamePtr->field_0xd0 == 3) && ((iVar32 == 0x200 || (iVar32 == 0x201))))
               || (iVar32 == -3)) {
              pcVar33 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                                  ("Mouse buttons cannot be redefined");
              pcVar2 = acStack_6d4;
              goto LAB_0050e9b4;
            }
          } while (iVar32 < 0);
          **(int **)(&DAT_01d2145c + iVar34 * 4) = iVar32;
          goto LAB_0050ea16;
        }
        goto LAB_0050e771;
      }
      core_game_cpp_FUN_004d0400(g_CGamePtr);
      shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&local_c94,0);
      goto LAB_0050d66e;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&local_c94,0);
    uVar38 = 0;
    if (*(int *)&g_CGamePtr->field_0xd0 != 3) {
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Forward");
      uVar4 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                        ((EInputCodeType *)&g_CGamePtr->shadow_flag,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Back");
      uVar5 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                        ((EInputCodeType *)&g_CGamePtr->key_walk,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Strafe on");
      uVar6 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                        ((EInputCodeType *)&g_CGamePtr->field_0x34,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Strafe left");
      uVar7 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                        ((EInputCodeType *)&g_CGamePtr->field_0x38,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Strafe right");
      uVar8 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                        ((EInputCodeType *)&g_CGamePtr->field_0x3c,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Turn left");
      uVar9 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                        ((EInputCodeType *)&g_CGamePtr->field_0x44,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Turn right");
      uVar10 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                         ((EInputCodeType *)&g_CGamePtr->field_0x40,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Fire / Action");
      uVar11 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                         ((EInputCodeType *)&g_CGamePtr->field_0x48,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Point up");
      uVar12 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                         ((EInputCodeType *)&g_CGamePtr->field_0x74,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Point down");
      uVar13 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                         ((EInputCodeType *)&g_CGamePtr->field_0x78,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Quick turn");
      uVar38 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                         ((EInputCodeType *)&g_CGamePtr->field_0x70,pcVar2);
      uVar38 = uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12 | uVar13 |
               uVar38;
    }
    if (g_CGamePtr->always_run == 0) {
      pcVar2 = "Run";
    }
    else {
      pcVar2 = "Walk";
    }
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar2);
    iVar32 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->field_0x30,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Use item");
    iVar34 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->field_0x4c,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Flashlight");
    iVar31 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->field_0x50,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Night Vision");
    iVar3 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                      ((EInputCodeType *)&g_CGamePtr->field_0x54,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Journal");
    iVar14 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->field_0x58,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Map");
    iVar15 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->field_0x5c,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Compass");
    iVar16 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->field_0x60,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("SPS");
    iVar17 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->field_0x64,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Draw");
    iVar18 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->field_0x68,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Select pistol weapons");
    iVar19 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->field_0x7c,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Select assault weapons");
    iVar20 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->field_0x80,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Select energy weapons");
    iVar21 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->field_0x84,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Select grenade weapons");
    iVar22 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->field_0x88,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Select melee weapons");
    iVar23 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->field_0x8c,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Next weapon");
    iVar24 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->field_0x90,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Previous weapon");
    iVar25 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->field_0x94,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Next item");
    iVar26 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->field_0x98,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Previous item");
    iVar27 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->field_0x9c,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Item description");
    iVar28 = core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470
                       ((EInputCodeType *)&g_CGamePtr->field_0xa0,pcVar2);
    if (((((((((((((((((((uVar38 != 0 || iVar32 != 0) || iVar34 != 0) || iVar31 != 0) || iVar3 != 0)
                     || iVar14 != 0) || iVar15 != 0) || iVar16 != 0) || iVar17 != 0) || iVar18 != 0)
                || iVar19 != 0) || iVar20 != 0) || iVar21 != 0) || iVar22 != 0) || iVar23 != 0) ||
           iVar24 != 0) || iVar25 != 0) || iVar26 != 0) || iVar27 != 0) || iVar28 != 0) {
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
    cVar1 = pcVar33[1];
    pcVar33 = pcVar33 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
    if (cVar1 == '\0') break;
LAB_0050e9b4:
    cVar1 = *pcVar33;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
  }
  pcVar33 = (char *)(iVar34 * 0x28 + 0x1d214e0);
  iVar32 = -1;
  pcVar2 = acStack_6d4;
  do {
    pcVar35 = pcVar2;
    if (iVar32 == 0) break;
    iVar32 = iVar32 + -1;
    pcVar35 = pcVar2 + (uint)bVar37 * -2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar35;
  } while (cVar1 != '\0');
  pcVar35 = pcVar35 + -1;
  do {
    cVar1 = *pcVar33;
    *pcVar35 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar33[1];
    pcVar33 = pcVar33 + 2;
    pcVar35[1] = cVar1;
    pcVar35 = pcVar35 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
            (g_CEditorToolsPtr,acStack_6d4);
LAB_0050ea16:
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("OK - you can release the key now...");
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
            (g_CEditorToolsPtr,pcVar2);
  while( true ) {
    if (*(int *)&g_CGamePtr->field_0xd0 == 2) {
      core_game_cpp_CGame_resetKeyState_FUN_004d0960(g_CGamePtr);
    }
    iVar32 = -1;
    iVar31 = 0;
    do {
      iVar3 = (*(code *)**(uint **)0x01D1BCA0)(0x01D1BCA0,iVar31);
      if ((iVar3 != 0) && (bVar36 = -1 < iVar32, iVar32 = iVar31, bVar36)) goto LAB_0050ea66;
      iVar31 = iVar31 + 1;
    } while (iVar31 < 600);
    if (((*(int *)&g_CGamePtr->field_0xd0 != 3) || ((iVar32 != 0x200 && (iVar32 != 0x201)))) &&
       (iVar32 == -1)) break;
LAB_0050ea66:
    wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
  }
  iVar32 = 0;
  if (0 < _DAT_01d21458) {
    iVar31 = 0;
    do {
      if ((iVar32 != iVar34) &&
         (**(int **)(&DAT_01d2145c + iVar31) == **(int **)(&DAT_01d2145c + iVar34 * 4))) {
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
