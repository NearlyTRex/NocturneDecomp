// Name: FUN_0049b4e0
// Address: 0049b4e0
// Address Range: [[0049b4e0, 0049cc09]]
// Convention: unknown
// Signature: void FUN_0049b4e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049b4e0(int param_1)

{
  uint uVar1;
  int iVar2;
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
  
  FUN_00408370(0xffff);
  _DAT_01c78ae4 = FUN_004930e0(_DAT_014b9900,0x58);
  _DAT_01c78ae8 = FUN_004930b0(_DAT_014b9900,0x58);
  _DAT_01c78ae0 = _DAT_01c78ae4 << 2;
  _DAT_01c78adc = _DAT_01c78ae8 << 2;
  uVar1 = FUN_004ee370("Quick help");
  FUN_00490980(_DAT_014b9900,uVar1,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  uVar1 = FUN_004ee370("F1 = Toggle help");
  FUN_00490980(_DAT_014b9900,uVar1,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("F2 = Save game");
  FUN_00490980(_DAT_014b9900,uVar1,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("F3 = Restore game");
  FUN_00490980(_DAT_014b9900,uVar1,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("F5 = Toggle mute");
  FUN_00490980(_DAT_014b9900,uVar1,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("F6 = Quick save");
  FUN_00490980(_DAT_014b9900,uVar1,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("F9 = Quick load");
  FUN_00490980(_DAT_014b9900,uVar1,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("ESC = Pause game");
  FUN_00490980(_DAT_014b9900,uVar1,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  uVar1 = FUN_004ee370("Forward");
  uVar1 = FUN_004d2900(*(uint *)(param_1 + 0x28),uVar1);
  FUN_00563c90(local_1810,"?%s = %s" + 1,uVar1);
  FUN_00490980(_DAT_014b9900,local_1810,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370(&DAT_00582491);
  uVar1 = FUN_004d2900(*(uint *)(param_1 + 0x2c),uVar1);
  FUN_00563c90(local_1110,"?%s = %s" + 1,uVar1);
  FUN_00490980(_DAT_014b9900,local_1110,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  if (*(int *)(0x01C775EC + 0x98) == 0) {
    uVar1 = FUN_004ee370(&DAT_0058249b);
    uVar1 = FUN_004d2900(*(uint *)(param_1 + 0x30),uVar1);
    FUN_00563c90(local_610,"?%s = %s" + 1,uVar1);
    FUN_00490980(_DAT_014b9900,local_610,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
    _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
    iVar2 = DAT_005b7620 + _DAT_01c78ae4 * -4;
  }
  else {
    uVar1 = FUN_004ee370(&DAT_00582496);
    uVar1 = FUN_004d2900(*(uint *)(param_1 + 0x30),uVar1);
    FUN_00563c90(local_910,"?%s = %s" + 1,uVar1);
    FUN_00490980(_DAT_014b9900,local_910,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
    _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
    iVar2 = DAT_005b7620 + _DAT_01c78ae4 * -4;
  }
  if (iVar2 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("Strafe on");
  uVar1 = FUN_004d2900(*(uint *)(param_1 + 0x34),uVar1);
  FUN_00563c90(local_1a10,"?%s = %s" + 1,uVar1);
  FUN_00490980(_DAT_014b9900,local_1a10,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("Strafe left");
  uVar1 = FUN_004d2900(*(uint *)(param_1 + 0x38),uVar1);
  FUN_00563c90(local_1310,"?%s = %s" + 1,uVar1);
  FUN_00490980(_DAT_014b9900,local_1310,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("Strafe right");
  uVar1 = FUN_004d2900(*(uint *)(param_1 + 0x3c),uVar1);
  FUN_00563c90(local_c10,"?%s = %s" + 1,uVar1);
  FUN_00490980(_DAT_014b9900,local_c10,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("Turn left");
  uVar1 = FUN_004d2900(*(uint *)(param_1 + 0x44),uVar1);
  FUN_00563c90(local_510,"?%s = %s" + 1,uVar1);
  FUN_00490980(_DAT_014b9900,local_510,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("Turn right");
  uVar1 = FUN_004d2900(*(uint *)(param_1 + 0x40),uVar1);
  FUN_00563c90(local_710,"?%s = %s" + 1,uVar1);
  FUN_00490980(_DAT_014b9900,local_710,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("Fire / Action");
  uVar1 = FUN_004d2900(*(uint *)(param_1 + 0x48),uVar1);
  FUN_00563c90(local_810,"?%s = %s" + 1,uVar1);
  FUN_00490980(_DAT_014b9900,local_810,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("Use item");
  uVar1 = FUN_004d2900(*(uint *)(param_1 + 0x4c),uVar1);
  FUN_00563c90(local_210,"?%s = %s" + 1,uVar1);
  FUN_00490980(_DAT_014b9900,local_210,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("Light");
  uVar1 = FUN_004d2900(*(uint *)(param_1 + 0x50),uVar1);
  FUN_00563c90(local_a10,"?%s = %s" + 1,uVar1);
  FUN_00490980(_DAT_014b9900,local_a10,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("Night Vision");
  uVar1 = FUN_004d2900(*(uint *)(param_1 + 0x54),uVar1);
  FUN_00563c90(local_310,"?%s = %s" + 1,uVar1);
  FUN_00490980(_DAT_014b9900,local_310,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370(&DAT_00582501);
  uVar1 = FUN_004d2900(*(uint *)(param_1 + 0x58),uVar1);
  FUN_00563c90(local_1b10,"?%s = %s" + 1,uVar1);
  FUN_00490980(_DAT_014b9900,local_1b10,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("Point up");
  uVar1 = FUN_004d2900(*(uint *)(param_1 + 0x60),uVar1);
  FUN_00563c90(local_1410,"?%s = %s" + 1,uVar1);
  FUN_00490980(_DAT_014b9900,local_1410,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("Point down");
  uVar1 = FUN_004d2900(*(uint *)(param_1 + 100),uVar1);
  FUN_00563c90(local_d10,"?%s = %s" + 1,uVar1);
  FUN_00490980(_DAT_014b9900,local_d10,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370(&DAT_0058251a);
  uVar1 = FUN_004d2900(*(uint *)(param_1 + 0x5c),uVar1);
  FUN_00563c90(local_1610,"?%s = %s" + 1,uVar1);
  FUN_00490980(_DAT_014b9900,local_1610,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("Cycle pistol weapons");
  uVar1 = FUN_004d2900(*(uint *)(param_1 + 0x68),uVar1);
  FUN_00563c90(local_f10,"?%s = %s" + 1,uVar1);
  FUN_00490980(_DAT_014b9900,local_f10,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("Cycle assault weapons");
  uVar1 = FUN_004d2900(*(uint *)(param_1 + 0x6c),uVar1);
  FUN_00563c90(local_1910,"?%s = %s" + 1,uVar1);
  FUN_00490980(_DAT_014b9900,local_1910,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("Cycle flame weapons");
  uVar1 = FUN_004d2900(*(uint *)(param_1 + 0x70),uVar1);
  FUN_00563c90(local_1210,"?%s = %s" + 1,uVar1);
  FUN_00490980(_DAT_014b9900,local_1210,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("Cycle grenade weapons");
  uVar1 = FUN_004d2900(*(uint *)(param_1 + 0x74),uVar1);
  FUN_00563c90(local_b10,"?%s = %s" + 1,uVar1);
  FUN_00490980(_DAT_014b9900,local_b10,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("Cycle melee weapons");
  uVar1 = FUN_004d2900(*(uint *)(param_1 + 0x78),uVar1);
  FUN_00563c90(local_410,"?%s = %s" + 1,uVar1);
  FUN_00490980(_DAT_014b9900,local_410,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("Next weapon");
  uVar1 = FUN_004d2900(*(uint *)(param_1 + 0x7c),uVar1);
  FUN_00563c90(local_1c10,"?%s = %s" + 1,uVar1);
  FUN_00490980(_DAT_014b9900,local_1c10,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("Previous weapon");
  uVar1 = FUN_004d2900(*(uint *)(param_1 + 0x80),uVar1);
  FUN_00563c90(local_1510,"?%s = %s" + 1,uVar1);
  FUN_00490980(_DAT_014b9900,local_1510,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("Next item");
  uVar1 = FUN_004d2900(*(uint *)(param_1 + 0x84),uVar1);
  FUN_00563c90(local_e10,"?%s = %s" + 1,uVar1);
  FUN_00490980(_DAT_014b9900,local_e10,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("Previous item");
  uVar1 = FUN_004d2900(*(uint *)(param_1 + 0x88),uVar1);
  FUN_00563c90(local_1710,"?%s = %s" + 1,uVar1);
  FUN_00490980(_DAT_014b9900,local_1710,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("Item description");
  uVar1 = FUN_004d2900(*(uint *)(param_1 + 0x8c),uVar1);
  FUN_00563c90(local_1010,"?%s = %s" + 1,uVar1);
  FUN_00490980(_DAT_014b9900,local_1010,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (DAT_005b7620 + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  }
  uVar1 = FUN_004ee370("Next ammo");
  uVar1 = FUN_004d2900(*(uint *)(param_1 + 0x90),uVar1);
  FUN_00563c90(local_110,"?%s = %s" + 1,uVar1);
  FUN_00490980(_DAT_014b9900,local_110,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (_DAT_01c78ae0 <= DAT_005b7620 + _DAT_01c78ae4 * -4) {
    return;
  }
  _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
  _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  return;
}
