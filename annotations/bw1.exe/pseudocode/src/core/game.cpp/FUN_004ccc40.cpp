// Name: core_game.cpp_FUN_004ccc40
// Address: 004ccc40
// Address Range: [[004ccc40, 004ce572]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004ccc40(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004ccc40(CGame *this_ptr)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  byte local_1f10 [256];
  byte local_1e10 [256];
  byte local_1d10 [256];
  byte local_1c10 [256];
  byte local_1b10 [256];
  byte local_1a10 [256];
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
  
  engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
  _DAT_01cd0c54 = engine_font_cpp_FUN_004c4510(_DAT_0152d244,0x58);
  _DAT_01cd0c58 = engine_font_cpp_FUN_004c44e0(_DAT_0152d244,0x58);
  _DAT_01cd0c50 = _DAT_01cd0c54 << 2;
  _DAT_01cd0c4c = _DAT_01cd0c58 << 2;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Quick help");
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,pcVar1,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("F1 = Toggle help");
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,pcVar1,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("F2 = Save game");
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,pcVar1,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("F3 = Restore game");
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,pcVar1,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("F5 = Toggle mute");
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,pcVar1,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("F6 = Quick save");
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,pcVar1,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("F9 = Quick load");
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,pcVar1,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("ESC = Pause game");
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,pcVar1,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Forward");
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x28);
  FUN_005bfb40(local_1d10,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_1d10,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e1453);
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x2c);
  FUN_005bfb40(local_1610,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_1610,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  if (*(int *)&g_CGamePtr->field_0xac == 0) {
    pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e145d);
    pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x30);
    FUN_005bfb40(local_1810,"?%s = %s" + 1,pcVar2,pcVar1);
    engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_1810,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
    _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
    iVar3 = DAT_0061b49c + _DAT_01cd0c54 * -4;
  }
  else {
    pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e1458);
    pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x30);
    FUN_005bfb40(local_1f10,"?%s = %s" + 1,pcVar2,pcVar1);
    engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_1f10,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
    _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
    iVar3 = DAT_0061b49c + _DAT_01cd0c54 * -4;
  }
  if (iVar3 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Strafe on");
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x34);
  FUN_005bfb40(local_1110,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_1110,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Strafe left");
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x38);
  FUN_005bfb40(local_1c10,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_1c10,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Strafe right");
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x3c);
  FUN_005bfb40(local_1510,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_1510,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Turn left");
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x44);
  FUN_005bfb40(local_d10,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_d10,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Turn right");
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x40);
  FUN_005bfb40(local_610,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_610,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Fire / Action");
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x48);
  FUN_005bfb40(local_810,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_810,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Use item");
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x4c);
  FUN_005bfb40(local_a10,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_a10,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Flashlight");
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x50);
  FUN_005bfb40(local_310,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_310,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Night Vision");
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x54);
  FUN_005bfb40(local_910,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_910,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Journal");
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x58);
  FUN_005bfb40(local_210,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_210,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e14d0);
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x5c);
  FUN_005bfb40(local_110,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_110,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Compass");
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x60);
  FUN_005bfb40(local_1b10,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_1b10,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e14dc);
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x64);
  FUN_005bfb40(local_1410,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_1410,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e14e0);
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x68);
  FUN_005bfb40(local_1e10,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_1e10,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Point up");
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x74);
  FUN_005bfb40(local_1710,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_1710,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Point down");
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x78);
  FUN_005bfb40(local_1010,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_1010,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Quick turn");
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x70);
  FUN_005bfb40(local_1210,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_1210,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Cycle pistol weapons");
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x7c);
  FUN_005bfb40(local_b10,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_b10,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Cycle assault weapons");
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x80);
  FUN_005bfb40(local_410,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_410,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Cycle energy weapons");
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x84);
  FUN_005bfb40(local_510,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_510,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Cycle melee weapons");
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x8c);
  FUN_005bfb40(local_710,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_710,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Next weapon");
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x90);
  FUN_005bfb40(local_1a10,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_1a10,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Previous weapon");
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x94);
  FUN_005bfb40(local_1310,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_1310,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Next item");
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x98);
  FUN_005bfb40(local_c10,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_c10,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Previous item");
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0x9c);
  FUN_005bfb40(local_e10,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_e10,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Item description");
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0xa0);
  FUN_005bfb40(local_f10,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_f10,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Next ammo");
  pcVar2 = core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&this_ptr->field_0xa4);
  FUN_005bfb40(local_1910,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004c1dd0(_DAT_0152d244,local_1910,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (_DAT_01cd0c50 <= DAT_0061b49c + _DAT_01cd0c54 * -4) {
    return;
  }
  _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
  _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  return;
}
