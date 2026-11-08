// Name: FUN_0057b2a0
// Address: 0057b2a0
// Address Range: [[0057b2a0, 0057b424]]
// Convention: unknown
// Signature: void FUN_0057b2a0(int param_1)

#include "nocturne.h"

void FUN_0057b2a0(int param_1)

{
  byte local_10c [256];
  byte local_c [4];
  
  FUN_0040c280(param_1);
  FUN_0040b9b0(param_1 + 0x158,"modelName");
  if (2 < 0x0000000C) {
    FUN_0040b930(param_1 + 0x304,"carriedByActor");
  }
  if (3 < 0x0000000C) {
    FUN_0040b8b0(param_1 + 0x2d4,"weaponState");
    FUN_0040b8b0(param_1 + 0x568,"ammoCount");
    FUN_0040b8b0(param_1 + 0x56c,"ammoType");
  }
  if (0x0000000C == 5) {
    FUN_0040b7a0(local_10c,"descriptiveName");
  }
  if (6 < 0x0000000C) {
    FUN_0040b830(param_1 + 0x580,"simTimer");
  }
  if ((7 < 0x0000000C) && (0x0000000C < 0xc)) {
    FUN_0040b8b0(local_c,"infinite_ammo");
    FUN_0040b8b0(local_c,"ammo_per_shot");
  }
  if ((8 < 0x0000000C) && (0x0000000C < 0xc)) {
    FUN_0040b8b0(local_c,"weapon_class");
  }
  if ((9 < 0x0000000C) && (0x0000000C < 0xc)) {
    FUN_0040b8b0(local_c,"draw_crosshair");
  }
  if (0x0000000C != 0xb) {
    return;
  }
  FUN_0040b8b0(local_c,"number_of_hands_needed");
  return;
}
