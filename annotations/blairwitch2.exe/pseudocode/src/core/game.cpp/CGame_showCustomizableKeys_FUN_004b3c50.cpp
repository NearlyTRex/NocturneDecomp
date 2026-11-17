// Name: core_game.cpp_CGame_showCustomizableKeys_FUN_004b3c50
// Address: 004b3c50
// Address Range: [[004b3c50, 004b5188]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_showCustomizableKeys_FUN_004b3c50(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_showCustomizableKeys_FUN_004b3c50(CGame *this_ptr)

{
  char *pcVar1;
  int iVar2;
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
  
  engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
  g_HelpLineHeight = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(g_ThemeFont,0x58);
  g_HelpCharWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004ab530(g_ThemeFont,0x58);
  g_HelpCursorY = g_HelpLineHeight << 2;
  g_HelpCursorX = g_HelpCharWidth << 2;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Quick help");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,pcVar1,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("F1 = Toggle help");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,pcVar1,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("F2 = Save game");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,pcVar1,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("F3 = Restore game");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,pcVar1,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("F5 = Toggle mute");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,pcVar1,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("F6 = Quick save");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,pcVar1,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("F9 = Quick load");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,pcVar1,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("ESC = Pause game");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,pcVar1,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Forward");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_walk);
  _sprintf(local_1210,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,local_1210,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Back");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_backup);
  _sprintf(local_b10,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,local_b10,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  if (g_CGamePtr->always_run == 0) {
    support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Run");
    core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_run);
    _sprintf(local_1810,"%s = %s");
    engine_font_cpp_CBitFont_drawText_FUN_004a8df0
              (g_ThemeFont,local_1810,g_HelpCursorX,g_HelpCursorY,7,-1);
    g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
    iVar2 = g_INT_006141bc + g_HelpLineHeight * -4;
  }
  else {
    support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Walk");
    core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_run);
    _sprintf(local_210,"%s = %s");
    engine_font_cpp_CBitFont_drawText_FUN_004a8df0
              (g_ThemeFont,local_210,g_HelpCursorX,g_HelpCursorY,7,-1);
    g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
    iVar2 = g_INT_006141bc + g_HelpLineHeight * -4;
  }
  if (iVar2 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Strafe on");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_strafe);
  _sprintf(local_1110,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,local_1110,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Strafe left");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_strafe_left);
  _sprintf(local_1910,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,local_1910,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Strafe right");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_strafe_right);
  _sprintf(local_610,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,local_610,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Turn left");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_left);
  _sprintf(local_410,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,local_410,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Turn right");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_right);
  _sprintf(local_1310,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,local_1310,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Fire / Action");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_fire);
  _sprintf(local_c10,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,local_c10,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Use item");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_use_item);
  _sprintf(local_510,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,local_510,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Lantern");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_light);
  _sprintf(local_a10,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,local_a10,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Draw");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_draw);
  _sprintf(local_1410,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,local_1410,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Point up");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_point_up);
  _sprintf(local_d10,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,local_d10,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Point down");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_point_down);
  _sprintf(local_1510,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,local_1510,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Select Revolver");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_weapon_1);
  _sprintf(local_e10,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,local_e10,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Select Sword / Axe");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_weapon_2);
  _sprintf(local_710,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,local_710,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Select Cross");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_weapon_3);
  _sprintf(local_310,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,local_310,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Next weapon");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_next_weapon);
  _sprintf(local_810,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,local_810,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Previous weapon");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_prev_weapon);
  _sprintf(local_110,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,local_110,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Next item");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_next_item);
  _sprintf(local_1610,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,local_1610,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Previous item");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_prev_item);
  _sprintf(local_f10,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,local_f10,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Item description");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_item_desc);
  _sprintf(local_1710,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,local_1710,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Next ammo");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_next_ammo);
  _sprintf(local_1010,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,local_1010,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_INT_006141bc + g_HelpLineHeight * -4 < g_HelpCursorY) {
    g_HelpCursorY = g_HelpLineHeight * 6;
    g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Drop Item or Weapon");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_drop);
  _sprintf(local_910,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_ThemeFont,local_910,g_HelpCursorX,g_HelpCursorY,7,-1);
  g_HelpCursorY = g_HelpCursorY + g_HelpLineHeight;
  if (g_HelpCursorY <= g_INT_006141bc + g_HelpLineHeight * -4) {
    return;
  }
  g_HelpCursorY = g_HelpLineHeight * 6;
  g_HelpCursorX = g_HelpCursorX + g_INT_006141b8 / 3;
  return;
}
