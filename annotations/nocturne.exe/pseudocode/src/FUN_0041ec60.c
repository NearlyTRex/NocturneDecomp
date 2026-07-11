// Name: FUN_0041ec60
// Address: 0041ec60
// Address Range: [[0041ec60, 0041ef2f]]
// Convention: unknown
// Signature: void FUN_0041ec60(int param_1)

#include "nocturne.h"

void FUN_0041ec60(int param_1)

{
  byte local_10c [256];
  int local_c;
  
  FUN_0040d2d0(param_1);
  FUN_0040ca00(param_1 + 0x150,"L>modelName" + 2);
  FUN_0040c880(param_1 + 0x388,"weightInPounds");
  FUN_0040c880(param_1 + 0x304,&DAT_0057983a);
  FUN_0040c450(param_1 + 0x2f8,&DAT_0057983e);
  FUN_0040c6d0(param_1 + 0x2cc,"loopWavName");
  FUN_0040c6d0(param_1 + 0x2e0,"collisionWavName");
  if (0x0000000F < 7) {
    FUN_0040c900(&local_c,"canBeCarried");
    if (local_c == 0) {
      *(uint *)(param_1 + 0x30c) = 0;
    }
    else {
      *(uint *)(param_1 + 0x30c) = 3;
    }
  }
  else {
    FUN_0040c900(param_1 + 0x30c,"pickupType");
  }
  FUN_0040c980(param_1 + 0x310,"carriedByActor");
  if (1 < 0x0000000F) {
    FUN_0040c900(param_1 + 0x314,"canBePushed");
    FUN_0040c980(param_1 + 0x318,"pushedByActor");
  }
  if (2 < 0x0000000F) {
    FUN_0040c900(param_1 + 0x5e8,"groundType");
  }
  if (0x0000000F < 4) {
    *(uint *)(param_1 + 0x5e0) = 0xffffffff;
  }
  else {
    FUN_0040ce80(param_1 + 0x38c,"simBox");
  }
  if (0x0000000F < 5) {
    *(uint *)(param_1 + 0x5ec) = 1;
  }
  else {
    FUN_0040c900(param_1 + 0x5ec,"plotInShadowFlag");
  }
  if (0x0000000F < 6) {
    *(uint *)(param_1 + 0x5f0) = 1;
  }
  else {
    FUN_0040c900(param_1 + 0x5f0,"collisionFlag");
  }
  if (7 < 0x0000000F) {
    FUN_0040c900(param_1 + 0xfc,"isTransparent");
    FUN_0040c900(param_1 + 0x5f4,"dontUseNormals");
  }
  if (0x0000000F == 9) {
    FUN_0040c6d0(local_10c,"descriptiveName");
  }
  if (10 < 0x0000000F) {
    FUN_0040c980(param_1 + 0x31c,"constrainExtentsActor");
  }
  if (0xb < 0x0000000F) {
    FUN_0040c6d0(param_1 + 0x5f8,"useEvent");
  }
  if (0xc < 0x0000000F) {
    FUN_0040c900(param_1 + 0x65c,"allowedMeleeAttackTypes");
  }
  if (0xd < 0x0000000F) {
    FUN_0040c6d0(param_1 + 0x324,"pushSound");
  }
  if (0x0000000F < 0xf) {
    return;
  }
  FUN_0040c900(param_1 + 0x660,"blockVirtualDirectorFlag");
  return;
}
