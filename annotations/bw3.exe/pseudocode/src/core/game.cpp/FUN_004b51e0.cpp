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
  char *pcVar2;
  int iVar3;
  bool bVar4;
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
  
  engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
  _DAT_01d22c5c = engine_font_cpp_FUN_004b30f0(_DAT_01549aa8,0x58);
  _DAT_01d22c60 = engine_font_cpp_FUN_004b30c0(_DAT_01549aa8,0x58);
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
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Forward");
  pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x28));
  FUN_005a28c0(local_1210,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_1210,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_1210,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c22cf);
  pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x2c));
  FUN_005a28c0(local_910,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_910,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_910,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  if (*(int *)&g_CGamePtr->field_0xb0 == 0) {
    pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c22d9);
    pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x30));
    FUN_005a28c0(local_b10,"?%s = %s" + 1,pcVar2,pcVar1);
    engine_font_cpp_FUN_004b0a20
              (_DAT_01549aa8,local_b10,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
    engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_b10,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
    _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
    iVar3 = DAT_005fba1c + _DAT_01d22c5c * -4;
    bVar4 = SBORROW4(iVar3,_DAT_01d22c58);
    iVar3 = iVar3 - _DAT_01d22c58;
  }
  else {
    pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c22d4);
    pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x30));
    FUN_005a28c0(local_1410,"?%s = %s" + 1,pcVar2,pcVar1);
    engine_font_cpp_FUN_004b0a20
              (_DAT_01549aa8,local_1410,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
    engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_1410,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
    _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
    iVar3 = DAT_005fba1c + _DAT_01d22c5c * -4;
    bVar4 = SBORROW4(iVar3,_DAT_01d22c58);
    iVar3 = iVar3 - _DAT_01d22c58;
  }
  if (bVar4 != iVar3 < 0) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Strafe on");
  pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x34));
  FUN_005a28c0(local_1710,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_1710,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_1710,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Strafe left");
  pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x38));
  FUN_005a28c0(local_e10,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_e10,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_e10,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Strafe right");
  pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x3c));
  FUN_005a28c0(local_1010,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_1010,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_1010,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Turn left");
  pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x44));
  FUN_005a28c0(local_410,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_410,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_410,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Turn right");
  pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x40));
  FUN_005a28c0(local_210,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_210,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_210,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c2315);
  pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x48));
  FUN_005a28c0(local_1510,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_1510,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_1510,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Use item");
  pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x50));
  FUN_005a28c0(local_c10,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_c10,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_c10,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Lantern");
  pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x54));
  FUN_005a28c0(local_1810,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_1810,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_1810,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Journal");
  pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x5c));
  FUN_005a28c0(local_f10,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_f10,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_f10,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c2333);
  pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x60));
  FUN_005a28c0(local_1c10,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_1c10,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_1c10,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Voodoo Doll");
  pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x68));
  FUN_005a28c0(local_1310,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_1310,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_1310,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c2343);
  pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x6c));
  FUN_005a28c0(local_a10,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_a10,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_a10,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Point up");
  pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x78));
  FUN_005a28c0(local_610,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_610,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_610,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Point down");
  pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x7c));
  FUN_005a28c0(local_310,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_310,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_310,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Quick turn");
  pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x74));
  FUN_005a28c0(local_1a10,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_1a10,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_1a10,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Cycle conventional weapons");
  pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x80));
  FUN_005a28c0(local_1110,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_1110,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_1110,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Cycle staves");
  pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x84));
  FUN_005a28c0(local_810,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_810,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_810,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Cycle Christian weapons");
  pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x88));
  FUN_005a28c0(local_110,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_110,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_110,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Cycle Shaman weapons");
  pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x8c));
  FUN_005a28c0(local_510,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_510,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_510,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Cycle Pagan weapons");
  pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x90));
  FUN_005a28c0(local_1610,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_1610,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_1610,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Next weapon");
  pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x94));
  FUN_005a28c0(local_d10,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_d10,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_d10,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Previous weapon");
  pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x98));
  FUN_005a28c0(local_1910,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_1910,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_1910,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Next item");
  pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0x9c));
  FUN_005a28c0(local_1b10,"?%s = %s" + 1,pcVar2,pcVar1);
  engine_font_cpp_FUN_004b0a20
            (_DAT_01549aa8,local_1b10,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  engine_font_cpp_FUN_004b0a20(_DAT_01549aa8,local_1b10,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Previous item");
  pcVar2 = core_menu_cpp_FUN_004eaa60(*(EInputCodeType *)(param_1 + 0xa0));
  FUN_005a28c0(local_710,"?%s = %s" + 1,pcVar2,pcVar1);
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
