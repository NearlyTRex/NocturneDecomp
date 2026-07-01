// Name: core_menu.cpp_configureCustomKeyBindings_FUN_005138e0
// Address: 005138e0
// Address Range: [[005138e0, 00514f4d]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_configureCustomKeyBindings_FUN_005138e0(void)

#include "nocturne.h"

void __cdecl core_menu_cpp_configureCustomKeyBindings_FUN_005138e0(void)

{
  char cVar2;
  char *pcVar2;
  char *pcVar3;
  int iVar4_00;
  int iVar15_00;
  int iVar27;
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
  int *piVar28;
  char (*pacVar28) [40];
  EInputCodeType EVar29;
  EInputCodeType EVar30;
  int iVar30;
  int iVar31;
  EInputCodeType EVar32;
  EInputCodeType EVar31;
  char *pcVar33;
  char *pcVar32;
  int iVar34;
  char *pcVar34;
  char *pcVar35;
  bool bVar36;
  bool bVar35;
  byte bVar37;
  CPickList local_a7c;
  char local_6d4 [512];
  char acStack_4d4 [512];
  char local_2d4 [512];
  char local_d4 [200];
  int local_c;
  char cVar1;
  uint window_flags;
  
  bVar37 = 0;
  if (((g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) && (g_CGamePtr->x_center == 0)) &&
     (iVar4_00 = core_menu_cpp_calibrateGamepad_FUN_005104d0(), iVar4_00 == 0)) {
    return;
  }
  local_c = 0;
LAB_0051390e:
  do {
    g_CustomKeyCount = 0;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Forward");
    piVar28 = &g_CGamePtr->key_walk;
    if (0x1d < g_CustomKeyCount) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2091;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = g_CustomKeyNames[g_CustomKeyCount];
    g_CustomKeyPointers[g_CustomKeyCount] = piVar28;
    do {
      cVar1 = *pcVar2;
      (*(char (*) [40])pcVar33)[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar2 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      (*(char (*) [40])pcVar33)[1] = cVar2;
      pcVar33 = *(char (*) [40])pcVar33 + 2;
    } while (cVar2 != '\0');
    g_CustomKeyCount = g_CustomKeyCount + 1;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Back");
    piVar28 = &g_CGamePtr->key_backup;
    if (0x1d < g_CustomKeyCount) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2091;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar32 = g_CustomKeyNames[g_CustomKeyCount];
    g_CustomKeyPointers[g_CustomKeyCount] = piVar28;
    do {
      cVar2 = *pcVar3;
      *pcVar32 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar32[1] = cVar2;
      pcVar32 = pcVar32 + 2;
    } while (cVar2 != '\0');
    g_CustomKeyCount = g_CustomKeyCount + 1;
    if (g_CGamePtr->always_run == 0) {
      pcVar3 = "Run";
    }
    else {
      pcVar3 = "Walk";
    }
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar3);
    piVar27 = &g_CGamePtr->key_run;
    if (0x1d < g_CustomKeyCount) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2091;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar32 = g_CustomKeyNames[g_CustomKeyCount];
    g_CustomKeyPointers[g_CustomKeyCount] = piVar27;
    do {
      cVar2 = *pcVar3;
      *pcVar32 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar32[1] = cVar2;
      pcVar32 = pcVar32 + 2;
    } while (cVar2 != '\0');
    g_CustomKeyCount = g_CustomKeyCount + 1;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Strafe on");
    piVar28 = &g_CGamePtr->key_strafe;
    if (0x1d < g_CustomKeyCount) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2091;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar32 = g_CustomKeyNames[g_CustomKeyCount];
    g_CustomKeyPointers[g_CustomKeyCount] = piVar28;
    do {
      cVar2 = *pcVar3;
      *pcVar32 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar32[1] = cVar2;
      pcVar32 = pcVar32 + 2;
    } while (cVar2 != '\0');
    g_CustomKeyCount = g_CustomKeyCount + 1;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Strafe left");
    piVar28 = &g_CGamePtr->key_strafe_left;
    if (0x1d < g_CustomKeyCount) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2091;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar32 = g_CustomKeyNames[g_CustomKeyCount];
    g_CustomKeyPointers[g_CustomKeyCount] = piVar28;
    do {
      cVar2 = *pcVar3;
      *pcVar32 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar32[1] = cVar2;
      pcVar32 = pcVar32 + 2;
    } while (cVar2 != '\0');
    g_CustomKeyCount = g_CustomKeyCount + 1;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Strafe right");
    piVar28 = &g_CGamePtr->key_strafe_right;
    if (0x1d < g_CustomKeyCount) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2091;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar32 = g_CustomKeyNames[g_CustomKeyCount];
    g_CustomKeyPointers[g_CustomKeyCount] = piVar28;
    do {
      cVar2 = *pcVar3;
      *pcVar32 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar32[1] = cVar2;
      pcVar32 = pcVar32 + 2;
    } while (cVar2 != '\0');
    g_CustomKeyCount = g_CustomKeyCount + 1;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Turn left");
    piVar28 = &g_CGamePtr->key_left;
    if (0x1d < g_CustomKeyCount) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2091;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar32 = g_CustomKeyNames[g_CustomKeyCount];
    g_CustomKeyPointers[g_CustomKeyCount] = piVar28;
    do {
      cVar2 = *pcVar3;
      *pcVar32 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar32[1] = cVar2;
      pcVar32 = pcVar32 + 2;
    } while (cVar2 != '\0');
    g_CustomKeyCount = g_CustomKeyCount + 1;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Turn right");
    piVar28 = &g_CGamePtr->key_right;
    if (0x1d < g_CustomKeyCount) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2091;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar32 = g_CustomKeyNames[g_CustomKeyCount];
    g_CustomKeyPointers[g_CustomKeyCount] = piVar28;
    do {
      cVar2 = *pcVar3;
      *pcVar32 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar32[1] = cVar2;
      pcVar32 = pcVar32 + 2;
    } while (cVar2 != '\0');
    g_CustomKeyCount = g_CustomKeyCount + 1;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Fire / Action");
    piVar28 = &g_CGamePtr->key_fire;
    if (0x1d < g_CustomKeyCount) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2091;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar32 = g_CustomKeyNames[g_CustomKeyCount];
    g_CustomKeyPointers[g_CustomKeyCount] = piVar28;
    do {
      cVar2 = *pcVar3;
      *pcVar32 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar32[1] = cVar2;
      pcVar32 = pcVar32 + 2;
    } while (cVar2 != '\0');
    g_CustomKeyCount = g_CustomKeyCount + 1;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Use item");
    piVar28 = &g_CGamePtr->key_use_item;
    if (0x1d < g_CustomKeyCount) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2091;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar32 = g_CustomKeyNames[g_CustomKeyCount];
    g_CustomKeyPointers[g_CustomKeyCount] = piVar28;
    do {
      cVar2 = *pcVar3;
      *pcVar32 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar32[1] = cVar2;
      pcVar32 = pcVar32 + 2;
    } while (cVar2 != '\0');
    g_CustomKeyCount = g_CustomKeyCount + 1;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Light");
    piVar28 = &g_CGamePtr->key_light;
    if (0x1d < g_CustomKeyCount) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2091;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar32 = g_CustomKeyNames[g_CustomKeyCount];
    g_CustomKeyPointers[g_CustomKeyCount] = piVar28;
    do {
      cVar2 = *pcVar3;
      *pcVar32 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar32[1] = cVar2;
      pcVar32 = pcVar32 + 2;
    } while (cVar2 != '\0');
    g_CustomKeyCount = g_CustomKeyCount + 1;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Night Vision");
    piVar28 = &g_CGamePtr->key_infrared;
    if (0x1d < g_CustomKeyCount) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2091;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar32 = g_CustomKeyNames[g_CustomKeyCount];
    g_CustomKeyPointers[g_CustomKeyCount] = piVar28;
    do {
      cVar2 = *pcVar3;
      *pcVar32 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar32[1] = cVar2;
      pcVar32 = pcVar32 + 2;
    } while (cVar2 != '\0');
    g_CustomKeyCount = g_CustomKeyCount + 1;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Draw");
    piVar28 = &g_CGamePtr->key_draw;
    if (0x1d < g_CustomKeyCount) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2091;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar32 = g_CustomKeyNames[g_CustomKeyCount];
    g_CustomKeyPointers[g_CustomKeyCount] = piVar28;
    do {
      cVar2 = *pcVar3;
      *pcVar32 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar32[1] = cVar2;
      pcVar32 = pcVar32 + 2;
    } while (cVar2 != '\0');
    g_CustomKeyCount = g_CustomKeyCount + 1;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Point up");
    piVar28 = &g_CGamePtr->key_point_up;
    if (0x1d < g_CustomKeyCount) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2091;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar32 = g_CustomKeyNames[g_CustomKeyCount];
    g_CustomKeyPointers[g_CustomKeyCount] = piVar28;
    do {
      cVar2 = *pcVar3;
      *pcVar32 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar32[1] = cVar2;
      pcVar32 = pcVar32 + 2;
    } while (cVar2 != '\0');
    g_CustomKeyCount = g_CustomKeyCount + 1;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Point down");
    piVar28 = &g_CGamePtr->key_point_down;
    if (0x1d < g_CustomKeyCount) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2091;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar32 = g_CustomKeyNames[g_CustomKeyCount];
    g_CustomKeyPointers[g_CustomKeyCount] = piVar28;
    do {
      cVar2 = *pcVar3;
      *pcVar32 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar32[1] = cVar2;
      pcVar32 = pcVar32 + 2;
    } while (cVar2 != '\0');
    g_CustomKeyCount = g_CustomKeyCount + 1;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Jump");
    piVar28 = &g_CGamePtr->key_jump;
    if (0x1d < g_CustomKeyCount) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2091;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar32 = g_CustomKeyNames[g_CustomKeyCount];
    g_CustomKeyPointers[g_CustomKeyCount] = piVar28;
    do {
      cVar2 = *pcVar3;
      *pcVar32 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar32[1] = cVar2;
      pcVar32 = pcVar32 + 2;
    } while (cVar2 != '\0');
    g_CustomKeyCount = g_CustomKeyCount + 1;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select pistol weapons");
    piVar28 = &g_CGamePtr->key_weapon_1;
    if (0x1d < g_CustomKeyCount) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2091;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar32 = g_CustomKeyNames[g_CustomKeyCount];
    g_CustomKeyPointers[g_CustomKeyCount] = piVar28;
    do {
      cVar2 = *pcVar3;
      *pcVar32 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar32[1] = cVar2;
      pcVar32 = pcVar32 + 2;
    } while (cVar2 != '\0');
    g_CustomKeyCount = g_CustomKeyCount + 1;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select assault weapons");
    piVar28 = &g_CGamePtr->key_weapon_2;
    if (0x1d < g_CustomKeyCount) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2091;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar32 = g_CustomKeyNames[g_CustomKeyCount];
    g_CustomKeyPointers[g_CustomKeyCount] = piVar28;
    do {
      cVar2 = *pcVar3;
      *pcVar32 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar32[1] = cVar2;
      pcVar32 = pcVar32 + 2;
    } while (cVar2 != '\0');
    g_CustomKeyCount = g_CustomKeyCount + 1;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select flame weapons");
    piVar28 = &g_CGamePtr->key_weapon_3;
    if (0x1d < g_CustomKeyCount) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2091;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar32 = g_CustomKeyNames[g_CustomKeyCount];
    g_CustomKeyPointers[g_CustomKeyCount] = piVar28;
    do {
      cVar2 = *pcVar3;
      *pcVar32 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar32[1] = cVar2;
      pcVar32 = pcVar32 + 2;
    } while (cVar2 != '\0');
    g_CustomKeyCount = g_CustomKeyCount + 1;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select grenade weapons");
    piVar28 = &g_CGamePtr->key_weapon_4;
    if (0x1d < g_CustomKeyCount) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2091;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar32 = g_CustomKeyNames[g_CustomKeyCount];
    g_CustomKeyPointers[g_CustomKeyCount] = piVar28;
    do {
      cVar2 = *pcVar3;
      *pcVar32 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar32[1] = cVar2;
      pcVar32 = pcVar32 + 2;
    } while (cVar2 != '\0');
    g_CustomKeyCount = g_CustomKeyCount + 1;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select melee weapons");
    piVar28 = &g_CGamePtr->key_weapon_5;
    if (0x1d < g_CustomKeyCount) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2091;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar32 = g_CustomKeyNames[g_CustomKeyCount];
    g_CustomKeyPointers[g_CustomKeyCount] = piVar28;
    do {
      cVar2 = *pcVar3;
      *pcVar32 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar32[1] = cVar2;
      pcVar32 = pcVar32 + 2;
    } while (cVar2 != '\0');
    g_CustomKeyCount = g_CustomKeyCount + 1;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Next weapon");
    piVar28 = &g_CGamePtr->key_next_weapon;
    if (0x1d < g_CustomKeyCount) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2091;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar32 = g_CustomKeyNames[g_CustomKeyCount];
    g_CustomKeyPointers[g_CustomKeyCount] = piVar28;
    do {
      cVar2 = *pcVar3;
      *pcVar32 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar32[1] = cVar2;
      pcVar32 = pcVar32 + 2;
    } while (cVar2 != '\0');
    g_CustomKeyCount = g_CustomKeyCount + 1;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Previous weapon");
    piVar28 = &g_CGamePtr->key_prev_weapon;
    if (0x1d < g_CustomKeyCount) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2091;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar32 = g_CustomKeyNames[g_CustomKeyCount];
    g_CustomKeyPointers[g_CustomKeyCount] = piVar28;
    do {
      cVar2 = *pcVar3;
      *pcVar32 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar32[1] = cVar2;
      pcVar32 = pcVar32 + 2;
    } while (cVar2 != '\0');
    g_CustomKeyCount = g_CustomKeyCount + 1;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Next item");
    piVar28 = &g_CGamePtr->key_next_item;
    if (0x1d < g_CustomKeyCount) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2091;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar32 = g_CustomKeyNames[g_CustomKeyCount];
    g_CustomKeyPointers[g_CustomKeyCount] = piVar28;
    do {
      cVar2 = *pcVar3;
      *pcVar32 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar32[1] = cVar2;
      pcVar32 = pcVar32 + 2;
    } while (cVar2 != '\0');
    g_CustomKeyCount = g_CustomKeyCount + 1;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Previous item");
    piVar28 = &g_CGamePtr->key_prev_item;
    if (0x1d < g_CustomKeyCount) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2091;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar32 = g_CustomKeyNames[g_CustomKeyCount];
    g_CustomKeyPointers[g_CustomKeyCount] = piVar28;
    do {
      cVar2 = *pcVar3;
      *pcVar32 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar32[1] = cVar2;
      pcVar32 = pcVar32 + 2;
    } while (cVar2 != '\0');
    g_CustomKeyCount = g_CustomKeyCount + 1;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Item description");
    piVar28 = &g_CGamePtr->key_item_desc;
    if (0x1d < g_CustomKeyCount) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2091;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar32 = g_CustomKeyNames[g_CustomKeyCount];
    g_CustomKeyPointers[g_CustomKeyCount] = piVar28;
    do {
      cVar2 = *pcVar3;
      *pcVar32 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar32[1] = cVar2;
      pcVar32 = pcVar32 + 2;
    } while (cVar2 != '\0');
    g_CustomKeyCount = g_CustomKeyCount + 1;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Next ammo");
    piVar28 = &g_CGamePtr->key_next_ammo;
    if (0x1d < g_CustomKeyCount) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 2091;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar32 = g_CustomKeyNames[g_CustomKeyCount];
    g_CustomKeyPointers[g_CustomKeyCount] = piVar28;
    do {
      cVar2 = *pcVar3;
      *pcVar32 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar32[1] = cVar2;
      pcVar32 = pcVar32 + 2;
    } while (cVar2 != '\0');
    g_CustomKeyCount = g_CustomKeyCount + 1;
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_a7c);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Restore defaults");
    iVar31 = 0;
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_a7c.base,pcVar3);
    if (0 < g_CustomKeyCount) {
      pacVar28 = g_CustomKeyNames;
      iVar34 = 0;
      do {
        pcVar3 = core_menu_cpp_getKeyDisplayName_FUN_005134e0
                           (**(EInputCodeType **)((int)g_CustomKeyPointers + iVar34));
        _sprintf(local_d4,"%s\t%s",pacVar28,pcVar3);
        iVar34 = iVar34 + 4;
        iVar31 = iVar31 + 1;
        pacVar28 = pacVar28 + 1;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_a7c.base,local_d4);
      } while (iVar31 < g_CustomKeyCount);
    }
    shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10(&local_a7c,1);
    window_flags = 0;
    iVar4_00 = local_c;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Edit key settings");
    iVar4_00 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         (&local_a7c,pcVar3,iVar4_00,window_flags);
    if (iVar4_00 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_a7c,0);
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Forward");
      iVar4_00 = core_menu_cpp_isKeyCodeValidForMode_FUN_00513720
                           ((EInputCodeType *)&g_CGamePtr->key_walk,pcVar3);
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Back");
      iVar15_00 = core_menu_cpp_isKeyCodeValidForMode_FUN_00513720
                            ((EInputCodeType *)&g_CGamePtr->key_backup,pcVar3);
      if (g_CGamePtr->always_run == 0) {
        pcVar3 = "Run";
      }
      else {
        pcVar3 = "Walk";
      }
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar3);
      iVar27 = core_menu_cpp_isKeyCodeValidForMode_FUN_00513720
                         ((EInputCodeType *)&g_CGamePtr->key_run,pcVar3);
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Strafe on");
      iVar3 = core_menu_cpp_isKeyCodeValidForMode_FUN_00513720
                        ((EInputCodeType *)&g_CGamePtr->key_strafe,pcVar3);
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Strafe left");
      iVar4 = core_menu_cpp_isKeyCodeValidForMode_FUN_00513720
                        ((EInputCodeType *)&g_CGamePtr->key_strafe_left,pcVar3);
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Strafe right");
      iVar5 = core_menu_cpp_isKeyCodeValidForMode_FUN_00513720
                        ((EInputCodeType *)&g_CGamePtr->key_strafe_right,pcVar3);
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Turn left");
      iVar6 = core_menu_cpp_isKeyCodeValidForMode_FUN_00513720
                        ((EInputCodeType *)&g_CGamePtr->key_left,pcVar3);
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Turn right");
      iVar7 = core_menu_cpp_isKeyCodeValidForMode_FUN_00513720
                        ((EInputCodeType *)&g_CGamePtr->key_right,pcVar3);
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Fire / Action");
      iVar8 = core_menu_cpp_isKeyCodeValidForMode_FUN_00513720
                        ((EInputCodeType *)&g_CGamePtr->key_fire,pcVar3);
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Use item");
      iVar9 = core_menu_cpp_isKeyCodeValidForMode_FUN_00513720
                        ((EInputCodeType *)&g_CGamePtr->key_use_item,pcVar3);
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Light");
      iVar10 = core_menu_cpp_isKeyCodeValidForMode_FUN_00513720
                         ((EInputCodeType *)&g_CGamePtr->key_light,pcVar3);
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Night Vision");
      iVar11 = core_menu_cpp_isKeyCodeValidForMode_FUN_00513720
                         ((EInputCodeType *)&g_CGamePtr->key_infrared,pcVar3);
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Draw");
      iVar12 = core_menu_cpp_isKeyCodeValidForMode_FUN_00513720
                         ((EInputCodeType *)&g_CGamePtr->key_draw,pcVar3);
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Point up");
      iVar13 = core_menu_cpp_isKeyCodeValidForMode_FUN_00513720
                         ((EInputCodeType *)&g_CGamePtr->key_point_up,pcVar3);
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Point down");
      iVar14 = core_menu_cpp_isKeyCodeValidForMode_FUN_00513720
                         ((EInputCodeType *)&g_CGamePtr->key_point_down,pcVar3);
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Jump");
      iVar15 = core_menu_cpp_isKeyCodeValidForMode_FUN_00513720
                         ((EInputCodeType *)&g_CGamePtr->key_jump,pcVar3);
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select pistol weapons");
      iVar16 = core_menu_cpp_isKeyCodeValidForMode_FUN_00513720
                         ((EInputCodeType *)&g_CGamePtr->key_weapon_1,pcVar3);
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select assault weapons")
      ;
      iVar17 = core_menu_cpp_isKeyCodeValidForMode_FUN_00513720
                         ((EInputCodeType *)&g_CGamePtr->key_weapon_2,pcVar3);
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select flame weapons");
      iVar18 = core_menu_cpp_isKeyCodeValidForMode_FUN_00513720
                         ((EInputCodeType *)&g_CGamePtr->key_weapon_3,pcVar3);
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select grenade weapons")
      ;
      iVar19 = core_menu_cpp_isKeyCodeValidForMode_FUN_00513720
                         ((EInputCodeType *)&g_CGamePtr->key_weapon_4,pcVar3);
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select melee weapons");
      iVar20 = core_menu_cpp_isKeyCodeValidForMode_FUN_00513720
                         ((EInputCodeType *)&g_CGamePtr->key_weapon_5,pcVar3);
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Next weapon");
      iVar21 = core_menu_cpp_isKeyCodeValidForMode_FUN_00513720
                         ((EInputCodeType *)&g_CGamePtr->key_next_weapon,pcVar3);
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Previous weapon");
      iVar22 = core_menu_cpp_isKeyCodeValidForMode_FUN_00513720
                         ((EInputCodeType *)&g_CGamePtr->key_prev_weapon,pcVar3);
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Next item");
      iVar23 = core_menu_cpp_isKeyCodeValidForMode_FUN_00513720
                         ((EInputCodeType *)&g_CGamePtr->key_next_item,pcVar3);
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Previous item");
      iVar24 = core_menu_cpp_isKeyCodeValidForMode_FUN_00513720
                         ((EInputCodeType *)&g_CGamePtr->key_prev_item,pcVar3);
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Item description");
      iVar25 = core_menu_cpp_isKeyCodeValidForMode_FUN_00513720
                         ((EInputCodeType *)&g_CGamePtr->key_item_desc,pcVar3);
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Next ammo");
      iVar26 = core_menu_cpp_isKeyCodeValidForMode_FUN_00513720
                         ((EInputCodeType *)&g_CGamePtr->key_next_ammo,pcVar3);
      if ((((((((((((((((((((((((((iVar4_00 == 0 && iVar15_00 == 0) && iVar27 == 0) && iVar3 == 0)
                               && iVar4 == 0) && iVar5 == 0) && iVar6 == 0) && iVar7 == 0) &&
                           iVar8 == 0) && iVar9 == 0) && iVar10 == 0) && iVar11 == 0) && iVar12 == 0
                       ) && iVar13 == 0) && iVar14 == 0) && iVar15 == 0) && iVar16 == 0) &&
                  iVar17 == 0) && iVar18 == 0) && iVar19 == 0) && iVar20 == 0) && iVar21 == 0) &&
             iVar22 == 0) && iVar23 == 0) && iVar24 == 0) && iVar25 == 0) && iVar26 == 0) {
        return;
      }
      core_game_cpp_CGame_restoreDefaultControls_FUN_004dbbc0(g_CGamePtr);
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"One or more keys not valid.  Restoring default controls.");
      return;
    }
    if (iVar4_00 != 0) {
      iVar15_00 = iVar4_00 + -1;
      local_c = iVar4_00;
      switch(*g_CustomKeyPointers[iVar15_00]) {
      case 0x251:
      case 0x252:
      case 0x253:
      case 0x254:
        pcVar3 = local_6d4;
        pcVar32 = g_CustomKeyNames[iVar15_00];
        do {
          cVar2 = *pcVar32;
          *pcVar3 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar32[1];
          pcVar32 = pcVar32 + 2;
          pcVar3[1] = cVar2;
          pcVar3 = pcVar3 + 2;
        } while (cVar2 != '\0');
        pcVar32 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                            (" is assigned to the gamepad.  Can't assign a key.");
        iVar4_00 = -1;
        pcVar3 = local_6d4;
        do {
          pcVar34 = pcVar3;
          if (iVar4_00 == 0) break;
          iVar4_00 = iVar4_00 + -1;
          pcVar34 = pcVar3 + (uint)bVar37 * -2 + 1;
          cVar2 = *pcVar3;
          pcVar3 = pcVar34;
        } while (cVar2 != '\0');
        pcVar34 = pcVar34 + -1;
        do {
          cVar2 = *pcVar32;
          *pcVar34 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar32[1];
          pcVar32 = pcVar32 + 2;
          pcVar34[1] = cVar2;
          pcVar34 = pcVar34 + 2;
        } while (cVar2 != '\0');
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,local_6d4);
        break;
      case 0x255:
      case 0x256:
        pcVar3 = local_2d4;
        pcVar32 = g_CustomKeyNames[iVar15_00];
        do {
          cVar2 = *pcVar32;
          *pcVar3 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar32[1];
          pcVar32 = pcVar32 + 2;
          pcVar3[1] = cVar2;
          pcVar3 = pcVar3 + 2;
        } while (cVar2 != '\0');
        pcVar32 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                            (" is assigned to the mouse.  Can't assign a key.");
        iVar4_00 = -1;
        pcVar3 = local_2d4;
        do {
          pcVar34 = pcVar3;
          if (iVar4_00 == 0) break;
          iVar4_00 = iVar4_00 + -1;
          pcVar34 = pcVar3 + (uint)bVar37 * -2 + 1;
          cVar2 = *pcVar3;
          pcVar3 = pcVar34;
        } while (cVar2 != '\0');
        pcVar34 = pcVar34 + -1;
        do {
          cVar2 = *pcVar32;
          *pcVar34 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar32[1];
          pcVar32 = pcVar32 + 2;
          pcVar34[1] = cVar2;
          pcVar34 = pcVar34 + 2;
        } while (cVar2 != '\0');
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,local_2d4);
        break;
      default:
        while( true ) {
          if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
            core_game_cpp_CGame_resetKeyState_FUN_004dbe60(g_CGamePtr);
          }
          EVar32 = 0xffffffff;
          EVar29 = 0;
          do {
            iVar4_00 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,EVar29);
            if ((iVar4_00 != 0) && (bVar36 = -1 < (int)EVar32, EVar32 = EVar29, bVar36))
            goto LAB_00514913;
            EVar29 = EVar29 + DIK_ESCAPE;
          } while ((int)EVar29 < 600);
          if (EVar32 == 0xffffffff) break;
