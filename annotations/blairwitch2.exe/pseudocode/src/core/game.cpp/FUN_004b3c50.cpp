// Name: core_game.cpp_FUN_004b3c50
// Address: 004b3c50
// Address Range: [[004b3c50, 004b5188]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004b3c50(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004b3c50(CGame *this_ptr)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  byte local_1910 [256];
  byte local_1810 [256];
  byte local_1710 [256];
  byte local_1610 [256];
  byte local_1510 [256];
  byte local_1410 [256];
  byte local_1310 [256];
  byte local_1210 [256];
  byte local_1110 [256];
  byte local_1010 [256];
  byte local_f10 [256];
  byte local_e10 [256];
  byte local_d10 [256];
  byte local_c10 [256];
  byte local_b10 [256];
  byte local_a10 [256];
  byte local_910 [256];
  byte local_810 [256];
  byte local_710 [256];
  byte local_610 [256];
  byte local_510 [256];
  byte local_410 [256];
  byte local_310 [256];
  byte local_210 [256];
  byte local_110 [256];
  
  engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
  _DAT_01cb80f0 = engine_font_cpp_FUN_004ab560(_DAT_01511cc0,0x58);
  _DAT_01cb80f4 = engine_font_cpp_FUN_004ab530(_DAT_01511cc0,0x58);
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
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Forward");
  uVar2 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(*(uint *)&this_ptr->field_0x28,pcVar1);
  FUN_005b7790(local_1210,"?%s = %s" + 1,uVar2);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_1210,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005d73c2);
  uVar2 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(*(uint *)&this_ptr->field_0x2c,pcVar1);
  FUN_005b7790(local_b10,"?%s = %s" + 1,uVar2);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_b10,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  if (*(int *)&g_CGamePtr->field_0xac == 0) {
    pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005d73cc);
    uVar2 = core_menu_cpp_getKeyDisplayName_FUN_004ee960
                      (*(uint *)&this_ptr->field_0x30,pcVar1);
    FUN_005b7790(local_1810,"?%s = %s" + 1,uVar2);
    engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_1810,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
    _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
    iVar3 = DAT_006141bc + _DAT_01cb80f0 * -4;
  }
  else {
    pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005d73c7);
    uVar2 = core_menu_cpp_getKeyDisplayName_FUN_004ee960
                      (*(uint *)&this_ptr->field_0x30,pcVar1);
    FUN_005b7790(local_210,"?%s = %s" + 1,uVar2);
    engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_210,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
    _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
    iVar3 = DAT_006141bc + _DAT_01cb80f0 * -4;
  }
  if (iVar3 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Strafe on");
  uVar2 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(*(uint *)&this_ptr->field_0x34,pcVar1);
  FUN_005b7790(local_1110,"?%s = %s" + 1,uVar2);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_1110,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Strafe left");
  uVar2 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(*(uint *)&this_ptr->field_0x38,pcVar1);
  FUN_005b7790(local_1910,"?%s = %s" + 1,uVar2);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_1910,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Strafe right");
  uVar2 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(*(uint *)&this_ptr->field_0x3c,pcVar1);
  FUN_005b7790(local_610,"?%s = %s" + 1,uVar2);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_610,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Turn left");
  uVar2 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(*(uint *)&this_ptr->field_0x44,pcVar1);
  FUN_005b7790(local_410,"?%s = %s" + 1,uVar2);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_410,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Turn right");
  uVar2 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(*(uint *)&this_ptr->field_0x40,pcVar1);
  FUN_005b7790(local_1310,"?%s = %s" + 1,uVar2);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_1310,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Fire / Action");
  uVar2 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(*(uint *)&this_ptr->field_0x48,pcVar1);
  FUN_005b7790(local_c10,"?%s = %s" + 1,uVar2);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_c10,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Use item");
  uVar2 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(*(uint *)&this_ptr->field_0x4c,pcVar1);
  FUN_005b7790(local_510,"?%s = %s" + 1,uVar2);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_510,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Lantern");
  uVar2 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(*(uint *)&this_ptr->field_0x50,pcVar1);
  FUN_005b7790(local_a10,"?%s = %s" + 1,uVar2);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_a10,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005d7427);
  uVar2 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(*(uint *)&this_ptr->field_0x68,pcVar1);
  FUN_005b7790(local_1410,"?%s = %s" + 1,uVar2);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_1410,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Point up");
  uVar2 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(*(uint *)&this_ptr->field_0x74,pcVar1);
  FUN_005b7790(local_d10,"?%s = %s" + 1,uVar2);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_d10,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Point down");
  uVar2 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(*(uint *)&this_ptr->field_0x78,pcVar1);
  FUN_005b7790(local_1510,"?%s = %s" + 1,uVar2);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_1510,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Select Revolver");
  uVar2 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(*(uint *)&this_ptr->field_0x7c,pcVar1);
  FUN_005b7790(local_e10,"?%s = %s" + 1,uVar2);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_e10,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Select Sword / Axe");
  uVar2 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(*(uint *)&this_ptr->field_0x80,pcVar1);
  FUN_005b7790(local_710,"?%s = %s" + 1,uVar2);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_710,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Select Cross");
  uVar2 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(*(uint *)&this_ptr->field_0x84,pcVar1);
  FUN_005b7790(local_310,"?%s = %s" + 1,uVar2);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_310,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Next weapon");
  uVar2 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(*(uint *)&this_ptr->field_0x90,pcVar1);
  FUN_005b7790(local_810,"?%s = %s" + 1,uVar2);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_810,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Previous weapon");
  uVar2 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(*(uint *)&this_ptr->field_0x94,pcVar1);
  FUN_005b7790(local_110,"?%s = %s" + 1,uVar2);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_110,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Next item");
  uVar2 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(*(uint *)&this_ptr->field_0x98,pcVar1);
  FUN_005b7790(local_1610,"?%s = %s" + 1,uVar2);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_1610,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Previous item");
  uVar2 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(*(uint *)&this_ptr->field_0x9c,pcVar1);
  FUN_005b7790(local_f10,"?%s = %s" + 1,uVar2);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_f10,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Item description");
  uVar2 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(*(uint *)&this_ptr->field_0xa0,pcVar1);
  FUN_005b7790(local_1710,"?%s = %s" + 1,uVar2);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_1710,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Next ammo");
  uVar2 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(*(uint *)&this_ptr->field_0xa4,pcVar1);
  FUN_005b7790(local_1010,"?%s = %s" + 1,uVar2);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_1010,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Drop Item or Weapon");
  uVar2 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(*(uint *)&this_ptr->field_0xaf0,pcVar1)
  ;
  FUN_005b7790(local_910,"?%s = %s" + 1,uVar2);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc0,local_910,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (_DAT_01cb80ec <= DAT_006141bc + _DAT_01cb80f0 * -4) {
    return;
  }
  _DAT_01cb80ec = _DAT_01cb80f0 * 6;
  _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  return;
}
