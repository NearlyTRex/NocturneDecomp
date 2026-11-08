// Name: FUN_004ccc40
// Address: 004ccc40
// Address Range: [[004ccc40, 004ce572]]
// Convention: unknown
// Signature: void FUN_004ccc40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ccc40(int param_1)

{
  uint uVar1;
  int iVar2;
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
  
  FUN_00406bd0(0xffff);
  _DAT_01cd0c54 = FUN_004c4510(_DAT_0152d244,0x58);
  _DAT_01cd0c58 = FUN_004c44e0(_DAT_0152d244,0x58);
  _DAT_01cd0c50 = _DAT_01cd0c54 << 2;
  _DAT_01cd0c4c = _DAT_01cd0c58 << 2;
  uVar1 = FUN_00531090("Quick help");
  FUN_004c1dd0(_DAT_0152d244,uVar1,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  uVar1 = FUN_00531090("F1 = Toggle help");
  FUN_004c1dd0(_DAT_0152d244,uVar1,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("F2 = Save game");
  FUN_004c1dd0(_DAT_0152d244,uVar1,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("F3 = Restore game");
  FUN_004c1dd0(_DAT_0152d244,uVar1,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("F5 = Toggle mute");
  FUN_004c1dd0(_DAT_0152d244,uVar1,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("F6 = Quick save");
  FUN_004c1dd0(_DAT_0152d244,uVar1,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("F9 = Quick load");
  FUN_004c1dd0(_DAT_0152d244,uVar1,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("ESC = Pause game");
  FUN_004c1dd0(_DAT_0152d244,uVar1,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  uVar1 = FUN_00531090("Forward");
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x28),uVar1);
  FUN_005bfb40(local_1d10,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_1d10,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090(&DAT_005e1453);
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x2c),uVar1);
  FUN_005bfb40(local_1610,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_1610,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  if (*(int *)(0x01CCF390 + 0xac) == 0) {
    uVar1 = FUN_00531090(&DAT_005e145d);
    uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x30),uVar1);
    FUN_005bfb40(local_1810,"?%s = %s" + 1,uVar1);
    FUN_004c1dd0(_DAT_0152d244,local_1810,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
    _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
    iVar2 = DAT_0061b49c + _DAT_01cd0c54 * -4;
  }
  else {
    uVar1 = FUN_00531090(&DAT_005e1458);
    uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x30),uVar1);
    FUN_005bfb40(local_1f10,"?%s = %s" + 1,uVar1);
    FUN_004c1dd0(_DAT_0152d244,local_1f10,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
    _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
    iVar2 = DAT_0061b49c + _DAT_01cd0c54 * -4;
  }
  if (iVar2 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("Strafe on");
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x34),uVar1);
  FUN_005bfb40(local_1110,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_1110,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("Strafe left");
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x38),uVar1);
  FUN_005bfb40(local_1c10,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_1c10,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("Strafe right");
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x3c),uVar1);
  FUN_005bfb40(local_1510,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_1510,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("Turn left");
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x44),uVar1);
  FUN_005bfb40(local_d10,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_d10,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("Turn right");
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x40),uVar1);
  FUN_005bfb40(local_610,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_610,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("Fire / Action");
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x48),uVar1);
  FUN_005bfb40(local_810,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_810,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("Use item");
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x4c),uVar1);
  FUN_005bfb40(local_a10,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_a10,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("Flashlight");
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x50),uVar1);
  FUN_005bfb40(local_310,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_310,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("Night Vision");
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x54),uVar1);
  FUN_005bfb40(local_910,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_910,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("Journal");
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x58),uVar1);
  FUN_005bfb40(local_210,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_210,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090(&DAT_005e14d0);
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x5c),uVar1);
  FUN_005bfb40(local_110,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_110,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("Compass");
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x60),uVar1);
  FUN_005bfb40(local_1b10,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_1b10,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090(&DAT_005e14dc);
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 100),uVar1);
  FUN_005bfb40(local_1410,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_1410,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090(&DAT_005e14e0);
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x68),uVar1);
  FUN_005bfb40(local_1e10,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_1e10,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("Point up");
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x74),uVar1);
  FUN_005bfb40(local_1710,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_1710,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("Point down");
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x78),uVar1);
  FUN_005bfb40(local_1010,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_1010,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("Quick turn");
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x70),uVar1);
  FUN_005bfb40(local_1210,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_1210,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("Cycle pistol weapons");
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x7c),uVar1);
  FUN_005bfb40(local_b10,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_b10,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("Cycle assault weapons");
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x80),uVar1);
  FUN_005bfb40(local_410,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_410,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("Cycle energy weapons");
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x84),uVar1);
  FUN_005bfb40(local_510,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_510,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("Cycle melee weapons");
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x8c),uVar1);
  FUN_005bfb40(local_710,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_710,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("Next weapon");
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x90),uVar1);
  FUN_005bfb40(local_1a10,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_1a10,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("Previous weapon");
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x94),uVar1);
  FUN_005bfb40(local_1310,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_1310,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("Next item");
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x98),uVar1);
  FUN_005bfb40(local_c10,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_c10,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("Previous item");
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0x9c),uVar1);
  FUN_005bfb40(local_e10,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_e10,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("Item description");
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0xa0),uVar1);
  FUN_005bfb40(local_f10,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_f10,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (DAT_0061b49c + _DAT_01cd0c54 * -4 < _DAT_01cd0c50) {
    _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
    _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  }
  uVar1 = FUN_00531090("Next ammo");
  uVar1 = FUN_0050d220(*(uint *)(param_1 + 0xa4),uVar1);
  FUN_005bfb40(local_1910,"?%s = %s" + 1,uVar1);
  FUN_004c1dd0(_DAT_0152d244,local_1910,_DAT_01cd0c4c,_DAT_01cd0c50,7,0xffffffff);
  _DAT_01cd0c50 = _DAT_01cd0c50 + _DAT_01cd0c54;
  if (_DAT_01cd0c50 <= DAT_0061b49c + _DAT_01cd0c54 * -4) {
    return;
  }
  _DAT_01cd0c50 = _DAT_01cd0c54 * 6;
  _DAT_01cd0c4c = _DAT_01cd0c4c + DAT_0061b498 / 3;
  return;
}