LAB_00514913:
          pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("OK - you can release the key now...");
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,pcVar3);
          iVar4_00 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_ESCAPE);
          if (iVar4_00 != 0) break;
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        }
        iVar4_00 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_ESCAPE);
        if (iVar4_00 != 0) {
          engine_2d_c_clearInputAndWait_FUN_00403260();
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_a7c,0);
          goto LAB_0051390e;
        }
        pcVar32 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                            ("Press new key or button for ");
        pcVar3 = acStack_4d4;
        do {
          cVar2 = *pcVar32;
          *pcVar3 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar32[1];
          pcVar32 = pcVar32 + 2;
          pcVar3[1] = cVar2;
          pcVar3 = pcVar3 + 2;
        } while (cVar2 != '\0');
        pcVar3 = g_CustomKeyNames[iVar15_00];
        iVar4_00 = -1;
        pcVar35 = acStack_4d4;
        do {
          pcVar35 = pcVar35;
          if (iVar4_00 == 0) break;
          iVar4_00 = iVar4_00 + -1;
          pcVar35 = pcVar35 + (uint)bVar37 * -2 + 1;
          cVar2 = *pcVar35;
          pcVar35 = pcVar35;
        } while (cVar2 != '\0');
        pcVar32 = pcVar35 + -1;
        do {
          cVar2 = *pcVar3;
          *pcVar32 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar3[1];
          pcVar3 = pcVar3 + 2;
          pcVar32[1] = cVar2;
          pcVar32 = pcVar32 + 2;
        } while (cVar2 != '\0');
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,acStack_4d4);
        engine_keys_cpp_CKeys_toggleInputMask_FUN_005024b0(g_CKeysPtr,1);
