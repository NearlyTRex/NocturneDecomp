// Name: core_game.cpp_CGame_showCustomizableKeys_FUN_004d89d0
// Address: 004d89d0
// Address Range: [[004d89d0, 004da0f9]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_showCustomizableKeys_FUN_004d89d0(CGame * this_ptr)

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
