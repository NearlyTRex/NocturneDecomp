// Name: core_game.cpp_CGame_showCustomizableKeys_FUN_004d89d0
// Address: 004d89d0
// Address Range: [[004d89d0, 004da0f9]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_showCustomizableKeys_FUN_004d89d0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_showCustomizableKeys_FUN_004d89d0(CGame *this_ptr)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char local_1c10 [256];
  char local_1b10 [256];
  char local_1a10 [256];
  char local_1910 [256];
  char local_1810 [256];
  char local_1710 [256];
  char local_1610 [256];
  char local_1510 [256];
  char local_1410 [256];
  char local_1310 [256];
  char local_1210 [256];
  char local_1110 [256];
  char local_1010 [256];
  char local_f10 [256];
  char local_e10 [256];
  char local_d10 [256];
  char local_c10 [256];
  char local_b10 [256];
  char local_a10 [256];
  char local_910 [256];
  char local_810 [256];
  char local_710 [256];
  char local_610 [256];
  char local_510 [256];
  char local_410 [256];
  char local_310 [256];
  char local_210 [256];
  char local_110 [256];
  
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  INT_02d831cc = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_ThemeFont,0x58);
  INT_02d831d0 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01a0(g_ThemeFont,0x58);
  INT_02d831c8 = INT_02d831cc << 2;
  INT_02d831c4 = INT_02d831d0 << 2;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Quick help");
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,pcVar1,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("F1 = Toggle help");
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,pcVar1,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("F2 = Save game");
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,pcVar1,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("F3 = Restore game");
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,pcVar1,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("F5 = Toggle mute");
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,pcVar1,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("F6 = Quick save");
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,pcVar1,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("F9 = Quick load");
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,pcVar1,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("ESC = Pause game");
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,pcVar1,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Forward");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_walk);
  sprintf(local_1810,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,local_1810,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Back");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_backup);
  sprintf(local_1110,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,local_1110,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  if (g_CGamePtr->always_run == 0) {
    pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Run");
    pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_run);
    sprintf(local_610,"%s = %s",pcVar2,pcVar1);
    engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
              (g_ThemeFont,local_610,INT_02d831c4,INT_02d831c8,7,-1);
    INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
    iVar3 = g_WindowHeight + INT_02d831cc * -4;
  }
  else {
    pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Walk");
    pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_run);
    sprintf(local_910,"%s = %s",pcVar2,pcVar1);
    engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
              (g_ThemeFont,local_910,INT_02d831c4,INT_02d831c8,7,-1);
    INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
    iVar3 = g_WindowHeight + INT_02d831cc * -4;
  }
  if (iVar3 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Strafe on");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_strafe);
  sprintf(local_1a10,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,local_1a10,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Strafe left");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_strafe_left);
  sprintf(local_1310,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,local_1310,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Strafe right");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_strafe_right);
  sprintf(local_c10,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,local_c10,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Turn left");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_left);
  sprintf(local_510,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,local_510,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Turn right");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_right);
  sprintf(local_710,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,local_710,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Fire / Action");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_fire);
  sprintf(local_810,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,local_810,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Use item");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_use_item);
  sprintf(local_210,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,local_210,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Light");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_light);
  sprintf(local_a10,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,local_a10,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Night Vision");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_infrared);
  sprintf(local_310,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,local_310,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Draw");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_draw);
  sprintf(local_1b10,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,local_1b10,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Point up");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_point_up);
  sprintf(local_1410,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,local_1410,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Point down");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_point_down);
  sprintf(local_d10,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,local_d10,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Jump");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_jump);
  sprintf(local_1610,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,local_1610,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Cycle pistol weapons");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_weapon_1);
  sprintf(local_f10,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,local_f10,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Cycle assault weapons");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_weapon_2);
  sprintf(local_1910,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,local_1910,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Cycle flame weapons");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_weapon_3);
  sprintf(local_1210,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,local_1210,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Cycle grenade weapons");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_weapon_4);
  sprintf(local_b10,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,local_b10,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Cycle melee weapons");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_weapon_5);
  sprintf(local_410,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,local_410,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Next weapon");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_next_weapon);
  sprintf(local_1c10,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,local_1c10,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Previous weapon");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_prev_weapon);
  sprintf(local_1510,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,local_1510,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Next item");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_next_item);
  sprintf(local_e10,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,local_e10,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Previous item");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_prev_item);
  sprintf(local_1710,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,local_1710,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Item description");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_item_desc);
  sprintf(local_1010,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,local_1010,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (g_WindowHeight + INT_02d831cc * -4 < INT_02d831c8) {
    INT_02d831c8 = INT_02d831cc * 6;
    INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Next ammo");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_next_ammo);
  sprintf(local_110,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_ThemeFont,local_110,INT_02d831c4,INT_02d831c8,7,-1);
  INT_02d831c8 = INT_02d831c8 + INT_02d831cc;
  if (INT_02d831c8 <= g_WindowHeight + INT_02d831cc * -4) {
    return;
  }
  INT_02d831c8 = INT_02d831cc * 6;
  INT_02d831c4 = INT_02d831c4 + g_WindowWidth / 3;
  return;
}
