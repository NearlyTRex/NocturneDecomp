// Name: core_game.cpp_CGame_showCustomizableKeys_FUN_004ccc40
// Address: 004ccc40
// Address Range: [[004ccc40, 004ce572]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_showCustomizableKeys_FUN_004ccc40(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_showCustomizableKeys_FUN_004ccc40(CGame *this_ptr)

{
  char *pcVar1;
  int iVar2;
  char local_1f10 [256];
  char local_1e10 [256];
  char local_1d10 [256];
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
  
  engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
  g_INT_01cd0c54 = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(g_CBitFont_PTR_0152d244,0x58)
  ;
  g_INT_01cd0c58 = engine_font_cpp_CBitFont_getCharWidth_FUN_004c44e0(g_CBitFont_PTR_0152d244,0x58);
  g_INT_01cd0c50 = g_INT_01cd0c54 << 2;
  g_INT_01cd0c4c = g_INT_01cd0c58 << 2;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Quick help");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,pcVar1,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("F1 = Toggle help");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,pcVar1,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("F2 = Save game");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,pcVar1,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("F3 = Restore game");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,pcVar1,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("F5 = Toggle mute");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,pcVar1,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("F6 = Quick save");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,pcVar1,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("F9 = Quick load");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,pcVar1,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("ESC = Pause game");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,pcVar1,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Forward");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_walk);
  _sprintf(local_1d10,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_1d10,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Back");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_backup);
  _sprintf(local_1610,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_1610,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  if (g_CGamePtr->always_run == 0) {
    support_newmsg_cpp_getLocalizedString_FUN_00531090("Run");
    core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_run);
    _sprintf(local_1810,"%s = %s");
    engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
              (g_CBitFont_PTR_0152d244,local_1810,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
    g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
    iVar2 = g_INT_0061b49c + g_INT_01cd0c54 * -4;
  }
  else {
    support_newmsg_cpp_getLocalizedString_FUN_00531090("Walk");
    core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_run);
    _sprintf(local_1f10,"%s = %s");
    engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
              (g_CBitFont_PTR_0152d244,local_1f10,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
    g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
    iVar2 = g_INT_0061b49c + g_INT_01cd0c54 * -4;
  }
  if (iVar2 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Strafe on");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_strafe);
  _sprintf(local_1110,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_1110,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Strafe left");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_strafe_left);
  _sprintf(local_1c10,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_1c10,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Strafe right");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_strafe_right);
  _sprintf(local_1510,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_1510,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Turn left");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_left);
  _sprintf(local_d10,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_d10,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Turn right");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_right);
  _sprintf(local_610,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_610,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Fire / Action");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_fire);
  _sprintf(local_810,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_810,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Use item");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_use_item);
  _sprintf(local_a10,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_a10,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Flashlight");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_light);
  _sprintf(local_310,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_310,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Night Vision");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_infrared);
  _sprintf(local_910,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_910,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Journal");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_field_notes);
  _sprintf(local_210,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_210,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Map");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_map);
  _sprintf(local_110,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_110,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Compass");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_compass);
  _sprintf(local_1b10,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_1b10,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("SPS");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_sps);
  _sprintf(local_1410,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_1410,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Draw");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_draw);
  _sprintf(local_1e10,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_1e10,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Point up");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_point_up);
  _sprintf(local_1710,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_1710,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Point down");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_point_down);
  _sprintf(local_1010,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_1010,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Quick turn");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_quick_turn);
  _sprintf(local_1210,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_1210,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Cycle pistol weapons");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_weapon_1);
  _sprintf(local_b10,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_b10,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Cycle assault weapons");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_weapon_2);
  _sprintf(local_410,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_410,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Cycle energy weapons");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_weapon_3);
  _sprintf(local_510,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_510,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Cycle melee weapons");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_weapon_5);
  _sprintf(local_710,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_710,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Next weapon");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_next_weapon);
  _sprintf(local_1a10,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_1a10,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Previous weapon");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_prev_weapon);
  _sprintf(local_1310,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_1310,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Next item");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_next_item);
  _sprintf(local_c10,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_c10,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Previous item");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_prev_item);
  _sprintf(local_e10,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_e10,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Item description");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_item_desc);
  _sprintf(local_f10,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_f10,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_0061b49c + g_INT_01cd0c54 * -4 < g_INT_01cd0c50) {
    g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
    g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00531090("Next ammo");
  core_menu_cpp_getKeyDisplayName_FUN_0050d220(this_ptr->key_next_ammo);
  _sprintf(local_1910,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (g_CBitFont_PTR_0152d244,local_1910,g_INT_01cd0c4c,g_INT_01cd0c50,7,-1);
  g_INT_01cd0c50 = g_INT_01cd0c50 + g_INT_01cd0c54;
  if (g_INT_01cd0c50 <= g_INT_0061b49c + g_INT_01cd0c54 * -4) {
    return;
  }
  g_INT_01cd0c50 = g_INT_01cd0c54 * 6;
  g_INT_01cd0c4c = g_INT_01cd0c4c + g_INT_0061b498 / 3;
  return;
}
