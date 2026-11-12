// Name: core_game.cpp_CGame_showCustomizableKeys_FUN_004b3c50
// Address: 004b3c50
// Address Range: [[004b3c50, 004b5188]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_showCustomizableKeys_FUN_004b3c50(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  _DAT_01cb80f0 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(_DAT_01511cc0,0x58);
  _DAT_01cb80f4 = engine_font_cpp_CBitFont_getCharWidth_FUN_004ab530(_DAT_01511cc0,0x58);
  _DAT_01cb80ec = _DAT_01cb80f0 << 2;
  _DAT_01cb80e8 = _DAT_01cb80f4 << 2;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Quick help");
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,pcVar1,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("F1 = Toggle help");
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,pcVar1,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("F2 = Save game");
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,pcVar1,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("F3 = Restore game");
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,pcVar1,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("F5 = Toggle mute");
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,pcVar1,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("F6 = Quick save");
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,pcVar1,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("F9 = Quick load");
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,pcVar1,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("ESC = Pause game");
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,pcVar1,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Forward");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_walk);
  _sprintf(local_1210,"?%s = %s" + 1);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_1210,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005d73c2);
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_backup);
  _sprintf(local_b10,"?%s = %s" + 1);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_b10,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  if (g_CGamePtr->always_run == 0) {
    support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005d73cc);
    core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_run);
    _sprintf(local_1810,"?%s = %s" + 1);
    engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_1810,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
    _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
    iVar2 = DAT_006141bc + _DAT_01cb80f0 * -4;
  }
  else {
    support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005d73c7);
    core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_run);
    _sprintf(local_210,"?%s = %s" + 1);
    engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_210,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
    _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
    iVar2 = DAT_006141bc + _DAT_01cb80f0 * -4;
  }
  if (iVar2 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Strafe on");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_strafe);
  _sprintf(local_1110,"?%s = %s" + 1);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_1110,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Strafe left");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_strafe_left);
  _sprintf(local_1910,"?%s = %s" + 1);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_1910,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Strafe right");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_strafe_right);
  _sprintf(local_610,"?%s = %s" + 1);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_610,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Turn left");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_left);
  _sprintf(local_410,"?%s = %s" + 1);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_410,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Turn right");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_right);
  _sprintf(local_1310,"?%s = %s" + 1);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_1310,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Fire / Action");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_fire);
  _sprintf(local_c10,"?%s = %s" + 1);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_c10,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Use item");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_use_item);
  _sprintf(local_510,"?%s = %s" + 1);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_510,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Lantern");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_light);
  _sprintf(local_a10,"?%s = %s" + 1);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_a10,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005d7427);
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_draw);
  _sprintf(local_1410,"?%s = %s" + 1);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_1410,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Point up");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_point_up);
  _sprintf(local_d10,"?%s = %s" + 1);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_d10,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Point down");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_point_down);
  _sprintf(local_1510,"?%s = %s" + 1);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_1510,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Select Revolver");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_weapon_1);
  _sprintf(local_e10,"?%s = %s" + 1);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_e10,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Select Sword / Axe");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_weapon_2);
  _sprintf(local_710,"?%s = %s" + 1);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_710,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Select Cross");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_weapon_3);
  _sprintf(local_310,"?%s = %s" + 1);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_310,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Next weapon");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_next_weapon);
  _sprintf(local_810,"?%s = %s" + 1);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_810,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Previous weapon");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_prev_weapon);
  _sprintf(local_110,"?%s = %s" + 1);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_110,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Next item");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_next_item);
  _sprintf(local_1610,"?%s = %s" + 1);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_1610,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Previous item");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_prev_item);
  _sprintf(local_f10,"?%s = %s" + 1);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_f10,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Item description");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_item_desc);
  _sprintf(local_1710,"?%s = %s" + 1);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_1710,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Next ammo");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_next_ammo);
  _sprintf(local_1010,"?%s = %s" + 1);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_1010,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Drop Item or Weapon");
  core_menu_cpp_getKeyDisplayName_FUN_004ee960(this_ptr->key_drop);
  _sprintf(local_910,"?%s = %s" + 1);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_910,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (_DAT_01cb80ec <= DAT_006141bc + _DAT_01cb80f0 * -4) {
    return;
  }
  _DAT_01cb80ec = _DAT_01cb80f0 * 6;
  _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  return;
}
