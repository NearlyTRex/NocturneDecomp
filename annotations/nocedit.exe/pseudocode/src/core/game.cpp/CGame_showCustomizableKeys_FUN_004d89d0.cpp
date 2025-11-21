// Name: core_game.cpp_CGame_showCustomizableKeys_FUN_004d89d0
// Address: 004d89d0
// Address Range: [[004d89d0, 004da0f9]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_showCustomizableKeys_FUN_004d89d0(CGame * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004daab2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_s_0062b28d
//   TerminatedCString s_Quick_help_0062b295
//   TerminatedCString s_F1_Toggle_help_0062b2a0
//   TerminatedCString s_F2_Save_game_0062b2b1
//   TerminatedCString s_F3_Restore_game_0062b2c0
//   TerminatedCString s_F5_Toggle_mute_0062b2d2
//   TerminatedCString s_F6_Quick_save_0062b2e3
//   TerminatedCString s_F9_Quick_load_0062b2f3
//   TerminatedCString s_ESC_Pause_game_0062b303
//   TerminatedCString s_Forward_0062b314
//   TerminatedCString s_Back_0062b31c
//   TerminatedCString s_Walk_0062b321
//   TerminatedCString s_Run_0062b326
//   TerminatedCString s_Strafe_on_0062b32a
//   TerminatedCString s_Strafe_left_0062b334
//   TerminatedCString s_Strafe_right_0062b340
//   TerminatedCString s_Turn_left_0062b34d
//   TerminatedCString s_Turn_right_0062b357
//   TerminatedCString s_Fire_Action_0062b362
//   TerminatedCString s_Use_item_0062b370
//   TerminatedCString s_Light_0062b379
//   TerminatedCString s_Night_Vision_0062b37f
//   TerminatedCString s_Draw_0062b38c
//   TerminatedCString s_Point_up_0062b391
//   TerminatedCString s_Point_down_0062b39a
//   TerminatedCString s_Jump_0062b3a5
//   TerminatedCString s_Cycle_pistol_weapons_0062b3aa
//   TerminatedCString s_Cycle_assault_weapons_0062b3bf
//   TerminatedCString s_Cycle_flame_weapons_0062b3d5
//   TerminatedCString s_Cycle_grenade_weapons_0062b3e9
//   TerminatedCString s_Cycle_melee_weapons_0062b3ff
//   TerminatedCString s_Next_weapon_0062b413
//   TerminatedCString s_Previous_weapon_0062b41f
//   TerminatedCString s_Next_item_0062b42f
//   TerminatedCString s_Previous_item_0062b439
//   TerminatedCString s_Item_description_0062b447
//   TerminatedCString s_Next_ammo_0062b458
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CGame* g_CGamePtr = 02d81a9c
//   CBitFont* g_ThemeFont
//   undefined4 g_CGameInstance.always_run
//   undefined4 DAT_02d831c4
//   undefined4 DAT_02d831c8
//   undefined4 DAT_02d831cc
//   undefined4 DAT_02d831d0
// Function calls:
//   core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_3d.c_setRenderAlpha_FUN_00406d80
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_showCustomizableKeys_FUN_004d89d0(CGame *this_ptr)

{
  char *pcVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char acStack_19fc [4];
  char acStack_19f8 [108];
  char acStack_198c [4];
  char acStack_1988 [460];
  char acStack_17bc [4];
  char acStack_17b8 [12];
  char acStack_17ac [4];
  char acStack_17a8 [620];
  char acStack_153c [4];
  char acStack_1538 [108];
  char acStack_14cc [4];
  char acStack_14c8 [364];
  char acStack_135c [4];
  char acStack_1358 [108];
  char acStack_12ec [4];
  char acStack_12e8 [108];
  char acStack_127c [4];
  char acStack_1278 [460];
  char acStack_10ac [4];
  char acStack_10a8 [12];
  char acStack_109c [4];
  char acStack_1098 [620];
  char acStack_e2c [4];
  char acStack_e28 [108];
  char acStack_dbc [4];
  char acStack_db8 [364];
  char acStack_c4c [4];
  char acStack_c48 [108];
  char acStack_bdc [4];
  char acStack_bd8 [108];
  char acStack_b6c [4];
  char acStack_b68 [476];
  char acStack_98c [4];
  char acStack_988 [108];
  char acStack_91c [4];
  char acStack_918 [124];
  char acStack_89c [4];
  char acStack_898 [348];
  char acStack_73c [4];
  char acStack_738 [236];
  char acStack_64c [4];
  char acStack_648 [172];
  char acStack_59c [4];
  char acStack_598 [316];
  char acStack_45c [4];
  char acStack_458 [476];
  char acStack_27c [4];
  char acStack_278 [108];
  char acStack_20c [4];
  char acStack_208 [220];
  char acStack_12c [4];
  char acStack_128 [280];
  
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  DAT_02d831cc = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_ThemeFont,0x58);
  _DAT_02d831d0 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01a0(g_ThemeFont,0x58);
  DAT_02d831c8 = DAT_02d831cc << 2;
  DAT_02d831c4 = _DAT_02d831d0 << 2;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Quick help");
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,pcVar1,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("F1 = Toggle help");
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,pcVar1,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("F2 = Save game");
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,pcVar1,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("F3 = Restore game");
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,pcVar1,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("F5 = Toggle mute");
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,pcVar1,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("F6 = Quick save");
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,pcVar1,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("F9 = Quick load");
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,pcVar1,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("ESC = Pause game");
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,pcVar1,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("Forward");
  pcVar1 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_walk);
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_17bc,"%s = %s",pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,acStack_17b8,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("Back");
  pcVar1 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_backup);
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_10ac,"%s = %s",pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,acStack_10a8,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  if (g_CGamePtr->always_run == 0) {
    support_newmsg_cpp_getLocalizedString_FUN_005441f0("Run");
    pcVar1 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_run);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_59c,"%s = %s",pcVar1);
    engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
              (g_ThemeFont,acStack_598,DAT_02d831c4,DAT_02d831c8,7,-1);
    DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
    iVar2 = g_WindowHeight + DAT_02d831cc * -4;
  }
  else {
    support_newmsg_cpp_getLocalizedString_FUN_005441f0("Walk");
    pcVar1 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_run);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_89c,"%s = %s",pcVar1);
    engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
              (g_ThemeFont,acStack_898,DAT_02d831c4,DAT_02d831c8,7,-1);
    DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
    iVar2 = g_WindowHeight + DAT_02d831cc * -4;
  }
  if (iVar2 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("Strafe on");
  pcVar1 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_strafe);
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_198c,"%s = %s",pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,acStack_1988,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("Strafe left");
  pcVar1 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_strafe_left);
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_127c,"%s = %s",pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,acStack_1278,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("Strafe right");
  pcVar1 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_strafe_right);
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_b6c,"%s = %s",pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,acStack_b68,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("Turn left");
  pcVar1 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_left);
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_45c,"%s = %s",pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,acStack_458,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("Turn right");
  pcVar1 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_right);
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_64c,"%s = %s",pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,acStack_648,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("Fire / Action");
  pcVar1 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_fire);
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_73c,"%s = %s",pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,acStack_738,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("Use item");
  pcVar1 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_use_item);
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_12c,"%s = %s",pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,acStack_128,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("Light");
  pcVar1 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_light);
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_91c,"%s = %s",pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,acStack_918,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("Night Vision");
  pcVar1 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_infrared);
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_20c,"%s = %s",pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,acStack_208,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("Draw");
  pcVar1 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_draw);
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_19fc,"%s = %s",pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,acStack_19f8,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("Point up");
  pcVar1 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_point_up);
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_12ec,"%s = %s",pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,acStack_12e8,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("Point down");
  pcVar1 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_point_down);
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_bdc,"%s = %s",pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,acStack_bd8,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("Jump");
  pcVar1 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_jump);
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_14cc,"%s = %s",pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,acStack_14c8,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("Cycle pistol weapons");
  pcVar1 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_weapon_1);
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_dbc,"%s = %s",pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,acStack_db8,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("Cycle assault weapons");
  pcVar1 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_weapon_2);
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_17ac,"%s = %s",pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,acStack_17a8,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("Cycle flame weapons");
  pcVar1 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_weapon_3);
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_109c,"%s = %s",pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,acStack_1098,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("Cycle grenade weapons");
  pcVar1 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_weapon_4);
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_98c,"%s = %s",pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,acStack_988,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("Cycle melee weapons");
  pcVar1 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_weapon_5);
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_27c,"%s = %s",pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,acStack_278,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("Next weapon");
  pcVar1 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_next_weapon);
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffe594,"%s = %s",pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,&stack0xffffe598,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("Previous weapon");
  core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_prev_weapon);
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_135c,"%s = %s");
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,acStack_1358,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("Next item");
  core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_next_item);
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_c4c,"%s = %s");
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,acStack_c48,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("Previous item");
  core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_prev_item);
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_153c,"%s = %s");
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,acStack_1538,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("Item description");
  core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_item_desc);
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_e2c,"%s = %s");
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,acStack_e28,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (g_WindowHeight + DAT_02d831cc * -4 < DAT_02d831c8) {
    DAT_02d831c8 = DAT_02d831cc * 6;
    DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_005441f0("Next ammo");
  core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_next_ammo);
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0x000000e4,"%s = %s");
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,&stack0x000000e8,DAT_02d831c4,DAT_02d831c8,7,-1);
  DAT_02d831c8 = DAT_02d831c8 + DAT_02d831cc;
  if (DAT_02d831c8 <= g_WindowHeight + DAT_02d831cc * -4) {
    return;
  }
  DAT_02d831c8 = DAT_02d831cc * 6;
  DAT_02d831c4 = DAT_02d831c4 + g_WindowWidth / 3;
  return;
}


