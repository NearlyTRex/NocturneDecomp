// Name: core_menu.cpp_configureCustomKeyBindings_FUN_004d2d00
// Address: 004d2d00
// Address Range: [[004d2d00, 004d4365]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_configureCustomKeyBindings_FUN_004d2d00(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_configureCustomKeyBindings_FUN_004d2d00(void)

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
  int iVar24;
  int iVar25;
  int iVar26;
  int *piVar27;
  int iVar28;
  EInputCodeType EVar29;
  uint unaff_ESI;
  int iVar30;
  EInputCodeType EVar31;
  char *pcVar32;
  int iVar33;
  char *pcVar34;
  bool bVar35;
  byte bVar36;
  char local_844 [512];
  char local_644 [512];
  char acStack_444 [512];
  CPickList local_244;
  char local_d4 [200];
  int local_c;
  
  bVar36 = 0;
  if (((g_CGame_PTR_005b9354->game_control != CONTROL_MODE_GAMEPAD) ||
      (g_CGame_PTR_005b9354->x_center != 0)) ||
     (iVar30 = core_menu_cpp_calibrateGamepad_FUN_004cf8d0(), iVar30 != 0)) {
    local_c = 0;
LAB_004d2d2e:
    _DAT_01cc8120 = 0;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Forward");
    piVar27 = &g_CGame_PTR_005b9354->key_walk;
    if (0x1d < _DAT_01cc8120) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2087;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Back");
    piVar27 = &g_CGame_PTR_005b9354->key_backup;
    if (0x1d < _DAT_01cc8120) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2087;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    if (g_CGame_PTR_005b9354->always_run == 0) {
      pcVar2 = "Run";
    }
    else {
      pcVar2 = "Walk";
    }
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar2);
    piVar27 = &g_CGame_PTR_005b9354->key_run;
    if (0x1d < _DAT_01cc8120) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2087;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Strafe on");
    piVar27 = &g_CGame_PTR_005b9354->key_strafe;
    if (0x1d < _DAT_01cc8120) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2087;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Strafe left");
    piVar27 = &g_CGame_PTR_005b9354->key_strafe_left;
    if (0x1d < _DAT_01cc8120) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2087;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Strafe right");
    piVar27 = &g_CGame_PTR_005b9354->key_strafe_right;
    if (0x1d < _DAT_01cc8120) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2087;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Turn left");
    piVar27 = &g_CGame_PTR_005b9354->key_left;
    if (0x1d < _DAT_01cc8120) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2087;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Turn right");
    piVar27 = &g_CGame_PTR_005b9354->key_right;
    if (0x1d < _DAT_01cc8120) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2087;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Fire / Action");
    piVar27 = &g_CGame_PTR_005b9354->key_fire;
    if (0x1d < _DAT_01cc8120) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2087;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Use item");
    piVar27 = &g_CGame_PTR_005b9354->key_use_item;
    if (0x1d < _DAT_01cc8120) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2087;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Light");
    piVar27 = &g_CGame_PTR_005b9354->key_light;
    if (0x1d < _DAT_01cc8120) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2087;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Night Vision");
    piVar27 = &g_CGame_PTR_005b9354->key_infrared;
    if (0x1d < _DAT_01cc8120) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2087;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Draw");
    piVar27 = &g_CGame_PTR_005b9354->key_draw;
    if (0x1d < _DAT_01cc8120) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2087;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Point up");
    piVar27 = &g_CGame_PTR_005b9354->key_point_up;
    if (0x1d < _DAT_01cc8120) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2087;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Point down");
    piVar27 = &g_CGame_PTR_005b9354->key_point_down;
    if (0x1d < _DAT_01cc8120) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2087;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Jump");
    piVar27 = &g_CGame_PTR_005b9354->key_jump;
    if (0x1d < _DAT_01cc8120) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2087;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Select pistol weapons");
    piVar27 = &g_CGame_PTR_005b9354->key_weapon_1;
    if (0x1d < _DAT_01cc8120) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2087;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Select assault weapons");
    piVar27 = &g_CGame_PTR_005b9354->key_weapon_2;
    if (0x1d < _DAT_01cc8120) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2087;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Select flame weapons");
    piVar27 = &g_CGame_PTR_005b9354->key_weapon_3;
    if (0x1d < _DAT_01cc8120) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2087;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Select grenade weapons");
    piVar27 = &g_CGame_PTR_005b9354->key_weapon_4;
    if (0x1d < _DAT_01cc8120) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2087;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Select melee weapons");
    piVar27 = &g_CGame_PTR_005b9354->key_weapon_5;
    if (0x1d < _DAT_01cc8120) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2087;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Next weapon");
    piVar27 = &g_CGame_PTR_005b9354->key_next_weapon;
    if (0x1d < _DAT_01cc8120) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2087;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Previous weapon");
    piVar27 = &g_CGame_PTR_005b9354->key_prev_weapon;
    if (0x1d < _DAT_01cc8120) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2087;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Next item");
    piVar27 = &g_CGame_PTR_005b9354->key_next_item;
    if (0x1d < _DAT_01cc8120) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2087;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Previous item");
    piVar27 = &g_CGame_PTR_005b9354->key_prev_item;
    if (0x1d < _DAT_01cc8120) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2087;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Item description");
    piVar27 = &g_CGame_PTR_005b9354->key_item_desc;
    if (0x1d < _DAT_01cc8120) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2087;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Next ammo");
    piVar27 = &g_CGame_PTR_005b9354->key_next_ammo;
    if (0x1d < _DAT_01cc8120) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2087;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many custom keys!");
    }
    pcVar32 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int **)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = piVar27;
    do {
      cVar1 = *pcVar2;
      *pcVar32 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar32[1] = cVar1;
      pcVar32 = pcVar32 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    engine_special_cpp_clearScreen_FUN_0052ee70();
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    shape_edittool_cpp_CPickList_ctor_FUN_00474c90(&local_244);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Restore defaults");
    iVar30 = 0;
    shape_edittool_cpp_CStrList_add_FUN_00473cb0(&local_244.base,pcVar2);
    if (0 < _DAT_01cc8120) {
      iVar28 = 0x1cc81a0;
      iVar33 = 0;
      do {
        pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900
                           (**(EInputCodeType **)(&DAT_01cc8124 + iVar33));
        _sprintf(local_d4,"%s\t%s",iVar28,pcVar2);
        iVar33 = iVar33 + 4;
        iVar30 = iVar30 + 1;
        iVar28 = iVar28 + 0x28;
        shape_edittool_cpp_CStrList_add_FUN_00473cb0(&local_244.base,local_d4);
      } while (iVar30 < _DAT_01cc8120);
    }
    local_244.forced_column_count = 1;
    iVar30 = local_c;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Edit key settings");
    iVar30 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                       (&local_244,pcVar2,iVar30,unaff_ESI);
    if (-1 < iVar30) {
      if (iVar30 == 0) {
        core_game_cpp_CGame_restoreDefaultControls_FUN_0049e610(g_CGame_PTR_005b9354);
        shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(&local_244,0);
      }
      else {
        iVar28 = iVar30 + -1;
        local_c = iVar30;
        switch(**(uint **)(&DAT_01cc8124 + iVar28 * 4)) {
        case 0x251:
        case 0x252:
        case 0x253:
        case 0x254:
          pcVar2 = local_644;
          pcVar32 = (char *)(iVar28 * 0x28 + 0x1cc81a0);
          do {
            cVar1 = *pcVar32;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar32[1];
            pcVar32 = pcVar32 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          pcVar32 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                              (" is assigned to the gamepad.  Can't assign a key.");
          iVar30 = -1;
          pcVar2 = local_644;
          do {
            pcVar34 = pcVar2;
            if (iVar30 == 0) break;
            iVar30 = iVar30 + -1;
            pcVar34 = pcVar2 + (uint)bVar36 * -2 + 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar34;
          } while (cVar1 != '\0');
          pcVar34 = pcVar34 + -1;
          do {
            cVar1 = *pcVar32;
            *pcVar34 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar32[1];
            pcVar32 = pcVar32 + 2;
            pcVar34[1] = cVar1;
            pcVar34 = pcVar34 + 2;
          } while (cVar1 != '\0');
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
                    (g_CEditorTools_PTR_005b6d50,local_644);
          break;
        case 0x255:
        case 0x256:
          pcVar2 = local_844;
          pcVar32 = (char *)(iVar28 * 0x28 + 0x1cc81a0);
          do {
            cVar1 = *pcVar32;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar32[1];
            pcVar32 = pcVar32 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          pcVar32 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                              (" is assigned to the mouse.  Can't assign a key.");
          iVar30 = -1;
          pcVar2 = local_844;
          do {
            pcVar34 = pcVar2;
            if (iVar30 == 0) break;
            iVar30 = iVar30 + -1;
            pcVar34 = pcVar2 + (uint)bVar36 * -2 + 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar34;
          } while (cVar1 != '\0');
          pcVar34 = pcVar34 + -1;
          do {
            cVar1 = *pcVar32;
            *pcVar34 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar32[1];
            pcVar32 = pcVar32 + 2;
            pcVar34[1] = cVar1;
            pcVar34 = pcVar34 + 2;
          } while (cVar1 != '\0');
          shape_edittool_cpp_FUN_0046fcd0(g_CEditorTools_PTR_005b6d50,local_844);
          break;
        default:
          while( true ) {
            if (g_CGame_PTR_005b9354->game_control == CONTROL_MODE_GAMEPAD) {
              core_game_cpp_CGame_resetKeyState_FUN_0049e8b0(g_CGame_PTR_005b9354);
            }
            EVar31 = 0xffffffff;
            EVar29 = 0;
            do {
              iVar30 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,EVar29);
              if ((iVar30 != 0) && (bVar35 = -1 < (int)EVar31, EVar31 = EVar29, bVar35))
              goto LAB_004d3d37;
              EVar29 = EVar29 + DIK_ESCAPE;
            } while ((int)EVar29 < 600);
            if (EVar31 == 0xffffffff) break;
LAB_004d3d37:
            pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                               ("OK - you can release the key now...");
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
                      (g_CEditorTools_PTR_005b6d50,pcVar2);
            iVar30 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_ESCAPE);
            if (iVar30 != 0) break;
            wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
          }
          iVar30 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_ESCAPE);
          if (iVar30 == 0) {
            pcVar32 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                ("Press new key or button for ");
            pcVar2 = acStack_444;
            do {
              cVar1 = *pcVar32;
              *pcVar2 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar32[1];
              pcVar32 = pcVar32 + 2;
              pcVar2[1] = cVar1;
              pcVar2 = pcVar2 + 2;
            } while (cVar1 != '\0');
            pcVar32 = (char *)(iVar28 * 0x28 + 0x1cc81a0);
            iVar30 = -1;
            pcVar2 = acStack_444;
            do {
              pcVar34 = pcVar2;
              if (iVar30 == 0) break;
              iVar30 = iVar30 + -1;
              pcVar34 = pcVar2 + (uint)bVar36 * -2 + 1;
              cVar1 = *pcVar2;
              pcVar2 = pcVar34;
            } while (cVar1 != '\0');
            pcVar34 = pcVar34 + -1;
            do {
              cVar1 = *pcVar32;
              *pcVar34 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar32[1];
              pcVar32 = pcVar32 + 2;
              pcVar34[1] = cVar1;
              pcVar34 = pcVar34 + 2;
            } while (cVar1 != '\0');
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
                      (g_CEditorTools_PTR_005b6d50,acStack_444);
            engine_keys_cpp_CKeys_toggleInputMask_FUN_004c4210(g_CKeys_PTR_005bac64,1);
LAB_004d3e28:
            do {
              wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
              if (g_CGame_PTR_005b9354->game_control == CONTROL_MODE_GAMEPAD) {
                core_game_cpp_CGame_resetKeyState_FUN_0049e8b0(g_CGame_PTR_005b9354);
              }
              EVar31 = 0xffffffff;
              EVar29 = 0;
              do {
                iVar30 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,EVar29);
                if ((iVar30 != 0) && (bVar35 = -1 < (int)EVar31, EVar31 = EVar29, bVar35))
                goto LAB_004d3e28;
                EVar29 = EVar29 + DIK_ESCAPE;
              } while ((int)EVar29 < 600);
            } while ((int)EVar31 < 0);
            **(EInputCodeType **)(&DAT_01cc8124 + iVar28 * 4) = EVar31;
            pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                               ("OK - you can release the key now...");
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
                      (g_CEditorTools_PTR_005b6d50,pcVar2);
            while( true ) {
              if (g_CGame_PTR_005b9354->game_control == CONTROL_MODE_GAMEPAD) {
                core_game_cpp_CGame_resetKeyState_FUN_0049e8b0(g_CGame_PTR_005b9354);
              }
              EVar31 = 0xffffffff;
              EVar29 = 0;
              do {
                iVar30 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,EVar29);
                if ((iVar30 != 0) && (bVar35 = -1 < (int)EVar31, EVar31 = EVar29, bVar35))
                goto LAB_004d3ec0;
                EVar29 = EVar29 + DIK_ESCAPE;
              } while ((int)EVar29 < 600);
              if (EVar31 == 0xffffffff) break;
LAB_004d3ec0:
              wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
            }
            iVar30 = 0;
            if (0 < _DAT_01cc8120) {
              iVar33 = 0;
              do {
                if ((iVar30 != iVar28) &&
                   (**(int **)(&DAT_01cc8124 + iVar33) == **(int **)(&DAT_01cc8124 + iVar28 * 4))) {
                  **(int **)(&DAT_01cc8124 + iVar33) = 599;
                }
                iVar30 = iVar30 + 1;
                iVar33 = iVar33 + 4;
              } while (iVar30 < _DAT_01cc8120);
            }
            engine_keys_cpp_CKeys_toggleInputMask_FUN_004c4210(g_CKeys_PTR_005bac64,0);
          }
          else {
            engine_2d_c_clearInputAndWait_FUN_00403f50();
          }
        }
        shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(&local_244,0);
      }
      goto LAB_004d2d2e;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(&local_244,0);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Forward");
    iVar30 = core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40
                       ((EInputCodeType *)&g_CGame_PTR_005b9354->key_walk,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Back");
    iVar28 = core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40
                       ((EInputCodeType *)&g_CGame_PTR_005b9354->key_backup,pcVar2);
    if (g_CGame_PTR_005b9354->always_run == 0) {
      pcVar2 = "Run";
    }
    else {
      pcVar2 = "Walk";
    }
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar2);
    iVar33 = core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40
                       ((EInputCodeType *)&g_CGame_PTR_005b9354->key_run,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Strafe on");
    iVar3 = core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40
                      ((EInputCodeType *)&g_CGame_PTR_005b9354->key_strafe,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Strafe left");
    iVar4 = core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40
                      ((EInputCodeType *)&g_CGame_PTR_005b9354->key_strafe_left,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Strafe right");
    iVar5 = core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40
                      ((EInputCodeType *)&g_CGame_PTR_005b9354->key_strafe_right,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Turn left");
    iVar6 = core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40
                      ((EInputCodeType *)&g_CGame_PTR_005b9354->key_left,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Turn right");
    iVar7 = core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40
                      ((EInputCodeType *)&g_CGame_PTR_005b9354->key_right,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Fire / Action");
    iVar8 = core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40
                      ((EInputCodeType *)&g_CGame_PTR_005b9354->key_fire,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Use item");
    iVar9 = core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40
                      ((EInputCodeType *)&g_CGame_PTR_005b9354->key_use_item,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Light");
    iVar10 = core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40
                       ((EInputCodeType *)&g_CGame_PTR_005b9354->key_light,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Night Vision");
    iVar11 = core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40
                       ((EInputCodeType *)&g_CGame_PTR_005b9354->key_infrared,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Draw");
    iVar12 = core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40
                       ((EInputCodeType *)&g_CGame_PTR_005b9354->key_draw,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Point up");
    iVar13 = core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40
                       ((EInputCodeType *)&g_CGame_PTR_005b9354->key_point_up,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Point down");
    iVar14 = core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40
                       ((EInputCodeType *)&g_CGame_PTR_005b9354->key_point_down,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Jump");
    iVar15 = core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40
                       ((EInputCodeType *)&g_CGame_PTR_005b9354->key_jump,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Select pistol weapons");
    iVar16 = core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40
                       ((EInputCodeType *)&g_CGame_PTR_005b9354->key_weapon_1,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Select assault weapons");
    iVar17 = core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40
                       ((EInputCodeType *)&g_CGame_PTR_005b9354->key_weapon_2,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Select flame weapons");
    iVar18 = core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40
                       ((EInputCodeType *)&g_CGame_PTR_005b9354->key_weapon_3,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Select grenade weapons");
    iVar19 = core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40
                       ((EInputCodeType *)&g_CGame_PTR_005b9354->key_weapon_4,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Select melee weapons");
    iVar20 = core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40
                       ((EInputCodeType *)&g_CGame_PTR_005b9354->key_weapon_5,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Next weapon");
    iVar21 = core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40
                       ((EInputCodeType *)&g_CGame_PTR_005b9354->key_next_weapon,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Previous weapon");
    iVar22 = core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40
                       ((EInputCodeType *)&g_CGame_PTR_005b9354->key_prev_weapon,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Next item");
    iVar23 = core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40
                       ((EInputCodeType *)&g_CGame_PTR_005b9354->key_next_item,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Previous item");
    iVar24 = core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40
                       ((EInputCodeType *)&g_CGame_PTR_005b9354->key_prev_item,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Item description");
    iVar25 = core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40
                       ((EInputCodeType *)&g_CGame_PTR_005b9354->key_item_desc,pcVar2);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Next ammo");
    iVar26 = core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40
                       ((EInputCodeType *)&g_CGame_PTR_005b9354->key_next_ammo,pcVar2);
    if ((((((((((((((((((((((((((iVar30 != 0 || iVar28 != 0) || iVar33 != 0) || iVar3 != 0) ||
                             iVar4 != 0) || iVar5 != 0) || iVar6 != 0) || iVar7 != 0) || iVar8 != 0)
                        || iVar9 != 0) || iVar10 != 0) || iVar11 != 0) || iVar12 != 0) ||
                    iVar13 != 0) || iVar14 != 0) || iVar15 != 0) || iVar16 != 0) || iVar17 != 0) ||
               iVar18 != 0) || iVar19 != 0) || iVar20 != 0) || iVar21 != 0) || iVar22 != 0) ||
          iVar23 != 0) || iVar24 != 0) || iVar25 != 0) || iVar26 != 0) {
      core_game_cpp_CGame_restoreDefaultControls_FUN_0049e610(g_CGame_PTR_005b9354);
      shape_edittool_cpp_FUN_0046fcd0
                (g_CEditorTools_PTR_005b6d50,"One or more keys not valid.  Restoring default controls.");
      return;
    }
  }
  return;
}
