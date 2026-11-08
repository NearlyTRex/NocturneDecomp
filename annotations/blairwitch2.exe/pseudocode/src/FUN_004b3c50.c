// Name: FUN_004b3c50
// Address: 004b3c50
// Address Range: [[004b3c50, 004b5188]]
// Convention: unknown
// Signature: void FUN_004b3c50(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b3c50(int param_1)

{
  uint uVar1;
  int iVar2;
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
  
  FUN_00406da0(0xffff);
  _DAT_01cb80f0 = FUN_004ab560(_DAT_01511cc0,0x58);
  _DAT_01cb80f4 = FUN_004ab530(_DAT_01511cc0,0x58);
  _DAT_01cb80ec = _DAT_01cb80f0 << 2;
  _DAT_01cb80e8 = _DAT_01cb80f4 << 2;
  uVar1 = FUN_0050fe80("Quick help");
  FUN_004a8df0(_DAT_01511cc0,uVar1,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  uVar1 = FUN_0050fe80("F1 = Toggle help");
  FUN_004a8df0(_DAT_01511cc0,uVar1,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80("F2 = Save game");
  FUN_004a8df0(_DAT_01511cc0,uVar1,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80("F3 = Restore game");
  FUN_004a8df0(_DAT_01511cc0,uVar1,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80("F5 = Toggle mute");
  FUN_004a8df0(_DAT_01511cc0,uVar1,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80("F6 = Quick save");
  FUN_004a8df0(_DAT_01511cc0,uVar1,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80("F9 = Quick load");
  FUN_004a8df0(_DAT_01511cc0,uVar1,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80("ESC = Pause game");
  FUN_004a8df0(_DAT_01511cc0,uVar1,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  uVar1 = FUN_0050fe80("Forward");
  uVar1 = FUN_004ee960(*(uint *)(param_1 + 0x28),uVar1);
  FUN_005b7790(local_1210,"?%s = %s" + 1,uVar1);
  FUN_004a8df0(_DAT_01511cc0,local_1210,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80(&DAT_005d73c2);
  uVar1 = FUN_004ee960(*(uint *)(param_1 + 0x2c),uVar1);
  FUN_005b7790(local_b10,"?%s = %s" + 1,uVar1);
  FUN_004a8df0(_DAT_01511cc0,local_b10,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  if (*(int *)(0x01CB6900 + 0xac) == 0) {
    uVar1 = FUN_0050fe80(&DAT_005d73cc);
    uVar1 = FUN_004ee960(*(uint *)(param_1 + 0x30),uVar1);
    FUN_005b7790(local_1810,"?%s = %s" + 1,uVar1);
    FUN_004a8df0(_DAT_01511cc0,local_1810,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
    _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
    iVar2 = DAT_006141bc + _DAT_01cb80f0 * -4;
  }
  else {
    uVar1 = FUN_0050fe80(&DAT_005d73c7);
    uVar1 = FUN_004ee960(*(uint *)(param_1 + 0x30),uVar1);
    FUN_005b7790(local_210,"?%s = %s" + 1,uVar1);
    FUN_004a8df0(_DAT_01511cc0,local_210,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
    _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
    iVar2 = DAT_006141bc + _DAT_01cb80f0 * -4;
  }
  if (iVar2 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80("Strafe on");
  uVar1 = FUN_004ee960(*(uint *)(param_1 + 0x34),uVar1);
  FUN_005b7790(local_1110,"?%s = %s" + 1,uVar1);
  FUN_004a8df0(_DAT_01511cc0,local_1110,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80("Strafe left");
  uVar1 = FUN_004ee960(*(uint *)(param_1 + 0x38),uVar1);
  FUN_005b7790(local_1910,"?%s = %s" + 1,uVar1);
  FUN_004a8df0(_DAT_01511cc0,local_1910,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80("Strafe right");
  uVar1 = FUN_004ee960(*(uint *)(param_1 + 0x3c),uVar1);
  FUN_005b7790(local_610,"?%s = %s" + 1,uVar1);
  FUN_004a8df0(_DAT_01511cc0,local_610,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80("Turn left");
  uVar1 = FUN_004ee960(*(uint *)(param_1 + 0x44),uVar1);
  FUN_005b7790(local_410,"?%s = %s" + 1,uVar1);
  FUN_004a8df0(_DAT_01511cc0,local_410,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80("Turn right");
  uVar1 = FUN_004ee960(*(uint *)(param_1 + 0x40),uVar1);
  FUN_005b7790(local_1310,"?%s = %s" + 1,uVar1);
  FUN_004a8df0(_DAT_01511cc0,local_1310,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80("Fire / Action");
  uVar1 = FUN_004ee960(*(uint *)(param_1 + 0x48),uVar1);
  FUN_005b7790(local_c10,"?%s = %s" + 1,uVar1);
  FUN_004a8df0(_DAT_01511cc0,local_c10,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80("Use item");
  uVar1 = FUN_004ee960(*(uint *)(param_1 + 0x4c),uVar1);
  FUN_005b7790(local_510,"?%s = %s" + 1,uVar1);
  FUN_004a8df0(_DAT_01511cc0,local_510,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80("Lantern");
  uVar1 = FUN_004ee960(*(uint *)(param_1 + 0x50),uVar1);
  FUN_005b7790(local_a10,"?%s = %s" + 1,uVar1);
  FUN_004a8df0(_DAT_01511cc0,local_a10,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80(&DAT_005d7427);
  uVar1 = FUN_004ee960(*(uint *)(param_1 + 0x68),uVar1);
  FUN_005b7790(local_1410,"?%s = %s" + 1,uVar1);
  FUN_004a8df0(_DAT_01511cc0,local_1410,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80("Point up");
  uVar1 = FUN_004ee960(*(uint *)(param_1 + 0x74),uVar1);
  FUN_005b7790(local_d10,"?%s = %s" + 1,uVar1);
  FUN_004a8df0(_DAT_01511cc0,local_d10,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80("Point down");
  uVar1 = FUN_004ee960(*(uint *)(param_1 + 0x78),uVar1);
  FUN_005b7790(local_1510,"?%s = %s" + 1,uVar1);
  FUN_004a8df0(_DAT_01511cc0,local_1510,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80("Select Revolver");
  uVar1 = FUN_004ee960(*(uint *)(param_1 + 0x7c),uVar1);
  FUN_005b7790(local_e10,"?%s = %s" + 1,uVar1);
  FUN_004a8df0(_DAT_01511cc0,local_e10,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80("Select Sword / Axe");
  uVar1 = FUN_004ee960(*(uint *)(param_1 + 0x80),uVar1);
  FUN_005b7790(local_710,"?%s = %s" + 1,uVar1);
  FUN_004a8df0(_DAT_01511cc0,local_710,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80("Select Cross");
  uVar1 = FUN_004ee960(*(uint *)(param_1 + 0x84),uVar1);
  FUN_005b7790(local_310,"?%s = %s" + 1,uVar1);
  FUN_004a8df0(_DAT_01511cc0,local_310,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80("Next weapon");
  uVar1 = FUN_004ee960(*(uint *)(param_1 + 0x90),uVar1);
  FUN_005b7790(local_810,"?%s = %s" + 1,uVar1);
  FUN_004a8df0(_DAT_01511cc0,local_810,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80("Previous weapon");
  uVar1 = FUN_004ee960(*(uint *)(param_1 + 0x94),uVar1);
  FUN_005b7790(local_110,"?%s = %s" + 1,uVar1);
  FUN_004a8df0(_DAT_01511cc0,local_110,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80("Next item");
  uVar1 = FUN_004ee960(*(uint *)(param_1 + 0x98),uVar1);
  FUN_005b7790(local_1610,"?%s = %s" + 1,uVar1);
  FUN_004a8df0(_DAT_01511cc0,local_1610,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80("Previous item");
  uVar1 = FUN_004ee960(*(uint *)(param_1 + 0x9c),uVar1);
  FUN_005b7790(local_f10,"?%s = %s" + 1,uVar1);
  FUN_004a8df0(_DAT_01511cc0,local_f10,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80("Item description");
  uVar1 = FUN_004ee960(*(uint *)(param_1 + 0xa0),uVar1);
  FUN_005b7790(local_1710,"?%s = %s" + 1,uVar1);
  FUN_004a8df0(_DAT_01511cc0,local_1710,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80("Next ammo");
  uVar1 = FUN_004ee960(*(uint *)(param_1 + 0xa4),uVar1);
  FUN_005b7790(local_1010,"?%s = %s" + 1,uVar1);
  FUN_004a8df0(_DAT_01511cc0,local_1010,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (DAT_006141bc + _DAT_01cb80f0 * -4 < _DAT_01cb80ec) {
    _DAT_01cb80ec = _DAT_01cb80f0 * 6;
    _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  }
  uVar1 = FUN_0050fe80("Drop Item or Weapon");
  uVar1 = FUN_004ee960(*(uint *)(param_1 + 0xaf0),uVar1);
  FUN_005b7790(local_910,"?%s = %s" + 1,uVar1);
  FUN_004a8df0(_DAT_01511cc0,local_910,_DAT_01cb80e8,_DAT_01cb80ec,7,0xffffffff);
  _DAT_01cb80ec = _DAT_01cb80ec + _DAT_01cb80f0;
  if (_DAT_01cb80ec <= DAT_006141bc + _DAT_01cb80f0 * -4) {
    return;
  }
  _DAT_01cb80ec = _DAT_01cb80f0 * 6;
  _DAT_01cb80e8 = _DAT_01cb80e8 + DAT_006141b8 / 3;
  return;
}
