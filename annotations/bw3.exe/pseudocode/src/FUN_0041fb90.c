// Name: FUN_0041fb90
// Address: 0041fb90
// Address Range: [[0041fb90, 0041feb6]]
// Convention: unknown
// Signature: void FUN_0041fb90(int param_1)

#include "nocturne.h"

void FUN_0041fb90(int param_1)

{
  byte local_10c [256];
  int local_c;
  
  FUN_0040c280(param_1);
  FUN_0040b9b0(param_1 + 0x158,"GmodelName" + 1);
  FUN_0040b830(param_1 + 0x390,"weightInPounds");
  FUN_0040b830(param_1 + 0x30c,&DAT_005b7522);
  FUN_0040b400(param_1 + 0x300,&DAT_005b7526);
  FUN_0040b680(param_1 + 0x2d4,"loopWavName");
  FUN_0040b680(param_1 + 0x2e8,"collisionWavName");
  if (0x00000012 < 7) {
    FUN_0040b8b0(&local_c,"canBeCarried");
    if (local_c == 0) {
      *(uint *)(param_1 + 0x314) = 0;
    }
    else {
      *(uint *)(param_1 + 0x314) = 2;
    }
  }
  else {
    FUN_0040b8b0(param_1 + 0x314,"pickupType");
  }
  FUN_0040b930(param_1 + 0x318,"carriedByActor");
  if (1 < 0x00000012) {
    FUN_0040b8b0(param_1 + 0x31c,"canBePushed");
    FUN_0040b930(param_1 + 800,"pushedByActor");
  }
  if (2 < 0x00000012) {
    FUN_0040b8b0(param_1 + 0x5f0,"groundType");
  }
  if (0x00000012 < 4) {
    *(uint *)(param_1 + 0x5e8) = 0xffffffff;
  }
  else {
    FUN_0040be30(param_1 + 0x394,"simBox");
  }
  if (0x00000012 < 5) {
    *(uint *)(param_1 + 0x5f4) = 1;
  }
  else {
    FUN_0040b8b0(param_1 + 0x5f4,"plotInShadowFlag");
  }
  if (0x00000012 < 6) {
    *(uint *)(param_1 + 0x5f8) = 1;
  }
  else {
    FUN_0040b8b0(param_1 + 0x5f8,"collisionFlag");
  }
  if (7 < 0x00000012) {
    FUN_0040b8b0(param_1 + 0xfc,"isTransparent");
    FUN_0040b8b0(param_1 + 0x5fc,"dontUseNormals");
  }
  if (0x00000012 == 9) {
    FUN_0040b680(local_10c,"descriptiveName");
  }
  if (10 < 0x00000012) {
    FUN_0040b930(param_1 + 0x324,"constrainExtentsActor");
  }
  if (0xb < 0x00000012) {
    FUN_0040b680(param_1 + 0x600,"useEvent");
  }
  if (0xc < 0x00000012) {
    FUN_0040b8b0(param_1 + 0x6c8,"allowedMeleeAttackTypes");
  }
  if (0xd < 0x00000012) {
    FUN_0040b680(param_1 + 0x32c,"pushSound");
  }
  if (0xe < 0x00000012) {
    FUN_0040b8b0(param_1 + 0x6cc,"blockVirtualDirectorFlag");
  }
  if (0xf < 0x00000012) {
    FUN_0040b4a0(param_1 + 0x6d0,"camOrient");
  }
  if (0x10 < 0x00000012) {
    FUN_0040b830(param_1 + 0x6e0,"fadeTime");
  }
  if (0x00000012 < 0x12) {
    return;
  }
  FUN_0040b680(param_1 + 0x664,"fadeEvent");
  return;
}
