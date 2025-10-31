// Name: core_menu.cpp_SettingCustomKeys_FUN_005138e0
// Address: 005138e0
// Address Range: [[005138e0, 00514f4d]]
// Convention: unknown
// Signature: undefined core_menu.cpp_SettingCustomKeys_FUN_005138e0()
// Cross-references:
//   core_menu.cpp_CustomKeySettings_FUN_00511890 (00511890) at 00511cec [UNCONDITIONAL_CALL]
//   core_menu.cpp_ShowOptionsScreen_FUN_00512d30 (00512d30) at 00512ed6 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_005138c0 = 00514869
//   TerminatedCString s_core_menu_cpp_00636e40
//   TerminatedCString s_Too_many_custom_keys_00636e51
//   TerminatedCString s_Forward_00636f36
//   TerminatedCString s_Back_00636f3e
//   TerminatedCString s_Walk_00636f43
//   TerminatedCString s_Run_00636f48
//   TerminatedCString s_Strafe_on_00636f4c
//   TerminatedCString s_Strafe_left_00636f56
//   TerminatedCString s_Strafe_right_00636f62
//   TerminatedCString s_Turn_left_00636f6f
//   TerminatedCString s_Turn_right_00636f79
//   TerminatedCString s_Fire_Action_00636f84
//   TerminatedCString s_Use_item_00636f92
//   TerminatedCString s_Light_00636f9b
//   TerminatedCString s_Night_Vision_00636fa1
//   TerminatedCString s_Draw_00636fae
//   TerminatedCString s_Point_up_00636fb3
//   TerminatedCString s_Point_down_00636fbc
//   TerminatedCString s_Jump_00636fc7
//   TerminatedCString s_Select_pistol_weapons_00636fcc
//   TerminatedCString s_Select_assault_weapons_00636fe2
//   TerminatedCString s_Select_flame_weapons_00636ff9
//   TerminatedCString s_Select_grenade_weapons_0063700e
//   TerminatedCString s_Select_melee_weapons_00637025
//   TerminatedCString s_Next_weapon_0063703a
//   TerminatedCString s_Previous_weapon_00637046
//   TerminatedCString s_Next_item_00637056
//   TerminatedCString s_Previous_item_00637060
//   TerminatedCString s_Item_description_0063706e
//   TerminatedCString s_Next_ammo_0063707f
//   TerminatedCString s_Restore_defaults_00637089
//   TerminatedCString s_Edit_key_settings_006370a0
//   TerminatedCString s_is_assigned_to_the_mouse_006370b2
//   TerminatedCString s_is_assigned_to_the_gamep_006370e2
//   TerminatedCString s_OK_you_can_release_the_k_00637114
//   TerminatedCString s_Press_new_key_or_button__00637138
//   TerminatedCString s_OK_you_can_release_the_k_00637155
//   TerminatedCString s_Forward_00637179
//   TerminatedCString s_Back_00637181
//   TerminatedCString s_Walk_00637186
//   TerminatedCString s_Run_0063718b
//   TerminatedCString s_Strafe_on_0063718f
//   TerminatedCString s_Strafe_left_00637199
//   TerminatedCString s_Strafe_right_006371a5
//   TerminatedCString s_Turn_left_006371b2
//   TerminatedCString s_Turn_right_006371bc
//   TerminatedCString s_Fire_Action_006371c7
//   TerminatedCString s_Use_item_006371d5
//   TerminatedCString s_Light_006371de
//   TerminatedCString s_Night_Vision_006371e4
//   TerminatedCString s_Draw_006371f1
//   TerminatedCString s_Point_up_006371f6
//   TerminatedCString s_Point_down_006371ff
//   TerminatedCString s_Jump_0063720a
//   TerminatedCString s_Select_pistol_weapons_0063720f
//   TerminatedCString s_Select_assault_weapons_00637225
//   TerminatedCString s_Select_flame_weapons_0063723c
//   TerminatedCString s_Select_grenade_weapons_00637251
//   TerminatedCString s_Select_melee_weapons_00637268
//   TerminatedCString s_Next_weapon_0063727d
//   TerminatedCString s_Previous_weapon_00637289
//   TerminatedCString s_Next_item_00637299
//   TerminatedCString s_Previous_item_006372a3
//   TerminatedCString s_Item_description_006372b1
//   TerminatedCString s_Next_ammo_006372c2
//   TerminatedCString s_One_or_more_keys_not_val_006372cc
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CEditorTools g_CEditorToolsPtr
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.key_walk
//   undefined4 g_CGameInstance.key_backup
//   undefined4 g_CGameInstance.key_run
//   undefined4 g_CGameInstance.key_strafe
//   undefined4 g_CGameInstance.key_strafe_left
//   undefined4 g_CGameInstance.key_strafe_right
//   undefined4 g_CGameInstance.key_right
//   undefined4 g_CGameInstance.key_left
//   undefined4 g_CGameInstance.key_fire
//   undefined4 g_CGameInstance.key_use_item
//   undefined4 g_CGameInstance.key_light
//   undefined4 g_CGameInstance.key_infrared
//   undefined4 g_CGameInstance.key_draw
//   undefined4 g_CGameInstance.key_jump
//   undefined4 g_CGameInstance.key_point_up
//   undefined4 g_CGameInstance.key_point_down
//   undefined4 g_CGameInstance.key_weapon_1
//   undefined4 g_CGameInstance.key_weapon_2
//   undefined4 g_CGameInstance.key_weapon_3
//   undefined4 g_CGameInstance.key_weapon_4
//   undefined4 g_CGameInstance.key_weapon_5
//   undefined4 g_CGameInstance.key_next_weapon
//   undefined4 g_CGameInstance.key_prev_weapon
//   undefined4 g_CGameInstance.key_next_item
//   undefined4 g_CGameInstance.key_prev_item
//   undefined4 g_CGameInstance.key_item_desc
//   undefined4 g_CGameInstance.key_next_ammo
//   undefined4 g_CGameInstance.always_run
//   undefined4 g_CGameInstance.x_center
//   undefined4 g_CGameInstance.game_control
//   void* g_CKeysPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_02f29270
//   undefined4 DAT_02f29274
//   undefined4 DAT_02f29278
//   undefined4 DAT_02f2927c
//   undefined4 DAT_02f29280
//   undefined4 DAT_02f29284
//   undefined4 DAT_02f29288
//   undefined4 DAT_02f2928c
//   undefined4 DAT_02f29290
//   undefined4 DAT_02f29294
//   undefined4 DAT_02f29298
//   undefined4 DAT_02f2929c
//   undefined4 DAT_02f292a0
//   undefined4 DAT_02f292a4
//   undefined4 DAT_02f292a8
//   undefined4 DAT_02f292ac
//   undefined4 DAT_02f292b0
//   undefined4 DAT_02f292b4
//   undefined4 DAT_02f292b8
//   undefined4 DAT_02f292bc
//   undefined4 DAT_02f292c0
//   undefined4 DAT_02f292c4
//   undefined4 DAT_02f292c8
//   undefined4 DAT_02f292cc
//   undefined4 DAT_02f292d0
//   undefined4 DAT_02f292d4
//   undefined4 DAT_02f292d8
//   undefined4 DAT_02f292dc
//   undefined1 DAT_02f292f0
//   undefined1 DAT_02f292f1
//   undefined1 DAT_02f292f2
//   undefined1 DAT_02f292f3
//   undefined1 DAT_02f29318
//   undefined1 DAT_02f29319
//   undefined1 DAT_02f2931a
//   undefined1 DAT_02f2931b
//   undefined1 DAT_02f29340
//   undefined1 DAT_02f29341
//   undefined1 DAT_02f29342
//   undefined1 DAT_02f29343
//   undefined1 DAT_02f29368
//   undefined1 DAT_02f29369
//   undefined1 DAT_02f2936a
//   undefined1 DAT_02f2936b
//   undefined1 DAT_02f29390
//   undefined1 DAT_02f29391
//   undefined1 DAT_02f29392
//   undefined1 DAT_02f29393
//   undefined1 DAT_02f293b8
//   undefined1 DAT_02f293b9
//   undefined1 DAT_02f293ba
//   undefined1 DAT_02f293bb
//   undefined1 DAT_02f293e0
//   undefined1 DAT_02f293e1
//   undefined1 DAT_02f293e2
//   undefined1 DAT_02f293e3
//   undefined1 DAT_02f29408
//   undefined1 DAT_02f29409
//   undefined1 DAT_02f2940a
//   undefined1 DAT_02f2940b
//   undefined1 DAT_02f29430
//   undefined1 DAT_02f29431
//   undefined1 DAT_02f29432
//   undefined1 DAT_02f29433
//   undefined1 DAT_02f29458
//   undefined1 DAT_02f29459
//   undefined1 DAT_02f2945a
//   undefined1 DAT_02f2945b
//   undefined1 DAT_02f29480
//   undefined1 DAT_02f29481
//   undefined1 DAT_02f29482
//   undefined1 DAT_02f29483
//   undefined1 DAT_02f294a8
//   undefined1 DAT_02f294a9
//   undefined1 DAT_02f294aa
//   undefined1 DAT_02f294ab
//   undefined1 DAT_02f294d0
//   undefined1 DAT_02f294d1
//   undefined1 DAT_02f294d2
//   undefined1 DAT_02f294d3
//   undefined1 DAT_02f294f8
//   undefined1 DAT_02f294f9
//   undefined1 DAT_02f294fa
//   undefined1 DAT_02f294fb
//   undefined1 DAT_02f29520
//   undefined1 DAT_02f29521
//   undefined1 DAT_02f29522
//   undefined1 DAT_02f29523
//   undefined1 DAT_02f29548
//   undefined1 DAT_02f29549
//   undefined1 DAT_02f2954a
//   undefined1 DAT_02f2954b
//   undefined1 DAT_02f29570
//   undefined1 DAT_02f29571
//   undefined1 DAT_02f29572
//   undefined1 DAT_02f29573
//   undefined1 DAT_02f29598
//   undefined1 DAT_02f29599
//   undefined1 DAT_02f2959a
//   undefined1 DAT_02f2959b
//   undefined1 DAT_02f295c0
//   undefined1 DAT_02f295c1
//   undefined1 DAT_02f295c2
//   undefined1 DAT_02f295c3
//   undefined1 DAT_02f295e8
//   undefined1 DAT_02f295e9
//   undefined1 DAT_02f295ea
//   undefined1 DAT_02f295eb
//   undefined1 DAT_02f29610
//   undefined1 DAT_02f29611
//   undefined1 DAT_02f29612
//   undefined1 DAT_02f29613
//   undefined1 DAT_02f29638
//   undefined1 DAT_02f29639
//   undefined1 DAT_02f2963a
//   undefined1 DAT_02f2963b
//   undefined1 DAT_02f29660
//   undefined1 DAT_02f29661
//   undefined1 DAT_02f29662
//   undefined1 DAT_02f29663
//   undefined1 DAT_02f29688
//   undefined1 DAT_02f29689
//   undefined1 DAT_02f2968a
//   undefined1 DAT_02f2968b
//   undefined1 DAT_02f296b0
//   undefined1 DAT_02f296b1
//   undefined1 DAT_02f296b2
//   undefined1 DAT_02f296b3
//   undefined1 DAT_02f296d8
//   undefined1 DAT_02f296d9
//   undefined1 DAT_02f296da
//   undefined1 DAT_02f296db
//   undefined1 DAT_02f29700
//   undefined1 DAT_02f29701
//   undefined1 DAT_02f29702
//   undefined1 DAT_02f29703
// Function calls:
//   core_game.cpp_CGame_resetKeyState_FUN_004dbe60
//   core_game.cpp_CGame_restoreDefaultControls_FUN_004dbbc0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_menu.cpp_LocalizeMainGameControls_FUN_005134e0
//   core_menu.cpp_SetUpGamepadControls_FUN_005104d0
//   core_menu.cpp_ValidateCustomKey_FUN_00513720
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

/* Signature: undefined1 core_menu.cpp_SettingCustomKeys() */

