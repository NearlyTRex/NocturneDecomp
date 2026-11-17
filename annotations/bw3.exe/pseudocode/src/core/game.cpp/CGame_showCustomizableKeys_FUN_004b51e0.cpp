// Name: core_game.cpp_CGame_showCustomizableKeys_FUN_004b51e0
// Address: 004b51e0
// Address Range: [[004b51e0, 004b6f2c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_showCustomizableKeys_FUN_004b51e0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_showCustomizableKeys_FUN_004b51e0(CGame *this_ptr)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
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
  
  engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
  g_INT_01d22c5c = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(g_CBitFont_PTR_01549aa8,0x58)
  ;
  g_HelpCharWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004b30c0(g_CBitFont_PTR_01549aa8,0x58)
  ;
  g_INT_01d22c58 = g_INT_01d22c5c << 2;
  g_INT_01d22c54 = g_HelpCharWidth << 2;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Quick help");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,pcVar1,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,pcVar1,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("F1 = Toggle help");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,pcVar1,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,pcVar1,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("F2 = Save game");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,pcVar1,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,pcVar1,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("F3 = Restore game");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,pcVar1,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,pcVar1,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("F5 = Toggle mute");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,pcVar1,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,pcVar1,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("F6 = Quick save");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,pcVar1,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,pcVar1,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("F9 = Quick load");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,pcVar1,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,pcVar1,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("ESC = Pause game");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,pcVar1,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,pcVar1,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Forward");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_walk);
  _sprintf(local_1210,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_1210,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_1210,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Back");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_backup);
  _sprintf(local_910,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_910,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_910,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  if (g_CGamePtr->always_run == 0) {
    support_newmsg_cpp_getLocalizedString_FUN_00508960("Run");
    core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_run);
    _sprintf(local_b10,"%s = %s");
    engine_font_cpp_CBitFont_drawText_FUN_004b0a20
              (g_CBitFont_PTR_01549aa8,local_b10,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
    engine_font_cpp_CBitFont_drawText_FUN_004b0a20
              (g_CBitFont_PTR_01549aa8,local_b10,g_INT_01d22c54,g_INT_01d22c58,7,-1);
    g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
    iVar2 = g_INT_005fba1c + g_INT_01d22c5c * -4;
    bVar3 = SBORROW4(iVar2,g_INT_01d22c58);
    iVar2 = iVar2 - g_INT_01d22c58;
  }
  else {
    support_newmsg_cpp_getLocalizedString_FUN_00508960("Walk");
    core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_run);
    _sprintf(local_1410,"%s = %s");
    engine_font_cpp_CBitFont_drawText_FUN_004b0a20
              (g_CBitFont_PTR_01549aa8,local_1410,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
    engine_font_cpp_CBitFont_drawText_FUN_004b0a20
              (g_CBitFont_PTR_01549aa8,local_1410,g_INT_01d22c54,g_INT_01d22c58,7,-1);
    g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
    iVar2 = g_INT_005fba1c + g_INT_01d22c5c * -4;
    bVar3 = SBORROW4(iVar2,g_INT_01d22c58);
    iVar2 = iVar2 - g_INT_01d22c58;
  }
  if (bVar3 != iVar2 < 0) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Strafe on");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_strafe);
  _sprintf(local_1710,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_1710,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_1710,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Strafe left");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_strafe_left);
  _sprintf(local_e10,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_e10,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_e10,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Strafe right");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_strafe_right);
  _sprintf(local_1010,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_1010,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_1010,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Turn left");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_left);
  _sprintf(local_410,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_410,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_410,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Turn right");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_right);
  _sprintf(local_210,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_210,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_210,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Fire");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_fire);
  _sprintf(local_1510,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_1510,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_1510,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Use item");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_use_item);
  _sprintf(local_c10,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_c10,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_c10,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Lantern");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_light);
  _sprintf(local_1810,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_1810,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_1810,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Journal");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_field_notes);
  _sprintf(local_f10,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_f10,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_f10,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Map");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_map);
  _sprintf(local_1c10,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_1c10,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_1c10,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Voodoo Doll");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_voodoo_doll);
  _sprintf(local_1310,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_1310,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_1310,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Draw");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_draw);
  _sprintf(local_a10,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_a10,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_a10,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Point up");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_point_up);
  _sprintf(local_610,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_610,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_610,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Point down");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_point_down);
  _sprintf(local_310,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_310,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_310,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Quick turn");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_quick_turn);
  _sprintf(local_1a10,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_1a10,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_1a10,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Cycle conventional weapons");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_weapon_1);
  _sprintf(local_1110,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_1110,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_1110,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Cycle staves");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_weapon_2);
  _sprintf(local_810,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_810,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_810,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Cycle Christian weapons");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_weapon_3);
  _sprintf(local_110,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_110,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_110,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Cycle Shaman weapons");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_weapon_4);
  _sprintf(local_510,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_510,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_510,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Cycle Pagan weapons");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_weapon_5);
  _sprintf(local_1610,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_1610,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_1610,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Next weapon");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_next_weapon);
  _sprintf(local_d10,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_d10,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_d10,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Previous weapon");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_prev_weapon);
  _sprintf(local_1910,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_1910,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_1910,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Next item");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_next_item);
  _sprintf(local_1b10,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_1b10,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_1b10,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_005fba1c + g_INT_01d22c5c * -4 < g_INT_01d22c58) {
    g_INT_01d22c58 = g_INT_01d22c5c * 6;
    g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Previous item");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(this_ptr->key_prev_item);
  _sprintf(local_710,"%s = %s");
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_710,g_INT_01d22c54 + 2,g_INT_01d22c58 + 2,0,-1);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01549aa8,local_710,g_INT_01d22c54,g_INT_01d22c58,7,-1);
  g_INT_01d22c58 = g_INT_01d22c58 + g_INT_01d22c5c;
  if (g_INT_01d22c58 <= g_INT_005fba1c + g_INT_01d22c5c * -4) {
    return;
  }
  g_INT_01d22c58 = g_INT_01d22c5c * 6;
  g_INT_01d22c54 = g_INT_01d22c54 + g_INT_005fba18 / 3;
  return;
}
