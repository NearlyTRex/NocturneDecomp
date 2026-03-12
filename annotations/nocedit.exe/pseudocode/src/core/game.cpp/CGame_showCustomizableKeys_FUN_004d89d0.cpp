// Name: core_game.cpp_CGame_showCustomizableKeys_FUN_004d89d0
// Address: 004d89d0
// Address Range: [[004d89d0, 004da0f9]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_showCustomizableKeys_FUN_004d89d0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_showCustomizableKeys_FUN_004d89d0(CGame *this_ptr)

{
  char *pcVar1;
  char *pcVar3;
  char *pcVar2;
  char *pcVar4;
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
  g_HelpLineHeight = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_ThemeFont,0x58);
  g_HelpCharWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01a0(g_ThemeFont,0x58);
  g_HelpCursorY = g_HelpLineHeight << 2;
  g_HelpCursorX = g_HelpCharWidth << 2;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Quick help");
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,pcVar1,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("F1 = Toggle help");
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,pcVar3,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("F2 = Save game");
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,pcVar3,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("F3 = Restore game");
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,pcVar3,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("F5 = Toggle mute");
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,pcVar3,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("F6 = Quick save");
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,pcVar3,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("F9 = Quick load");
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,pcVar3,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("ESC = Pause game");
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,pcVar3,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Forward");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_walk);
  _sprintf(local_1810,"%s = %s",pcVar2,pcVar3);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,local_1810,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Back");
  pcVar4 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_backup);
  _sprintf(local_1110,"%s = %s",pcVar4,pcVar3);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,local_1110,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  if (g_CGamePtr->always_run == 0) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Run");
    pcVar4 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_run);
    _sprintf(local_610,"%s = %s",pcVar4,pcVar3);
    engine_font_cpp_CBitFont_drawText_FUN_004cda80
              (g_ThemeFont,local_610,g_HelpCursorX,g_HelpCursorY,7,-1);
    g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
    iVar3 = g_WindowHeight + g_HelpLineHeight * -4;
  }
  else {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Walk");
    pcVar4 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_run);
    _sprintf(local_910,"%s = %s",pcVar4,pcVar3);
    engine_font_cpp_CBitFont_drawText_FUN_004cda80
              (g_ThemeFont,local_910,g_HelpCursorX,g_HelpCursorY,7,-1);
    g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
    iVar3 = g_WindowHeight + g_HelpLineHeight * -4;
  }
  if (iVar3 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Strafe on");
  pcVar4 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_strafe);
  _sprintf(local_1a10,"%s = %s",pcVar4,pcVar3);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,local_1a10,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Strafe left");
  pcVar4 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_strafe_left);
  _sprintf(local_1310,"%s = %s",pcVar4,pcVar3);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,local_1310,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Strafe right");
  pcVar4 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_strafe_right);
  _sprintf(local_c10,"%s = %s",pcVar4,pcVar3);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,local_c10,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Turn left");
  pcVar4 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_left);
  _sprintf(local_510,"%s = %s",pcVar4,pcVar3);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,local_510,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Turn right");
  pcVar4 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_right);
  _sprintf(local_710,"%s = %s",pcVar4,pcVar3);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,local_710,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Fire / Action");
  pcVar4 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_fire);
  _sprintf(local_810,"%s = %s",pcVar4,pcVar3);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,local_810,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Use item");
  pcVar4 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_use_item);
  _sprintf(local_210,"%s = %s",pcVar4,pcVar3);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,local_210,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Light");
  pcVar4 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_light);
  _sprintf(local_a10,"%s = %s",pcVar4,pcVar3);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,local_a10,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Night Vision");
  pcVar4 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_infrared);
  _sprintf(local_310,"%s = %s",pcVar4,pcVar3);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,local_310,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Draw");
  pcVar4 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_draw);
  _sprintf(local_1b10,"%s = %s",pcVar4,pcVar3);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,local_1b10,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Point up");
  pcVar4 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_point_up);
  _sprintf(local_1410,"%s = %s",pcVar4,pcVar3);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,local_1410,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Point down");
  pcVar4 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_point_down);
  _sprintf(local_d10,"%s = %s",pcVar4,pcVar3);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,local_d10,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Jump");
  pcVar4 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_jump);
  _sprintf(local_1610,"%s = %s",pcVar4,pcVar3);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,local_1610,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Cycle pistol weapons");
  pcVar4 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_weapon_1);
  _sprintf(local_f10,"%s = %s",pcVar4,pcVar3);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,local_f10,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Cycle assault weapons");
  pcVar4 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_weapon_2);
  _sprintf(local_1910,"%s = %s",pcVar4,pcVar3);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,local_1910,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Cycle flame weapons");
  pcVar4 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_weapon_3);
  _sprintf(local_1210,"%s = %s",pcVar4,pcVar3);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,local_1210,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Cycle grenade weapons");
  pcVar4 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_weapon_4);
  _sprintf(local_b10,"%s = %s",pcVar4,pcVar3);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,local_b10,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Cycle melee weapons");
  pcVar4 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_weapon_5);
  _sprintf(local_410,"%s = %s",pcVar4,pcVar3);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,local_410,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Next weapon");
  pcVar4 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_next_weapon);
  _sprintf(local_1c10,"%s = %s",pcVar4,pcVar3);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,local_1c10,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Previous weapon");
  pcVar4 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_prev_weapon);
  _sprintf(local_1510,"%s = %s",pcVar4,pcVar3);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,local_1510,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Next item");
  pcVar4 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_next_item);
  _sprintf(local_e10,"%s = %s",pcVar4,pcVar3);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,local_e10,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Previous item");
  pcVar4 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_prev_item);
  _sprintf(local_1710,"%s = %s",pcVar4,pcVar3);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,local_1710,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Item description");
  pcVar4 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_item_desc);
  _sprintf(local_1010,"%s = %s",pcVar4,pcVar3);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,local_1010,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_WindowHeight + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Next ammo");
  pcVar4 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(this_ptr->key_next_ammo);
  _sprintf(local_110,"%s = %s",pcVar4,pcVar3);
  engine_font_cpp_CBitFont_drawText_FUN_004cda80
            (g_ThemeFont,local_110,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_HelpCursorY <= g_WindowHeight + g_HelpLineHeight * -4) {
    return;
  }
  g_HelpCursorY = g_HelpLineHeight * 6;
  g_HelpCursorX = g_HelpCursorX + g_WindowWidth / 3;
  return;
}
