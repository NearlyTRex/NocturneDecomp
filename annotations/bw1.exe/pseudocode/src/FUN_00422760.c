// Name: FUN_00422760
// Address: 00422760
// Address Range: [[00422760, 00422a4c]]
// Convention: unknown
// Signature: void FUN_00422760(int param_1)

#include "nocturne.h"

void FUN_00422760(int param_1)

{
  byte local_10c [256];
  int local_c;
  
  FUN_0040c040(param_1);
  FUN_0040b770(param_1 + 0x158,"L>modelName" + 2);
  FUN_0040b5f0(param_1 + 0x390,"weightInPounds");
  FUN_0040b5f0(param_1 + 0x30c,&DAT_005d4c35);
  FUN_0040b1c0(param_1 + 0x300,&DAT_005d4c39);
  FUN_0040b440(param_1 + 0x2d4,"loopWavName");
  FUN_0040b440(param_1 + 0x2e8,"collisionWavName");
  if (0x00000010 < 7) {
    FUN_0040b670(&local_c,"canBeCarried");
    if (local_c == 0) {
      *(uint *)(param_1 + 0x314) = 0;
    }
    else {
      *(uint *)(param_1 + 0x314) = 3;
    }
  }
  else {
    FUN_0040b670(param_1 + 0x314,"pickupType");
  }
  FUN_0040b6f0(param_1 + 0x318,"carriedByActor");
  if (1 < 0x00000010) {
    FUN_0040b670(param_1 + 0x31c,"canBePushed");
    FUN_0040b6f0(param_1 + 800,"pushedByActor");
  }
  if (2 < 0x00000010) {
    FUN_0040b670(param_1 + 0x5f0,"groundType");
  }
  if (0x00000010 < 4) {
    *(uint *)(param_1 + 0x5e8) = 0xffffffff;
  }
  else {
    FUN_0040bbf0(param_1 + 0x394,"simBox");
  }
  if (0x00000010 < 5) {
    *(uint *)(param_1 + 0x5f4) = 1;
  }
  else {
    FUN_0040b670(param_1 + 0x5f4,"plotInShadowFlag");
  }
  if (0x00000010 < 6) {
    *(uint *)(param_1 + 0x5f8) = 1;
  }
  else {
    FUN_0040b670(param_1 + 0x5f8,"collisionFlag");
  }
  if (7 < 0x00000010) {
    FUN_0040b670(param_1 + 0xfc,"isTransparent");
    FUN_0040b670(param_1 + 0x5fc,"dontUseNormals");
  }
  if (0x00000010 == 9) {
    FUN_0040b440(local_10c,"descriptiveName");
  }
  if (10 < 0x00000010) {
    FUN_0040b6f0(param_1 + 0x324,"constrainExtentsActor");
  }
  if (0xb < 0x00000010) {
    FUN_0040b440(param_1 + 0x600,"useEvent");
  }
  if (0xc < 0x00000010) {
    FUN_0040b670(param_1 + 0x664,"allowedMeleeAttackTypes");
  }
  if (0xd < 0x00000010) {
    FUN_0040b440(param_1 + 0x32c,"pushSound");
  }
  if (0xe < 0x00000010) {
    FUN_0040b670(param_1 + 0x668,"blockVirtualDirectorFlag");
  }
  if (0x00000010 < 0x10) {
    return;
  }
  FUN_0040b260(param_1 + 0x66c,"camOrient");
  return;
}