// Assembly code:
// 004d89d0: PUSH EBX
//   Label: core_game.cpp_CGame_showCustomizableKeys_FUN_004d89d0
// 004d89d1: PUSH ESI
// 004d89d2: PUSH EDI
// 004d89d3: PUSH EBP
// 004d89d4: SUB ESP,0x1c00
// 004d89da: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d89e0: MOV ESI,dword ptr [ESP + 0x1c14]
//   XREF to: Stack[0x4] (READ)
// 004d89e7: PUSH 0xffff
// 004d89ec: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 004d89f1: ADD ESP,0x4
// 004d89f4: PUSH 0x58
// 004d89f6: MOV EDX,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d89fc: PUSH EDX
// 004d89fd: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004d8a02: ADD ESP,0x8
// 004d8a05: PUSH 0x58
// 004d8a07: MOV ECX,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d8a0d: PUSH ECX
// 004d8a0e: MOV [0x02d831cc],EAX
//   XREF to: 02d831cc (WRITE)
// 004d8a13: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0
//   XREF to: 004d01a0 (UNCONDITIONAL_CALL)
// 004d8a18: ADD ESP,0x8
// 004d8a1b: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d8a21: MOV [0x02d831d0],EAX
//   XREF to: 02d831d0 (WRITE)
// 004d8a26: PUSH 0x62b295
//   XREF to: 0062b295 (DATA)
// 004d8a2b: SHL EDX,0x2
// 004d8a2e: SHL EAX,0x2
// 004d8a31: MOV dword ptr [0x02d831c8],EDX
//   XREF to: 02d831c8 (WRITE)
// 004d8a37: MOV [0x02d831c4],EAX
//   XREF to: 02d831c4 (WRITE)
// 004d8a3c: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d8a41: ADD ESP,0x4
// 004d8a44: PUSH -0x1
// 004d8a46: PUSH 0x7
// 004d8a48: MOV EDI,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d8a4e: PUSH EDI
// 004d8a4f: MOV EBP,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d8a55: PUSH EBP
// 004d8a56: PUSH EAX
// 004d8a57: MOV EAX,[0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d8a5c: PUSH EAX
// 004d8a5d: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d8a62: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d8a67: ADD dword ptr [0x02d831c8],EAX
//   XREF to: 02d831c8 (READ_WRITE)
// 004d8a6d: SHL EAX,0x2
// 004d8a70: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d8a76: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d8a7c: SUB EDX,EAX
// 004d8a7e: ADD ESP,0x18
// 004d8a81: CMP EDX,ECX
// 004d8a83: JGE 0x004d8ab5
//   XREF to: 004d8ab5 (CONDITIONAL_JUMP)
// 004d8a85: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d8a8b: LEA EAX,[EDX*0x4 + 0x0]
// 004d8a92: MOV ECX,0x3
// 004d8a97: SUB EAX,EDX
// 004d8a99: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d8a9f: ADD EAX,EAX
// 004d8aa1: MOV EDX,EBX
// 004d8aa3: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d8aa8: SAR EDX,0x1f
// 004d8aab: MOV EAX,EBX
// 004d8aad: IDIV ECX
// 004d8aaf: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d8ab5: MOV EAX,[0x02d831cc]
//   Label: LAB_004d8ab5
//   XREF to: 02d831cc (READ)
// 004d8aba: MOV EBP,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d8ac0: ADD EBP,EAX
// 004d8ac2: PUSH 0x62b2a0
//   XREF to: 0062b2a0 (DATA)
// 004d8ac7: MOV dword ptr [0x02d831c8],EBP
//   XREF to: 02d831c8 (WRITE)
// 004d8acd: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d8ad2: ADD ESP,0x4
// 004d8ad5: PUSH -0x1
// 004d8ad7: PUSH 0x7
// 004d8ad9: MOV EDX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d8adf: PUSH EDX
// 004d8ae0: MOV ECX,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d8ae6: PUSH ECX
// 004d8ae7: PUSH EAX
// 004d8ae8: MOV EDI,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d8aee: PUSH EDI
// 004d8aef: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d8af4: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d8af9: MOV EBP,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d8aff: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d8b05: ADD EBP,EAX
// 004d8b07: SHL EAX,0x2
// 004d8b0a: ADD ESP,0x18
// 004d8b0d: SUB EDX,EAX
// 004d8b0f: MOV dword ptr [0x02d831c8],EBP
//   XREF to: 02d831c8 (WRITE)
// 004d8b15: CMP EDX,EBP
// 004d8b17: JGE 0x004d8b49
//   XREF to: 004d8b49 (CONDITIONAL_JUMP)
// 004d8b19: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d8b1f: LEA EAX,[EDX*0x4 + 0x0]
// 004d8b26: MOV ECX,0x3
// 004d8b2b: SUB EAX,EDX
// 004d8b2d: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d8b33: ADD EAX,EAX
// 004d8b35: MOV EDX,EBX
// 004d8b37: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d8b3c: SAR EDX,0x1f
// 004d8b3f: MOV EAX,EBX
// 004d8b41: IDIV ECX
// 004d8b43: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d8b49: PUSH 0x62b2b1
//   Label: LAB_004d8b49
//   XREF to: 0062b2b1 (DATA)
// 004d8b4e: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d8b53: ADD ESP,0x4
// 004d8b56: PUSH -0x1
// 004d8b58: PUSH 0x7
// 004d8b5a: MOV EDI,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d8b60: PUSH EDI
// 004d8b61: MOV EBP,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d8b67: PUSH EBP
// 004d8b68: PUSH EAX
// 004d8b69: MOV EAX,[0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d8b6e: PUSH EAX
// 004d8b6f: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d8b74: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d8b79: ADD dword ptr [0x02d831c8],EAX
//   XREF to: 02d831c8 (READ_WRITE)
// 004d8b7f: SHL EAX,0x2
// 004d8b82: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d8b88: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d8b8e: SUB EDX,EAX
// 004d8b90: ADD ESP,0x18
// 004d8b93: CMP EDX,ECX
// 004d8b95: JGE 0x004d8bc7
//   XREF to: 004d8bc7 (CONDITIONAL_JUMP)
// 004d8b97: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d8b9d: LEA EAX,[EDX*0x4 + 0x0]
// 004d8ba4: MOV ECX,0x3
// 004d8ba9: SUB EAX,EDX
// 004d8bab: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d8bb1: ADD EAX,EAX
// 004d8bb3: MOV EDX,EBX
// 004d8bb5: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d8bba: SAR EDX,0x1f
// 004d8bbd: MOV EAX,EBX
// 004d8bbf: IDIV ECX
// 004d8bc1: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d8bc7: PUSH 0x62b2c0
//   Label: LAB_004d8bc7
//   XREF to: 0062b2c0 (DATA)
// 004d8bcc: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d8bd1: ADD ESP,0x4
// 004d8bd4: PUSH -0x1
// 004d8bd6: PUSH 0x7
// 004d8bd8: MOV EBP,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d8bde: PUSH EBP
// 004d8bdf: MOV EDX,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d8be5: PUSH EDX
// 004d8be6: PUSH EAX
// 004d8be7: MOV ECX,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d8bed: PUSH ECX
// 004d8bee: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d8bf3: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d8bf8: MOV EDI,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d8bfe: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d8c04: ADD EDI,EAX
// 004d8c06: SHL EAX,0x2
// 004d8c09: ADD ESP,0x18
// 004d8c0c: SUB EDX,EAX
// 004d8c0e: MOV dword ptr [0x02d831c8],EDI
//   XREF to: 02d831c8 (WRITE)
// 004d8c14: CMP EDX,EDI
// 004d8c16: JGE 0x004d8c48
//   XREF to: 004d8c48 (CONDITIONAL_JUMP)
// 004d8c18: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d8c1e: LEA EAX,[EDX*0x4 + 0x0]
// 004d8c25: MOV ECX,0x3
// 004d8c2a: SUB EAX,EDX
// 004d8c2c: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d8c32: ADD EAX,EAX
// 004d8c34: MOV EDX,EBX
// 004d8c36: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d8c3b: SAR EDX,0x1f
// 004d8c3e: MOV EAX,EBX
// 004d8c40: IDIV ECX
// 004d8c42: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d8c48: PUSH 0x62b2d2
//   Label: LAB_004d8c48
//   XREF to: 0062b2d2 (DATA)
// 004d8c4d: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d8c52: ADD ESP,0x4
// 004d8c55: PUSH -0x1
// 004d8c57: PUSH 0x7
// 004d8c59: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d8c5f: PUSH ECX
// 004d8c60: MOV EDI,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d8c66: PUSH EDI
// 004d8c67: PUSH EAX
// 004d8c68: MOV EBP,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d8c6e: PUSH EBP
// 004d8c6f: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d8c74: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d8c79: ADD dword ptr [0x02d831c8],EAX
//   XREF to: 02d831c8 (READ_WRITE)
// 004d8c7f: SHL EAX,0x2
// 004d8c82: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d8c88: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d8c8e: SUB EDX,EAX
// 004d8c90: ADD ESP,0x18
// 004d8c93: CMP EDX,ECX
// 004d8c95: JGE 0x004d8cc7
//   XREF to: 004d8cc7 (CONDITIONAL_JUMP)
// 004d8c97: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d8c9d: LEA EAX,[EDX*0x4 + 0x0]
// 004d8ca4: MOV ECX,0x3
// 004d8ca9: SUB EAX,EDX
// 004d8cab: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d8cb1: ADD EAX,EAX
// 004d8cb3: MOV EDX,EBX
// 004d8cb5: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d8cba: SAR EDX,0x1f
// 004d8cbd: MOV EAX,EBX
// 004d8cbf: IDIV ECX
// 004d8cc1: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d8cc7: PUSH 0x62b2e3
//   Label: LAB_004d8cc7
//   XREF to: 0062b2e3 (DATA)
// 004d8ccc: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d8cd1: ADD ESP,0x4
// 004d8cd4: PUSH -0x1
// 004d8cd6: PUSH 0x7
// 004d8cd8: MOV EBP,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d8cde: PUSH EBP
// 004d8cdf: MOV EDX,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d8ce5: PUSH EDX
// 004d8ce6: PUSH EAX
// 004d8ce7: MOV ECX,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d8ced: PUSH ECX
// 004d8cee: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d8cf3: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d8cf8: MOV EDI,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d8cfe: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d8d04: ADD EDI,EAX
// 004d8d06: SHL EAX,0x2
// 004d8d09: ADD ESP,0x18
// 004d8d0c: SUB EDX,EAX
// 004d8d0e: MOV dword ptr [0x02d831c8],EDI
//   XREF to: 02d831c8 (WRITE)
// 004d8d14: CMP EDX,EDI
// 004d8d16: JGE 0x004d8d48
//   XREF to: 004d8d48 (CONDITIONAL_JUMP)
// 004d8d18: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d8d1e: LEA EAX,[EDX*0x4 + 0x0]
// 004d8d25: MOV ECX,0x3
// 004d8d2a: SUB EAX,EDX
// 004d8d2c: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d8d32: ADD EAX,EAX
// 004d8d34: MOV EDX,EBX
// 004d8d36: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d8d3b: SAR EDX,0x1f
// 004d8d3e: MOV EAX,EBX
// 004d8d40: IDIV ECX
// 004d8d42: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d8d48: PUSH 0x62b2f3
//   Label: LAB_004d8d48
//   XREF to: 0062b2f3 (DATA)
// 004d8d4d: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d8d52: ADD ESP,0x4
// 004d8d55: PUSH -0x1
// 004d8d57: PUSH 0x7
// 004d8d59: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d8d5f: PUSH ECX
// 004d8d60: MOV EDI,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d8d66: PUSH EDI
// 004d8d67: PUSH EAX
// 004d8d68: MOV EBP,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d8d6e: PUSH EBP
// 004d8d6f: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d8d74: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d8d79: ADD dword ptr [0x02d831c8],EAX
//   XREF to: 02d831c8 (READ_WRITE)
// 004d8d7f: SHL EAX,0x2
// 004d8d82: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d8d88: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d8d8e: SUB EDX,EAX
// 004d8d90: ADD ESP,0x18
// 004d8d93: CMP EDX,ECX
// 004d8d95: JGE 0x004d8dc7
//   XREF to: 004d8dc7 (CONDITIONAL_JUMP)
// 004d8d97: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d8d9d: LEA EAX,[EDX*0x4 + 0x0]
// 004d8da4: MOV ECX,0x3
// 004d8da9: SUB EAX,EDX
// 004d8dab: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d8db1: ADD EAX,EAX
// 004d8db3: MOV EDX,EBX
// 004d8db5: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d8dba: SAR EDX,0x1f
// 004d8dbd: MOV EAX,EBX
// 004d8dbf: IDIV ECX
// 004d8dc1: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d8dc7: PUSH 0x62b303
//   Label: LAB_004d8dc7
//   XREF to: 0062b303 (DATA)
// 004d8dcc: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d8dd1: ADD ESP,0x4
// 004d8dd4: PUSH -0x1
// 004d8dd6: PUSH 0x7
// 004d8dd8: MOV EBP,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d8dde: PUSH EBP
// 004d8ddf: MOV EDX,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d8de5: PUSH EDX
// 004d8de6: PUSH EAX
// 004d8de7: MOV ECX,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d8ded: PUSH ECX
// 004d8dee: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d8df3: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d8df8: MOV EDI,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d8dfe: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d8e04: ADD EDI,EAX
// 004d8e06: SHL EAX,0x2
// 004d8e09: ADD ESP,0x18
// 004d8e0c: SUB EDX,EAX
// 004d8e0e: MOV dword ptr [0x02d831c8],EDI
//   XREF to: 02d831c8 (WRITE)
// 004d8e14: CMP EDX,EDI
// 004d8e16: JGE 0x004d8e48
//   XREF to: 004d8e48 (CONDITIONAL_JUMP)
// 004d8e18: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d8e1e: LEA EAX,[EDX*0x4 + 0x0]
// 004d8e25: MOV ECX,0x3
// 004d8e2a: SUB EAX,EDX
// 004d8e2c: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d8e32: ADD EAX,EAX
// 004d8e34: MOV EDX,EBX
// 004d8e36: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d8e3b: SAR EDX,0x1f
// 004d8e3e: MOV EAX,EBX
// 004d8e40: IDIV ECX
// 004d8e42: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d8e48: MOV EAX,[0x02d831cc]
//   Label: LAB_004d8e48
//   XREF to: 02d831cc (READ)
// 004d8e4d: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d8e53: ADD ECX,EAX
// 004d8e55: PUSH 0x62b314
//   XREF to: 0062b314 (DATA)
// 004d8e5a: MOV dword ptr [0x02d831c8],ECX
//   XREF to: 02d831c8 (WRITE)
// 004d8e60: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d8e65: ADD ESP,0x4
// 004d8e68: PUSH EAX
// 004d8e69: MOV EDX,dword ptr [ESI + 0x28]
// 004d8e6c: PUSH EDX
// 004d8e6d: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d8e72: ADD ESP,0x4
// 004d8e75: PUSH EAX
// 004d8e76: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d8e7b: LEA EAX,[ESP + 0x40c]
//   XREF to: Stack[-0x1810] (DATA)
// 004d8e82: PUSH EAX
// 004d8e83: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d8e88: ADD ESP,0x10
// 004d8e8b: PUSH -0x1
// 004d8e8d: PUSH 0x7
// 004d8e8f: MOV EDI,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d8e95: PUSH EDI
// 004d8e96: MOV EBP,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d8e9c: PUSH EBP
// 004d8e9d: LEA EAX,[ESP + 0x410]
//   XREF to: Stack[-0x1810] (DATA)
// 004d8ea4: PUSH EAX
// 004d8ea5: MOV EAX,[0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d8eaa: PUSH EAX
// 004d8eab: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d8eb0: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d8eb5: ADD dword ptr [0x02d831c8],EAX
//   XREF to: 02d831c8 (READ_WRITE)
// 004d8ebb: SHL EAX,0x2
// 004d8ebe: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d8ec4: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d8eca: SUB EDX,EAX
// 004d8ecc: ADD ESP,0x18
// 004d8ecf: CMP EDX,ECX
// 004d8ed1: JGE 0x004d8f03
//   XREF to: 004d8f03 (CONDITIONAL_JUMP)
// 004d8ed3: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d8ed9: LEA EAX,[EDX*0x4 + 0x0]
// 004d8ee0: MOV ECX,0x3
// 004d8ee5: SUB EAX,EDX
// 004d8ee7: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d8eed: ADD EAX,EAX
// 004d8eef: MOV EDX,EBX
// 004d8ef1: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d8ef6: SAR EDX,0x1f
// 004d8ef9: MOV EAX,EBX
// 004d8efb: IDIV ECX
// 004d8efd: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d8f03: PUSH 0x62b31c
//   Label: LAB_004d8f03
//   XREF to: 0062b31c (DATA)
// 004d8f08: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d8f0d: ADD ESP,0x4
// 004d8f10: PUSH EAX
// 004d8f11: MOV EDX,dword ptr [ESI + 0x2c]
// 004d8f14: PUSH EDX
// 004d8f15: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d8f1a: ADD ESP,0x4
// 004d8f1d: PUSH EAX
// 004d8f1e: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d8f23: LEA EAX,[ESP + 0xb0c]
//   XREF to: Stack[-0x1110] (DATA)
// 004d8f2a: PUSH EAX
// 004d8f2b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d8f30: ADD ESP,0x10
// 004d8f33: PUSH -0x1
// 004d8f35: PUSH 0x7
// 004d8f37: MOV EBP,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d8f3d: PUSH EBP
// 004d8f3e: MOV EAX,[0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d8f43: PUSH EAX
// 004d8f44: LEA EAX,[ESP + 0xb10]
//   XREF to: Stack[-0x1110] (DATA)
// 004d8f4b: PUSH EAX
// 004d8f4c: MOV EDX,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d8f52: PUSH EDX
// 004d8f53: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d8f58: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d8f5d: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d8f63: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d8f69: ADD ECX,EAX
// 004d8f6b: SHL EAX,0x2
// 004d8f6e: ADD ESP,0x18
// 004d8f71: SUB EDX,EAX
// 004d8f73: MOV dword ptr [0x02d831c8],ECX
//   XREF to: 02d831c8 (WRITE)
// 004d8f79: CMP EDX,ECX
// 004d8f7b: JGE 0x004d8fad
//   XREF to: 004d8fad (CONDITIONAL_JUMP)
// 004d8f7d: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d8f83: LEA EAX,[EDX*0x4 + 0x0]
// 004d8f8a: MOV ECX,0x3
// 004d8f8f: SUB EAX,EDX
// 004d8f91: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d8f97: ADD EAX,EAX
// 004d8f99: MOV EDX,EBX
// 004d8f9b: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d8fa0: SAR EDX,0x1f
// 004d8fa3: MOV EAX,EBX
// 004d8fa5: IDIV ECX
// 004d8fa7: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d8fad: MOV EAX,[0x0067b654]
//   Label: LAB_004d8fad
//   XREF to: 0067b654 (READ)
// 004d8fb2: CMP dword ptr [EAX + 0x98],0x0
//   XREF to: 02d81b34 (READ)
// 004d8fb9: JZ 0x004da03f
//   XREF to: 004da03f (CONDITIONAL_JUMP)
// 004d8fbf: PUSH 0x62b321
//   XREF to: 0062b321 (DATA)
// 004d8fc4: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d8fc9: ADD ESP,0x4
// 004d8fcc: PUSH EAX
// 004d8fcd: MOV EDX,dword ptr [ESI + 0x30]
// 004d8fd0: PUSH EDX
// 004d8fd1: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d8fd6: ADD ESP,0x4
// 004d8fd9: PUSH EAX
// 004d8fda: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d8fdf: LEA EAX,[ESP + 0x130c]
//   XREF to: Stack[-0x910] (DATA)
// 004d8fe6: PUSH EAX
// 004d8fe7: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d8fec: ADD ESP,0x10
// 004d8fef: PUSH -0x1
// 004d8ff1: PUSH 0x7
// 004d8ff3: MOV EBP,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d8ff9: PUSH EBP
// 004d8ffa: MOV EAX,[0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d8fff: PUSH EAX
// 004d9000: LEA EAX,[ESP + 0x1310]
//   XREF to: Stack[-0x910] (DATA)
// 004d9007: PUSH EAX
// 004d9008: MOV EDX,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d900e: PUSH EDX
// 004d900f: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d9014: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9019: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d901f: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d9025: ADD ECX,EAX
// 004d9027: SHL EAX,0x2
// 004d902a: ADD ESP,0x18
// 004d902d: SUB EDX,EAX
// 004d902f: MOV dword ptr [0x02d831c8],ECX
//   XREF to: 02d831c8 (WRITE)
// 004d9035: CMP EDX,ECX
//   Label: LAB_004d9035
// 004d9037: JGE 0x004d9069
//   XREF to: 004d9069 (CONDITIONAL_JUMP)
// 004d9039: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d903f: LEA EAX,[EDX*0x4 + 0x0]
// 004d9046: MOV ECX,0x3
// 004d904b: SUB EAX,EDX
// 004d904d: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d9053: ADD EAX,EAX
// 004d9055: MOV EDX,EBX
// 004d9057: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d905c: SAR EDX,0x1f
// 004d905f: MOV EAX,EBX
// 004d9061: IDIV ECX
// 004d9063: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d9069: PUSH 0x62b32a
//   Label: LAB_004d9069
//   XREF to: 0062b32a (DATA)
// 004d906e: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d9073: ADD ESP,0x4
// 004d9076: PUSH EAX
// 004d9077: MOV EDX,dword ptr [ESI + 0x34]
// 004d907a: PUSH EDX
// 004d907b: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d9080: ADD ESP,0x4
// 004d9083: PUSH EAX
// 004d9084: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d9089: LEA EAX,[ESP + 0x20c]
//   XREF to: Stack[-0x1a10] (DATA)
// 004d9090: PUSH EAX
// 004d9091: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d9096: ADD ESP,0x10
// 004d9099: PUSH -0x1
// 004d909b: PUSH 0x7
// 004d909d: MOV EAX,[0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d90a2: PUSH EAX
// 004d90a3: MOV EDX,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d90a9: PUSH EDX
// 004d90aa: LEA EAX,[ESP + 0x210]
//   XREF to: Stack[-0x1a10] (DATA)
// 004d90b1: PUSH EAX
// 004d90b2: MOV ECX,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d90b8: PUSH ECX
// 004d90b9: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d90be: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d90c3: MOV EDI,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d90c9: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d90cf: ADD EDI,EAX
// 004d90d1: SHL EAX,0x2
// 004d90d4: ADD ESP,0x18
// 004d90d7: SUB EDX,EAX
// 004d90d9: MOV dword ptr [0x02d831c8],EDI
//   XREF to: 02d831c8 (WRITE)
// 004d90df: CMP EDX,EDI
// 004d90e1: JGE 0x004d9113
//   XREF to: 004d9113 (CONDITIONAL_JUMP)
// 004d90e3: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d90e9: LEA EAX,[EDX*0x4 + 0x0]
// 004d90f0: MOV ECX,0x3
// 004d90f5: SUB EAX,EDX
// 004d90f7: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d90fd: ADD EAX,EAX
// 004d90ff: MOV EDX,EBX
// 004d9101: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d9106: SAR EDX,0x1f
// 004d9109: MOV EAX,EBX
// 004d910b: IDIV ECX
// 004d910d: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d9113: PUSH 0x62b334
//   Label: LAB_004d9113
//   XREF to: 0062b334 (DATA)
// 004d9118: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d911d: ADD ESP,0x4
// 004d9120: PUSH EAX
// 004d9121: MOV EDX,dword ptr [ESI + 0x38]
// 004d9124: PUSH EDX
// 004d9125: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d912a: ADD ESP,0x4
// 004d912d: PUSH EAX
// 004d912e: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d9133: LEA EAX,[ESP + 0x90c]
//   XREF to: Stack[-0x1310] (DATA)
// 004d913a: PUSH EAX
// 004d913b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d9140: ADD ESP,0x10
// 004d9143: PUSH -0x1
// 004d9145: PUSH 0x7
// 004d9147: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d914d: PUSH ECX
// 004d914e: MOV EDI,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d9154: PUSH EDI
// 004d9155: LEA EAX,[ESP + 0x910]
//   XREF to: Stack[-0x1310] (DATA)
// 004d915c: PUSH EAX
// 004d915d: MOV EBP,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d9163: PUSH EBP
// 004d9164: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d9169: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d916e: ADD dword ptr [0x02d831c8],EAX
//   XREF to: 02d831c8 (READ_WRITE)
// 004d9174: SHL EAX,0x2
// 004d9177: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d917d: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9183: SUB EDX,EAX
// 004d9185: ADD ESP,0x18
// 004d9188: CMP EDX,ECX
// 004d918a: JGE 0x004d91bc
//   XREF to: 004d91bc (CONDITIONAL_JUMP)
// 004d918c: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9192: LEA EAX,[EDX*0x4 + 0x0]
// 004d9199: MOV ECX,0x3
// 004d919e: SUB EAX,EDX
// 004d91a0: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d91a6: ADD EAX,EAX
// 004d91a8: MOV EDX,EBX
// 004d91aa: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d91af: SAR EDX,0x1f
// 004d91b2: MOV EAX,EBX
// 004d91b4: IDIV ECX
// 004d91b6: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d91bc: PUSH 0x62b340
//   Label: LAB_004d91bc
//   XREF to: 0062b340 (DATA)
// 004d91c1: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d91c6: ADD ESP,0x4
// 004d91c9: PUSH EAX
// 004d91ca: MOV EDX,dword ptr [ESI + 0x3c]
// 004d91cd: PUSH EDX
// 004d91ce: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d91d3: ADD ESP,0x4
// 004d91d6: PUSH EAX
// 004d91d7: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d91dc: LEA EAX,[ESP + 0x100c]
//   XREF to: Stack[-0xc10] (DATA)
// 004d91e3: PUSH EAX
// 004d91e4: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d91e9: ADD ESP,0x10
// 004d91ec: PUSH -0x1
// 004d91ee: PUSH 0x7
// 004d91f0: MOV EBP,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d91f6: PUSH EBP
// 004d91f7: MOV EAX,[0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d91fc: PUSH EAX
// 004d91fd: LEA EAX,[ESP + 0x1010]
//   XREF to: Stack[-0xc10] (DATA)
// 004d9204: PUSH EAX
// 004d9205: MOV EDX,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d920b: PUSH EDX
// 004d920c: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d9211: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9216: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d921c: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d9222: ADD ECX,EAX
// 004d9224: SHL EAX,0x2
// 004d9227: ADD ESP,0x18
// 004d922a: SUB EDX,EAX
// 004d922c: MOV dword ptr [0x02d831c8],ECX
//   XREF to: 02d831c8 (WRITE)
// 004d9232: CMP EDX,ECX
// 004d9234: JGE 0x004d9266
//   XREF to: 004d9266 (CONDITIONAL_JUMP)
// 004d9236: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d923c: LEA EAX,[EDX*0x4 + 0x0]
// 004d9243: MOV ECX,0x3
// 004d9248: SUB EAX,EDX
// 004d924a: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d9250: ADD EAX,EAX
// 004d9252: MOV EDX,EBX
// 004d9254: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d9259: SAR EDX,0x1f
// 004d925c: MOV EAX,EBX
// 004d925e: IDIV ECX
// 004d9260: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d9266: PUSH 0x62b34d
//   Label: LAB_004d9266
//   XREF to: 0062b34d (DATA)
// 004d926b: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d9270: ADD ESP,0x4
// 004d9273: PUSH EAX
// 004d9274: MOV EDX,dword ptr [ESI + 0x44]
// 004d9277: PUSH EDX
// 004d9278: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d927d: ADD ESP,0x4
// 004d9280: PUSH EAX
// 004d9281: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d9286: LEA EAX,[ESP + 0x170c]
//   XREF to: Stack[-0x510] (DATA)
// 004d928d: PUSH EAX
// 004d928e: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d9293: ADD ESP,0x10
// 004d9296: PUSH -0x1
// 004d9298: PUSH 0x7
// 004d929a: MOV EAX,[0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d929f: PUSH EAX
// 004d92a0: MOV EDX,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d92a6: PUSH EDX
// 004d92a7: LEA EAX,[ESP + 0x1710]
//   XREF to: Stack[-0x510] (DATA)
// 004d92ae: PUSH EAX
// 004d92af: MOV ECX,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d92b5: PUSH ECX
// 004d92b6: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d92bb: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d92c0: MOV EDI,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d92c6: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d92cc: ADD EDI,EAX
// 004d92ce: SHL EAX,0x2
// 004d92d1: ADD ESP,0x18
// 004d92d4: SUB EDX,EAX
// 004d92d6: MOV dword ptr [0x02d831c8],EDI
//   XREF to: 02d831c8 (WRITE)
// 004d92dc: CMP EDX,EDI
// 004d92de: JGE 0x004d9310
//   XREF to: 004d9310 (CONDITIONAL_JUMP)
// 004d92e0: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d92e6: LEA EAX,[EDX*0x4 + 0x0]
// 004d92ed: MOV ECX,0x3
// 004d92f2: SUB EAX,EDX
// 004d92f4: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d92fa: ADD EAX,EAX
// 004d92fc: MOV EDX,EBX
// 004d92fe: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d9303: SAR EDX,0x1f
// 004d9306: MOV EAX,EBX
// 004d9308: IDIV ECX
// 004d930a: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d9310: PUSH 0x62b357
//   Label: LAB_004d9310
//   XREF to: 0062b357 (DATA)
// 004d9315: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d931a: ADD ESP,0x4
// 004d931d: PUSH EAX
// 004d931e: MOV EDX,dword ptr [ESI + 0x40]
// 004d9321: PUSH EDX
// 004d9322: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d9327: ADD ESP,0x4
// 004d932a: PUSH EAX
// 004d932b: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d9330: LEA EAX,[ESP + 0x150c]
//   XREF to: Stack[-0x710] (DATA)
// 004d9337: PUSH EAX
// 004d9338: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d933d: ADD ESP,0x10
// 004d9340: PUSH -0x1
// 004d9342: PUSH 0x7
// 004d9344: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d934a: PUSH ECX
// 004d934b: MOV EDI,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d9351: PUSH EDI
// 004d9352: LEA EAX,[ESP + 0x1510]
//   XREF to: Stack[-0x710] (DATA)
// 004d9359: PUSH EAX
// 004d935a: MOV EBP,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d9360: PUSH EBP
// 004d9361: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d9366: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d936b: ADD dword ptr [0x02d831c8],EAX
//   XREF to: 02d831c8 (READ_WRITE)
// 004d9371: SHL EAX,0x2
// 004d9374: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d937a: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9380: SUB EDX,EAX
// 004d9382: ADD ESP,0x18
// 004d9385: CMP EDX,ECX
// 004d9387: JGE 0x004d93b9
//   XREF to: 004d93b9 (CONDITIONAL_JUMP)
// 004d9389: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d938f: LEA EAX,[EDX*0x4 + 0x0]
// 004d9396: MOV ECX,0x3
// 004d939b: SUB EAX,EDX
// 004d939d: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d93a3: ADD EAX,EAX
// 004d93a5: MOV EDX,EBX
// 004d93a7: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d93ac: SAR EDX,0x1f
// 004d93af: MOV EAX,EBX
// 004d93b1: IDIV ECX
// 004d93b3: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d93b9: PUSH 0x62b362
//   Label: LAB_004d93b9
//   XREF to: 0062b362 (DATA)
// 004d93be: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d93c3: ADD ESP,0x4
// 004d93c6: PUSH EAX
// 004d93c7: MOV EDX,dword ptr [ESI + 0x48]
// 004d93ca: PUSH EDX
// 004d93cb: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d93d0: ADD ESP,0x4
// 004d93d3: PUSH EAX
// 004d93d4: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d93d9: LEA EAX,[ESP + 0x140c]
//   XREF to: Stack[-0x810] (DATA)
// 004d93e0: PUSH EAX
// 004d93e1: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d93e6: ADD ESP,0x10
// 004d93e9: PUSH -0x1
// 004d93eb: PUSH 0x7
// 004d93ed: MOV EBP,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d93f3: PUSH EBP
// 004d93f4: MOV EAX,[0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d93f9: PUSH EAX
// 004d93fa: LEA EAX,[ESP + 0x1410]
//   XREF to: Stack[-0x810] (DATA)
// 004d9401: PUSH EAX
// 004d9402: MOV EDX,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d9408: PUSH EDX
// 004d9409: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d940e: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9413: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9419: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d941f: ADD ECX,EAX
// 004d9421: SHL EAX,0x2
// 004d9424: ADD ESP,0x18
// 004d9427: SUB EDX,EAX
// 004d9429: MOV dword ptr [0x02d831c8],ECX
//   XREF to: 02d831c8 (WRITE)
// 004d942f: CMP EDX,ECX
// 004d9431: JGE 0x004d9463
//   XREF to: 004d9463 (CONDITIONAL_JUMP)
// 004d9433: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9439: LEA EAX,[EDX*0x4 + 0x0]
// 004d9440: MOV ECX,0x3
// 004d9445: SUB EAX,EDX
// 004d9447: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d944d: ADD EAX,EAX
// 004d944f: MOV EDX,EBX
// 004d9451: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d9456: SAR EDX,0x1f
// 004d9459: MOV EAX,EBX
// 004d945b: IDIV ECX
// 004d945d: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d9463: PUSH 0x62b370
//   Label: LAB_004d9463
//   XREF to: 0062b370 (DATA)
// 004d9468: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d946d: ADD ESP,0x4
// 004d9470: PUSH EAX
// 004d9471: MOV EDX,dword ptr [ESI + 0x4c]
// 004d9474: PUSH EDX
// 004d9475: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d947a: ADD ESP,0x4
// 004d947d: PUSH EAX
// 004d947e: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d9483: LEA EAX,[ESP + 0x1a0c]
//   XREF to: Stack[-0x210] (DATA)
// 004d948a: PUSH EAX
// 004d948b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d9490: ADD ESP,0x10
// 004d9493: PUSH -0x1
// 004d9495: PUSH 0x7
// 004d9497: MOV EAX,[0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d949c: PUSH EAX
// 004d949d: MOV EDX,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d94a3: PUSH EDX
// 004d94a4: LEA EAX,[ESP + 0x1a10]
//   XREF to: Stack[-0x210] (DATA)
// 004d94ab: PUSH EAX
// 004d94ac: MOV ECX,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d94b2: PUSH ECX
// 004d94b3: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d94b8: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d94bd: MOV EDI,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d94c3: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d94c9: ADD EDI,EAX
// 004d94cb: SHL EAX,0x2
// 004d94ce: ADD ESP,0x18
// 004d94d1: SUB EDX,EAX
// 004d94d3: MOV dword ptr [0x02d831c8],EDI
//   XREF to: 02d831c8 (WRITE)
// 004d94d9: CMP EDX,EDI
// 004d94db: JGE 0x004d950d
//   XREF to: 004d950d (CONDITIONAL_JUMP)
// 004d94dd: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d94e3: LEA EAX,[EDX*0x4 + 0x0]
// 004d94ea: MOV ECX,0x3
// 004d94ef: SUB EAX,EDX
// 004d94f1: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d94f7: ADD EAX,EAX
// 004d94f9: MOV EDX,EBX
// 004d94fb: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d9500: SAR EDX,0x1f
// 004d9503: MOV EAX,EBX
// 004d9505: IDIV ECX
// 004d9507: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d950d: PUSH 0x62b379
//   Label: LAB_004d950d
//   XREF to: 0062b379 (DATA)
// 004d9512: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d9517: ADD ESP,0x4
// 004d951a: PUSH EAX
// 004d951b: MOV EDX,dword ptr [ESI + 0x50]
// 004d951e: PUSH EDX
// 004d951f: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d9524: ADD ESP,0x4
// 004d9527: PUSH EAX
// 004d9528: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d952d: LEA EAX,[ESP + 0x120c]
//   XREF to: Stack[-0xa10] (DATA)
// 004d9534: PUSH EAX
// 004d9535: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d953a: ADD ESP,0x10
// 004d953d: PUSH -0x1
// 004d953f: PUSH 0x7
// 004d9541: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9547: PUSH ECX
// 004d9548: MOV EDI,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d954e: PUSH EDI
// 004d954f: LEA EAX,[ESP + 0x1210]
//   XREF to: Stack[-0xa10] (DATA)
// 004d9556: PUSH EAX
// 004d9557: MOV EBP,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d955d: PUSH EBP
// 004d955e: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d9563: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9568: ADD dword ptr [0x02d831c8],EAX
//   XREF to: 02d831c8 (READ_WRITE)
// 004d956e: SHL EAX,0x2
// 004d9571: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d9577: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d957d: SUB EDX,EAX
// 004d957f: ADD ESP,0x18
// 004d9582: CMP EDX,ECX
// 004d9584: JGE 0x004d95b6
//   XREF to: 004d95b6 (CONDITIONAL_JUMP)
// 004d9586: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d958c: LEA EAX,[EDX*0x4 + 0x0]
// 004d9593: MOV ECX,0x3
// 004d9598: SUB EAX,EDX
// 004d959a: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d95a0: ADD EAX,EAX
// 004d95a2: MOV EDX,EBX
// 004d95a4: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d95a9: SAR EDX,0x1f
// 004d95ac: MOV EAX,EBX
// 004d95ae: IDIV ECX
// 004d95b0: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d95b6: PUSH 0x62b37f
//   Label: LAB_004d95b6
//   XREF to: 0062b37f (DATA)
// 004d95bb: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d95c0: ADD ESP,0x4
// 004d95c3: PUSH EAX
// 004d95c4: MOV EDX,dword ptr [ESI + 0x54]
// 004d95c7: PUSH EDX
// 004d95c8: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d95cd: ADD ESP,0x4
// 004d95d0: PUSH EAX
// 004d95d1: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d95d6: LEA EAX,[ESP + 0x190c]
//   XREF to: Stack[-0x310] (DATA)
// 004d95dd: PUSH EAX
// 004d95de: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d95e3: ADD ESP,0x10
// 004d95e6: PUSH -0x1
// 004d95e8: PUSH 0x7
// 004d95ea: MOV EBP,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d95f0: PUSH EBP
// 004d95f1: MOV EAX,[0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d95f6: PUSH EAX
// 004d95f7: LEA EAX,[ESP + 0x1910]
//   XREF to: Stack[-0x310] (DATA)
// 004d95fe: PUSH EAX
// 004d95ff: MOV EDX,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d9605: PUSH EDX
// 004d9606: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d960b: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9610: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9616: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d961c: ADD ECX,EAX
// 004d961e: SHL EAX,0x2
// 004d9621: ADD ESP,0x18
// 004d9624: SUB EDX,EAX
// 004d9626: MOV dword ptr [0x02d831c8],ECX
//   XREF to: 02d831c8 (WRITE)
// 004d962c: CMP EDX,ECX
// 004d962e: JGE 0x004d9660
//   XREF to: 004d9660 (CONDITIONAL_JUMP)
// 004d9630: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9636: LEA EAX,[EDX*0x4 + 0x0]
// 004d963d: MOV ECX,0x3
// 004d9642: SUB EAX,EDX
// 004d9644: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d964a: ADD EAX,EAX
// 004d964c: MOV EDX,EBX
// 004d964e: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d9653: SAR EDX,0x1f
// 004d9656: MOV EAX,EBX
// 004d9658: IDIV ECX
// 004d965a: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d9660: PUSH 0x62b38c
//   Label: LAB_004d9660
//   XREF to: 0062b38c (DATA)
// 004d9665: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d966a: ADD ESP,0x4
// 004d966d: PUSH EAX
// 004d966e: MOV EDX,dword ptr [ESI + 0x58]
// 004d9671: PUSH EDX
// 004d9672: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d9677: ADD ESP,0x4
// 004d967a: PUSH EAX
// 004d967b: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d9680: LEA EAX,[ESP + 0x10c]
//   XREF to: Stack[-0x1b10] (DATA)
// 004d9687: PUSH EAX
// 004d9688: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d968d: ADD ESP,0x10
// 004d9690: PUSH -0x1
// 004d9692: PUSH 0x7
// 004d9694: MOV EAX,[0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9699: PUSH EAX
// 004d969a: MOV EDX,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d96a0: PUSH EDX
// 004d96a1: LEA EAX,[ESP + 0x110]
//   XREF to: Stack[-0x1b10] (DATA)
// 004d96a8: PUSH EAX
// 004d96a9: MOV ECX,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d96af: PUSH ECX
// 004d96b0: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d96b5: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d96ba: MOV EDI,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d96c0: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d96c6: ADD EDI,EAX
// 004d96c8: SHL EAX,0x2
// 004d96cb: ADD ESP,0x18
// 004d96ce: SUB EDX,EAX
// 004d96d0: MOV dword ptr [0x02d831c8],EDI
//   XREF to: 02d831c8 (WRITE)
// 004d96d6: CMP EDX,EDI
// 004d96d8: JGE 0x004d970a
//   XREF to: 004d970a (CONDITIONAL_JUMP)
// 004d96da: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d96e0: LEA EAX,[EDX*0x4 + 0x0]
// 004d96e7: MOV ECX,0x3
// 004d96ec: SUB EAX,EDX
// 004d96ee: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d96f4: ADD EAX,EAX
// 004d96f6: MOV EDX,EBX
// 004d96f8: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d96fd: SAR EDX,0x1f
// 004d9700: MOV EAX,EBX
// 004d9702: IDIV ECX
// 004d9704: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d970a: PUSH 0x62b391
//   Label: LAB_004d970a
//   XREF to: 0062b391 (DATA)
// 004d970f: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d9714: ADD ESP,0x4
// 004d9717: PUSH EAX
// 004d9718: MOV EDX,dword ptr [ESI + 0x60]
// 004d971b: PUSH EDX
// 004d971c: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d9721: ADD ESP,0x4
// 004d9724: PUSH EAX
// 004d9725: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d972a: LEA EAX,[ESP + 0x80c]
//   XREF to: Stack[-0x1410] (DATA)
// 004d9731: PUSH EAX
// 004d9732: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d9737: ADD ESP,0x10
// 004d973a: PUSH -0x1
// 004d973c: PUSH 0x7
// 004d973e: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9744: PUSH ECX
// 004d9745: MOV EDI,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d974b: PUSH EDI
// 004d974c: LEA EAX,[ESP + 0x810]
//   XREF to: Stack[-0x1410] (DATA)
// 004d9753: PUSH EAX
// 004d9754: MOV EBP,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d975a: PUSH EBP
// 004d975b: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d9760: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9765: ADD dword ptr [0x02d831c8],EAX
//   XREF to: 02d831c8 (READ_WRITE)
// 004d976b: SHL EAX,0x2
// 004d976e: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d9774: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d977a: SUB EDX,EAX
// 004d977c: ADD ESP,0x18
// 004d977f: CMP EDX,ECX
// 004d9781: JGE 0x004d97b3
//   XREF to: 004d97b3 (CONDITIONAL_JUMP)
// 004d9783: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9789: LEA EAX,[EDX*0x4 + 0x0]
// 004d9790: MOV ECX,0x3
// 004d9795: SUB EAX,EDX
// 004d9797: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d979d: ADD EAX,EAX
// 004d979f: MOV EDX,EBX
// 004d97a1: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d97a6: SAR EDX,0x1f
// 004d97a9: MOV EAX,EBX
// 004d97ab: IDIV ECX
// 004d97ad: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d97b3: PUSH 0x62b39a
//   Label: LAB_004d97b3
//   XREF to: 0062b39a (DATA)
// 004d97b8: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d97bd: ADD ESP,0x4
// 004d97c0: PUSH EAX
// 004d97c1: MOV EDX,dword ptr [ESI + 0x64]
// 004d97c4: PUSH EDX
// 004d97c5: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d97ca: ADD ESP,0x4
// 004d97cd: PUSH EAX
// 004d97ce: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d97d3: LEA EAX,[ESP + 0xf0c]
//   XREF to: Stack[-0xd10] (DATA)
// 004d97da: PUSH EAX
// 004d97db: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d97e0: ADD ESP,0x10
// 004d97e3: PUSH -0x1
// 004d97e5: PUSH 0x7
// 004d97e7: MOV EBP,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d97ed: PUSH EBP
// 004d97ee: MOV EAX,[0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d97f3: PUSH EAX
// 004d97f4: LEA EAX,[ESP + 0xf10]
//   XREF to: Stack[-0xd10] (DATA)
// 004d97fb: PUSH EAX
// 004d97fc: MOV EDX,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d9802: PUSH EDX
// 004d9803: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d9808: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d980d: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9813: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d9819: ADD ECX,EAX
// 004d981b: SHL EAX,0x2
// 004d981e: ADD ESP,0x18
// 004d9821: SUB EDX,EAX
// 004d9823: MOV dword ptr [0x02d831c8],ECX
//   XREF to: 02d831c8 (WRITE)
// 004d9829: CMP EDX,ECX
// 004d982b: JGE 0x004d985d
//   XREF to: 004d985d (CONDITIONAL_JUMP)
// 004d982d: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9833: LEA EAX,[EDX*0x4 + 0x0]
// 004d983a: MOV ECX,0x3
// 004d983f: SUB EAX,EDX
// 004d9841: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d9847: ADD EAX,EAX
// 004d9849: MOV EDX,EBX
// 004d984b: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d9850: SAR EDX,0x1f
// 004d9853: MOV EAX,EBX
// 004d9855: IDIV ECX
// 004d9857: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d985d: PUSH 0x62b3a5
//   Label: LAB_004d985d
//   XREF to: 0062b3a5 (DATA)
// 004d9862: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d9867: ADD ESP,0x4
// 004d986a: PUSH EAX
// 004d986b: MOV EDX,dword ptr [ESI + 0x5c]
// 004d986e: PUSH EDX
// 004d986f: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d9874: ADD ESP,0x4
// 004d9877: PUSH EAX
// 004d9878: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d987d: LEA EAX,[ESP + 0x60c]
//   XREF to: Stack[-0x1610] (DATA)
// 004d9884: PUSH EAX
// 004d9885: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d988a: ADD ESP,0x10
// 004d988d: PUSH -0x1
// 004d988f: PUSH 0x7
// 004d9891: MOV EAX,[0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9896: PUSH EAX
// 004d9897: MOV EDX,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d989d: PUSH EDX
// 004d989e: LEA EAX,[ESP + 0x610]
//   XREF to: Stack[-0x1610] (DATA)
// 004d98a5: PUSH EAX
// 004d98a6: MOV ECX,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d98ac: PUSH ECX
// 004d98ad: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d98b2: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d98b7: MOV EDI,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d98bd: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d98c3: ADD EDI,EAX
// 004d98c5: SHL EAX,0x2
// 004d98c8: ADD ESP,0x18
// 004d98cb: SUB EDX,EAX
// 004d98cd: MOV dword ptr [0x02d831c8],EDI
//   XREF to: 02d831c8 (WRITE)
// 004d98d3: CMP EDX,EDI
// 004d98d5: JGE 0x004d9907
//   XREF to: 004d9907 (CONDITIONAL_JUMP)
// 004d98d7: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d98dd: LEA EAX,[EDX*0x4 + 0x0]
// 004d98e4: MOV ECX,0x3
// 004d98e9: SUB EAX,EDX
// 004d98eb: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d98f1: ADD EAX,EAX
// 004d98f3: MOV EDX,EBX
// 004d98f5: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d98fa: SAR EDX,0x1f
// 004d98fd: MOV EAX,EBX
// 004d98ff: IDIV ECX
// 004d9901: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d9907: PUSH 0x62b3aa
//   Label: LAB_004d9907
//   XREF to: 0062b3aa (DATA)
// 004d990c: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d9911: ADD ESP,0x4
// 004d9914: PUSH EAX
// 004d9915: MOV EDX,dword ptr [ESI + 0x68]
// 004d9918: PUSH EDX
// 004d9919: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d991e: ADD ESP,0x4
// 004d9921: PUSH EAX
// 004d9922: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d9927: LEA EAX,[ESP + 0xd0c]
//   XREF to: Stack[-0xf10] (DATA)
// 004d992e: PUSH EAX
// 004d992f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d9934: ADD ESP,0x10
// 004d9937: PUSH -0x1
// 004d9939: PUSH 0x7
// 004d993b: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9941: PUSH ECX
// 004d9942: MOV EDI,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d9948: PUSH EDI
// 004d9949: LEA EAX,[ESP + 0xd10]
//   XREF to: Stack[-0xf10] (DATA)
// 004d9950: PUSH EAX
// 004d9951: MOV EBP,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d9957: PUSH EBP
// 004d9958: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d995d: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9962: ADD dword ptr [0x02d831c8],EAX
//   XREF to: 02d831c8 (READ_WRITE)
// 004d9968: SHL EAX,0x2
// 004d996b: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d9971: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9977: SUB EDX,EAX
// 004d9979: ADD ESP,0x18
// 004d997c: CMP EDX,ECX
// 004d997e: JGE 0x004d99b0
//   XREF to: 004d99b0 (CONDITIONAL_JUMP)
// 004d9980: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9986: LEA EAX,[EDX*0x4 + 0x0]
// 004d998d: MOV ECX,0x3
// 004d9992: SUB EAX,EDX
// 004d9994: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d999a: ADD EAX,EAX
// 004d999c: MOV EDX,EBX
// 004d999e: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d99a3: SAR EDX,0x1f
// 004d99a6: MOV EAX,EBX
// 004d99a8: IDIV ECX
// 004d99aa: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d99b0: PUSH 0x62b3bf
//   Label: LAB_004d99b0
//   XREF to: 0062b3bf (DATA)
// 004d99b5: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d99ba: ADD ESP,0x4
// 004d99bd: PUSH EAX
// 004d99be: MOV EDX,dword ptr [ESI + 0x6c]
// 004d99c1: PUSH EDX
// 004d99c2: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d99c7: ADD ESP,0x4
// 004d99ca: PUSH EAX
// 004d99cb: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d99d0: LEA EAX,[ESP + 0x30c]
//   XREF to: Stack[-0x1910] (DATA)
// 004d99d7: PUSH EAX
// 004d99d8: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d99dd: ADD ESP,0x10
// 004d99e0: PUSH -0x1
// 004d99e2: PUSH 0x7
// 004d99e4: MOV EBP,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d99ea: PUSH EBP
// 004d99eb: MOV EAX,[0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d99f0: PUSH EAX
// 004d99f1: LEA EAX,[ESP + 0x310]
//   XREF to: Stack[-0x1910] (DATA)
// 004d99f8: PUSH EAX
// 004d99f9: MOV EDX,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d99ff: PUSH EDX
// 004d9a00: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d9a05: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9a0a: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9a10: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d9a16: ADD ECX,EAX
// 004d9a18: SHL EAX,0x2
// 004d9a1b: ADD ESP,0x18
// 004d9a1e: SUB EDX,EAX
// 004d9a20: MOV dword ptr [0x02d831c8],ECX
//   XREF to: 02d831c8 (WRITE)
// 004d9a26: CMP EDX,ECX
// 004d9a28: JGE 0x004d9a5a
//   XREF to: 004d9a5a (CONDITIONAL_JUMP)
// 004d9a2a: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9a30: LEA EAX,[EDX*0x4 + 0x0]
// 004d9a37: MOV ECX,0x3
// 004d9a3c: SUB EAX,EDX
// 004d9a3e: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d9a44: ADD EAX,EAX
// 004d9a46: MOV EDX,EBX
// 004d9a48: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d9a4d: SAR EDX,0x1f
// 004d9a50: MOV EAX,EBX
// 004d9a52: IDIV ECX
// 004d9a54: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d9a5a: PUSH 0x62b3d5
//   Label: LAB_004d9a5a
//   XREF to: 0062b3d5 (DATA)
// 004d9a5f: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d9a64: ADD ESP,0x4
// 004d9a67: PUSH EAX
// 004d9a68: MOV EDX,dword ptr [ESI + 0x70]
// 004d9a6b: PUSH EDX
// 004d9a6c: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d9a71: ADD ESP,0x4
// 004d9a74: PUSH EAX
// 004d9a75: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d9a7a: LEA EAX,[ESP + 0xa0c]
//   XREF to: Stack[-0x1210] (DATA)
// 004d9a81: PUSH EAX
// 004d9a82: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d9a87: ADD ESP,0x10
// 004d9a8a: PUSH -0x1
// 004d9a8c: PUSH 0x7
// 004d9a8e: MOV EAX,[0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9a93: PUSH EAX
// 004d9a94: MOV EDX,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d9a9a: PUSH EDX
// 004d9a9b: LEA EAX,[ESP + 0xa10]
//   XREF to: Stack[-0x1210] (DATA)
// 004d9aa2: PUSH EAX
// 004d9aa3: MOV ECX,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d9aa9: PUSH ECX
// 004d9aaa: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d9aaf: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9ab4: MOV EDI,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9aba: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d9ac0: ADD EDI,EAX
// 004d9ac2: SHL EAX,0x2
// 004d9ac5: ADD ESP,0x18
// 004d9ac8: SUB EDX,EAX
// 004d9aca: MOV dword ptr [0x02d831c8],EDI
//   XREF to: 02d831c8 (WRITE)
// 004d9ad0: CMP EDX,EDI
// 004d9ad2: JGE 0x004d9b04
//   XREF to: 004d9b04 (CONDITIONAL_JUMP)
// 004d9ad4: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9ada: LEA EAX,[EDX*0x4 + 0x0]
// 004d9ae1: MOV ECX,0x3
// 004d9ae6: SUB EAX,EDX
// 004d9ae8: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d9aee: ADD EAX,EAX
// 004d9af0: MOV EDX,EBX
// 004d9af2: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d9af7: SAR EDX,0x1f
// 004d9afa: MOV EAX,EBX
// 004d9afc: IDIV ECX
// 004d9afe: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d9b04: PUSH 0x62b3e9
//   Label: LAB_004d9b04
//   XREF to: 0062b3e9 (DATA)
// 004d9b09: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d9b0e: ADD ESP,0x4
// 004d9b11: PUSH EAX
// 004d9b12: MOV EDX,dword ptr [ESI + 0x74]
// 004d9b15: PUSH EDX
// 004d9b16: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d9b1b: ADD ESP,0x4
// 004d9b1e: PUSH EAX
// 004d9b1f: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d9b24: LEA EAX,[ESP + 0x110c]
//   XREF to: Stack[-0xb10] (DATA)
// 004d9b2b: PUSH EAX
// 004d9b2c: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d9b31: ADD ESP,0x10
// 004d9b34: PUSH -0x1
// 004d9b36: PUSH 0x7
// 004d9b38: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9b3e: PUSH ECX
// 004d9b3f: MOV EDI,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d9b45: PUSH EDI
// 004d9b46: LEA EAX,[ESP + 0x1110]
//   XREF to: Stack[-0xb10] (DATA)
// 004d9b4d: PUSH EAX
// 004d9b4e: MOV EBP,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d9b54: PUSH EBP
// 004d9b55: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d9b5a: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9b5f: ADD dword ptr [0x02d831c8],EAX
//   XREF to: 02d831c8 (READ_WRITE)
// 004d9b65: SHL EAX,0x2
// 004d9b68: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d9b6e: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9b74: SUB EDX,EAX
// 004d9b76: ADD ESP,0x18
// 004d9b79: CMP EDX,ECX
// 004d9b7b: JGE 0x004d9bad
//   XREF to: 004d9bad (CONDITIONAL_JUMP)
// 004d9b7d: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9b83: LEA EAX,[EDX*0x4 + 0x0]
// 004d9b8a: MOV ECX,0x3
// 004d9b8f: SUB EAX,EDX
// 004d9b91: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d9b97: ADD EAX,EAX
// 004d9b99: MOV EDX,EBX
// 004d9b9b: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d9ba0: SAR EDX,0x1f
// 004d9ba3: MOV EAX,EBX
// 004d9ba5: IDIV ECX
// 004d9ba7: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d9bad: PUSH 0x62b3ff
//   Label: LAB_004d9bad
//   XREF to: 0062b3ff (DATA)
// 004d9bb2: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d9bb7: ADD ESP,0x4
// 004d9bba: PUSH EAX
// 004d9bbb: MOV EDX,dword ptr [ESI + 0x78]
// 004d9bbe: PUSH EDX
// 004d9bbf: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d9bc4: ADD ESP,0x4
// 004d9bc7: PUSH EAX
// 004d9bc8: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d9bcd: LEA EAX,[ESP + 0x180c]
//   XREF to: Stack[-0x410] (DATA)
// 004d9bd4: PUSH EAX
// 004d9bd5: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d9bda: ADD ESP,0x10
// 004d9bdd: PUSH -0x1
// 004d9bdf: PUSH 0x7
// 004d9be1: MOV EBP,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9be7: PUSH EBP
// 004d9be8: MOV EAX,[0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d9bed: PUSH EAX
// 004d9bee: LEA EAX,[ESP + 0x1810]
//   XREF to: Stack[-0x410] (DATA)
// 004d9bf5: PUSH EAX
// 004d9bf6: MOV EDX,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d9bfc: PUSH EDX
// 004d9bfd: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d9c02: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9c07: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9c0d: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d9c13: ADD ECX,EAX
// 004d9c15: SHL EAX,0x2
// 004d9c18: ADD ESP,0x18
// 004d9c1b: SUB EDX,EAX
// 004d9c1d: MOV dword ptr [0x02d831c8],ECX
//   XREF to: 02d831c8 (WRITE)
// 004d9c23: CMP EDX,ECX
// 004d9c25: JGE 0x004d9c57
//   XREF to: 004d9c57 (CONDITIONAL_JUMP)
// 004d9c27: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9c2d: LEA EAX,[EDX*0x4 + 0x0]
// 004d9c34: MOV ECX,0x3
// 004d9c39: SUB EAX,EDX
// 004d9c3b: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d9c41: ADD EAX,EAX
// 004d9c43: MOV EDX,EBX
// 004d9c45: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d9c4a: SAR EDX,0x1f
// 004d9c4d: MOV EAX,EBX
// 004d9c4f: IDIV ECX
// 004d9c51: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d9c57: PUSH 0x62b413
//   Label: LAB_004d9c57
//   XREF to: 0062b413 (DATA)
// 004d9c5c: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d9c61: ADD ESP,0x4
// 004d9c64: PUSH EAX
// 004d9c65: MOV EDX,dword ptr [ESI + 0x7c]
// 004d9c68: PUSH EDX
// 004d9c69: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d9c6e: ADD ESP,0x4
// 004d9c71: PUSH EAX
// 004d9c72: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d9c77: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1c10] (DATA)
// 004d9c7b: PUSH EAX
// 004d9c7c: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d9c81: ADD ESP,0x10
// 004d9c84: PUSH -0x1
// 004d9c86: PUSH 0x7
// 004d9c88: MOV EAX,[0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9c8d: PUSH EAX
// 004d9c8e: MOV EDX,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d9c94: PUSH EDX
// 004d9c95: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x1c10] (DATA)
// 004d9c99: PUSH EAX
// 004d9c9a: MOV ECX,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d9ca0: PUSH ECX
// 004d9ca1: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d9ca6: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9cab: MOV EDI,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9cb1: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d9cb7: ADD EDI,EAX
// 004d9cb9: SHL EAX,0x2
// 004d9cbc: ADD ESP,0x18
// 004d9cbf: SUB EDX,EAX
// 004d9cc1: MOV dword ptr [0x02d831c8],EDI
//   XREF to: 02d831c8 (WRITE)
// 004d9cc7: CMP EDX,EDI
// 004d9cc9: JGE 0x004d9cfb
//   XREF to: 004d9cfb (CONDITIONAL_JUMP)
// 004d9ccb: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9cd1: LEA EAX,[EDX*0x4 + 0x0]
// 004d9cd8: MOV ECX,0x3
// 004d9cdd: SUB EAX,EDX
// 004d9cdf: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d9ce5: ADD EAX,EAX
// 004d9ce7: MOV EDX,EBX
// 004d9ce9: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d9cee: SAR EDX,0x1f
// 004d9cf1: MOV EAX,EBX
// 004d9cf3: IDIV ECX
// 004d9cf5: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d9cfb: PUSH 0x62b41f
//   Label: LAB_004d9cfb
//   XREF to: 0062b41f (DATA)
// 004d9d00: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d9d05: ADD ESP,0x4
// 004d9d08: PUSH EAX
// 004d9d09: MOV EDX,dword ptr [ESI + 0x80]
// 004d9d0f: PUSH EDX
// 004d9d10: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d9d15: ADD ESP,0x4
// 004d9d18: PUSH EAX
// 004d9d19: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d9d1e: LEA EAX,[ESP + 0x70c]
//   XREF to: Stack[-0x1510] (DATA)
// 004d9d25: PUSH EAX
// 004d9d26: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d9d2b: ADD ESP,0x10
// 004d9d2e: PUSH -0x1
// 004d9d30: PUSH 0x7
// 004d9d32: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9d38: PUSH ECX
// 004d9d39: MOV EDI,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d9d3f: PUSH EDI
// 004d9d40: LEA EAX,[ESP + 0x710]
//   XREF to: Stack[-0x1510] (DATA)
// 004d9d47: PUSH EAX
// 004d9d48: MOV EBP,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d9d4e: PUSH EBP
// 004d9d4f: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d9d54: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9d59: ADD dword ptr [0x02d831c8],EAX
//   XREF to: 02d831c8 (READ_WRITE)
// 004d9d5f: SHL EAX,0x2
// 004d9d62: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d9d68: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9d6e: SUB EDX,EAX
// 004d9d70: ADD ESP,0x18
// 004d9d73: CMP EDX,ECX
// 004d9d75: JGE 0x004d9da7
//   XREF to: 004d9da7 (CONDITIONAL_JUMP)
// 004d9d77: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9d7d: LEA EAX,[EDX*0x4 + 0x0]
// 004d9d84: MOV ECX,0x3
// 004d9d89: SUB EAX,EDX
// 004d9d8b: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d9d91: ADD EAX,EAX
// 004d9d93: MOV EDX,EBX
// 004d9d95: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d9d9a: SAR EDX,0x1f
// 004d9d9d: MOV EAX,EBX
// 004d9d9f: IDIV ECX
// 004d9da1: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d9da7: PUSH 0x62b42f
//   Label: LAB_004d9da7
//   XREF to: 0062b42f (DATA)
// 004d9dac: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d9db1: ADD ESP,0x4
// 004d9db4: PUSH EAX
// 004d9db5: MOV EDX,dword ptr [ESI + 0x84]
// 004d9dbb: PUSH EDX
// 004d9dbc: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d9dc1: ADD ESP,0x4
// 004d9dc4: PUSH EAX
// 004d9dc5: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d9dca: LEA EAX,[ESP + 0xe0c]
//   XREF to: Stack[-0xe10] (DATA)
// 004d9dd1: PUSH EAX
// 004d9dd2: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d9dd7: ADD ESP,0x10
// 004d9dda: PUSH -0x1
// 004d9ddc: PUSH 0x7
// 004d9dde: MOV EBP,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9de4: PUSH EBP
// 004d9de5: MOV EAX,[0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d9dea: PUSH EAX
// 004d9deb: LEA EAX,[ESP + 0xe10]
//   XREF to: Stack[-0xe10] (DATA)
// 004d9df2: PUSH EAX
// 004d9df3: MOV EDX,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d9df9: PUSH EDX
// 004d9dfa: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d9dff: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9e04: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9e0a: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d9e10: ADD ECX,EAX
// 004d9e12: SHL EAX,0x2
// 004d9e15: ADD ESP,0x18
// 004d9e18: SUB EDX,EAX
// 004d9e1a: MOV dword ptr [0x02d831c8],ECX
//   XREF to: 02d831c8 (WRITE)
// 004d9e20: CMP EDX,ECX
// 004d9e22: JGE 0x004d9e54
//   XREF to: 004d9e54 (CONDITIONAL_JUMP)
// 004d9e24: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9e2a: LEA EAX,[EDX*0x4 + 0x0]
// 004d9e31: MOV ECX,0x3
// 004d9e36: SUB EAX,EDX
// 004d9e38: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d9e3e: ADD EAX,EAX
// 004d9e40: MOV EDX,EBX
// 004d9e42: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d9e47: SAR EDX,0x1f
// 004d9e4a: MOV EAX,EBX
// 004d9e4c: IDIV ECX
// 004d9e4e: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d9e54: PUSH 0x62b439
//   Label: LAB_004d9e54
//   XREF to: 0062b439 (DATA)
// 004d9e59: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d9e5e: ADD ESP,0x4
// 004d9e61: PUSH EAX
// 004d9e62: MOV EDX,dword ptr [ESI + 0x88]
// 004d9e68: PUSH EDX
// 004d9e69: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d9e6e: ADD ESP,0x4
// 004d9e71: PUSH EAX
// 004d9e72: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d9e77: LEA EAX,[ESP + 0x50c]
//   XREF to: Stack[-0x1710] (DATA)
// 004d9e7e: PUSH EAX
// 004d9e7f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d9e84: ADD ESP,0x10
// 004d9e87: PUSH -0x1
// 004d9e89: PUSH 0x7
// 004d9e8b: MOV EAX,[0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9e90: PUSH EAX
// 004d9e91: MOV EDX,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d9e97: PUSH EDX
// 004d9e98: LEA EAX,[ESP + 0x510]
//   XREF to: Stack[-0x1710] (DATA)
// 004d9e9f: PUSH EAX
// 004d9ea0: MOV ECX,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d9ea6: PUSH ECX
// 004d9ea7: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d9eac: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9eb1: MOV EDI,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9eb7: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d9ebd: ADD EDI,EAX
// 004d9ebf: SHL EAX,0x2
// 004d9ec2: ADD ESP,0x18
// 004d9ec5: SUB EDX,EAX
// 004d9ec7: MOV dword ptr [0x02d831c8],EDI
//   XREF to: 02d831c8 (WRITE)
// 004d9ecd: CMP EDX,EDI
// 004d9ecf: JGE 0x004d9f01
//   XREF to: 004d9f01 (CONDITIONAL_JUMP)
// 004d9ed1: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9ed7: LEA EAX,[EDX*0x4 + 0x0]
// 004d9ede: MOV ECX,0x3
// 004d9ee3: SUB EAX,EDX
// 004d9ee5: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d9eeb: ADD EAX,EAX
// 004d9eed: MOV EDX,EBX
// 004d9eef: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d9ef4: SAR EDX,0x1f
// 004d9ef7: MOV EAX,EBX
// 004d9ef9: IDIV ECX
// 004d9efb: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d9f01: PUSH 0x62b447
//   Label: LAB_004d9f01
//   XREF to: 0062b447 (DATA)
// 004d9f06: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d9f0b: ADD ESP,0x4
// 004d9f0e: PUSH EAX
// 004d9f0f: MOV EDX,dword ptr [ESI + 0x8c]
// 004d9f15: PUSH EDX
// 004d9f16: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d9f1b: ADD ESP,0x4
// 004d9f1e: PUSH EAX
// 004d9f1f: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d9f24: LEA EAX,[ESP + 0xc0c]
//   XREF to: Stack[-0x1010] (DATA)
// 004d9f2b: PUSH EAX
// 004d9f2c: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d9f31: ADD ESP,0x10
// 004d9f34: PUSH -0x1
// 004d9f36: PUSH 0x7
// 004d9f38: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9f3e: PUSH ECX
// 004d9f3f: MOV EDI,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d9f45: PUSH EDI
// 004d9f46: LEA EAX,[ESP + 0xc10]
//   XREF to: Stack[-0x1010] (DATA)
// 004d9f4d: PUSH EAX
// 004d9f4e: MOV EBP,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d9f54: PUSH EBP
// 004d9f55: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004d9f5a: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9f5f: ADD dword ptr [0x02d831c8],EAX
//   XREF to: 02d831c8 (READ_WRITE)
// 004d9f65: SHL EAX,0x2
// 004d9f68: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d9f6e: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9f74: SUB EDX,EAX
// 004d9f76: ADD ESP,0x18
// 004d9f79: CMP EDX,ECX
// 004d9f7b: JGE 0x004d9fad
//   XREF to: 004d9fad (CONDITIONAL_JUMP)
// 004d9f7d: MOV EDX,dword ptr [0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004d9f83: LEA EAX,[EDX*0x4 + 0x0]
// 004d9f8a: MOV ECX,0x3
// 004d9f8f: SUB EAX,EDX
// 004d9f91: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d9f97: ADD EAX,EAX
// 004d9f99: MOV EDX,EBX
// 004d9f9b: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004d9fa0: SAR EDX,0x1f
// 004d9fa3: MOV EAX,EBX
// 004d9fa5: IDIV ECX
// 004d9fa7: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004d9fad: PUSH 0x62b458
//   Label: LAB_004d9fad
//   XREF to: 0062b458 (DATA)
// 004d9fb2: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004d9fb7: ADD ESP,0x4
// 004d9fba: PUSH EAX
// 004d9fbb: MOV EDX,dword ptr [ESI + 0x90]
// 004d9fc1: PUSH EDX
// 004d9fc2: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004d9fc7: ADD ESP,0x4
// 004d9fca: PUSH EAX
// 004d9fcb: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004d9fd0: LEA EAX,[ESP + 0x1b0c]
//   XREF to: Stack[-0x110] (DATA)
// 004d9fd7: PUSH EAX
// 004d9fd8: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d9fdd: ADD ESP,0x10
// 004d9fe0: PUSH -0x1
// 004d9fe2: PUSH 0x7
// 004d9fe4: MOV EBP,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004d9fea: PUSH EBP
// 004d9feb: MOV EAX,[0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004d9ff0: PUSH EAX
// 004d9ff1: LEA EAX,[ESP + 0x1b10]
//   XREF to: Stack[-0x110] (DATA)
// 004d9ff8: PUSH EAX
// 004d9ff9: MOV EDX,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004d9fff: PUSH EDX
// 004da000: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004da005: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004da00a: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004da010: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004da016: ADD ECX,EAX
// 004da018: SHL EAX,0x2
// 004da01b: ADD ESP,0x18
// 004da01e: SUB EDX,EAX
// 004da020: MOV dword ptr [0x02d831c8],ECX
//   XREF to: 02d831c8 (WRITE)
// 004da026: CMP EDX,ECX
// 004da028: JL 0x004da0b9
//   XREF to: 004da0b9 (CONDITIONAL_JUMP)
// 004da02e: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004da034: ADD ESP,0x1c00
// 004da03a: POP EBP
// 004da03b: POP EDI
// 004da03c: POP ESI
// 004da03d: POP EBX
// 004da03e: RET
// 004da03f: PUSH 0x62b326
//   Label: LAB_004da03f
//   XREF to: 0062b326 (DATA)
// 004da044: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004da049: ADD ESP,0x4
// 004da04c: PUSH EAX
// 004da04d: MOV EDX,dword ptr [ESI + 0x30]
// 004da050: PUSH EDX
// 004da051: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004da056: ADD ESP,0x4
// 004da059: PUSH EAX
// 004da05a: PUSH 0x62b28d
//   XREF to: 0062b28d (DATA)
// 004da05f: LEA EAX,[ESP + 0x160c]
//   XREF to: Stack[-0x610] (DATA)
// 004da066: PUSH EAX
// 004da067: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004da06c: ADD ESP,0x10
// 004da06f: PUSH -0x1
// 004da071: PUSH 0x7
// 004da073: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004da079: PUSH ECX
// 004da07a: MOV EDI,dword ptr [0x02d831c4]
//   XREF to: 02d831c4 (READ)
// 004da080: PUSH EDI
// 004da081: LEA EAX,[ESP + 0x1610]
//   XREF to: Stack[-0x610] (DATA)
// 004da088: PUSH EAX
// 004da089: MOV EBP,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004da08f: PUSH EBP
// 004da090: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004da095: MOV EAX,[0x02d831cc]
//   XREF to: 02d831cc (READ)
// 004da09a: ADD dword ptr [0x02d831c8],EAX
//   XREF to: 02d831c8 (READ_WRITE)
// 004da0a0: SHL EAX,0x2
// 004da0a3: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004da0a9: MOV ECX,dword ptr [0x02d831c8]
//   XREF to: 02d831c8 (READ)
// 004da0af: SUB EDX,EAX
// 004da0b1: ADD ESP,0x18
// 004da0b4: JMP 0x004d9035
//   XREF to: 004d9035 (UNCONDITIONAL_JUMP)
// 004da0b9: MOV EDX,dword ptr [0x02d831cc]
//   Label: LAB_004da0b9
//   XREF to: 02d831cc (READ)
// 004da0bf: LEA EAX,[EDX*0x4 + 0x0]
// 004da0c6: MOV ECX,0x3
// 004da0cb: SUB EAX,EDX
// 004da0cd: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004da0d3: ADD EAX,EAX
// 004da0d5: MOV EDX,EBX
// 004da0d7: MOV [0x02d831c8],EAX
//   XREF to: 02d831c8 (WRITE)
// 004da0dc: SAR EDX,0x1f
// 004da0df: MOV EAX,EBX
// 004da0e1: IDIV ECX
// 004da0e3: ADD dword ptr [0x02d831c4],EAX
//   XREF to: 02d831c4 (READ_WRITE)
// 004da0e9: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004da0ef: ADD ESP,0x1c00
// 004da0f5: POP EBP
// 004da0f6: POP EDI
// 004da0f7: POP ESI
// 004da0f8: POP EBX
// 004da0f9: RET
