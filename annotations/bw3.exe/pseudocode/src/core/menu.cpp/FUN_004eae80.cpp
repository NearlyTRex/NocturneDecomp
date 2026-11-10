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
  byte *puVar27;
  int *piVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  char *pcVar32;
  char *pcVar33;
  bool bVar34;
  byte bVar35;
  uint uVar36;
  CPickList local_c94;
  char local_8d4 [512];
  char acStack_6d4 [512];
  char acStack_4d4 [512];
  char local_2d4 [512];
  char local_d4 [200];
  int local_c;
  
  bVar35 = 0;
  if (((*(int *)&g_CGamePtr->field_0xd4 != 2) || (g_CGamePtr->x_center != 0)) ||
     (iVar31 = core_menu_cpp_FUN_004e7dc0(), iVar31 != 0)) {
    local_c = 0;
LAB_004eaeae:
    _DAT_01d75c98 = 0;
    if (*(int *)&g_CGamePtr->field_0xd4 != 3) {
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c7a4b);
      puVar27 = &g_CGamePtr->field_0x48;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        core_main_c_FUN_004e4330("Too many custom keys!");
      }
      pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(byte **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = puVar27;
      do {
        cVar1 = *pcVar2;
        *pcVar32 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar32[1] = cVar1;
        pcVar32 = pcVar32 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Action");
      puVar27 = &g_CGamePtr->field_0x4c;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        core_main_c_FUN_004e4330("Too many custom keys!");
      }
      pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(byte **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = puVar27;
      do {
        cVar1 = *pcVar2;
        *pcVar32 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar32[1] = cVar1;
        pcVar32 = pcVar32 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Forward");
      piVar28 = &g_CGamePtr->quimby_flag;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        core_main_c_FUN_004e4330("Too many custom keys!");
      }
      pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar28;
      do {
        cVar1 = *pcVar2;
        *pcVar32 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar32[1] = cVar1;
        pcVar32 = pcVar32 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c7a5f);
      piVar28 = &g_CGamePtr->shadow_flag;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        core_main_c_FUN_004e4330("Too many custom keys!");
      }
      pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar28;
      do {
        cVar1 = *pcVar2;
        *pcVar32 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar32[1] = cVar1;
        pcVar32 = pcVar32 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Strafe on");
      puVar27 = &g_CGamePtr->field_0x34;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        core_main_c_FUN_004e4330("Too many custom keys!");
      }
      pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(byte **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = puVar27;
      do {
        cVar1 = *pcVar2;
        *pcVar32 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar32[1] = cVar1;
        pcVar32 = pcVar32 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Strafe left");
      puVar27 = &g_CGamePtr->field_0x38;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        core_main_c_FUN_004e4330("Too many custom keys!");
      }
      pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(byte **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = puVar27;
      do {
        cVar1 = *pcVar2;
        *pcVar32 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar32[1] = cVar1;
        pcVar32 = pcVar32 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Strafe right");
      puVar27 = &g_CGamePtr->field_0x3c;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        core_main_c_FUN_004e4330("Too many custom keys!");
      }
      pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(byte **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = puVar27;
      do {
        cVar1 = *pcVar2;
        *pcVar32 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar32[1] = cVar1;
        pcVar32 = pcVar32 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Turn left");
      puVar27 = &g_CGamePtr->field_0x44;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        core_main_c_FUN_004e4330("Too many custom keys!");
      }
      pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(byte **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = puVar27;
      do {
        cVar1 = *pcVar2;
        *pcVar32 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar32[1] = cVar1;
        pcVar32 = pcVar32 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Turn right");
      puVar27 = &g_CGamePtr->field_0x40;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        core_main_c_FUN_004e4330("Too many custom keys!");
      }
      pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(byte **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = puVar27;
      do {
        cVar1 = *pcVar2;
        *pcVar32 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar32[1] = cVar1;
        pcVar32 = pcVar32 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Point up");
      puVar27 = &g_CGamePtr->field_0x78;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        core_main_c_FUN_004e4330("Too many custom keys!");
      }
      pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(byte **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = puVar27;
      do {
        cVar1 = *pcVar2;
        *pcVar32 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar32[1] = cVar1;
        pcVar32 = pcVar32 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Point down");
      puVar27 = &g_CGamePtr->field_0x7c;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        core_main_c_FUN_004e4330("Too many custom keys!");
      }
      pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(byte **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = puVar27;
      do {
        cVar1 = *pcVar2;
        *pcVar32 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar32[1] = cVar1;
        pcVar32 = pcVar32 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Quick turn");
      puVar27 = &g_CGamePtr->field_0x74;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        core_main_c_FUN_004e4330("Too many custom keys!");
      }
      pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(byte **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = puVar27;
      do {
        cVar1 = *pcVar2;
        *pcVar32 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar32[1] = cVar1;
        pcVar32 = pcVar32 + 2;
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
    piVar28 = &g_CGamePtr->key_walk;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = piVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Use item");
    puVar27 = &g_CGamePtr->field_0x50;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(byte **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = puVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Lantern");
    puVar27 = &g_CGamePtr->field_0x54;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(byte **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = puVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Journal");
    puVar27 = &g_CGamePtr->field_0x5c;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(byte **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = puVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c7add);
    puVar27 = &g_CGamePtr->field_0x60;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(byte **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = puVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Voodoo Doll");
    puVar27 = &g_CGamePtr->field_0x68;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(byte **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = puVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c7aed);
    puVar27 = &g_CGamePtr->field_0x6c;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(byte **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = puVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Select conventional weapons")
    ;
    puVar27 = &g_CGamePtr->field_0x80;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(byte **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = puVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Select staves");
    puVar27 = &g_CGamePtr->field_0x84;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(byte **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = puVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Select Christian weapons")
    ;
    puVar27 = &g_CGamePtr->field_0x88;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(byte **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = puVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Select Shaman weapons");
    puVar27 = &g_CGamePtr->field_0x8c;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(byte **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = puVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Select Pagan weapons");
    puVar27 = &g_CGamePtr->field_0x90;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(byte **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = puVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Next weapon");
    puVar27 = &g_CGamePtr->field_0x94;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(byte **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = puVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Previous weapon");
    puVar27 = &g_CGamePtr->field_0x98;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(byte **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = puVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Next item");
    puVar27 = &g_CGamePtr->field_0x9c;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(byte **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = puVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Previous item");
    puVar27 = &g_CGamePtr->field_0xa0;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      core_main_c_FUN_004e4330("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(byte **)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = puVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    engine_special_cpp_clearScreen_FUN_00560d70();
    wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
    shape_edittool_cpp_CPickList_ctor_FUN_004831c0(&local_c94);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Restore defaults");
    iVar31 = 0;
    shape_edittool_cpp_CStrList_add_FUN_00482070(&local_c94.base,pcVar2);
    if (0 < _DAT_01d75c98) {
      iVar29 = 0;
      do {
        core_menu_cpp_getKeyDisplayName_FUN_004eaa60(**(EInputCodeType **)(&DAT_01d75c9c + iVar29));
        _sprintf(local_d4,"%s\t%s");
        iVar29 = iVar29 + 4;
        iVar31 = iVar31 + 1;
        shape_edittool_cpp_CStrList_add_FUN_00482070(&local_c94.base,local_d4);
      } while (iVar31 < _DAT_01d75c98);
    }
    shape_edittool_cpp_CPickList_setOkButtonText_FUN_00483350(&local_c94,"Select");
    shape_edittool_cpp_CPickList_setCancelButtonText_FUN_004833c0(&local_c94,"Close");
    shape_edittool_cpp_CPickList_setSelectedResult_FUN_00483440(&local_c94,1);
    uVar36 = 0;
    iVar31 = local_c;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Edit key settings");
    iVar31 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00483450
                       (&local_c94,pcVar2,iVar31,uVar36);
    if (-1 < iVar31) {
      if (iVar31 != 0) {
        iVar29 = iVar31 + -1;
        local_c = iVar31;
        switch(**(uint **)(&DAT_01d75c9c + iVar29 * 4)) {
        case 0x251:
        case 0x252:
        case 0x253:
        case 0x254:
          pcVar2 = local_2d4;
          pcVar32 = (char *)(iVar29 * 0x28 + 0x1d75d20);
          do {
            cVar1 = *pcVar32;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar32[1];
            pcVar32 = pcVar32 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          pcVar32 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                              (" is assigned to the gamepad.  Can't assign a key.");
          iVar31 = -1;
          pcVar2 = local_2d4;
          do {
            pcVar33 = pcVar2;
            if (iVar31 == 0) break;
            iVar31 = iVar31 + -1;
            pcVar33 = pcVar2 + (uint)bVar35 * -2 + 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar33;
          } while (cVar1 != '\0');
          pcVar33 = pcVar33 + -1;
          do {
            cVar1 = *pcVar32;
            *pcVar33 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar32[1];
            pcVar32 = pcVar32 + 2;
            pcVar33[1] = cVar1;
            pcVar33 = pcVar33 + 2;
          } while (cVar1 != '\0');
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0
                    (g_CEditorToolsPtr,local_2d4);
          break;
        case 0x255:
        case 0x256:
          pcVar2 = local_8d4;
          pcVar32 = (char *)(iVar29 * 0x28 + 0x1d75d20);
          do {
            cVar1 = *pcVar32;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar32[1];
            pcVar32 = pcVar32 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          pcVar32 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                              (" is assigned to the mouse.  Can't assign a key.");
          iVar31 = -1;
          pcVar2 = local_8d4;
          do {
            pcVar33 = pcVar2;
            if (iVar31 == 0) break;
            iVar31 = iVar31 + -1;
            pcVar33 = pcVar2 + (uint)bVar35 * -2 + 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar33;
          } while (cVar1 != '\0');
          pcVar33 = pcVar33 + -1;
          do {
            cVar1 = *pcVar32;
            *pcVar33 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar32[1];
            pcVar32 = pcVar32 + 2;
            pcVar33[1] = cVar1;
            pcVar33 = pcVar33 + 2;
          } while (cVar1 != '\0');
          shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40(g_CEditorToolsPtr,local_8d4);
          break;
        default:
          while( true ) {
            if (*(int *)&g_CGamePtr->field_0xd4 == 2) {
              core_game_cpp_CGame_resetKeyState_FUN_004b93e0(g_CGamePtr);
            }
            iVar31 = -1;
            iVar30 = 0;
            do {
              iVar3 = (*(code *)**(uint **)0x01D70A78)(0x01D70A78,iVar30);
              if ((iVar3 != 0) && (bVar34 = -1 < iVar31, iVar31 = iVar30, bVar34))
              goto LAB_004ebf70;
              iVar30 = iVar30 + 1;
            } while (iVar30 < 600);
            if (((*(int *)&g_CGamePtr->field_0xd4 != 3) || ((iVar31 != 0x200 && (iVar31 != 0x201))))
               && (iVar31 == -1)) break;
LAB_004ebf70:
            pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                               ("OK - you can release the key now...");
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0
                      (g_CEditorToolsPtr,pcVar2);
            iVar31 = (*(code *)**(uint **)0x01D70A78)(0x01D70A78,1);
            if (iVar31 != 0) break;
            wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
          }
          iVar31 = (*(code *)**(uint **)0x01D70A78)(0x01D70A78,1);
          if (iVar31 != 0) goto LAB_004ec1b2;
          pcVar32 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                              ("Press new key or button for ");
          pcVar2 = acStack_6d4;
          do {
            cVar1 = *pcVar32;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar32[1];
            pcVar32 = pcVar32 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          pcVar32 = (char *)(iVar29 * 0x28 + 0x1d75d20);
          iVar31 = -1;
          pcVar2 = acStack_6d4;
          do {
            pcVar33 = pcVar2;
            if (iVar31 == 0) break;
            iVar31 = iVar31 + -1;
            pcVar33 = pcVar2 + (uint)bVar35 * -2 + 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar33;
          } while (cVar1 != '\0');
          pcVar33 = pcVar33 + -1;
          do {
            cVar1 = *pcVar32;
            *pcVar33 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar32[1];
            pcVar32 = pcVar32 + 2;
            pcVar33[1] = cVar1;
            pcVar33 = pcVar33 + 2;
          } while (cVar1 != '\0');
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0
                    (g_CEditorToolsPtr,acStack_6d4);
          engine_keys_cpp_CKeys_toggleInputMask_FUN_004df5d0(0x01D70A78,1);
LAB_004ec07e:
          do {
            wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
            if (*(int *)&g_CGamePtr->field_0xd4 == 2) {
              core_game_cpp_CGame_resetKeyState_FUN_004b93e0(g_CGamePtr);
            }
            iVar31 = -1;
            iVar30 = 0;
            do {
              iVar3 = (*(code *)**(uint **)0x01D70A78)(0x01D70A78,iVar30);
              if ((iVar3 != 0) && (bVar34 = -1 < iVar31, iVar31 = iVar30, bVar34))
              goto LAB_004ec07e;
              iVar30 = iVar30 + 1;
            } while (iVar30 < 600);
            if (((*(int *)&g_CGamePtr->field_0xd4 == 3) && ((iVar31 == 0x200 || (iVar31 == 0x201))))
               || (iVar31 == -3)) {
              pcVar32 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                                  ("Mouse buttons cannot be redefined");
              pcVar2 = acStack_4d4;
              goto LAB_004ec0f2;
            }
          } while (iVar31 < 0);
          **(int **)(&DAT_01d75c9c + iVar29 * 4) = iVar31;
          goto LAB_004ec154;
        }
        goto LAB_004ebeaf;
      }
      core_game_cpp_FUN_004b8e60(g_CGamePtr);
      shape_edittool_cpp_CPickList_dtor_FUN_004832b0(&local_c94,0);
      goto LAB_004eaeae;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004832b0(&local_c94,0);
    uVar36 = 0;
    if (*(int *)&g_CGamePtr->field_0xd4 != 3) {
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Forward");
      uVar4 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                        ((EInputCodeType *)&g_CGamePtr->quimby_flag,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c7cbb);
      uVar5 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                        ((EInputCodeType *)&g_CGamePtr->shadow_flag,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Strafe on");
      uVar6 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                        ((EInputCodeType *)&g_CGamePtr->field_0x34,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Strafe left");
      uVar7 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                        ((EInputCodeType *)&g_CGamePtr->field_0x38,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Strafe right");
      uVar8 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                        ((EInputCodeType *)&g_CGamePtr->field_0x3c,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Turn left");
      uVar9 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                        ((EInputCodeType *)&g_CGamePtr->field_0x44,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Turn right");
      uVar10 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                         ((EInputCodeType *)&g_CGamePtr->field_0x40,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c7cf8);
      uVar11 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                         ((EInputCodeType *)&g_CGamePtr->field_0x48,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Point up");
      uVar12 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                         ((EInputCodeType *)&g_CGamePtr->field_0x78,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Point down");
      uVar13 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                         ((EInputCodeType *)&g_CGamePtr->field_0x7c,pcVar2);
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Quick turn");
      uVar36 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                         ((EInputCodeType *)&g_CGamePtr->field_0x74,pcVar2);
      uVar36 = uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12 | uVar13 |
               uVar36;
    }
    if (g_CGamePtr->always_run == 0) {
      pcVar2 = &DAT_005c7d21;
    }
    else {
      pcVar2 = &DAT_005c7d1c;
    }
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar2);
    iVar31 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->key_walk,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Action");
    iVar29 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->field_0x4c,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Use item");
    iVar30 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->field_0x50,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Lantern");
    iVar3 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                      ((EInputCodeType *)&g_CGamePtr->field_0x54,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Journal");
    iVar14 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->field_0x5c,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c7d45);
    iVar15 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->field_0x60,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Voodoo Doll");
    iVar16 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->field_0x68,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c7d55);
    iVar17 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->field_0x6c,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Select conventional weapons")
    ;
    iVar18 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->field_0x80,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Select staves");
    iVar19 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->field_0x84,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Select Christian weapons")
    ;
    iVar20 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->field_0x88,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Select Shaman weapons");
    iVar21 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->field_0x8c,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Select Pagan weapons");
    iVar22 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->field_0x90,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Next weapon");
    iVar23 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->field_0x94,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Previous weapon");
    iVar24 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->field_0x98,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Next item");
    iVar25 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->field_0x9c,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Previous item");
    iVar26 = core_menu_cpp_isKeyCodeValidForMode_FUN_004eacb0
                       ((EInputCodeType *)&g_CGamePtr->field_0xa0,pcVar2);
    if (((((((((((((((((uVar36 != 0 || iVar31 != 0) || iVar29 != 0) || iVar30 != 0) || iVar3 != 0)
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
    cVar1 = pcVar32[1];
    pcVar32 = pcVar32 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
    if (cVar1 == '\0') break;
LAB_004ec0f2:
    cVar1 = *pcVar32;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
  }
  pcVar32 = (char *)(iVar29 * 0x28 + 0x1d75d20);
  iVar31 = -1;
  pcVar2 = acStack_4d4;
  do {
    pcVar33 = pcVar2;
    if (iVar31 == 0) break;
    iVar31 = iVar31 + -1;
    pcVar33 = pcVar2 + (uint)bVar35 * -2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar33;
  } while (cVar1 != '\0');
  pcVar33 = pcVar33 + -1;
  do {
    cVar1 = *pcVar32;
    *pcVar33 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar32[1];
    pcVar32 = pcVar32 + 2;
    pcVar33[1] = cVar1;
    pcVar33 = pcVar33 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0
            (g_CEditorToolsPtr,acStack_4d4);
LAB_004ec154:
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00508960("OK - you can release the key now...");
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0
            (g_CEditorToolsPtr,pcVar2);
  while( true ) {
    if (*(int *)&g_CGamePtr->field_0xd4 == 2) {
      core_game_cpp_CGame_resetKeyState_FUN_004b93e0(g_CGamePtr);
    }
    iVar31 = -1;
    iVar30 = 0;
    do {
      iVar3 = (*(code *)**(uint **)0x01D70A78)(0x01D70A78,iVar30);
      if ((iVar3 != 0) && (bVar34 = -1 < iVar31, iVar31 = iVar30, bVar34)) goto LAB_004ec1a4;
      iVar30 = iVar30 + 1;
    } while (iVar30 < 600);
    if (((*(int *)&g_CGamePtr->field_0xd4 != 3) || ((iVar31 != 0x200 && (iVar31 != 0x201)))) &&
       (iVar31 == -1)) break;
LAB_004ec1a4:
    wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
  }
  iVar31 = 0;
  if (0 < _DAT_01d75c98) {
    iVar30 = 0;
    do {
      if ((iVar31 != iVar29) &&
         (**(int **)(&DAT_01d75c9c + iVar30) == **(int **)(&DAT_01d75c9c + iVar29 * 4))) {
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
