// Name: core_game.cpp_FUN_004b51e0
// Address: 004b51e0
// Address Range: [[004b51e0, 004b6f2c]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004b51e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004b51e0(int param_1)

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
  _DAT_01d22c5c = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(_DAT_01549aa8,0x58);
  _DAT_01d22c60 = engine_font_cpp_CBitFont_getCharWidth_FUN_004b30c0(_DAT_01549aa8,0x58);
  _DAT_01d22c58 = _DAT_01d22c5c << 2;
  _DAT_01d22c54 = _DAT_01d22c60 << 2;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Quick help");
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,pcVar1,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,pcVar1,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("F1 = Toggle help");
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,pcVar1,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,pcVar1,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("F2 = Save game");
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,pcVar1,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,pcVar1,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("F3 = Restore game");
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,pcVar1,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,pcVar1,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("F5 = Toggle mute");
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,pcVar1,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,pcVar1,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("F6 = Quick save");
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,pcVar1,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,pcVar1,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("F9 = Quick load");
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,pcVar1,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,pcVar1,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("ESC = Pause game");
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,pcVar1,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,pcVar1,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Forward");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x28));
  _sprintf(local_1210,"?%s = %s" + 1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_1210,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_1210,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c22cf);
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x2c));
  _sprintf(local_910,"?%s = %s" + 1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_910,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_910,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  if (g_CGamePtr->always_run == 0) {
    support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c22d9);
    core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x30));
    _sprintf(local_b10,"?%s = %s" + 1);
    engine_font_cpp_FUN_004b0a20
              (_DAT_01549aa8,local_b10,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
    engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_b10,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
    _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
    iVar2 = DAT_005fba1c + _DAT_01d22c5c * -4;
    bVar3 = SBORROW4(iVar2,_DAT_01d22c58);
    iVar2 = iVar2 - _DAT_01d22c58;
  }
  else {
    support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c22d4);
    core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x30));
    _sprintf(local_1410,"?%s = %s" + 1);
    engine_font_cpp_FUN_004b0a20
              (_DAT_01549aa8,local_1410,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
    engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_1410,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
    _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
    iVar2 = DAT_005fba1c + _DAT_01d22c5c * -4;
    bVar3 = SBORROW4(iVar2,_DAT_01d22c58);
    iVar2 = iVar2 - _DAT_01d22c58;
  }
  if (bVar3 != iVar2 < 0) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Strafe on");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x34));
  _sprintf(local_1710,"?%s = %s" + 1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_1710,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_1710,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Strafe left");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x38));
  _sprintf(local_e10,"?%s = %s" + 1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_e10,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_e10,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Strafe right");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x3c));
  _sprintf(local_1010,"?%s = %s" + 1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_1010,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_1010,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Turn left");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x44));
  _sprintf(local_410,"?%s = %s" + 1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_410,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_410,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Turn right");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x40));
  _sprintf(local_210,"?%s = %s" + 1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_210,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_210,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c2315);
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x48));
  _sprintf(local_1510,"?%s = %s" + 1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_1510,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_1510,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Use item");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x50));
  _sprintf(local_c10,"?%s = %s" + 1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_c10,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_c10,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Lantern");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x54));
  _sprintf(local_1810,"?%s = %s" + 1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_1810,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_1810,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Journal");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x5c));
  _sprintf(local_f10,"?%s = %s" + 1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_f10,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_f10,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c2333);
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x60));
  _sprintf(local_1c10,"?%s = %s" + 1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_1c10,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_1c10,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Voodoo Doll");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x68));
  _sprintf(local_1310,"?%s = %s" + 1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_1310,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_1310,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c2343);
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x6c));
  _sprintf(local_a10,"?%s = %s" + 1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_a10,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_a10,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Point up");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x78));
  _sprintf(local_610,"?%s = %s" + 1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_610,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_610,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Point down");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x7c));
  _sprintf(local_310,"?%s = %s" + 1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_310,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_310,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Quick turn");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x74));
  _sprintf(local_1a10,"?%s = %s" + 1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_1a10,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_1a10,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Cycle conventional weapons");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x80));
  _sprintf(local_1110,"?%s = %s" + 1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_1110,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_1110,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Cycle staves");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x84));
  _sprintf(local_810,"?%s = %s" + 1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_810,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_810,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Cycle Christian weapons");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x88));
  _sprintf(local_110,"?%s = %s" + 1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_110,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_110,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Cycle Shaman weapons");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x8c));
  _sprintf(local_510,"?%s = %s" + 1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_510,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_510,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Cycle Pagan weapons");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x90));
  _sprintf(local_1610,"?%s = %s" + 1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_1610,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_1610,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Next weapon");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x94));
  _sprintf(local_d10,"?%s = %s" + 1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_d10,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_d10,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Previous weapon");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x98));
  _sprintf(local_1910,"?%s = %s" + 1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_1910,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_1910,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Next item");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x9c));
  _sprintf(local_1b10,"?%s = %s" + 1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_1b10,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_1b10,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  support_newmsg_cpp_getLocalizedString_FUN_00508960("Previous item");
  core_menu_cpp_getKeyDisplayName_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0xa0));
  _sprintf(local_710,"?%s = %s" + 1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_710,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_710,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (_DAT_01d22c58 <= DAT_005fba1c + _DAT_01d22c5c * -4) {
    return;
  }
  _DAT_01d22c58 = _DAT_01d22c5c * 6;
  _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  return;
}
