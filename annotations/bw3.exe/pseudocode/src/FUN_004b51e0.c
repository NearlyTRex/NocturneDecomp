// Name: FUN_004b51e0
// Address: 004b51e0
// Address Range: [[004b51e0, 004b6f2c]]
// Convention: unknown
// Signature: void FUN_004b51e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b51e0(int param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
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
  
  FUN_00406bf0(0xffff);
  _DAT_01d22c5c = FUN_004b30f0(_DAT_01549aa8,0x58);
  _DAT_01d22c60 = FUN_004b30c0(_DAT_01549aa8,0x58);
  _DAT_01d22c58 = _DAT_01d22c5c << 2;
  _DAT_01d22c54 = _DAT_01d22c60 << 2;
  uVar1 = FUN_00508960("Quick help");
  FUN_004b0a20(_DAT_01549aa8,uVar1,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,uVar1,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  uVar1 = FUN_00508960("F1 = Toggle help");
  FUN_004b0a20(_DAT_01549aa8,uVar1,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,uVar1,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960("F2 = Save game");
  FUN_004b0a20(_DAT_01549aa8,uVar1,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,uVar1,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960("F3 = Restore game");
  FUN_004b0a20(_DAT_01549aa8,uVar1,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,uVar1,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960("F5 = Toggle mute");
  FUN_004b0a20(_DAT_01549aa8,uVar1,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,uVar1,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960("F6 = Quick save");
  FUN_004b0a20(_DAT_01549aa8,uVar1,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,uVar1,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960("F9 = Quick load");
  FUN_004b0a20(_DAT_01549aa8,uVar1,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,uVar1,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960("ESC = Pause game");
  FUN_004b0a20(_DAT_01549aa8,uVar1,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,uVar1,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  uVar1 = FUN_00508960("Forward");
  uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0x28),uVar1);
  FUN_005a28c0(local_1210,"?%s = %s" + 1,uVar1);
  FUN_004b0a20(_DAT_01549aa8,local_1210,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,local_1210,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960(&DAT_005c22cf);
  uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0x2c),uVar1);
  FUN_005a28c0(local_910,"?%s = %s" + 1,uVar1);
  FUN_004b0a20(_DAT_01549aa8,local_910,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,local_910,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  if (*(int *)(0x01D2130C + 0xb0) == 0) {
    uVar1 = FUN_00508960(&DAT_005c22d9);
    uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0x30),uVar1);
    FUN_005a28c0(local_b10,"?%s = %s" + 1,uVar1);
    FUN_004b0a20(_DAT_01549aa8,local_b10,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
    FUN_004b0a20(_DAT_01549aa8,local_b10,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
    _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
    iVar2 = DAT_005fba1c + _DAT_01d22c5c * -4;
    bVar3 = SBORROW4(iVar2,_DAT_01d22c58);
    iVar2 = iVar2 - _DAT_01d22c58;
  }
  else {
    uVar1 = FUN_00508960(&DAT_005c22d4);
    uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0x30),uVar1);
    FUN_005a28c0(local_1410,"?%s = %s" + 1,uVar1);
    FUN_004b0a20(_DAT_01549aa8,local_1410,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
    FUN_004b0a20(_DAT_01549aa8,local_1410,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
    _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
    iVar2 = DAT_005fba1c + _DAT_01d22c5c * -4;
    bVar3 = SBORROW4(iVar2,_DAT_01d22c58);
    iVar2 = iVar2 - _DAT_01d22c58;
  }
  if (bVar3 != iVar2 < 0) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960("Strafe on");
  uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0x34),uVar1);
  FUN_005a28c0(local_1710,"?%s = %s" + 1,uVar1);
  FUN_004b0a20(_DAT_01549aa8,local_1710,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,local_1710,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960("Strafe left");
  uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0x38),uVar1);
  FUN_005a28c0(local_e10,"?%s = %s" + 1,uVar1);
  FUN_004b0a20(_DAT_01549aa8,local_e10,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,local_e10,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960("Strafe right");
  uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0x3c),uVar1);
  FUN_005a28c0(local_1010,"?%s = %s" + 1,uVar1);
  FUN_004b0a20(_DAT_01549aa8,local_1010,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,local_1010,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960("Turn left");
  uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0x44),uVar1);
  FUN_005a28c0(local_410,"?%s = %s" + 1,uVar1);
  FUN_004b0a20(_DAT_01549aa8,local_410,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,local_410,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960("Turn right");
  uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0x40),uVar1);
  FUN_005a28c0(local_210,"?%s = %s" + 1,uVar1);
  FUN_004b0a20(_DAT_01549aa8,local_210,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,local_210,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960(&DAT_005c2315);
  uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0x48),uVar1);
  FUN_005a28c0(local_1510,"?%s = %s" + 1,uVar1);
  FUN_004b0a20(_DAT_01549aa8,local_1510,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,local_1510,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960("Use item");
  uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0x50),uVar1);
  FUN_005a28c0(local_c10,"?%s = %s" + 1,uVar1);
  FUN_004b0a20(_DAT_01549aa8,local_c10,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,local_c10,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960("Lantern");
  uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0x54),uVar1);
  FUN_005a28c0(local_1810,"?%s = %s" + 1,uVar1);
  FUN_004b0a20(_DAT_01549aa8,local_1810,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,local_1810,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960("Journal");
  uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0x5c),uVar1);
  FUN_005a28c0(local_f10,"?%s = %s" + 1,uVar1);
  FUN_004b0a20(_DAT_01549aa8,local_f10,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,local_f10,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960(&DAT_005c2333);
  uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0x60),uVar1);
  FUN_005a28c0(local_1c10,"?%s = %s" + 1,uVar1);
  FUN_004b0a20(_DAT_01549aa8,local_1c10,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,local_1c10,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960("Voodoo Doll");
  uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0x68),uVar1);
  FUN_005a28c0(local_1310,"?%s = %s" + 1,uVar1);
  FUN_004b0a20(_DAT_01549aa8,local_1310,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,local_1310,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960(&DAT_005c2343);
  uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0x6c),uVar1);
  FUN_005a28c0(local_a10,"?%s = %s" + 1,uVar1);
  FUN_004b0a20(_DAT_01549aa8,local_a10,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,local_a10,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960("Point up");
  uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0x78),uVar1);
  FUN_005a28c0(local_610,"?%s = %s" + 1,uVar1);
  FUN_004b0a20(_DAT_01549aa8,local_610,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,local_610,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960("Point down");
  uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0x7c),uVar1);
  FUN_005a28c0(local_310,"?%s = %s" + 1,uVar1);
  FUN_004b0a20(_DAT_01549aa8,local_310,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,local_310,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960("Quick turn");
  uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0x74),uVar1);
  FUN_005a28c0(local_1a10,"?%s = %s" + 1,uVar1);
  FUN_004b0a20(_DAT_01549aa8,local_1a10,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,local_1a10,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960("Cycle conventional weapons");
  uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0x80),uVar1);
  FUN_005a28c0(local_1110,"?%s = %s" + 1,uVar1);
  FUN_004b0a20(_DAT_01549aa8,local_1110,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,local_1110,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960("Cycle staves");
  uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0x84),uVar1);
  FUN_005a28c0(local_810,"?%s = %s" + 1,uVar1);
  FUN_004b0a20(_DAT_01549aa8,local_810,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,local_810,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960("Cycle Christian weapons");
  uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0x88),uVar1);
  FUN_005a28c0(local_110,"?%s = %s" + 1,uVar1);
  FUN_004b0a20(_DAT_01549aa8,local_110,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,local_110,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960("Cycle Shaman weapons");
  uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0x8c),uVar1);
  FUN_005a28c0(local_510,"?%s = %s" + 1,uVar1);
  FUN_004b0a20(_DAT_01549aa8,local_510,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,local_510,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960("Cycle Pagan weapons");
  uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0x90),uVar1);
  FUN_005a28c0(local_1610,"?%s = %s" + 1,uVar1);
  FUN_004b0a20(_DAT_01549aa8,local_1610,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,local_1610,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960("Next weapon");
  uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0x94),uVar1);
  FUN_005a28c0(local_d10,"?%s = %s" + 1,uVar1);
  FUN_004b0a20(_DAT_01549aa8,local_d10,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,local_d10,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960("Previous weapon");
  uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0x98),uVar1);
  FUN_005a28c0(local_1910,"?%s = %s" + 1,uVar1);
  FUN_004b0a20(_DAT_01549aa8,local_1910,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,local_1910,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960("Next item");
  uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0x9c),uVar1);
  FUN_005a28c0(local_1b10,"?%s = %s" + 1,uVar1);
  FUN_004b0a20(_DAT_01549aa8,local_1b10,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,local_1b10,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (DAT_005fba1c + _DAT_01d22c5c * -4 < _DAT_01d22c58) {
    _DAT_01d22c58 = _DAT_01d22c5c * 6;
    _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  }
  uVar1 = FUN_00508960("Previous item");
  uVar1 = FUN_004eaa60(*(uint *)(param_1 + 0xa0),uVar1);
  FUN_005a28c0(local_710,"?%s = %s" + 1,uVar1);
  FUN_004b0a20(_DAT_01549aa8,local_710,_DAT_01d22c54 + 2,_DAT_01d22c58 + 2,0,0xffffffff);
  FUN_004b0a20(_DAT_01549aa8,local_710,_DAT_01d22c54,_DAT_01d22c58,7,0xffffffff);
  _DAT_01d22c58 = _DAT_01d22c58 + _DAT_01d22c5c;
  if (_DAT_01d22c58 <= DAT_005fba1c + _DAT_01d22c5c * -4) {
    return;
  }
  _DAT_01d22c58 = _DAT_01d22c5c * 6;
  _DAT_01d22c54 = _DAT_01d22c54 + DAT_005fba18 / 3;
  return;
}