LAB_00514a04:
        do {
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
            core_game_cpp_CGame_resetKeyState_FUN_004dbe60(g_CGamePtr);
          }
          EVar31 = 0xffffffff;
          EVar30 = 0;
          do {
            iVar4_00 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,EVar30);
            if ((iVar4_00 != 0) && (bVar35 = -1 < (int)EVar31, EVar31 = EVar30, bVar35))
            goto LAB_00514a04;
            EVar30 = EVar30 + DIK_ESCAPE;
          } while ((int)EVar30 < 600);
        } while ((int)EVar31 < 0);
        *g_CustomKeyPointers[iVar15_00] = EVar31;
        pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                           ("OK - you can release the key now...");
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,pcVar3);
        while( true ) {
          if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
            core_game_cpp_CGame_resetKeyState_FUN_004dbe60(g_CGamePtr);
          }
          EVar31 = 0xffffffff;
          EVar30 = 0;
          do {
            iVar4_00 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,EVar30);
            if ((iVar4_00 != 0) && (bVar35 = -1 < (int)EVar31, EVar31 = EVar30, bVar35))
            goto LAB_00514a9c;
            EVar30 = EVar30 + DIK_ESCAPE;
          } while ((int)EVar30 < 600);
          if (EVar31 == 0xffffffff) break;
LAB_00514a9c:
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        }
        iVar4_00 = 0;
        if (0 < g_CustomKeyCount) {
          iVar30 = 0;
          do {
            if ((iVar4_00 != iVar15_00) &&
               (**(int **)((int)g_CustomKeyPointers + iVar30) == *g_CustomKeyPointers[iVar15_00])) {
              **(int **)((int)g_CustomKeyPointers + iVar30) = 599;
            }
            iVar4_00 = iVar4_00 + 1;
            iVar30 = iVar30 + 4;
          } while (iVar4_00 < g_CustomKeyCount);
        }
        engine_keys_cpp_CKeys_toggleInputMask_FUN_005024b0(g_CKeysPtr,0);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_a7c,0);
      goto LAB_0051390e;
    }
    core_game_cpp_CGame_restoreDefaultControls_FUN_004dbbc0(g_CGamePtr);
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_a7c,0);
  } while( true );
}