void core_menu_cpp_SettingCustomKeys_FUN_005138e0(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
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
  int iVar27;
  int iVar28;
  int *piVar29;
  undefined1 *puVar30;
  int iVar31;
  BADSPACEBASE *in_ESP;
  int iVar32;
  char *pcVar33;
  char *pcVar34;
  bool bVar35;
  byte bVar36;
  undefined4 in_stack_000000e8;
  int in_stack_000000f0;
  char **in_stack_fffff670;
  CPickList *in_stack_fffff674;
  CPickList *in_stack_fffff678;
  CStrList_vtable *in_stack_fffff67c;
  CStrList_vtable *in_stack_fffff680;
  CStrList_vtable *in_stack_fffff684;
  CStrList_vtable *in_stack_fffff688;
  CStrList_vtable *in_stack_fffff68c;
  CStrList_vtable *in_stack_fffff690;
  char acStack_5d8 [504];
  char acStack_3e0 [520];
  char acStack_1d8 [464];
  
  bVar36 = 0;
  if (((g_CGamePtr->game_control == 2) && (g_CGamePtr->x_center == 0)) &&
     (iVar32 = core_menu_cpp_SetUpGamepadControls_FUN_005104d0(), iVar32 == 0)) {
    return;
  }
LAB_0051390e:
  do {
    DAT_02f29270 = 0;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Forward");
    piVar29 = &g_CGamePtr->key_walk;
    if (0x1d < DAT_02f29270) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 0x82b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = &DAT_02f292f0 + DAT_02f29270 * 0x28;
    (&DAT_02f29274)[DAT_02f29270] = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    DAT_02f29270 = DAT_02f29270 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Back");
    piVar29 = &g_CGamePtr->key_backup;
    if (0x1d < DAT_02f29270) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 0x82b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = &DAT_02f292f0 + DAT_02f29270 * 0x28;
    (&DAT_02f29274)[DAT_02f29270] = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    DAT_02f29270 = DAT_02f29270 + 1;
    if (g_CGamePtr->always_run == 0) {
      pcVar2 = "Run";
    }
    else {
      pcVar2 = "Walk";
    }
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar2);
    piVar29 = &g_CGamePtr->key_run;
    if (0x1d < DAT_02f29270) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 0x82b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = &DAT_02f292f0 + DAT_02f29270 * 0x28;
    (&DAT_02f29274)[DAT_02f29270] = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    DAT_02f29270 = DAT_02f29270 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Strafe on");
    piVar29 = &g_CGamePtr->key_strafe;
    if (0x1d < DAT_02f29270) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 0x82b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = &DAT_02f292f0 + DAT_02f29270 * 0x28;
    (&DAT_02f29274)[DAT_02f29270] = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    DAT_02f29270 = DAT_02f29270 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Strafe left");
    piVar29 = &g_CGamePtr->key_strafe_left;
    if (0x1d < DAT_02f29270) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 0x82b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = &DAT_02f292f0 + DAT_02f29270 * 0x28;
    (&DAT_02f29274)[DAT_02f29270] = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    DAT_02f29270 = DAT_02f29270 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Strafe right");
    piVar29 = &g_CGamePtr->key_strafe_right;
    if (0x1d < DAT_02f29270) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 0x82b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = &DAT_02f292f0 + DAT_02f29270 * 0x28;
    (&DAT_02f29274)[DAT_02f29270] = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    DAT_02f29270 = DAT_02f29270 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Turn left");
    piVar29 = &g_CGamePtr->key_left;
    if (0x1d < DAT_02f29270) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 0x82b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = &DAT_02f292f0 + DAT_02f29270 * 0x28;
    (&DAT_02f29274)[DAT_02f29270] = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    DAT_02f29270 = DAT_02f29270 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Turn right");
    piVar29 = &g_CGamePtr->key_right;
    if (0x1d < DAT_02f29270) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 0x82b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = &DAT_02f292f0 + DAT_02f29270 * 0x28;
    (&DAT_02f29274)[DAT_02f29270] = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    DAT_02f29270 = DAT_02f29270 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Fire / Action");
    piVar29 = &g_CGamePtr->key_fire;
    if (0x1d < DAT_02f29270) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 0x82b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = &DAT_02f292f0 + DAT_02f29270 * 0x28;
    (&DAT_02f29274)[DAT_02f29270] = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    DAT_02f29270 = DAT_02f29270 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Use item");
    piVar29 = &g_CGamePtr->key_use_item;
    if (0x1d < DAT_02f29270) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 0x82b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = &DAT_02f292f0 + DAT_02f29270 * 0x28;
    (&DAT_02f29274)[DAT_02f29270] = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    DAT_02f29270 = DAT_02f29270 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Light");
    piVar29 = &g_CGamePtr->key_light;
    if (0x1d < DAT_02f29270) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 0x82b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = &DAT_02f292f0 + DAT_02f29270 * 0x28;
    (&DAT_02f29274)[DAT_02f29270] = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    DAT_02f29270 = DAT_02f29270 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Night Vision");
    piVar29 = &g_CGamePtr->key_infrared;
    if (0x1d < DAT_02f29270) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 0x82b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = &DAT_02f292f0 + DAT_02f29270 * 0x28;
    (&DAT_02f29274)[DAT_02f29270] = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    DAT_02f29270 = DAT_02f29270 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Draw");
    piVar29 = &g_CGamePtr->key_draw;
    if (0x1d < DAT_02f29270) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 0x82b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = &DAT_02f292f0 + DAT_02f29270 * 0x28;
    (&DAT_02f29274)[DAT_02f29270] = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    DAT_02f29270 = DAT_02f29270 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Point up");
    piVar29 = &g_CGamePtr->key_point_up;
    if (0x1d < DAT_02f29270) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 0x82b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = &DAT_02f292f0 + DAT_02f29270 * 0x28;
    (&DAT_02f29274)[DAT_02f29270] = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    DAT_02f29270 = DAT_02f29270 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Point down");
    piVar29 = &g_CGamePtr->key_point_down;
    if (0x1d < DAT_02f29270) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 0x82b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = &DAT_02f292f0 + DAT_02f29270 * 0x28;
    (&DAT_02f29274)[DAT_02f29270] = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    DAT_02f29270 = DAT_02f29270 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Jump");
    piVar29 = &g_CGamePtr->key_jump;
    if (0x1d < DAT_02f29270) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 0x82b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = &DAT_02f292f0 + DAT_02f29270 * 0x28;
    (&DAT_02f29274)[DAT_02f29270] = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    DAT_02f29270 = DAT_02f29270 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select pistol weapons");
    piVar29 = &g_CGamePtr->key_weapon_1;
    if (0x1d < DAT_02f29270) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 0x82b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = &DAT_02f292f0 + DAT_02f29270 * 0x28;
    (&DAT_02f29274)[DAT_02f29270] = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    DAT_02f29270 = DAT_02f29270 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select assault weapons");
    piVar29 = &g_CGamePtr->key_weapon_2;
    if (0x1d < DAT_02f29270) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 0x82b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = &DAT_02f292f0 + DAT_02f29270 * 0x28;
    (&DAT_02f29274)[DAT_02f29270] = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    DAT_02f29270 = DAT_02f29270 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select flame weapons");
    piVar29 = &g_CGamePtr->key_weapon_3;
    if (0x1d < DAT_02f29270) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 0x82b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = &DAT_02f292f0 + DAT_02f29270 * 0x28;
    (&DAT_02f29274)[DAT_02f29270] = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    DAT_02f29270 = DAT_02f29270 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select grenade weapons");
    piVar29 = &g_CGamePtr->key_weapon_4;
    if (0x1d < DAT_02f29270) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 0x82b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = &DAT_02f292f0 + DAT_02f29270 * 0x28;
    (&DAT_02f29274)[DAT_02f29270] = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    DAT_02f29270 = DAT_02f29270 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select melee weapons");
    piVar29 = &g_CGamePtr->key_weapon_5;
    if (0x1d < DAT_02f29270) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 0x82b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = &DAT_02f292f0 + DAT_02f29270 * 0x28;
    (&DAT_02f29274)[DAT_02f29270] = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    DAT_02f29270 = DAT_02f29270 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Next weapon");
    piVar29 = &g_CGamePtr->key_next_weapon;
    if (0x1d < DAT_02f29270) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 0x82b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = &DAT_02f292f0 + DAT_02f29270 * 0x28;
    (&DAT_02f29274)[DAT_02f29270] = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    DAT_02f29270 = DAT_02f29270 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Previous weapon");
    piVar29 = &g_CGamePtr->key_prev_weapon;
    if (0x1d < DAT_02f29270) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 0x82b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = &DAT_02f292f0 + DAT_02f29270 * 0x28;
    (&DAT_02f29274)[DAT_02f29270] = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    DAT_02f29270 = DAT_02f29270 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Next item");
    piVar29 = &g_CGamePtr->key_next_item;
    if (0x1d < DAT_02f29270) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 0x82b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = &DAT_02f292f0 + DAT_02f29270 * 0x28;
    (&DAT_02f29274)[DAT_02f29270] = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    DAT_02f29270 = DAT_02f29270 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Previous item");
    piVar29 = &g_CGamePtr->key_prev_item;
    if (0x1d < DAT_02f29270) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 0x82b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = &DAT_02f292f0 + DAT_02f29270 * 0x28;
    (&DAT_02f29274)[DAT_02f29270] = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    DAT_02f29270 = DAT_02f29270 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Item description");
    piVar29 = &g_CGamePtr->key_item_desc;
    if (0x1d < DAT_02f29270) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 0x82b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = &DAT_02f292f0 + DAT_02f29270 * 0x28;
    (&DAT_02f29274)[DAT_02f29270] = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    DAT_02f29270 = DAT_02f29270 + 1;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Next ammo");
    piVar29 = &g_CGamePtr->key_next_ammo;
    if (0x1d < DAT_02f29270) {
      g_CurrentFilename = "..\\core\\menu.cpp";
      g_CurrentLineNumber = 0x82b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!");
    }
    pcVar33 = &DAT_02f292f0 + DAT_02f29270 * 0x28;
    (&DAT_02f29274)[DAT_02f29270] = piVar29;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    DAT_02f29270 = DAT_02f29270 + 1;
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff668);
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Restore defaults");
    iVar32 = 0;
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff670,pcVar2);
    if (0 < DAT_02f29270) {
      puVar30 = &DAT_02f292f0;
      do {
        uVar3 = core_menu_cpp_LocalizeMainGameControls_FUN_005134e0();
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0x00000014,"%s\t%s",puVar30,uVar3);
        iVar32 = iVar32 + 1;
        puVar30 = puVar30 + 0x28;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff670,&stack0x00000018);
      } while (iVar32 < DAT_02f29270);
    }
    shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10((CPickList *)&stack0xfffff674,1);
    iVar32 = 0;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Edit key settings");
    iVar32 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                       ((CPickList *)&stack0xfffff67c,pcVar2,iVar32,(int)in_stack_fffff670);
    if (iVar32 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffff680,0,(uint)in_stack_fffff678,(uint)in_stack_fffff67c,
                 (uint)in_stack_fffff680,(uint)in_stack_fffff684,(uint)in_stack_fffff688);
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Forward");
      iVar32 = core_menu_cpp_ValidateCustomKey_FUN_00513720();
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Back");
      iVar5 = core_menu_cpp_ValidateCustomKey_FUN_00513720();
      if (g_CGamePtr->always_run == 0) {
        pcVar2 = "Run";
      }
      else {
        pcVar2 = "Walk";
      }
      support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar2);
      iVar31 = core_menu_cpp_ValidateCustomKey_FUN_00513720();
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Strafe on");
      iVar4 = core_menu_cpp_ValidateCustomKey_FUN_00513720();
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Strafe left");
      iVar6 = core_menu_cpp_ValidateCustomKey_FUN_00513720();
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Strafe right");
      iVar7 = core_menu_cpp_ValidateCustomKey_FUN_00513720();
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Turn left");
      iVar8 = core_menu_cpp_ValidateCustomKey_FUN_00513720();
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Turn right");
      iVar9 = core_menu_cpp_ValidateCustomKey_FUN_00513720();
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Fire / Action");
      iVar10 = core_menu_cpp_ValidateCustomKey_FUN_00513720();
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Use item");
      iVar11 = core_menu_cpp_ValidateCustomKey_FUN_00513720();
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Light");
      iVar12 = core_menu_cpp_ValidateCustomKey_FUN_00513720();
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Night Vision");
      iVar13 = core_menu_cpp_ValidateCustomKey_FUN_00513720();
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Draw");
      iVar14 = core_menu_cpp_ValidateCustomKey_FUN_00513720();
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Point up");
      iVar15 = core_menu_cpp_ValidateCustomKey_FUN_00513720();
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Point down");
      iVar16 = core_menu_cpp_ValidateCustomKey_FUN_00513720();
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Jump");
      iVar17 = core_menu_cpp_ValidateCustomKey_FUN_00513720();
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select pistol weapons");
      iVar18 = core_menu_cpp_ValidateCustomKey_FUN_00513720();
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select assault weapons");
      iVar19 = core_menu_cpp_ValidateCustomKey_FUN_00513720();
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select flame weapons");
      iVar20 = core_menu_cpp_ValidateCustomKey_FUN_00513720();
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select grenade weapons");
      iVar21 = core_menu_cpp_ValidateCustomKey_FUN_00513720();
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select melee weapons");
      iVar22 = core_menu_cpp_ValidateCustomKey_FUN_00513720();
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Next weapon");
      iVar23 = core_menu_cpp_ValidateCustomKey_FUN_00513720();
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Previous weapon");
      iVar24 = core_menu_cpp_ValidateCustomKey_FUN_00513720();
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Next item");
      iVar25 = core_menu_cpp_ValidateCustomKey_FUN_00513720();
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Previous item");
      iVar26 = core_menu_cpp_ValidateCustomKey_FUN_00513720();
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Item description");
      iVar27 = core_menu_cpp_ValidateCustomKey_FUN_00513720();
      support_newmsg_cpp_getLocalizedString_FUN_005441f0("Next ammo");
      iVar28 = core_menu_cpp_ValidateCustomKey_FUN_00513720();
      if ((((((((((((((((((((((((((iVar32 == 0 && iVar5 == 0) && iVar31 == 0) && iVar4 == 0) &&
                               iVar6 == 0) && iVar7 == 0) && iVar8 == 0) && iVar9 == 0) &&
                           iVar10 == 0) && iVar11 == 0) && iVar12 == 0) && iVar13 == 0) &&
                       iVar14 == 0) && iVar15 == 0) && iVar16 == 0) && iVar17 == 0) && iVar18 == 0)
                  && iVar19 == 0) && iVar20 == 0) && iVar21 == 0) && iVar22 == 0) && iVar23 == 0) &&
             iVar24 == 0) && iVar25 == 0) && iVar26 == 0) && iVar27 == 0) && iVar28 == 0) {
        return;
      }
      core_game_cpp_CGame_restoreDefaultControls_FUN_004dbbc0();
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"One or more keys not valid.  Restoring default controls.");
      return;
    }
    if (iVar32 != 0) {
      iVar5 = iVar32 + -1;
      in_stack_000000f0 = iVar32;
      switch(*(undefined4 *)(&DAT_02f29274)[iVar5]) {
      case 0x251:
      case 0x252:
      case 0x253:
      case 0x254:
        pcVar2 = acStack_5d8;
        pcVar33 = &DAT_02f292f0 + iVar5 * 0x28;
        do {
          cVar1 = *pcVar33;
          *pcVar2 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar33[1];
          pcVar33 = pcVar33 + 2;
          pcVar2[1] = cVar1;
          pcVar2 = pcVar2 + 2;
        } while (cVar1 != '\0');
        pcVar33 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                            (" is assigned to the gamepad.  Can't assign a key.");
        iVar32 = -1;
        pcVar2 = acStack_5d8 + 4;
        do {
          pcVar34 = pcVar2;
          if (iVar32 == 0) break;
          iVar32 = iVar32 + -1;
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
        in_stack_fffff670 = (char **)0x5148df;
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,acStack_5d8 + 4);
        break;
      case 0x255:
      case 0x256:
        pcVar2 = acStack_1d8;
        pcVar33 = &DAT_02f292f0 + iVar5 * 0x28;
        do {
          cVar1 = *pcVar33;
          *pcVar2 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar33[1];
          pcVar33 = pcVar33 + 2;
          pcVar2[1] = cVar1;
          pcVar2 = pcVar2 + 2;
        } while (cVar1 != '\0');
        pcVar33 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                            (" is assigned to the mouse.  Can't assign a key.");
        iVar32 = -1;
        pcVar2 = acStack_1d8 + 4;
        do {
          pcVar34 = pcVar2;
          if (iVar32 == 0) break;
          iVar32 = iVar32 + -1;
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
        in_stack_fffff670 = (char **)0x514852;
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,acStack_1d8 + 4);
        break;
      default:
        while( true ) {
          if (g_CGamePtr->game_control == 2) {
            core_game_cpp_CGame_resetKeyState_FUN_004dbe60();
          }
          iVar32 = -1;
          iVar31 = 0;
          do {
            iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,iVar31);
            if ((iVar4 != 0) && (bVar35 = -1 < iVar32, iVar32 = iVar31, bVar35)) goto LAB_00514913;
            iVar31 = iVar31 + 1;
          } while (iVar31 < 600);
          if (iVar32 == -1) break;
LAB_00514913:
          pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                             ("OK - you can release the key now...");
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,pcVar2);
          iVar32 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,1);
          if (iVar32 != 0) break;
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        }
        iVar32 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,1);
        if (iVar32 != 0) {
          engine_2d_c_clearInputAndWait_FUN_00403260();
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    ((CPickList *)&stack0xfffff678,0,(uint)in_stack_fffff670,(uint)in_stack_fffff674
                     ,(uint)in_stack_fffff678,(uint)in_stack_fffff67c,(uint)in_stack_fffff680);
          goto LAB_0051390e;
        }
        pcVar33 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                            ("Press new key or button for ");
        pcVar2 = acStack_3e0;
        do {
          cVar1 = *pcVar33;
          *pcVar2 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar33[1];
          pcVar33 = pcVar33 + 2;
          pcVar2[1] = cVar1;
          pcVar2 = pcVar2 + 2;
        } while (cVar1 != '\0');
        pcVar33 = &DAT_02f292f0 + iVar5 * 0x28;
        iVar32 = -1;
        pcVar2 = acStack_3e0;
        do {
          pcVar34 = pcVar2;
          if (iVar32 == 0) break;
          iVar32 = iVar32 + -1;
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
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,acStack_3e0);
        engine_keys_cpp_CKeys_toggleInputMask_FUN_005024b0(g_CKeysPtr,1);
LAB_00514a04:
        do {
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          if (g_CGamePtr->game_control == 2) {
            core_game_cpp_CGame_resetKeyState_FUN_004dbe60();
          }
          iVar32 = -1;
          iVar31 = 0;
          do {
            iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,iVar31);
            if ((iVar4 != 0) && (bVar35 = -1 < iVar32, iVar32 = iVar31, bVar35)) goto LAB_00514a04;
            iVar31 = iVar31 + 1;
          } while (iVar31 < 600);
        } while (iVar32 < 0);
        *(int *)(&DAT_02f29274)[iVar5] = iVar32;
        pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                           ("OK - you can release the key now...");
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,pcVar2);
        while( true ) {
          if (g_CGamePtr->game_control == 2) {
            core_game_cpp_CGame_resetKeyState_FUN_004dbe60();
          }
          iVar32 = -1;
          iVar31 = 0;
          do {
            iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,iVar31);
            if ((iVar4 != 0) && (bVar35 = -1 < iVar32, iVar32 = iVar31, bVar35)) goto LAB_00514a9c;
            iVar31 = iVar31 + 1;
          } while (iVar31 < 600);
          if (iVar32 == -1) break;
LAB_00514a9c:
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        }
        iVar32 = 0;
        if (0 < DAT_02f29270) {
          iVar31 = 0;
          do {
            if ((iVar32 != iVar5) &&
               (**(int **)((int)&DAT_02f29274 + iVar31) == *(int *)(&DAT_02f29274)[iVar5])) {
              **(int **)((int)&DAT_02f29274 + iVar31) = 599;
            }
            iVar32 = iVar32 + 1;
            iVar31 = iVar31 + 4;
          } while (iVar32 < DAT_02f29270);
        }
        in_stack_fffff670 = (char **)0x514b1f;
        engine_keys_cpp_CKeys_toggleInputMask_FUN_005024b0(g_CKeysPtr,0);
      }
      in_stack_fffff67c = (CStrList_vtable *)0x0;
      in_stack_fffff678 = (CPickList *)&stack0xfffff688;
      in_stack_fffff674 = (CPickList *)0x514861;
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (in_stack_fffff678,0,(uint)in_stack_fffff680,(uint)in_stack_fffff684,
                 (uint)in_stack_fffff688,(uint)in_stack_fffff68c,(uint)in_stack_fffff690);
      goto LAB_0051390e;
    }
    core_game_cpp_CGame_restoreDefaultControls_FUN_004dbbc0();
    in_stack_fffff678 = (CPickList *)0x0;
    in_stack_fffff674 = (CPickList *)&stack0xfffff684;
    in_stack_fffff670 = (char **)0x5147b4;
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (in_stack_fffff674,0,(uint)in_stack_fffff67c,(uint)in_stack_fffff680,
               (uint)in_stack_fffff684,(uint)in_stack_fffff688,(uint)in_stack_fffff68c);
  } while( true );
}


// Assembly code:
// 005138e0: PUSH EBX
//   Label: core_menu.cpp_SettingCustomKeys_FUN_005138e0
// 005138e1: PUSH EBP
// 005138e2: SUB ESP,0xa74
// 005138e8: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005138ed: CMP dword ptr [EAX + 0xbc],0x2
//   XREF to: 02d81b58 (READ)
// 005138f4: JNZ 0x00513903
//   XREF to: 00513903 (CONDITIONAL_JUMP)
// 005138f6: CMP dword ptr [EAX + 0xa4],0x0
//   XREF to: 02d81b40 (READ)
// 005138fd: JZ 0x005147bc
//   XREF to: 005147bc (CONDITIONAL_JUMP)
// 00513903: PUSH EDI
//   Label: LAB_00513903
// 00513904: PUSH ESI
// 00513905: XOR EBX,EBX
// 00513907: MOV dword ptr [ESP + 0xa78],EBX
//   XREF to: Stack[-0xc] (WRITE)
// 0051390e: XOR ESI,ESI
//   Label: LAB_0051390e
// 00513910: PUSH 0x636f36
//   XREF to: 00636f36 (DATA)
// 00513915: MOV dword ptr [0x02f29270],ESI
//   XREF to: 02f29270 (WRITE)
// 0051391b: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00513920: MOV EDX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00513926: MOV EDI,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 0051392c: ADD ESP,0x4
// 0051392f: MOV ESI,EAX
// 00513931: LEA EBX,[EDX + 0x28]
//   XREF to: 02d81ac4 (PARAM)
//   XREF to: 02d81ac4 (DATA)
// 00513934: CMP EDI,0x1e
// 00513937: JL 0x0051395b
//   XREF to: 0051395b (CONDITIONAL_JUMP)
// 00513939: MOV EBP,0x636e40
//   XREF to: 00636e40 (DATA)
// 0051393e: MOV EAX,0x82b
// 00513943: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 00513948: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0051394e: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00513953: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00513958: ADD ESP,0x4
// 0051395b: MOV EAX,[0x02f29270]
//   Label: LAB_0051395b
//   XREF to: 02f29270 (READ)
// 00513960: IMUL EDI,EAX,0x28
// 00513963: ADD EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 00513969: MOV dword ptr [EAX*0x4 + 0x2f29274],EBX
//   XREF to: 02f29274 (WRITE)
//   XREF to: 02d81ac4 (DATA)
// 00513970: PUSH EDI
//   XREF to: 02f292f0 (DATA)
// 00513971: MOV AL,byte ptr [ESI]
//   Label: LAB_00513971
// 00513973: MOV byte ptr [EDI],AL
//   XREF to: 02f292f0 (WRITE)
//   XREF to: 02f292f2 (WRITE)
// 00513975: CMP AL,0x0
// 00513977: JZ 0x00513989
//   XREF to: 00513989 (CONDITIONAL_JUMP)
// 00513979: MOV AL,byte ptr [ESI + 0x1]
// 0051397c: ADD ESI,0x2
// 0051397f: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f292f1 (WRITE)
//   XREF to: 02f292f3 (WRITE)
// 00513982: ADD EDI,0x2
// 00513985: CMP AL,0x0
// 00513987: JNZ 0x00513971
//   XREF to: 00513971 (CONDITIONAL_JUMP)
// 00513989: POP EDI
//   Label: LAB_00513989
// 0051398a: MOV ECX,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00513990: INC ECX
// 00513991: PUSH 0x636f3e
//   XREF to: 00636f3e (DATA)
// 00513996: MOV dword ptr [0x02f29270],ECX
//   XREF to: 02f29270 (WRITE)
// 0051399c: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 005139a1: MOV EDX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005139a7: MOV EDI,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 005139ad: ADD ESP,0x4
// 005139b0: MOV ESI,EAX
// 005139b2: LEA EBX,[EDX + 0x2c]
//   XREF to: 02d81ac8 (DATA)
// 005139b5: CMP EDI,0x1e
// 005139b8: JL 0x005139dc
//   XREF to: 005139dc (CONDITIONAL_JUMP)
// 005139ba: MOV EBP,0x636e40
//   XREF to: 00636e40 (DATA)
// 005139bf: MOV EAX,0x82b
// 005139c4: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 005139c9: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 005139cf: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005139d4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005139d9: ADD ESP,0x4
// 005139dc: MOV EAX,[0x02f29270]
//   Label: LAB_005139dc
//   XREF to: 02f29270 (READ)
// 005139e1: IMUL EDI,EAX,0x28
// 005139e4: ADD EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 005139ea: MOV dword ptr [EAX*0x4 + 0x2f29274],EBX
//   XREF to: 02f29278 (WRITE)
//   XREF to: 02d81ac8 (DATA)
// 005139f1: PUSH EDI
//   XREF to: 02f29318 (DATA)
// 005139f2: MOV AL,byte ptr [ESI]
//   Label: LAB_005139f2
// 005139f4: MOV byte ptr [EDI],AL
//   XREF to: 02f29318 (WRITE)
//   XREF to: 02f2931a (WRITE)
// 005139f6: CMP AL,0x0
// 005139f8: JZ 0x00513a0a
//   XREF to: 00513a0a (CONDITIONAL_JUMP)
// 005139fa: MOV AL,byte ptr [ESI + 0x1]
// 005139fd: ADD ESI,0x2
// 00513a00: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f29319 (WRITE)
//   XREF to: 02f2931b (WRITE)
// 00513a03: ADD EDI,0x2
// 00513a06: CMP AL,0x0
// 00513a08: JNZ 0x005139f2
//   XREF to: 005139f2 (CONDITIONAL_JUMP)
// 00513a0a: POP EDI
//   Label: LAB_00513a0a
// 00513a0b: MOV ECX,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00513a11: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00513a16: INC ECX
// 00513a17: MOV EBX,dword ptr [EAX + 0x98]
//   XREF to: 02d81b34 (READ)
// 00513a1d: MOV dword ptr [0x02f29270],ECX
//   XREF to: 02f29270 (WRITE)
// 00513a23: TEST EBX,EBX
// 00513a25: JZ 0x005147d2
//   XREF to: 005147d2 (CONDITIONAL_JUMP)
// 00513a2b: PUSH 0x636f43
//   XREF to: 00636f43 (DATA)
// 00513a30: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   Label: LAB_00513a30
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00513a35: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00513a3b: MOV EDI,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00513a41: ADD ESP,0x4
// 00513a44: MOV ESI,EAX
// 00513a46: ADD EBX,0x30
//   XREF to: 02d81acc (PARAM)
// 00513a49: CMP EDI,0x1e
// 00513a4c: JL 0x00513a70
//   XREF to: 00513a70 (CONDITIONAL_JUMP)
// 00513a4e: MOV EBP,0x636e40
//   XREF to: 00636e40 (DATA)
// 00513a53: MOV EAX,0x82b
// 00513a58: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 00513a5d: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00513a63: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00513a68: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00513a6d: ADD ESP,0x4
// 00513a70: MOV EAX,[0x02f29270]
//   Label: LAB_00513a70
//   XREF to: 02f29270 (READ)
// 00513a75: IMUL EDI,EAX,0x28
// 00513a78: ADD EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 00513a7e: MOV dword ptr [EAX*0x4 + 0x2f29274],EBX
//   XREF to: 02f2927c (WRITE)
//   XREF to: 02d81acc (DATA)
// 00513a85: PUSH EDI
//   XREF to: 02f29340 (DATA)
// 00513a86: MOV AL,byte ptr [ESI]
//   Label: LAB_00513a86
// 00513a88: MOV byte ptr [EDI],AL
//   XREF to: 02f29340 (WRITE)
//   XREF to: 02f29342 (WRITE)
// 00513a8a: CMP AL,0x0
// 00513a8c: JZ 0x00513a9e
//   XREF to: 00513a9e (CONDITIONAL_JUMP)
// 00513a8e: MOV AL,byte ptr [ESI + 0x1]
// 00513a91: ADD ESI,0x2
// 00513a94: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f29341 (WRITE)
//   XREF to: 02f29343 (WRITE)
// 00513a97: ADD EDI,0x2
// 00513a9a: CMP AL,0x0
// 00513a9c: JNZ 0x00513a86
//   XREF to: 00513a86 (CONDITIONAL_JUMP)
// 00513a9e: POP EDI
//   Label: LAB_00513a9e
// 00513a9f: INC dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ_WRITE)
// 00513aa5: PUSH 0x636f4c
//   XREF to: 00636f4c (DATA)
// 00513aaa: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00513aaf: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00513ab5: MOV EDI,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00513abb: ADD ESP,0x4
// 00513abe: MOV ESI,EAX
// 00513ac0: ADD EBX,0x34
//   XREF to: 02d81ad0 (PARAM)
// 00513ac3: CMP EDI,0x1e
// 00513ac6: JL 0x00513aea
//   XREF to: 00513aea (CONDITIONAL_JUMP)
// 00513ac8: MOV EBP,0x636e40
//   XREF to: 00636e40 (DATA)
// 00513acd: MOV EAX,0x82b
// 00513ad2: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 00513ad7: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00513add: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00513ae2: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00513ae7: ADD ESP,0x4
// 00513aea: MOV EAX,[0x02f29270]
//   Label: LAB_00513aea
//   XREF to: 02f29270 (READ)
// 00513aef: IMUL EDI,EAX,0x28
// 00513af2: ADD EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 00513af8: MOV dword ptr [EAX*0x4 + 0x2f29274],EBX
//   XREF to: 02f29280 (WRITE)
//   XREF to: 02d81ad0 (DATA)
// 00513aff: PUSH EDI
//   XREF to: 02f29368 (DATA)
// 00513b00: MOV AL,byte ptr [ESI]
//   Label: LAB_00513b00
// 00513b02: MOV byte ptr [EDI],AL
//   XREF to: 02f29368 (WRITE)
//   XREF to: 02f2936a (WRITE)
// 00513b04: CMP AL,0x0
// 00513b06: JZ 0x00513b18
//   XREF to: 00513b18 (CONDITIONAL_JUMP)
// 00513b08: MOV AL,byte ptr [ESI + 0x1]
// 00513b0b: ADD ESI,0x2
// 00513b0e: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f29369 (WRITE)
//   XREF to: 02f2936b (WRITE)
// 00513b11: ADD EDI,0x2
// 00513b14: CMP AL,0x0
// 00513b16: JNZ 0x00513b00
//   XREF to: 00513b00 (CONDITIONAL_JUMP)
// 00513b18: POP EDI
//   Label: LAB_00513b18
// 00513b19: MOV ECX,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00513b1f: INC ECX
// 00513b20: PUSH 0x636f56
//   XREF to: 00636f56 (DATA)
// 00513b25: MOV dword ptr [0x02f29270],ECX
//   XREF to: 02f29270 (WRITE)
// 00513b2b: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00513b30: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00513b36: MOV EDI,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00513b3c: ADD ESP,0x4
// 00513b3f: MOV ESI,EAX
// 00513b41: ADD EBX,0x38
//   XREF to: 02d81ad4 (PARAM)
// 00513b44: CMP EDI,0x1e
// 00513b47: JL 0x00513b6b
//   XREF to: 00513b6b (CONDITIONAL_JUMP)
// 00513b49: MOV EBP,0x636e40
//   XREF to: 00636e40 (DATA)
// 00513b4e: MOV EAX,0x82b
// 00513b53: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 00513b58: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00513b5e: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00513b63: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00513b68: ADD ESP,0x4
// 00513b6b: MOV EAX,[0x02f29270]
//   Label: LAB_00513b6b
//   XREF to: 02f29270 (READ)
// 00513b70: IMUL EDI,EAX,0x28
// 00513b73: ADD EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 00513b79: MOV dword ptr [EAX*0x4 + 0x2f29274],EBX
//   XREF to: 02f29284 (WRITE)
//   XREF to: 02d81ad4 (DATA)
// 00513b80: PUSH EDI
//   XREF to: 02f29390 (DATA)
// 00513b81: MOV AL,byte ptr [ESI]
//   Label: LAB_00513b81
// 00513b83: MOV byte ptr [EDI],AL
//   XREF to: 02f29390 (WRITE)
//   XREF to: 02f29392 (WRITE)
// 00513b85: CMP AL,0x0
// 00513b87: JZ 0x00513b99
//   XREF to: 00513b99 (CONDITIONAL_JUMP)
// 00513b89: MOV AL,byte ptr [ESI + 0x1]
// 00513b8c: ADD ESI,0x2
// 00513b8f: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f29391 (WRITE)
//   XREF to: 02f29393 (WRITE)
// 00513b92: ADD EDI,0x2
// 00513b95: CMP AL,0x0
// 00513b97: JNZ 0x00513b81
//   XREF to: 00513b81 (CONDITIONAL_JUMP)
// 00513b99: POP EDI
//   Label: LAB_00513b99
// 00513b9a: MOV ECX,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00513ba0: INC ECX
// 00513ba1: PUSH 0x636f62
//   XREF to: 00636f62 (DATA)
// 00513ba6: MOV dword ptr [0x02f29270],ECX
//   XREF to: 02f29270 (WRITE)
// 00513bac: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00513bb1: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00513bb7: MOV EDI,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00513bbd: ADD ESP,0x4
// 00513bc0: MOV ESI,EAX
// 00513bc2: ADD EBX,0x3c
//   XREF to: 02d81ad8 (PARAM)
// 00513bc5: CMP EDI,0x1e
// 00513bc8: JL 0x00513bec
//   XREF to: 00513bec (CONDITIONAL_JUMP)
// 00513bca: MOV EBP,0x636e40
//   XREF to: 00636e40 (DATA)
// 00513bcf: MOV EAX,0x82b
// 00513bd4: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 00513bd9: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00513bdf: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00513be4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00513be9: ADD ESP,0x4
// 00513bec: MOV EAX,[0x02f29270]
//   Label: LAB_00513bec
//   XREF to: 02f29270 (READ)
// 00513bf1: IMUL EDI,EAX,0x28
// 00513bf4: ADD EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 00513bfa: MOV dword ptr [EAX*0x4 + 0x2f29274],EBX
//   XREF to: 02f29288 (WRITE)
//   XREF to: 02d81ad8 (DATA)
// 00513c01: PUSH EDI
//   XREF to: 02f293b8 (DATA)
// 00513c02: MOV AL,byte ptr [ESI]
//   Label: LAB_00513c02
// 00513c04: MOV byte ptr [EDI],AL
//   XREF to: 02f293b8 (WRITE)
//   XREF to: 02f293ba (WRITE)
// 00513c06: CMP AL,0x0
// 00513c08: JZ 0x00513c1a
//   XREF to: 00513c1a (CONDITIONAL_JUMP)
// 00513c0a: MOV AL,byte ptr [ESI + 0x1]
// 00513c0d: ADD ESI,0x2
// 00513c10: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f293b9 (WRITE)
//   XREF to: 02f293bb (WRITE)
// 00513c13: ADD EDI,0x2
// 00513c16: CMP AL,0x0
// 00513c18: JNZ 0x00513c02
//   XREF to: 00513c02 (CONDITIONAL_JUMP)
// 00513c1a: POP EDI
//   Label: LAB_00513c1a
// 00513c1b: MOV ECX,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00513c21: INC ECX
// 00513c22: PUSH 0x636f6f
//   XREF to: 00636f6f (DATA)
// 00513c27: MOV dword ptr [0x02f29270],ECX
//   XREF to: 02f29270 (WRITE)
// 00513c2d: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00513c32: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00513c38: MOV EDI,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00513c3e: ADD ESP,0x4
// 00513c41: MOV ESI,EAX
// 00513c43: ADD EBX,0x44
//   XREF to: 02d81ae0 (PARAM)
// 00513c46: CMP EDI,0x1e
// 00513c49: JL 0x00513c6d
//   XREF to: 00513c6d (CONDITIONAL_JUMP)
// 00513c4b: MOV EBP,0x636e40
//   XREF to: 00636e40 (DATA)
// 00513c50: MOV EAX,0x82b
// 00513c55: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 00513c5a: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00513c60: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00513c65: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00513c6a: ADD ESP,0x4
// 00513c6d: MOV EAX,[0x02f29270]
//   Label: LAB_00513c6d
//   XREF to: 02f29270 (READ)
// 00513c72: IMUL EDI,EAX,0x28
// 00513c75: ADD EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 00513c7b: MOV dword ptr [EAX*0x4 + 0x2f29274],EBX
//   XREF to: 02f2928c (WRITE)
//   XREF to: 02d81ae0 (DATA)
// 00513c82: PUSH EDI
//   XREF to: 02f293e0 (DATA)
// 00513c83: MOV AL,byte ptr [ESI]
//   Label: LAB_00513c83
// 00513c85: MOV byte ptr [EDI],AL
//   XREF to: 02f293e0 (WRITE)
//   XREF to: 02f293e2 (WRITE)
// 00513c87: CMP AL,0x0
// 00513c89: JZ 0x00513c9b
//   XREF to: 00513c9b (CONDITIONAL_JUMP)
// 00513c8b: MOV AL,byte ptr [ESI + 0x1]
// 00513c8e: ADD ESI,0x2
// 00513c91: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f293e1 (WRITE)
//   XREF to: 02f293e3 (WRITE)
// 00513c94: ADD EDI,0x2
// 00513c97: CMP AL,0x0
// 00513c99: JNZ 0x00513c83
//   XREF to: 00513c83 (CONDITIONAL_JUMP)
// 00513c9b: POP EDI
//   Label: LAB_00513c9b
// 00513c9c: MOV ECX,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00513ca2: INC ECX
// 00513ca3: PUSH 0x636f79
//   XREF to: 00636f79 (DATA)
// 00513ca8: MOV dword ptr [0x02f29270],ECX
//   XREF to: 02f29270 (WRITE)
// 00513cae: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00513cb3: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00513cb9: MOV EDI,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00513cbf: ADD ESP,0x4
// 00513cc2: MOV ESI,EAX
// 00513cc4: ADD EBX,0x40
//   XREF to: 02d81adc (PARAM)
// 00513cc7: CMP EDI,0x1e
// 00513cca: JL 0x00513cee
//   XREF to: 00513cee (CONDITIONAL_JUMP)
// 00513ccc: MOV EBP,0x636e40
//   XREF to: 00636e40 (DATA)
// 00513cd1: MOV EAX,0x82b
// 00513cd6: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 00513cdb: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00513ce1: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00513ce6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00513ceb: ADD ESP,0x4
// 00513cee: MOV EAX,[0x02f29270]
//   Label: LAB_00513cee
//   XREF to: 02f29270 (READ)
// 00513cf3: IMUL EDI,EAX,0x28
// 00513cf6: ADD EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 00513cfc: MOV dword ptr [EAX*0x4 + 0x2f29274],EBX
//   XREF to: 02f29290 (WRITE)
//   XREF to: 02d81adc (DATA)
// 00513d03: PUSH EDI
//   XREF to: 02f29408 (DATA)
// 00513d04: MOV AL,byte ptr [ESI]
//   Label: LAB_00513d04
// 00513d06: MOV byte ptr [EDI],AL
//   XREF to: 02f29408 (WRITE)
//   XREF to: 02f2940a (WRITE)
// 00513d08: CMP AL,0x0
// 00513d0a: JZ 0x00513d1c
//   XREF to: 00513d1c (CONDITIONAL_JUMP)
// 00513d0c: MOV AL,byte ptr [ESI + 0x1]
// 00513d0f: ADD ESI,0x2
// 00513d12: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f29409 (WRITE)
//   XREF to: 02f2940b (WRITE)
// 00513d15: ADD EDI,0x2
// 00513d18: CMP AL,0x0
// 00513d1a: JNZ 0x00513d04
//   XREF to: 00513d04 (CONDITIONAL_JUMP)
// 00513d1c: POP EDI
//   Label: LAB_00513d1c
// 00513d1d: MOV ECX,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00513d23: INC ECX
// 00513d24: PUSH 0x636f84
//   XREF to: 00636f84 (DATA)
// 00513d29: MOV dword ptr [0x02f29270],ECX
//   XREF to: 02f29270 (WRITE)
// 00513d2f: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00513d34: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00513d3a: MOV EDI,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00513d40: ADD ESP,0x4
// 00513d43: MOV ESI,EAX
// 00513d45: ADD EBX,0x48
//   XREF to: 02d81ae4 (PARAM)
// 00513d48: CMP EDI,0x1e
// 00513d4b: JL 0x00513d6f
//   XREF to: 00513d6f (CONDITIONAL_JUMP)
// 00513d4d: MOV EBP,0x636e40
//   XREF to: 00636e40 (DATA)
// 00513d52: MOV EAX,0x82b
// 00513d57: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 00513d5c: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00513d62: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00513d67: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00513d6c: ADD ESP,0x4
// 00513d6f: MOV EAX,[0x02f29270]
//   Label: LAB_00513d6f
//   XREF to: 02f29270 (READ)
// 00513d74: IMUL EDI,EAX,0x28
// 00513d77: ADD EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 00513d7d: MOV dword ptr [EAX*0x4 + 0x2f29274],EBX
//   XREF to: 02f29294 (WRITE)
//   XREF to: 02d81ae4 (DATA)
// 00513d84: PUSH EDI
//   XREF to: 02f29430 (DATA)
// 00513d85: MOV AL,byte ptr [ESI]
//   Label: LAB_00513d85
// 00513d87: MOV byte ptr [EDI],AL
//   XREF to: 02f29430 (WRITE)
//   XREF to: 02f29432 (WRITE)
// 00513d89: CMP AL,0x0
// 00513d8b: JZ 0x00513d9d
//   XREF to: 00513d9d (CONDITIONAL_JUMP)
// 00513d8d: MOV AL,byte ptr [ESI + 0x1]
// 00513d90: ADD ESI,0x2
// 00513d93: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f29431 (WRITE)
//   XREF to: 02f29433 (WRITE)
// 00513d96: ADD EDI,0x2
// 00513d99: CMP AL,0x0
// 00513d9b: JNZ 0x00513d85
//   XREF to: 00513d85 (CONDITIONAL_JUMP)
// 00513d9d: POP EDI
//   Label: LAB_00513d9d
// 00513d9e: MOV ECX,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00513da4: INC ECX
// 00513da5: PUSH 0x636f92
//   XREF to: 00636f92 (DATA)
// 00513daa: MOV dword ptr [0x02f29270],ECX
//   XREF to: 02f29270 (WRITE)
// 00513db0: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00513db5: MOV EDX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00513dbb: MOV EDI,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00513dc1: ADD ESP,0x4
// 00513dc4: MOV ESI,EAX
// 00513dc6: LEA EBX,[EDX + 0x4c]
//   XREF to: 02d81ae8 (DATA)
// 00513dc9: CMP EDI,0x1e
// 00513dcc: JL 0x00513df0
//   XREF to: 00513df0 (CONDITIONAL_JUMP)
// 00513dce: MOV EBP,0x636e40
//   XREF to: 00636e40 (DATA)
// 00513dd3: MOV EAX,0x82b
// 00513dd8: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 00513ddd: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00513de3: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00513de8: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00513ded: ADD ESP,0x4
// 00513df0: MOV EAX,[0x02f29270]
//   Label: LAB_00513df0
//   XREF to: 02f29270 (READ)
// 00513df5: IMUL EDI,EAX,0x28
// 00513df8: ADD EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 00513dfe: MOV dword ptr [EAX*0x4 + 0x2f29274],EBX
//   XREF to: 02f29298 (WRITE)
//   XREF to: 02d81ae8 (DATA)
// 00513e05: PUSH EDI
//   XREF to: 02f29458 (DATA)
// 00513e06: MOV AL,byte ptr [ESI]
//   Label: LAB_00513e06
// 00513e08: MOV byte ptr [EDI],AL
//   XREF to: 02f29458 (WRITE)
//   XREF to: 02f2945a (WRITE)
// 00513e0a: CMP AL,0x0
// 00513e0c: JZ 0x00513e1e
//   XREF to: 00513e1e (CONDITIONAL_JUMP)
// 00513e0e: MOV AL,byte ptr [ESI + 0x1]
// 00513e11: ADD ESI,0x2
// 00513e14: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f29459 (WRITE)
//   XREF to: 02f2945b (WRITE)
// 00513e17: ADD EDI,0x2
// 00513e1a: CMP AL,0x0
// 00513e1c: JNZ 0x00513e06
//   XREF to: 00513e06 (CONDITIONAL_JUMP)
// 00513e1e: POP EDI
//   Label: LAB_00513e1e
// 00513e1f: MOV ECX,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00513e25: INC ECX
// 00513e26: PUSH 0x636f9b
//   XREF to: 00636f9b (DATA)
// 00513e2b: MOV dword ptr [0x02f29270],ECX
//   XREF to: 02f29270 (WRITE)
// 00513e31: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00513e36: MOV EDX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00513e3c: MOV EDI,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00513e42: ADD ESP,0x4
// 00513e45: MOV ESI,EAX
// 00513e47: LEA EBX,[EDX + 0x50]
//   XREF to: 02d81aec (DATA)
// 00513e4a: CMP EDI,0x1e
// 00513e4d: JL 0x00513e71
//   XREF to: 00513e71 (CONDITIONAL_JUMP)
// 00513e4f: MOV EBP,0x636e40
//   XREF to: 00636e40 (DATA)
// 00513e54: MOV EAX,0x82b
// 00513e59: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 00513e5e: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00513e64: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00513e69: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00513e6e: ADD ESP,0x4
// 00513e71: MOV EAX,[0x02f29270]
//   Label: LAB_00513e71
//   XREF to: 02f29270 (READ)
// 00513e76: IMUL EDI,EAX,0x28
// 00513e79: ADD EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 00513e7f: MOV dword ptr [EAX*0x4 + 0x2f29274],EBX
//   XREF to: 02f2929c (WRITE)
//   XREF to: 02d81aec (DATA)
// 00513e86: PUSH EDI
//   XREF to: 02f29480 (DATA)
// 00513e87: MOV AL,byte ptr [ESI]
//   Label: LAB_00513e87
// 00513e89: MOV byte ptr [EDI],AL
//   XREF to: 02f29480 (WRITE)
//   XREF to: 02f29482 (WRITE)
// 00513e8b: CMP AL,0x0
// 00513e8d: JZ 0x00513e9f
//   XREF to: 00513e9f (CONDITIONAL_JUMP)
// 00513e8f: MOV AL,byte ptr [ESI + 0x1]
// 00513e92: ADD ESI,0x2
// 00513e95: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f29481 (WRITE)
//   XREF to: 02f29483 (WRITE)
// 00513e98: ADD EDI,0x2
// 00513e9b: CMP AL,0x0
// 00513e9d: JNZ 0x00513e87
//   XREF to: 00513e87 (CONDITIONAL_JUMP)
// 00513e9f: POP EDI
//   Label: LAB_00513e9f
// 00513ea0: MOV ECX,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00513ea6: INC ECX
// 00513ea7: PUSH 0x636fa1
//   XREF to: 00636fa1 (DATA)
// 00513eac: MOV dword ptr [0x02f29270],ECX
//   XREF to: 02f29270 (WRITE)
// 00513eb2: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00513eb7: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00513ebd: MOV EDI,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00513ec3: ADD ESP,0x4
// 00513ec6: MOV ESI,EAX
// 00513ec8: ADD EBX,0x54
//   XREF to: 02d81af0 (PARAM)
// 00513ecb: CMP EDI,0x1e
// 00513ece: JL 0x00513ef2
//   XREF to: 00513ef2 (CONDITIONAL_JUMP)
// 00513ed0: MOV EBP,0x636e40
//   XREF to: 00636e40 (DATA)
// 00513ed5: MOV EAX,0x82b
// 00513eda: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 00513edf: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00513ee5: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00513eea: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00513eef: ADD ESP,0x4
// 00513ef2: MOV EAX,[0x02f29270]
//   Label: LAB_00513ef2
//   XREF to: 02f29270 (READ)
// 00513ef7: IMUL EDI,EAX,0x28
// 00513efa: ADD EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 00513f00: MOV dword ptr [EAX*0x4 + 0x2f29274],EBX
//   XREF to: 02f292a0 (WRITE)
//   XREF to: 02d81af0 (DATA)
// 00513f07: PUSH EDI
//   XREF to: 02f294a8 (DATA)
// 00513f08: MOV AL,byte ptr [ESI]
//   Label: LAB_00513f08
// 00513f0a: MOV byte ptr [EDI],AL
//   XREF to: 02f294a8 (WRITE)
//   XREF to: 02f294aa (WRITE)
// 00513f0c: CMP AL,0x0
// 00513f0e: JZ 0x00513f20
//   XREF to: 00513f20 (CONDITIONAL_JUMP)
// 00513f10: MOV AL,byte ptr [ESI + 0x1]
// 00513f13: ADD ESI,0x2
// 00513f16: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f294a9 (WRITE)
//   XREF to: 02f294ab (WRITE)
// 00513f19: ADD EDI,0x2
// 00513f1c: CMP AL,0x0
// 00513f1e: JNZ 0x00513f08
//   XREF to: 00513f08 (CONDITIONAL_JUMP)
// 00513f20: POP EDI
//   Label: LAB_00513f20
// 00513f21: MOV ECX,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00513f27: INC ECX
// 00513f28: PUSH 0x636fae
//   XREF to: 00636fae (DATA)
// 00513f2d: MOV dword ptr [0x02f29270],ECX
//   XREF to: 02f29270 (WRITE)
// 00513f33: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00513f38: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00513f3e: MOV EDI,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00513f44: ADD ESP,0x4
// 00513f47: MOV ESI,EAX
// 00513f49: ADD EBX,0x58
//   XREF to: 02d81af4 (PARAM)
// 00513f4c: CMP EDI,0x1e
// 00513f4f: JL 0x00513f73
//   XREF to: 00513f73 (CONDITIONAL_JUMP)
// 00513f51: MOV EBP,0x636e40
//   XREF to: 00636e40 (DATA)
// 00513f56: MOV EAX,0x82b
// 00513f5b: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 00513f60: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00513f66: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00513f6b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00513f70: ADD ESP,0x4
// 00513f73: MOV EAX,[0x02f29270]
//   Label: LAB_00513f73
//   XREF to: 02f29270 (READ)
// 00513f78: IMUL EDI,EAX,0x28
// 00513f7b: ADD EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 00513f81: MOV dword ptr [EAX*0x4 + 0x2f29274],EBX
//   XREF to: 02f292a4 (WRITE)
//   XREF to: 02d81af4 (DATA)
// 00513f88: PUSH EDI
//   XREF to: 02f294d0 (DATA)
// 00513f89: MOV AL,byte ptr [ESI]
//   Label: LAB_00513f89
// 00513f8b: MOV byte ptr [EDI],AL
//   XREF to: 02f294d0 (WRITE)
//   XREF to: 02f294d2 (WRITE)
// 00513f8d: CMP AL,0x0
// 00513f8f: JZ 0x00513fa1
//   XREF to: 00513fa1 (CONDITIONAL_JUMP)
// 00513f91: MOV AL,byte ptr [ESI + 0x1]
// 00513f94: ADD ESI,0x2
// 00513f97: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f294d1 (WRITE)
//   XREF to: 02f294d3 (WRITE)
// 00513f9a: ADD EDI,0x2
// 00513f9d: CMP AL,0x0
// 00513f9f: JNZ 0x00513f89
//   XREF to: 00513f89 (CONDITIONAL_JUMP)
// 00513fa1: POP EDI
//   Label: LAB_00513fa1
// 00513fa2: MOV ECX,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00513fa8: INC ECX
// 00513fa9: PUSH 0x636fb3
//   XREF to: 00636fb3 (DATA)
// 00513fae: MOV dword ptr [0x02f29270],ECX
//   XREF to: 02f29270 (WRITE)
// 00513fb4: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00513fb9: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00513fbf: MOV EDI,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00513fc5: ADD ESP,0x4
// 00513fc8: MOV ESI,EAX
// 00513fca: ADD EBX,0x60
//   XREF to: 02d81afc (PARAM)
// 00513fcd: CMP EDI,0x1e
// 00513fd0: JL 0x00513ff4
//   XREF to: 00513ff4 (CONDITIONAL_JUMP)
// 00513fd2: MOV EBP,0x636e40
//   XREF to: 00636e40 (DATA)
// 00513fd7: MOV EAX,0x82b
// 00513fdc: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 00513fe1: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00513fe7: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00513fec: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00513ff1: ADD ESP,0x4
// 00513ff4: MOV EAX,[0x02f29270]
//   Label: LAB_00513ff4
//   XREF to: 02f29270 (READ)
// 00513ff9: IMUL EDI,EAX,0x28
// 00513ffc: ADD EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 00514002: MOV dword ptr [EAX*0x4 + 0x2f29274],EBX
//   XREF to: 02f292a8 (WRITE)
//   XREF to: 02d81afc (DATA)
// 00514009: PUSH EDI
//   XREF to: 02f294f8 (DATA)
// 0051400a: MOV AL,byte ptr [ESI]
//   Label: LAB_0051400a
// 0051400c: MOV byte ptr [EDI],AL
//   XREF to: 02f294f8 (WRITE)
//   XREF to: 02f294fa (WRITE)
// 0051400e: CMP AL,0x0
// 00514010: JZ 0x00514022
//   XREF to: 00514022 (CONDITIONAL_JUMP)
// 00514012: MOV AL,byte ptr [ESI + 0x1]
// 00514015: ADD ESI,0x2
// 00514018: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f294f9 (WRITE)
//   XREF to: 02f294fb (WRITE)
// 0051401b: ADD EDI,0x2
// 0051401e: CMP AL,0x0
// 00514020: JNZ 0x0051400a
//   XREF to: 0051400a (CONDITIONAL_JUMP)
// 00514022: POP EDI
//   Label: LAB_00514022
// 00514023: MOV ECX,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00514029: INC ECX
// 0051402a: PUSH 0x636fbc
//   XREF to: 00636fbc (DATA)
// 0051402f: MOV dword ptr [0x02f29270],ECX
//   XREF to: 02f29270 (WRITE)
// 00514035: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 0051403a: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514040: MOV EDI,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00514046: ADD ESP,0x4
// 00514049: MOV ESI,EAX
// 0051404b: ADD EBX,0x64
//   XREF to: 02d81b00 (PARAM)
// 0051404e: CMP EDI,0x1e
// 00514051: JL 0x00514075
//   XREF to: 00514075 (CONDITIONAL_JUMP)
// 00514053: MOV EBP,0x636e40
//   XREF to: 00636e40 (DATA)
// 00514058: MOV EAX,0x82b
// 0051405d: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 00514062: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00514068: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0051406d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00514072: ADD ESP,0x4
// 00514075: MOV EAX,[0x02f29270]
//   Label: LAB_00514075
//   XREF to: 02f29270 (READ)
// 0051407a: IMUL EDI,EAX,0x28
// 0051407d: ADD EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 00514083: MOV dword ptr [EAX*0x4 + 0x2f29274],EBX
//   XREF to: 02f292ac (WRITE)
//   XREF to: 02d81b00 (DATA)
// 0051408a: PUSH EDI
//   XREF to: 02f29520 (DATA)
// 0051408b: MOV AL,byte ptr [ESI]
//   Label: LAB_0051408b
// 0051408d: MOV byte ptr [EDI],AL
//   XREF to: 02f29520 (WRITE)
//   XREF to: 02f29522 (WRITE)
// 0051408f: CMP AL,0x0
// 00514091: JZ 0x005140a3
//   XREF to: 005140a3 (CONDITIONAL_JUMP)
// 00514093: MOV AL,byte ptr [ESI + 0x1]
// 00514096: ADD ESI,0x2
// 00514099: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f29521 (WRITE)
//   XREF to: 02f29523 (WRITE)
// 0051409c: ADD EDI,0x2
// 0051409f: CMP AL,0x0
// 005140a1: JNZ 0x0051408b
//   XREF to: 0051408b (CONDITIONAL_JUMP)
// 005140a3: POP EDI
//   Label: LAB_005140a3
// 005140a4: MOV ECX,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 005140aa: INC ECX
// 005140ab: PUSH 0x636fc7
//   XREF to: 00636fc7 (DATA)
// 005140b0: MOV dword ptr [0x02f29270],ECX
//   XREF to: 02f29270 (WRITE)
// 005140b6: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 005140bb: MOV EDX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005140c1: MOV EDI,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 005140c7: ADD ESP,0x4
// 005140ca: MOV ESI,EAX
// 005140cc: LEA EBX,[EDX + 0x5c]
//   XREF to: 02d81af8 (DATA)
// 005140cf: CMP EDI,0x1e
// 005140d2: JL 0x005140f6
//   XREF to: 005140f6 (CONDITIONAL_JUMP)
// 005140d4: MOV EBP,0x636e40
//   XREF to: 00636e40 (DATA)
// 005140d9: MOV EAX,0x82b
// 005140de: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 005140e3: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 005140e9: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005140ee: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005140f3: ADD ESP,0x4
// 005140f6: MOV EAX,[0x02f29270]
//   Label: LAB_005140f6
//   XREF to: 02f29270 (READ)
// 005140fb: IMUL EDI,EAX,0x28
// 005140fe: ADD EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 00514104: MOV dword ptr [EAX*0x4 + 0x2f29274],EBX
//   XREF to: 02f292b0 (WRITE)
//   XREF to: 02d81af8 (DATA)
// 0051410b: PUSH EDI
//   XREF to: 02f29548 (DATA)
// 0051410c: MOV AL,byte ptr [ESI]
//   Label: LAB_0051410c
// 0051410e: MOV byte ptr [EDI],AL
//   XREF to: 02f29548 (WRITE)
//   XREF to: 02f2954a (WRITE)
// 00514110: CMP AL,0x0
// 00514112: JZ 0x00514124
//   XREF to: 00514124 (CONDITIONAL_JUMP)
// 00514114: MOV AL,byte ptr [ESI + 0x1]
// 00514117: ADD ESI,0x2
// 0051411a: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f29549 (WRITE)
//   XREF to: 02f2954b (WRITE)
// 0051411d: ADD EDI,0x2
// 00514120: CMP AL,0x0
// 00514122: JNZ 0x0051410c
//   XREF to: 0051410c (CONDITIONAL_JUMP)
// 00514124: POP EDI
//   Label: LAB_00514124
// 00514125: MOV ECX,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 0051412b: INC ECX
// 0051412c: PUSH 0x636fcc
//   XREF to: 00636fcc (DATA)
// 00514131: MOV dword ptr [0x02f29270],ECX
//   XREF to: 02f29270 (WRITE)
// 00514137: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 0051413c: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514142: MOV EDI,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00514148: ADD ESP,0x4
// 0051414b: MOV ESI,EAX
// 0051414d: ADD EBX,0x68
//   XREF to: 02d81b04 (PARAM)
// 00514150: CMP EDI,0x1e
// 00514153: JL 0x00514177
//   XREF to: 00514177 (CONDITIONAL_JUMP)
// 00514155: MOV EBP,0x636e40
//   XREF to: 00636e40 (DATA)
// 0051415a: MOV EAX,0x82b
// 0051415f: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 00514164: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0051416a: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0051416f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00514174: ADD ESP,0x4
// 00514177: MOV EAX,[0x02f29270]
//   Label: LAB_00514177
//   XREF to: 02f29270 (READ)
// 0051417c: IMUL EDI,EAX,0x28
// 0051417f: ADD EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 00514185: MOV dword ptr [EAX*0x4 + 0x2f29274],EBX
//   XREF to: 02f292b4 (WRITE)
//   XREF to: 02d81b04 (DATA)
// 0051418c: PUSH EDI
//   XREF to: 02f29570 (DATA)
// 0051418d: MOV AL,byte ptr [ESI]
//   Label: LAB_0051418d
// 0051418f: MOV byte ptr [EDI],AL
//   XREF to: 02f29570 (WRITE)
//   XREF to: 02f29572 (WRITE)
// 00514191: CMP AL,0x0
// 00514193: JZ 0x005141a5
//   XREF to: 005141a5 (CONDITIONAL_JUMP)
// 00514195: MOV AL,byte ptr [ESI + 0x1]
// 00514198: ADD ESI,0x2
// 0051419b: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f29571 (WRITE)
//   XREF to: 02f29573 (WRITE)
// 0051419e: ADD EDI,0x2
// 005141a1: CMP AL,0x0
// 005141a3: JNZ 0x0051418d
//   XREF to: 0051418d (CONDITIONAL_JUMP)
// 005141a5: POP EDI
//   Label: LAB_005141a5
// 005141a6: MOV ECX,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 005141ac: INC ECX
// 005141ad: PUSH 0x636fe2
//   XREF to: 00636fe2 (DATA)
// 005141b2: MOV dword ptr [0x02f29270],ECX
//   XREF to: 02f29270 (WRITE)
// 005141b8: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 005141bd: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 005141c3: MOV EDI,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 005141c9: ADD ESP,0x4
// 005141cc: MOV ESI,EAX
// 005141ce: ADD EBX,0x6c
//   XREF to: 02d81b08 (PARAM)
// 005141d1: CMP EDI,0x1e
// 005141d4: JL 0x005141f8
//   XREF to: 005141f8 (CONDITIONAL_JUMP)
// 005141d6: MOV EBP,0x636e40
//   XREF to: 00636e40 (DATA)
// 005141db: MOV EAX,0x82b
// 005141e0: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 005141e5: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 005141eb: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005141f0: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005141f5: ADD ESP,0x4
// 005141f8: MOV EAX,[0x02f29270]
//   Label: LAB_005141f8
//   XREF to: 02f29270 (READ)
// 005141fd: IMUL EDI,EAX,0x28
// 00514200: ADD EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 00514206: MOV dword ptr [EAX*0x4 + 0x2f29274],EBX
//   XREF to: 02f292b8 (WRITE)
//   XREF to: 02d81b08 (DATA)
// 0051420d: PUSH EDI
//   XREF to: 02f29598 (DATA)
// 0051420e: MOV AL,byte ptr [ESI]
//   Label: LAB_0051420e
// 00514210: MOV byte ptr [EDI],AL
//   XREF to: 02f29598 (WRITE)
//   XREF to: 02f2959a (WRITE)
// 00514212: CMP AL,0x0
// 00514214: JZ 0x00514226
//   XREF to: 00514226 (CONDITIONAL_JUMP)
// 00514216: MOV AL,byte ptr [ESI + 0x1]
// 00514219: ADD ESI,0x2
// 0051421c: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f29599 (WRITE)
//   XREF to: 02f2959b (WRITE)
// 0051421f: ADD EDI,0x2
// 00514222: CMP AL,0x0
// 00514224: JNZ 0x0051420e
//   XREF to: 0051420e (CONDITIONAL_JUMP)
// 00514226: POP EDI
//   Label: LAB_00514226
// 00514227: MOV ECX,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 0051422d: INC ECX
// 0051422e: PUSH 0x636ff9
//   XREF to: 00636ff9 (DATA)
// 00514233: MOV dword ptr [0x02f29270],ECX
//   XREF to: 02f29270 (WRITE)
// 00514239: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 0051423e: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514244: MOV EDI,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 0051424a: ADD ESP,0x4
// 0051424d: MOV ESI,EAX
// 0051424f: ADD EBX,0x70
//   XREF to: 02d81b0c (PARAM)
// 00514252: CMP EDI,0x1e
// 00514255: JL 0x00514279
//   XREF to: 00514279 (CONDITIONAL_JUMP)
// 00514257: MOV EBP,0x636e40
//   XREF to: 00636e40 (DATA)
// 0051425c: MOV EAX,0x82b
// 00514261: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 00514266: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0051426c: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00514271: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00514276: ADD ESP,0x4
// 00514279: MOV EAX,[0x02f29270]
//   Label: LAB_00514279
//   XREF to: 02f29270 (READ)
// 0051427e: IMUL EDI,EAX,0x28
// 00514281: ADD EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 00514287: MOV dword ptr [EAX*0x4 + 0x2f29274],EBX
//   XREF to: 02f292bc (WRITE)
//   XREF to: 02d81b0c (DATA)
// 0051428e: PUSH EDI
//   XREF to: 02f295c0 (DATA)
// 0051428f: MOV AL,byte ptr [ESI]
//   Label: LAB_0051428f
// 00514291: MOV byte ptr [EDI],AL
//   XREF to: 02f295c0 (WRITE)
//   XREF to: 02f295c2 (WRITE)
// 00514293: CMP AL,0x0
// 00514295: JZ 0x005142a7
//   XREF to: 005142a7 (CONDITIONAL_JUMP)
// 00514297: MOV AL,byte ptr [ESI + 0x1]
// 0051429a: ADD ESI,0x2
// 0051429d: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f295c1 (WRITE)
//   XREF to: 02f295c3 (WRITE)
// 005142a0: ADD EDI,0x2
// 005142a3: CMP AL,0x0
// 005142a5: JNZ 0x0051428f
//   XREF to: 0051428f (CONDITIONAL_JUMP)
// 005142a7: POP EDI
//   Label: LAB_005142a7
// 005142a8: MOV ECX,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 005142ae: INC ECX
// 005142af: PUSH 0x63700e
//   XREF to: 0063700e (DATA)
// 005142b4: MOV dword ptr [0x02f29270],ECX
//   XREF to: 02f29270 (WRITE)
// 005142ba: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 005142bf: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 005142c5: MOV EDI,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 005142cb: ADD ESP,0x4
// 005142ce: MOV ESI,EAX
// 005142d0: ADD EBX,0x74
//   XREF to: 02d81b10 (PARAM)
// 005142d3: CMP EDI,0x1e
// 005142d6: JL 0x005142fa
//   XREF to: 005142fa (CONDITIONAL_JUMP)
// 005142d8: MOV EBP,0x636e40
//   XREF to: 00636e40 (DATA)
// 005142dd: MOV EAX,0x82b
// 005142e2: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 005142e7: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 005142ed: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005142f2: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005142f7: ADD ESP,0x4
// 005142fa: MOV EAX,[0x02f29270]
//   Label: LAB_005142fa
//   XREF to: 02f29270 (READ)
// 005142ff: IMUL EDI,EAX,0x28
// 00514302: ADD EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 00514308: MOV dword ptr [EAX*0x4 + 0x2f29274],EBX
//   XREF to: 02f292c0 (WRITE)
//   XREF to: 02d81b10 (DATA)
// 0051430f: PUSH EDI
//   XREF to: 02f295e8 (DATA)
// 00514310: MOV AL,byte ptr [ESI]
//   Label: LAB_00514310
// 00514312: MOV byte ptr [EDI],AL
//   XREF to: 02f295e8 (WRITE)
//   XREF to: 02f295ea (WRITE)
// 00514314: CMP AL,0x0
// 00514316: JZ 0x00514328
//   XREF to: 00514328 (CONDITIONAL_JUMP)
// 00514318: MOV AL,byte ptr [ESI + 0x1]
// 0051431b: ADD ESI,0x2
// 0051431e: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f295e9 (WRITE)
//   XREF to: 02f295eb (WRITE)
// 00514321: ADD EDI,0x2
// 00514324: CMP AL,0x0
// 00514326: JNZ 0x00514310
//   XREF to: 00514310 (CONDITIONAL_JUMP)
// 00514328: POP EDI
//   Label: LAB_00514328
// 00514329: MOV ECX,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 0051432f: INC ECX
// 00514330: PUSH 0x637025
//   XREF to: 00637025 (DATA)
// 00514335: MOV dword ptr [0x02f29270],ECX
//   XREF to: 02f29270 (WRITE)
// 0051433b: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514340: MOV EDX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00514346: MOV EDI,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 0051434c: ADD ESP,0x4
// 0051434f: MOV ESI,EAX
// 00514351: LEA EBX,[EDX + 0x78]
//   XREF to: 02d81b14 (DATA)
// 00514354: CMP EDI,0x1e
// 00514357: JL 0x0051437b
//   XREF to: 0051437b (CONDITIONAL_JUMP)
// 00514359: MOV EBP,0x636e40
//   XREF to: 00636e40 (DATA)
// 0051435e: MOV EAX,0x82b
// 00514363: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 00514368: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0051436e: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00514373: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00514378: ADD ESP,0x4
// 0051437b: MOV EAX,[0x02f29270]
//   Label: LAB_0051437b
//   XREF to: 02f29270 (READ)
// 00514380: IMUL EDI,EAX,0x28
// 00514383: ADD EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 00514389: MOV dword ptr [EAX*0x4 + 0x2f29274],EBX
//   XREF to: 02f292c4 (WRITE)
//   XREF to: 02d81b14 (DATA)
// 00514390: PUSH EDI
//   XREF to: 02f29610 (DATA)
// 00514391: MOV AL,byte ptr [ESI]
//   Label: LAB_00514391
// 00514393: MOV byte ptr [EDI],AL
//   XREF to: 02f29610 (WRITE)
//   XREF to: 02f29612 (WRITE)
// 00514395: CMP AL,0x0
// 00514397: JZ 0x005143a9
//   XREF to: 005143a9 (CONDITIONAL_JUMP)
// 00514399: MOV AL,byte ptr [ESI + 0x1]
// 0051439c: ADD ESI,0x2
// 0051439f: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f29611 (WRITE)
//   XREF to: 02f29613 (WRITE)
// 005143a2: ADD EDI,0x2
// 005143a5: CMP AL,0x0
// 005143a7: JNZ 0x00514391
//   XREF to: 00514391 (CONDITIONAL_JUMP)
// 005143a9: POP EDI
//   Label: LAB_005143a9
// 005143aa: MOV ECX,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 005143b0: INC ECX
// 005143b1: PUSH 0x63703a
//   XREF to: 0063703a (DATA)
// 005143b6: MOV dword ptr [0x02f29270],ECX
//   XREF to: 02f29270 (WRITE)
// 005143bc: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 005143c1: MOV EDX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005143c7: MOV EDI,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 005143cd: ADD ESP,0x4
// 005143d0: MOV ESI,EAX
// 005143d2: LEA EBX,[EDX + 0x7c]
//   XREF to: 02d81b18 (DATA)
// 005143d5: CMP EDI,0x1e
// 005143d8: JL 0x005143fc
//   XREF to: 005143fc (CONDITIONAL_JUMP)
// 005143da: MOV EBP,0x636e40
//   XREF to: 00636e40 (DATA)
// 005143df: MOV EAX,0x82b
// 005143e4: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 005143e9: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 005143ef: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005143f4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005143f9: ADD ESP,0x4
// 005143fc: MOV EAX,[0x02f29270]
//   Label: LAB_005143fc
//   XREF to: 02f29270 (READ)
// 00514401: IMUL EDI,EAX,0x28
// 00514404: ADD EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 0051440a: MOV dword ptr [EAX*0x4 + 0x2f29274],EBX
//   XREF to: 02f292c8 (WRITE)
//   XREF to: 02d81b18 (DATA)
// 00514411: PUSH EDI
//   XREF to: 02f29638 (DATA)
// 00514412: MOV AL,byte ptr [ESI]
//   Label: LAB_00514412
// 00514414: MOV byte ptr [EDI],AL
//   XREF to: 02f29638 (WRITE)
//   XREF to: 02f2963a (WRITE)
// 00514416: CMP AL,0x0
// 00514418: JZ 0x0051442a
//   XREF to: 0051442a (CONDITIONAL_JUMP)
// 0051441a: MOV AL,byte ptr [ESI + 0x1]
// 0051441d: ADD ESI,0x2
// 00514420: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f29639 (WRITE)
//   XREF to: 02f2963b (WRITE)
// 00514423: ADD EDI,0x2
// 00514426: CMP AL,0x0
// 00514428: JNZ 0x00514412
//   XREF to: 00514412 (CONDITIONAL_JUMP)
// 0051442a: POP EDI
//   Label: LAB_0051442a
// 0051442b: MOV ECX,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00514431: INC ECX
// 00514432: PUSH 0x637046
//   XREF to: 00637046 (DATA)
// 00514437: MOV dword ptr [0x02f29270],ECX
//   XREF to: 02f29270 (WRITE)
// 0051443d: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514442: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514448: MOV EDI,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 0051444e: ADD ESP,0x4
// 00514451: MOV ESI,EAX
// 00514453: ADD EBX,0x80
//   XREF to: 02d81b1c (PARAM)
// 00514459: CMP EDI,0x1e
// 0051445c: JL 0x00514480
//   XREF to: 00514480 (CONDITIONAL_JUMP)
// 0051445e: MOV EBP,0x636e40
//   XREF to: 00636e40 (DATA)
// 00514463: MOV EAX,0x82b
// 00514468: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 0051446d: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00514473: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00514478: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051447d: ADD ESP,0x4
// 00514480: MOV EAX,[0x02f29270]
//   Label: LAB_00514480
//   XREF to: 02f29270 (READ)
// 00514485: IMUL EDI,EAX,0x28
// 00514488: ADD EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 0051448e: MOV dword ptr [EAX*0x4 + 0x2f29274],EBX
//   XREF to: 02f292cc (WRITE)
//   XREF to: 02d81b1c (DATA)
// 00514495: PUSH EDI
//   XREF to: 02f29660 (DATA)
// 00514496: MOV AL,byte ptr [ESI]
//   Label: LAB_00514496
// 00514498: MOV byte ptr [EDI],AL
//   XREF to: 02f29660 (WRITE)
//   XREF to: 02f29662 (WRITE)
// 0051449a: CMP AL,0x0
// 0051449c: JZ 0x005144ae
//   XREF to: 005144ae (CONDITIONAL_JUMP)
// 0051449e: MOV AL,byte ptr [ESI + 0x1]
// 005144a1: ADD ESI,0x2
// 005144a4: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f29661 (WRITE)
//   XREF to: 02f29663 (WRITE)
// 005144a7: ADD EDI,0x2
// 005144aa: CMP AL,0x0
// 005144ac: JNZ 0x00514496
//   XREF to: 00514496 (CONDITIONAL_JUMP)
// 005144ae: POP EDI
//   Label: LAB_005144ae
// 005144af: MOV ECX,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 005144b5: INC ECX
// 005144b6: PUSH 0x637056
//   XREF to: 00637056 (DATA)
// 005144bb: MOV dword ptr [0x02f29270],ECX
//   XREF to: 02f29270 (WRITE)
// 005144c1: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 005144c6: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 005144cc: MOV EDI,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 005144d2: ADD ESP,0x4
// 005144d5: MOV ESI,EAX
// 005144d7: ADD EBX,0x84
//   XREF to: 02d81b20 (PARAM)
// 005144dd: CMP EDI,0x1e
// 005144e0: JL 0x00514504
//   XREF to: 00514504 (CONDITIONAL_JUMP)
// 005144e2: MOV EBP,0x636e40
//   XREF to: 00636e40 (DATA)
// 005144e7: MOV EAX,0x82b
// 005144ec: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 005144f1: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 005144f7: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005144fc: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00514501: ADD ESP,0x4
// 00514504: MOV EAX,[0x02f29270]
//   Label: LAB_00514504
//   XREF to: 02f29270 (READ)
// 00514509: IMUL EDI,EAX,0x28
// 0051450c: ADD EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 00514512: MOV dword ptr [EAX*0x4 + 0x2f29274],EBX
//   XREF to: 02f292d0 (WRITE)
//   XREF to: 02d81b20 (DATA)
// 00514519: PUSH EDI
//   XREF to: 02f29688 (DATA)
// 0051451a: MOV AL,byte ptr [ESI]
//   Label: LAB_0051451a
// 0051451c: MOV byte ptr [EDI],AL
//   XREF to: 02f29688 (WRITE)
//   XREF to: 02f2968a (WRITE)
// 0051451e: CMP AL,0x0
// 00514520: JZ 0x00514532
//   XREF to: 00514532 (CONDITIONAL_JUMP)
// 00514522: MOV AL,byte ptr [ESI + 0x1]
// 00514525: ADD ESI,0x2
// 00514528: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f29689 (WRITE)
//   XREF to: 02f2968b (WRITE)
// 0051452b: ADD EDI,0x2
// 0051452e: CMP AL,0x0
// 00514530: JNZ 0x0051451a
//   XREF to: 0051451a (CONDITIONAL_JUMP)
// 00514532: POP EDI
//   Label: LAB_00514532
// 00514533: MOV ECX,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00514539: INC ECX
// 0051453a: PUSH 0x637060
//   XREF to: 00637060 (DATA)
// 0051453f: MOV dword ptr [0x02f29270],ECX
//   XREF to: 02f29270 (WRITE)
// 00514545: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 0051454a: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514550: MOV EDI,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00514556: ADD ESP,0x4
// 00514559: MOV ESI,EAX
// 0051455b: ADD EBX,0x88
//   XREF to: 02d81b24 (PARAM)
// 00514561: CMP EDI,0x1e
// 00514564: JL 0x00514588
//   XREF to: 00514588 (CONDITIONAL_JUMP)
// 00514566: MOV EBP,0x636e40
//   XREF to: 00636e40 (DATA)
// 0051456b: MOV EAX,0x82b
// 00514570: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 00514575: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0051457b: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00514580: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00514585: ADD ESP,0x4
// 00514588: MOV EAX,[0x02f29270]
//   Label: LAB_00514588
//   XREF to: 02f29270 (READ)
// 0051458d: IMUL EDI,EAX,0x28
// 00514590: ADD EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 00514596: MOV dword ptr [EAX*0x4 + 0x2f29274],EBX
//   XREF to: 02f292d4 (WRITE)
//   XREF to: 02d81b24 (DATA)
// 0051459d: PUSH EDI
//   XREF to: 02f296b0 (DATA)
// 0051459e: MOV AL,byte ptr [ESI]
//   Label: LAB_0051459e
// 005145a0: MOV byte ptr [EDI],AL
//   XREF to: 02f296b0 (WRITE)
//   XREF to: 02f296b2 (WRITE)
// 005145a2: CMP AL,0x0
// 005145a4: JZ 0x005145b6
//   XREF to: 005145b6 (CONDITIONAL_JUMP)
// 005145a6: MOV AL,byte ptr [ESI + 0x1]
// 005145a9: ADD ESI,0x2
// 005145ac: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f296b1 (WRITE)
//   XREF to: 02f296b3 (WRITE)
// 005145af: ADD EDI,0x2
// 005145b2: CMP AL,0x0
// 005145b4: JNZ 0x0051459e
//   XREF to: 0051459e (CONDITIONAL_JUMP)
// 005145b6: POP EDI
//   Label: LAB_005145b6
// 005145b7: MOV ECX,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 005145bd: INC ECX
// 005145be: PUSH 0x63706e
//   XREF to: 0063706e (DATA)
// 005145c3: MOV dword ptr [0x02f29270],ECX
//   XREF to: 02f29270 (WRITE)
// 005145c9: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 005145ce: MOV EDX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005145d4: MOV EDI,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 005145da: ADD ESP,0x4
// 005145dd: MOV ESI,EAX
// 005145df: LEA EBX,[EDX + 0x8c]
//   XREF to: 02d81b28 (DATA)
// 005145e5: CMP EDI,0x1e
// 005145e8: JL 0x0051460c
//   XREF to: 0051460c (CONDITIONAL_JUMP)
// 005145ea: MOV EBP,0x636e40
//   XREF to: 00636e40 (DATA)
// 005145ef: MOV EAX,0x82b
// 005145f4: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 005145f9: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 005145ff: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00514604: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00514609: ADD ESP,0x4
// 0051460c: MOV EAX,[0x02f29270]
//   Label: LAB_0051460c
//   XREF to: 02f29270 (READ)
// 00514611: IMUL EDI,EAX,0x28
// 00514614: ADD EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 0051461a: MOV dword ptr [EAX*0x4 + 0x2f29274],EBX
//   XREF to: 02f292d8 (WRITE)
//   XREF to: 02d81b28 (DATA)
// 00514621: PUSH EDI
//   XREF to: 02f296d8 (DATA)
// 00514622: MOV AL,byte ptr [ESI]
//   Label: LAB_00514622
// 00514624: MOV byte ptr [EDI],AL
//   XREF to: 02f296d8 (WRITE)
//   XREF to: 02f296da (WRITE)
// 00514626: CMP AL,0x0
// 00514628: JZ 0x0051463a
//   XREF to: 0051463a (CONDITIONAL_JUMP)
// 0051462a: MOV AL,byte ptr [ESI + 0x1]
// 0051462d: ADD ESI,0x2
// 00514630: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f296d9 (WRITE)
//   XREF to: 02f296db (WRITE)
// 00514633: ADD EDI,0x2
// 00514636: CMP AL,0x0
// 00514638: JNZ 0x00514622
//   XREF to: 00514622 (CONDITIONAL_JUMP)
// 0051463a: POP EDI
//   Label: LAB_0051463a
// 0051463b: MOV ECX,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00514641: INC ECX
// 00514642: PUSH 0x63707f
//   XREF to: 0063707f (DATA)
// 00514647: MOV dword ptr [0x02f29270],ECX
//   XREF to: 02f29270 (WRITE)
// 0051464d: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514652: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514658: MOV EDI,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 0051465e: ADD ESP,0x4
// 00514661: MOV ESI,EAX
// 00514663: ADD EBX,0x90
//   XREF to: 02d81b2c (PARAM)
// 00514669: CMP EDI,0x1e
// 0051466c: JL 0x00514690
//   XREF to: 00514690 (CONDITIONAL_JUMP)
// 0051466e: MOV EBP,0x636e40
//   XREF to: 00636e40 (DATA)
// 00514673: MOV EAX,0x82b
// 00514678: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 0051467d: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00514683: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00514688: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051468d: ADD ESP,0x4
// 00514690: MOV EAX,[0x02f29270]
//   Label: LAB_00514690
//   XREF to: 02f29270 (READ)
// 00514695: IMUL EDI,EAX,0x28
// 00514698: ADD EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 0051469e: MOV dword ptr [EAX*0x4 + 0x2f29274],EBX
//   XREF to: 02f292dc (WRITE)
//   XREF to: 02d81b2c (DATA)
// 005146a5: PUSH EDI
//   XREF to: 02f29700 (DATA)
// 005146a6: MOV AL,byte ptr [ESI]
//   Label: LAB_005146a6
// 005146a8: MOV byte ptr [EDI],AL
//   XREF to: 02f29700 (WRITE)
//   XREF to: 02f29702 (WRITE)
// 005146aa: CMP AL,0x0
// 005146ac: JZ 0x005146be
//   XREF to: 005146be (CONDITIONAL_JUMP)
// 005146ae: MOV AL,byte ptr [ESI + 0x1]
// 005146b1: ADD ESI,0x2
// 005146b4: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f29701 (WRITE)
//   XREF to: 02f29703 (WRITE)
// 005146b7: ADD EDI,0x2
// 005146ba: CMP AL,0x0
// 005146bc: JNZ 0x005146a6
//   XREF to: 005146a6 (CONDITIONAL_JUMP)
// 005146be: POP EDI
//   Label: LAB_005146be
// 005146bf: INC dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ_WRITE)
// 005146c5: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 005146ca: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 005146cf: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xa7c] (DATA)
// 005146d3: PUSH EAX
// 005146d4: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 005146d9: ADD ESP,0x4
// 005146dc: PUSH 0x637089
//   XREF to: 00637089 (DATA)
// 005146e1: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 005146e6: ADD ESP,0x4
// 005146e9: PUSH EAX
// 005146ea: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xa7c] (DATA)
// 005146ee: PUSH EAX
// 005146ef: XOR ESI,ESI
// 005146f1: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005146f6: MOV EBX,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 005146fc: ADD ESP,0x8
// 005146ff: TEST EBX,EBX
// 00514701: JLE 0x00514757
//   XREF to: 00514757 (CONDITIONAL_JUMP)
// 00514703: MOV EBX,0x2f292f0
//   XREF to: 02f292f0 (PARAM)
// 00514708: XOR EDI,EDI
// 0051470a: MOV EAX,dword ptr [EDI + 0x2f29274]
//   Label: LAB_0051470a
//   XREF to: 02d81ac4 (PARAM)
//   XREF to: 02d81ac8 (PARAM)
//   XREF to: 02f29274 (READ)
//   XREF to: 02f29278 (READ)
// 00514710: MOV EBP,dword ptr [EAX]
//   XREF to: 02d81ac4 (READ)
//   XREF to: 02d81ac8 (READ)
// 00514712: PUSH EBP
// 00514713: CALL core_menu.cpp_LocalizeMainGameControls_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 00514718: ADD ESP,0x4
// 0051471b: PUSH EAX
// 0051471c: PUSH EBX
//   XREF to: 02f292f0 (DATA)
// 0051471d: PUSH 0x63709a
//   XREF to: 0063709a (DATA)
// 00514722: LEA EAX,[ESP + 0x9bc]
//   XREF to: Stack[-0xd4] (DATA)
// 00514729: PUSH EAX
// 0051472a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0051472f: ADD ESP,0x10
// 00514732: LEA EAX,[ESP + 0x9b0]
//   XREF to: Stack[-0xd4] (DATA)
// 00514739: PUSH EAX
// 0051473a: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xa7c] (DATA)
// 0051473e: ADD EDI,0x4
// 00514741: PUSH EAX
// 00514742: INC ESI
// 00514743: ADD EBX,0x28
//   XREF to: 02f29318 (PARAM)
// 00514746: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0051474b: MOV EAX,[0x02f29270]
//   XREF to: 02f29270 (READ)
// 00514750: ADD ESP,0x8
// 00514753: CMP ESI,EAX
// 00514755: JL 0x0051470a
//   XREF to: 0051470a (CONDITIONAL_JUMP)
// 00514757: PUSH 0x1
//   Label: LAB_00514757
// 00514759: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xa7c] (DATA)
// 0051475d: PUSH EAX
// 0051475e: CALL shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10
//   XREF to: 004a3e10 (UNCONDITIONAL_CALL)
// 00514763: ADD ESP,0x8
// 00514766: PUSH 0x0
// 00514768: MOV EDX,dword ptr [ESP + 0xa7c]
//   XREF to: Stack[-0xc] (READ)
// 0051476f: PUSH EDX
// 00514770: PUSH 0x6370a0
//   XREF to: 006370a0 (DATA)
// 00514775: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 0051477a: ADD ESP,0x4
// 0051477d: PUSH EAX
// 0051477e: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0xa7c] (DATA)
// 00514782: PUSH EAX
// 00514783: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 00514788: ADD ESP,0x10
// 0051478b: TEST EAX,EAX
// 0051478d: JL 0x00514b6a
//   XREF to: 00514b6a (CONDITIONAL_JUMP)
// 00514793: JNZ 0x00514b42
//   XREF to: 00514b42 (CONDITIONAL_JUMP)
// 00514799: MOV ESI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 0051479f: PUSH ESI
//   XREF to: 02d81a9c (DATA)
// 005147a0: CALL core_game.cpp_CGame_restoreDefaultControls_FUN_004dbbc0
//   XREF to: 004dbbc0 (UNCONDITIONAL_CALL)
// 005147a5: ADD ESP,0x4
// 005147a8: PUSH 0x0
// 005147aa: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xa7c] (DATA)
// 005147ae: PUSH EAX
// 005147af: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 005147b4: ADD ESP,0x8
// 005147b7: JMP 0x0051390e
//   XREF to: 0051390e (UNCONDITIONAL_JUMP)
// 005147bc: CALL core_menu.cpp_SetUpGamepadControls_FUN_005104d0
//   Label: LAB_005147bc
//   XREF to: 005104d0 (UNCONDITIONAL_CALL)
// 005147c1: TEST EAX,EAX
// 005147c3: JNZ 0x00513903
//   XREF to: 00513903 (CONDITIONAL_JUMP)
// 005147c9: ADD ESP,0xa74
//   Label: LAB_005147c9
// 005147cf: POP EBP
// 005147d0: POP EBX
// 005147d1: RET
// 005147d2: PUSH 0x636f48
//   Label: LAB_005147d2
//   XREF to: 00636f48 (DATA)
// 005147d7: JMP 0x00513a30
//   XREF to: 00513a30 (UNCONDITIONAL_JUMP)
// 005147dc: IMUL ESI,EBP,0x28
//   Label: caseD_256
// 005147df: LEA EDI,[ESP + 0x7b0]
//   XREF to: Stack[-0x2d4] (DATA)
// 005147e6: ADD ESI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 005147ec: PUSH EDI
// 005147ed: MOV AL,byte ptr [ESI]
//   Label: LAB_005147ed
//   XREF to: 02f292f0 (DATA)
//   XREF to: 02f292f2 (DATA)
// 005147ef: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x2d4] (DATA)
// 005147f1: CMP AL,0x0
// 005147f3: JZ 0x00514805
//   XREF to: 00514805 (CONDITIONAL_JUMP)
// 005147f5: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 02f292f1 (DATA)
//   XREF to: 02f292f3 (DATA)
// 005147f8: ADD ESI,0x2
// 005147fb: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x2d3] (WRITE)
// 005147fe: ADD EDI,0x2
// 00514801: CMP AL,0x0
// 00514803: JNZ 0x005147ed
//   XREF to: 005147ed (CONDITIONAL_JUMP)
// 00514805: POP EDI
//   Label: LAB_00514805
// 00514806: PUSH 0x6370b2
//   XREF to: 006370b2 (DATA)
// 0051480b: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514810: ADD ESP,0x4
// 00514813: LEA EDI,[ESP + 0x7b0]
//   XREF to: Stack[-0x2d4] (DATA)
// 0051481a: MOV ESI,EAX
// 0051481c: PUSH EDI
// 0051481d: SUB ECX,ECX
// 0051481f: DEC ECX
// 00514820: MOV AL,0x0
// 00514822: SCASB.REPNE ES:EDI
// 00514824: DEC EDI
// 00514825: MOV AL,byte ptr [ESI]
//   Label: LAB_00514825
// 00514827: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x2d4] (DATA)
// 00514829: CMP AL,0x0
// 0051482b: JZ 0x0051483d
//   XREF to: 0051483d (CONDITIONAL_JUMP)
// 0051482d: MOV AL,byte ptr [ESI + 0x1]
// 00514830: ADD ESI,0x2
// 00514833: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x2d3] (WRITE)
// 00514836: ADD EDI,0x2
// 00514839: CMP AL,0x0
// 0051483b: JNZ 0x00514825
//   XREF to: 00514825 (CONDITIONAL_JUMP)
// 0051483d: POP EDI
//   Label: LAB_0051483d
// 0051483e: LEA EAX,[ESP + 0x7b0]
//   XREF to: Stack[-0x2d4] (DATA)
// 00514845: PUSH EAX
// 00514846: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0051484c: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0051484d: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00514852: ADD ESP,0x8
//   Label: LAB_00514852
// 00514855: PUSH 0x0
// 00514857: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xa7c] (DATA)
// 0051485b: PUSH EAX
// 0051485c: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00514861: ADD ESP,0x8
// 00514864: JMP 0x0051390e
//   XREF to: 0051390e (UNCONDITIONAL_JUMP)
// 00514869: IMUL ESI,EBP,0x28
//   Label: caseD_254
// 0051486c: LEA EDI,[ESP + 0x3b0]
//   XREF to: Stack[-0x6d4] (DATA)
// 00514873: ADD ESI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 00514879: PUSH EDI
// 0051487a: MOV AL,byte ptr [ESI]
//   Label: LAB_0051487a
//   XREF to: 02f292f0 (DATA)
//   XREF to: 02f292f2 (DATA)
// 0051487c: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x6d4] (DATA)
// 0051487e: CMP AL,0x0
// 00514880: JZ 0x00514892
//   XREF to: 00514892 (CONDITIONAL_JUMP)
// 00514882: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 02f292f1 (DATA)
//   XREF to: 02f292f3 (DATA)
// 00514885: ADD ESI,0x2
// 00514888: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x6d3] (WRITE)
// 0051488b: ADD EDI,0x2
// 0051488e: CMP AL,0x0
// 00514890: JNZ 0x0051487a
//   XREF to: 0051487a (CONDITIONAL_JUMP)
// 00514892: POP EDI
//   Label: LAB_00514892
// 00514893: PUSH 0x6370e2
//   XREF to: 006370e2 (DATA)
// 00514898: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 0051489d: ADD ESP,0x4
// 005148a0: LEA EDI,[ESP + 0x3b0]
//   XREF to: Stack[-0x6d4] (DATA)
// 005148a7: MOV ESI,EAX
// 005148a9: PUSH EDI
// 005148aa: SUB ECX,ECX
// 005148ac: DEC ECX
// 005148ad: MOV AL,0x0
// 005148af: SCASB.REPNE ES:EDI
// 005148b1: DEC EDI
// 005148b2: MOV AL,byte ptr [ESI]
//   Label: LAB_005148b2
// 005148b4: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x6d4] (DATA)
// 005148b6: CMP AL,0x0
// 005148b8: JZ 0x005148ca
//   XREF to: 005148ca (CONDITIONAL_JUMP)
// 005148ba: MOV AL,byte ptr [ESI + 0x1]
// 005148bd: ADD ESI,0x2
// 005148c0: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x6d3] (WRITE)
// 005148c3: ADD EDI,0x2
// 005148c6: CMP AL,0x0
// 005148c8: JNZ 0x005148b2
//   XREF to: 005148b2 (CONDITIONAL_JUMP)
// 005148ca: POP EDI
//   Label: LAB_005148ca
// 005148cb: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0x6d4] (DATA)
// 005148d2: PUSH EAX
// 005148d3: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005148d9: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 005148da: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 005148df: JMP 0x00514852
//   XREF to: 00514852 (UNCONDITIONAL_JUMP)
// 005148e4: MOV EAX,[0x0067b654]
//   Label: default
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005148e9: CMP dword ptr [EAX + 0xbc],0x2
//   XREF to: 02d81b58 (READ)
// 005148f0: JZ 0x0051494a
//   XREF to: 0051494a (CONDITIONAL_JUMP)
// 005148f2: MOV ESI,0xffffffff
//   Label: LAB_005148f2
// 005148f7: XOR EBX,EBX
// 005148f9: PUSH EBX
//   Label: LAB_005148f9
// 005148fa: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005148ff: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00514900: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00514902: CALL dword ptr [EDI]
// 00514904: ADD ESP,0x8
// 00514907: TEST EAX,EAX
// 00514909: JZ 0x00514955
//   XREF to: 00514955 (CONDITIONAL_JUMP)
// 0051490b: TEST ESI,ESI
// 0051490d: JL 0x00514aa3
//   XREF to: 00514aa3 (CONDITIONAL_JUMP)
// 00514913: PUSH 0x637114
//   Label: LAB_00514913
//   XREF to: 00637114 (DATA)
// 00514918: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 0051491d: ADD ESP,0x4
// 00514920: PUSH EAX
// 00514921: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00514927: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00514928: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0051492d: ADD ESP,0x8
// 00514930: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00514935: PUSH 0x1
// 00514937: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00514939: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0051493a: CALL dword ptr [EDX]
// 0051493c: ADD ESP,0x8
// 0051493f: TEST EAX,EAX
// 00514941: JNZ 0x00514963
//   XREF to: 00514963 (CONDITIONAL_JUMP)
// 00514943: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00514948: JMP 0x005148e4
//   XREF to: 005148e4 (UNCONDITIONAL_JUMP)
// 0051494a: PUSH EAX
//   Label: LAB_0051494a
//   XREF to: 02d81a9c (DATA)
// 0051494b: CALL core_game.cpp_CGame_resetKeyState_FUN_004dbe60
//   XREF to: 004dbe60 (UNCONDITIONAL_CALL)
// 00514950: ADD ESP,0x4
// 00514953: JMP 0x005148f2
//   XREF to: 005148f2 (UNCONDITIONAL_JUMP)
// 00514955: INC EBX
//   Label: LAB_00514955
// 00514956: CMP EBX,0x258
// 0051495c: JL 0x005148f9
//   XREF to: 005148f9 (CONDITIONAL_JUMP)
// 0051495e: CMP ESI,-0x1
// 00514961: JNZ 0x00514913
//   XREF to: 00514913 (CONDITIONAL_JUMP)
// 00514963: PUSH 0x1
//   Label: LAB_00514963
// 00514965: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0051496a: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0051496b: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0051496d: CALL dword ptr [EDX]
// 0051496f: ADD ESP,0x8
// 00514972: TEST EAX,EAX
// 00514974: JNZ 0x00514aaa
//   XREF to: 00514aaa (CONDITIONAL_JUMP)
// 0051497a: PUSH 0x637138
//   XREF to: 00637138 (DATA)
// 0051497f: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514984: ADD ESP,0x4
// 00514987: LEA EDI,[ESP + 0x5b0]
// 0051498e: MOV ESI,EAX
// 00514990: PUSH EDI
// 00514991: MOV AL,byte ptr [ESI]
//   Label: LAB_00514991
// 00514993: MOV byte ptr [EDI],AL
// 00514995: CMP AL,0x0
// 00514997: JZ 0x005149a9
//   XREF to: 005149a9 (CONDITIONAL_JUMP)
// 00514999: MOV AL,byte ptr [ESI + 0x1]
// 0051499c: ADD ESI,0x2
// 0051499f: MOV byte ptr [EDI + 0x1],AL
// 005149a2: ADD EDI,0x2
// 005149a5: CMP AL,0x0
// 005149a7: JNZ 0x00514991
//   XREF to: 00514991 (CONDITIONAL_JUMP)
// 005149a9: POP EDI
//   Label: LAB_005149a9
// 005149aa: IMUL ESI,EBP,0x28
// 005149ad: LEA EDI,[ESP + 0x5b0]
// 005149b4: ADD ESI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 005149ba: PUSH EDI
// 005149bb: SUB ECX,ECX
// 005149bd: DEC ECX
// 005149be: MOV AL,0x0
// 005149c0: SCASB.REPNE ES:EDI
// 005149c2: DEC EDI
// 005149c3: MOV AL,byte ptr [ESI]
//   Label: LAB_005149c3
//   XREF to: 02f292f0 (DATA)
//   XREF to: 02f292f2 (DATA)
// 005149c5: MOV byte ptr [EDI],AL
// 005149c7: CMP AL,0x0
// 005149c9: JZ 0x005149db
//   XREF to: 005149db (CONDITIONAL_JUMP)
// 005149cb: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 02f292f1 (DATA)
//   XREF to: 02f292f3 (DATA)
// 005149ce: ADD ESI,0x2
// 005149d1: MOV byte ptr [EDI + 0x1],AL
// 005149d4: ADD EDI,0x2
// 005149d7: CMP AL,0x0
// 005149d9: JNZ 0x005149c3
//   XREF to: 005149c3 (CONDITIONAL_JUMP)
// 005149db: POP EDI
//   Label: LAB_005149db
// 005149dc: LEA EAX,[ESP + 0x5b0]
// 005149e3: PUSH EAX
// 005149e4: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005149ea: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 005149eb: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 005149f0: ADD ESP,0x8
// 005149f3: PUSH 0x1
// 005149f5: MOV ESI,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005149fb: PUSH ESI
//   XREF to: 02dcd7d4 (DATA)
// 005149fc: CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0
//   XREF to: 005024b0 (UNCONDITIONAL_CALL)
// 00514a01: ADD ESP,0x8
// 00514a04: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   Label: LAB_00514a04
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00514a09: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00514a0e: CMP dword ptr [EAX + 0xbc],0x2
//   XREF to: 02d81b58 (READ)
// 00514a15: JZ 0x00514ac3
//   XREF to: 00514ac3 (CONDITIONAL_JUMP)
// 00514a1b: MOV ESI,0xffffffff
//   Label: LAB_00514a1b
// 00514a20: XOR EBX,EBX
// 00514a22: PUSH EBX
//   Label: LAB_00514a22
// 00514a23: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00514a28: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00514a29: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00514a2b: CALL dword ptr [EDI]
// 00514a2d: ADD ESP,0x8
// 00514a30: TEST EAX,EAX
// 00514a32: JZ 0x00514a3a
//   XREF to: 00514a3a (CONDITIONAL_JUMP)
// 00514a34: TEST ESI,ESI
// 00514a36: JGE 0x00514a04
//   XREF to: 00514a04 (CONDITIONAL_JUMP)
// 00514a38: MOV ESI,EBX
// 00514a3a: INC EBX
//   Label: LAB_00514a3a
// 00514a3b: CMP EBX,0x258
// 00514a41: JL 0x00514a22
//   XREF to: 00514a22 (CONDITIONAL_JUMP)
// 00514a43: TEST ESI,ESI
// 00514a45: JL 0x00514a04
//   XREF to: 00514a04 (CONDITIONAL_JUMP)
// 00514a47: MOV EAX,dword ptr [EBP*0x4 + 0x2f29274]
//   XREF to: 02f29274 (DATA)
// 00514a4e: PUSH 0x637155
//   XREF to: 00637155 (DATA)
// 00514a53: MOV dword ptr [EAX],ESI
// 00514a55: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514a5a: ADD ESP,0x4
// 00514a5d: PUSH EAX
// 00514a5e: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00514a63: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 00514a64: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00514a69: ADD ESP,0x8
// 00514a6c: MOV EAX,[0x0067b654]
//   Label: LAB_00514a6c
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00514a71: CMP dword ptr [EAX + 0xbc],0x2
//   XREF to: 02d81b58 (READ)
// 00514a78: JZ 0x00514ad1
//   XREF to: 00514ad1 (CONDITIONAL_JUMP)
// 00514a7a: MOV EDI,0xffffffff
//   Label: LAB_00514a7a
// 00514a7f: XOR EBX,EBX
// 00514a81: PUSH EBX
//   Label: LAB_00514a81
// 00514a82: MOV ESI,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00514a88: PUSH ESI
//   XREF to: 02dcd7d4 (DATA)
// 00514a89: MOV EAX,dword ptr [ESI]
//   XREF to: 02dcd7d4 (READ)
// 00514a8b: CALL dword ptr [EAX]
// 00514a8d: ADD ESP,0x8
// 00514a90: TEST EAX,EAX
// 00514a92: JZ 0x00514adc
//   XREF to: 00514adc (CONDITIONAL_JUMP)
// 00514a94: TEST EDI,EDI
// 00514a96: JL 0x00514b24
//   XREF to: 00514b24 (CONDITIONAL_JUMP)
// 00514a9c: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   Label: LAB_00514a9c
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00514aa1: JMP 0x00514a6c
//   XREF to: 00514a6c (UNCONDITIONAL_JUMP)
// 00514aa3: MOV ESI,EBX
//   Label: LAB_00514aa3
// 00514aa5: JMP 0x00514955
//   XREF to: 00514955 (UNCONDITIONAL_JUMP)
// 00514aaa: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   Label: LAB_00514aaa
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00514aaf: PUSH 0x0
// 00514ab1: LEA EAX,[ESP + 0xc]
// 00514ab5: PUSH EAX
// 00514ab6: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00514abb: ADD ESP,0x8
// 00514abe: JMP 0x0051390e
//   XREF to: 0051390e (UNCONDITIONAL_JUMP)
// 00514ac3: PUSH EAX
//   Label: LAB_00514ac3
//   XREF to: 02d81a9c (DATA)
// 00514ac4: CALL core_game.cpp_CGame_resetKeyState_FUN_004dbe60
//   XREF to: 004dbe60 (UNCONDITIONAL_CALL)
// 00514ac9: ADD ESP,0x4
// 00514acc: JMP 0x00514a1b
//   XREF to: 00514a1b (UNCONDITIONAL_JUMP)
// 00514ad1: PUSH EAX
//   Label: LAB_00514ad1
//   XREF to: 02d81a9c (DATA)
// 00514ad2: CALL core_game.cpp_CGame_resetKeyState_FUN_004dbe60
//   XREF to: 004dbe60 (UNCONDITIONAL_CALL)
// 00514ad7: ADD ESP,0x4
// 00514ada: JMP 0x00514a7a
//   XREF to: 00514a7a (UNCONDITIONAL_JUMP)
// 00514adc: INC EBX
//   Label: LAB_00514adc
// 00514add: CMP EBX,0x258
// 00514ae3: JL 0x00514a81
//   XREF to: 00514a81 (CONDITIONAL_JUMP)
// 00514ae5: CMP EDI,-0x1
// 00514ae8: JNZ 0x00514a9c
//   XREF to: 00514a9c (CONDITIONAL_JUMP)
// 00514aea: MOV ECX,dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ)
// 00514af0: XOR EAX,EAX
// 00514af2: TEST ECX,ECX
// 00514af4: JLE 0x00514b11
//   XREF to: 00514b11 (CONDITIONAL_JUMP)
// 00514af6: LEA ECX,[EBP*0x4 + 0x0]
// 00514afd: XOR EBX,EBX
// 00514aff: CMP EAX,EBP
//   Label: LAB_00514aff
// 00514b01: JNZ 0x00514b28
//   XREF to: 00514b28 (CONDITIONAL_JUMP)
// 00514b03: MOV ESI,dword ptr [0x02f29270]
//   Label: LAB_00514b03
//   XREF to: 02f29270 (READ)
// 00514b09: INC EAX
// 00514b0a: ADD EBX,0x4
// 00514b0d: CMP EAX,ESI
// 00514b0f: JL 0x00514aff
//   XREF to: 00514aff (CONDITIONAL_JUMP)
// 00514b11: PUSH 0x0
//   Label: LAB_00514b11
// 00514b13: MOV EDI,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00514b19: PUSH EDI
//   XREF to: 02dcd7d4 (DATA)
// 00514b1a: CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0
//   XREF to: 005024b0 (UNCONDITIONAL_CALL)
// 00514b1f: JMP 0x00514852
//   XREF to: 00514852 (UNCONDITIONAL_JUMP)
// 00514b24: MOV EDI,EBX
//   Label: LAB_00514b24
// 00514b26: JMP 0x00514adc
//   XREF to: 00514adc (UNCONDITIONAL_JUMP)
// 00514b28: MOV ESI,dword ptr [EBX + 0x2f29274]
//   Label: LAB_00514b28
//   XREF to: 02f29274 (READ)
//   XREF to: 02f29278 (READ)
// 00514b2e: MOV EDX,dword ptr [ECX + 0x2f29274]
//   XREF to: 02f29274 (DATA)
// 00514b34: MOV EDI,dword ptr [ESI]
//   XREF to: 02d81ac4 (READ)
//   XREF to: 02d81ac8 (READ)
// 00514b36: CMP EDI,dword ptr [EDX]
// 00514b38: JNZ 0x00514b03
//   XREF to: 00514b03 (CONDITIONAL_JUMP)
// 00514b3a: MOV dword ptr [ESI],0x257
//   XREF to: 02d81ac4 (WRITE)
//   XREF to: 02d81ac8 (WRITE)
// 00514b40: JMP 0x00514b03
//   XREF to: 00514b03 (UNCONDITIONAL_JUMP)
// 00514b42: MOV dword ptr [ESP + 0xa78],EAX
//   Label: LAB_00514b42
//   XREF to: Stack[-0xc] (WRITE)
// 00514b49: LEA EBP,[EAX + -0x1]
// 00514b4c: MOV EAX,dword ptr [EBP*0x4 + 0x2f29274]
//   XREF to: 02f29274 (DATA)
// 00514b53: MOV EAX,dword ptr [EAX]
// 00514b55: SUB EAX,0x251
// 00514b5a: CMP EAX,0x5
// 00514b5d: JA 0x005148e4
//   XREF to: 005148e4 (CONDITIONAL_JUMP)
// 00514b63: JMP dword ptr [EAX*0x4 + 0x5138c0]
//   Label: switchD
//   XREF to: 005147dc (COMPUTED_JUMP)
//   XREF to: 00514869 (COMPUTED_JUMP)
//   XREF to: 005138c0 (DATA)
// 00514b6a: PUSH 0x0
//   Label: LAB_00514b6a
// 00514b6c: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xa7c] (DATA)
// 00514b70: PUSH EAX
// 00514b71: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00514b76: ADD ESP,0x8
// 00514b79: PUSH 0x637179
//   XREF to: 00637179 (DATA)
// 00514b7e: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514b83: ADD ESP,0x4
// 00514b86: PUSH EAX
// 00514b87: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514b8c: ADD EAX,0x28
//   XREF to: 02d81ac4 (PARAM)
// 00514b8f: PUSH EAX
//   XREF to: 02d81ac4 (DATA)
// 00514b90: CALL core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: 00513720 (UNCONDITIONAL_CALL)
// 00514b95: ADD ESP,0x8
// 00514b98: PUSH 0x637181
//   XREF to: 00637181 (DATA)
// 00514b9d: MOV EBX,EAX
// 00514b9f: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514ba4: ADD ESP,0x4
// 00514ba7: PUSH EAX
// 00514ba8: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514bad: ADD EAX,0x2c
//   XREF to: 02d81ac8 (PARAM)
// 00514bb0: PUSH EAX
//   XREF to: 02d81ac8 (DATA)
// 00514bb1: CALL core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: 00513720 (UNCONDITIONAL_CALL)
// 00514bb6: OR EBX,EAX
// 00514bb8: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00514bbd: MOV EDI,dword ptr [EAX + 0x98]
//   XREF to: 02d81b34 (READ)
// 00514bc3: ADD ESP,0x8
// 00514bc6: TEST EDI,EDI
// 00514bc8: JZ 0x00514f44
//   XREF to: 00514f44 (CONDITIONAL_JUMP)
// 00514bce: PUSH 0x637186
//   XREF to: 00637186 (DATA)
// 00514bd3: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   Label: LAB_00514bd3
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514bd8: ADD ESP,0x4
// 00514bdb: PUSH EAX
// 00514bdc: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514be1: ADD EAX,0x30
//   XREF to: 02d81acc (PARAM)
// 00514be4: PUSH EAX
//   XREF to: 02d81acc (DATA)
// 00514be5: CALL core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: 00513720 (UNCONDITIONAL_CALL)
// 00514bea: ADD ESP,0x8
// 00514bed: OR EBX,EAX
// 00514bef: PUSH 0x63718f
//   XREF to: 0063718f (DATA)
// 00514bf4: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514bf9: ADD ESP,0x4
// 00514bfc: PUSH EAX
// 00514bfd: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514c02: ADD EAX,0x34
//   XREF to: 02d81ad0 (PARAM)
// 00514c05: PUSH EAX
//   XREF to: 02d81ad0 (DATA)
// 00514c06: CALL core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: 00513720 (UNCONDITIONAL_CALL)
// 00514c0b: ADD ESP,0x8
// 00514c0e: PUSH 0x637199
//   XREF to: 00637199 (DATA)
// 00514c13: OR EBX,EAX
// 00514c15: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514c1a: ADD ESP,0x4
// 00514c1d: PUSH EAX
// 00514c1e: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514c23: ADD EAX,0x38
//   XREF to: 02d81ad4 (PARAM)
// 00514c26: PUSH EAX
//   XREF to: 02d81ad4 (DATA)
// 00514c27: CALL core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: 00513720 (UNCONDITIONAL_CALL)
// 00514c2c: ADD ESP,0x8
// 00514c2f: PUSH 0x6371a5
//   XREF to: 006371a5 (DATA)
// 00514c34: OR EBX,EAX
// 00514c36: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514c3b: ADD ESP,0x4
// 00514c3e: PUSH EAX
// 00514c3f: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514c44: ADD EAX,0x3c
//   XREF to: 02d81ad8 (PARAM)
// 00514c47: PUSH EAX
//   XREF to: 02d81ad8 (DATA)
// 00514c48: CALL core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: 00513720 (UNCONDITIONAL_CALL)
// 00514c4d: ADD ESP,0x8
// 00514c50: PUSH 0x6371b2
//   XREF to: 006371b2 (DATA)
// 00514c55: OR EBX,EAX
// 00514c57: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514c5c: ADD ESP,0x4
// 00514c5f: PUSH EAX
// 00514c60: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514c65: ADD EAX,0x44
//   XREF to: 02d81ae0 (PARAM)
// 00514c68: PUSH EAX
//   XREF to: 02d81ae0 (DATA)
// 00514c69: CALL core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: 00513720 (UNCONDITIONAL_CALL)
// 00514c6e: ADD ESP,0x8
// 00514c71: PUSH 0x6371bc
//   XREF to: 006371bc (DATA)
// 00514c76: OR EBX,EAX
// 00514c78: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514c7d: ADD ESP,0x4
// 00514c80: PUSH EAX
// 00514c81: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514c86: ADD EAX,0x40
//   XREF to: 02d81adc (PARAM)
// 00514c89: PUSH EAX
//   XREF to: 02d81adc (DATA)
// 00514c8a: CALL core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: 00513720 (UNCONDITIONAL_CALL)
// 00514c8f: ADD ESP,0x8
// 00514c92: PUSH 0x6371c7
//   XREF to: 006371c7 (DATA)
// 00514c97: OR EBX,EAX
// 00514c99: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514c9e: ADD ESP,0x4
// 00514ca1: PUSH EAX
// 00514ca2: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514ca7: ADD EAX,0x48
//   XREF to: 02d81ae4 (PARAM)
// 00514caa: PUSH EAX
//   XREF to: 02d81ae4 (DATA)
// 00514cab: CALL core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: 00513720 (UNCONDITIONAL_CALL)
// 00514cb0: ADD ESP,0x8
// 00514cb3: OR EBX,EAX
// 00514cb5: POP ESI
// 00514cb6: POP EDI
// 00514cb7: PUSH 0x6371d5
//   XREF to: 006371d5 (DATA)
// 00514cbc: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514cc1: ADD ESP,0x4
// 00514cc4: PUSH EAX
// 00514cc5: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514cca: ADD EAX,0x4c
//   XREF to: 02d81ae8 (PARAM)
// 00514ccd: PUSH EAX
//   XREF to: 02d81ae8 (DATA)
// 00514cce: CALL core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: 00513720 (UNCONDITIONAL_CALL)
// 00514cd3: ADD ESP,0x8
// 00514cd6: PUSH 0x6371de
//   XREF to: 006371de (DATA)
// 00514cdb: OR EBX,EAX
// 00514cdd: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514ce2: ADD ESP,0x4
// 00514ce5: PUSH EAX
// 00514ce6: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514ceb: ADD EAX,0x50
//   XREF to: 02d81aec (PARAM)
// 00514cee: PUSH EAX
//   XREF to: 02d81aec (DATA)
// 00514cef: CALL core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: 00513720 (UNCONDITIONAL_CALL)
// 00514cf4: ADD ESP,0x8
// 00514cf7: PUSH 0x6371e4
//   XREF to: 006371e4 (DATA)
// 00514cfc: OR EBX,EAX
// 00514cfe: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514d03: ADD ESP,0x4
// 00514d06: PUSH EAX
// 00514d07: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514d0c: ADD EAX,0x54
//   XREF to: 02d81af0 (PARAM)
// 00514d0f: PUSH EAX
//   XREF to: 02d81af0 (DATA)
// 00514d10: CALL core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: 00513720 (UNCONDITIONAL_CALL)
// 00514d15: ADD ESP,0x8
// 00514d18: PUSH 0x6371f1
//   XREF to: 006371f1 (DATA)
// 00514d1d: OR EBX,EAX
// 00514d1f: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514d24: ADD ESP,0x4
// 00514d27: PUSH EAX
// 00514d28: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514d2d: ADD EAX,0x58
//   XREF to: 02d81af4 (PARAM)
// 00514d30: PUSH EAX
//   XREF to: 02d81af4 (DATA)
// 00514d31: CALL core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: 00513720 (UNCONDITIONAL_CALL)
// 00514d36: ADD ESP,0x8
// 00514d39: PUSH 0x6371f6
//   XREF to: 006371f6 (DATA)
// 00514d3e: OR EBX,EAX
// 00514d40: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514d45: ADD ESP,0x4
// 00514d48: PUSH EAX
// 00514d49: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514d4e: ADD EAX,0x60
//   XREF to: 02d81afc (PARAM)
// 00514d51: PUSH EAX
//   XREF to: 02d81afc (DATA)
// 00514d52: CALL core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: 00513720 (UNCONDITIONAL_CALL)
// 00514d57: ADD ESP,0x8
// 00514d5a: PUSH 0x6371ff
//   XREF to: 006371ff (DATA)
// 00514d5f: OR EBX,EAX
// 00514d61: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514d66: ADD ESP,0x4
// 00514d69: PUSH EAX
// 00514d6a: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514d6f: ADD EAX,0x64
//   XREF to: 02d81b00 (PARAM)
// 00514d72: PUSH EAX
//   XREF to: 02d81b00 (DATA)
// 00514d73: CALL core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: 00513720 (UNCONDITIONAL_CALL)
// 00514d78: ADD ESP,0x8
// 00514d7b: OR EBX,EAX
// 00514d7d: PUSH 0x63720a
//   XREF to: 0063720a (DATA)
// 00514d82: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514d87: ADD ESP,0x4
// 00514d8a: PUSH EAX
// 00514d8b: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514d90: ADD EAX,0x5c
//   XREF to: 02d81af8 (PARAM)
// 00514d93: PUSH EAX
//   XREF to: 02d81af8 (DATA)
// 00514d94: CALL core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: 00513720 (UNCONDITIONAL_CALL)
// 00514d99: ADD ESP,0x8
// 00514d9c: PUSH 0x63720f
//   XREF to: 0063720f (DATA)
// 00514da1: OR EBX,EAX
// 00514da3: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514da8: ADD ESP,0x4
// 00514dab: PUSH EAX
// 00514dac: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514db1: ADD EAX,0x68
//   XREF to: 02d81b04 (PARAM)
// 00514db4: PUSH EAX
//   XREF to: 02d81b04 (DATA)
// 00514db5: CALL core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: 00513720 (UNCONDITIONAL_CALL)
// 00514dba: ADD ESP,0x8
// 00514dbd: PUSH 0x637225
//   XREF to: 00637225 (DATA)
// 00514dc2: OR EBX,EAX
// 00514dc4: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514dc9: ADD ESP,0x4
// 00514dcc: PUSH EAX
// 00514dcd: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514dd2: ADD EAX,0x6c
//   XREF to: 02d81b08 (PARAM)
// 00514dd5: PUSH EAX
//   XREF to: 02d81b08 (DATA)
// 00514dd6: CALL core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: 00513720 (UNCONDITIONAL_CALL)
// 00514ddb: ADD ESP,0x8
// 00514dde: PUSH 0x63723c
//   XREF to: 0063723c (DATA)
// 00514de3: OR EBX,EAX
// 00514de5: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514dea: ADD ESP,0x4
// 00514ded: PUSH EAX
// 00514dee: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514df3: ADD EAX,0x70
//   XREF to: 02d81b0c (PARAM)
// 00514df6: PUSH EAX
//   XREF to: 02d81b0c (DATA)
// 00514df7: CALL core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: 00513720 (UNCONDITIONAL_CALL)
// 00514dfc: ADD ESP,0x8
// 00514dff: PUSH 0x637251
//   XREF to: 00637251 (DATA)
// 00514e04: OR EBX,EAX
// 00514e06: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514e0b: ADD ESP,0x4
// 00514e0e: PUSH EAX
// 00514e0f: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514e14: ADD EAX,0x74
//   XREF to: 02d81b10 (PARAM)
// 00514e17: PUSH EAX
//   XREF to: 02d81b10 (DATA)
// 00514e18: CALL core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: 00513720 (UNCONDITIONAL_CALL)
// 00514e1d: ADD ESP,0x8
// 00514e20: PUSH 0x637268
//   XREF to: 00637268 (DATA)
// 00514e25: OR EBX,EAX
// 00514e27: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514e2c: ADD ESP,0x4
// 00514e2f: PUSH EAX
// 00514e30: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514e35: ADD EAX,0x78
//   XREF to: 02d81b14 (PARAM)
// 00514e38: PUSH EAX
//   XREF to: 02d81b14 (DATA)
// 00514e39: CALL core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: 00513720 (UNCONDITIONAL_CALL)
// 00514e3e: ADD ESP,0x8
// 00514e41: OR EBX,EAX
// 00514e43: PUSH 0x63727d
//   XREF to: 0063727d (DATA)
// 00514e48: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514e4d: ADD ESP,0x4
// 00514e50: PUSH EAX
// 00514e51: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514e56: ADD EAX,0x7c
//   XREF to: 02d81b18 (PARAM)
// 00514e59: PUSH EAX
//   XREF to: 02d81b18 (DATA)
// 00514e5a: CALL core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: 00513720 (UNCONDITIONAL_CALL)
// 00514e5f: ADD ESP,0x8
// 00514e62: PUSH 0x637289
//   XREF to: 00637289 (DATA)
// 00514e67: OR EBX,EAX
// 00514e69: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514e6e: ADD ESP,0x4
// 00514e71: PUSH EAX
// 00514e72: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514e77: ADD EAX,0x80
//   XREF to: 02d81b1c (PARAM)
// 00514e7c: PUSH EAX
//   XREF to: 02d81b1c (DATA)
// 00514e7d: CALL core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: 00513720 (UNCONDITIONAL_CALL)
// 00514e82: ADD ESP,0x8
// 00514e85: PUSH 0x637299
//   XREF to: 00637299 (DATA)
// 00514e8a: OR EBX,EAX
// 00514e8c: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514e91: ADD ESP,0x4
// 00514e94: PUSH EAX
// 00514e95: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514e9a: ADD EAX,0x84
//   XREF to: 02d81b20 (PARAM)
// 00514e9f: PUSH EAX
//   XREF to: 02d81b20 (DATA)
// 00514ea0: CALL core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: 00513720 (UNCONDITIONAL_CALL)
// 00514ea5: ADD ESP,0x8
// 00514ea8: PUSH 0x6372a3
//   XREF to: 006372a3 (DATA)
// 00514ead: OR EBX,EAX
// 00514eaf: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514eb4: ADD ESP,0x4
// 00514eb7: PUSH EAX
// 00514eb8: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514ebd: ADD EAX,0x88
//   XREF to: 02d81b24 (PARAM)
// 00514ec2: PUSH EAX
//   XREF to: 02d81b24 (DATA)
// 00514ec3: CALL core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: 00513720 (UNCONDITIONAL_CALL)
// 00514ec8: ADD ESP,0x8
// 00514ecb: PUSH 0x6372b1
//   XREF to: 006372b1 (DATA)
// 00514ed0: OR EBX,EAX
// 00514ed2: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514ed7: ADD ESP,0x4
// 00514eda: PUSH EAX
// 00514edb: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514ee0: ADD EAX,0x8c
//   XREF to: 02d81b28 (PARAM)
// 00514ee5: PUSH EAX
//   XREF to: 02d81b28 (DATA)
// 00514ee6: CALL core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: 00513720 (UNCONDITIONAL_CALL)
// 00514eeb: ADD ESP,0x8
// 00514eee: PUSH 0x6372c2
//   XREF to: 006372c2 (DATA)
// 00514ef3: OR EBX,EAX
// 00514ef5: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00514efa: ADD ESP,0x4
// 00514efd: PUSH EAX
// 00514efe: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514f03: ADD EAX,0x90
//   XREF to: 02d81b2c (PARAM)
// 00514f08: PUSH EAX
//   XREF to: 02d81b2c (DATA)
// 00514f09: CALL core_menu.cpp_ValidateCustomKey_FUN_00513720
//   XREF to: 00513720 (UNCONDITIONAL_CALL)
// 00514f0e: ADD ESP,0x8
// 00514f11: OR EBX,EAX
// 00514f13: JZ 0x005147c9
//   XREF to: 005147c9 (CONDITIONAL_JUMP)
// 00514f19: MOV EBP,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00514f1f: PUSH EBP
//   XREF to: 02d81a9c (DATA)
// 00514f20: CALL core_game.cpp_CGame_restoreDefaultControls_FUN_004dbbc0
//   XREF to: 004dbbc0 (UNCONDITIONAL_CALL)
// 00514f25: ADD ESP,0x4
// 00514f28: PUSH 0x6372cc
//   XREF to: 006372cc (DATA)
// 00514f2d: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00514f32: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 00514f33: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00514f38: ADD ESP,0x8
// 00514f3b: ADD ESP,0xa74
// 00514f41: POP EBP
// 00514f42: POP EBX
// 00514f43: RET
// 00514f44: PUSH 0x63718b
//   Label: LAB_00514f44
//   XREF to: 0063718b (DATA)
// 00514f49: JMP 0x00514bd3
//   XREF to: 00514bd3 (UNCONDITIONAL_JUMP)
