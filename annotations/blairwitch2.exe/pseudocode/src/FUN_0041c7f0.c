// Name: FUN_0041c7f0
// Address: 0041c7f0
// Address Range: [[0041c7f0, 0041cadc]]
// Convention: unknown
// Signature: void FUN_0041c7f0(int param_1)

#include "nocturne.h"

void FUN_0041c7f0(int param_1)

{
  byte local_10c [256];
  int local_c;
  
  FUN_0040c330(param_1);
  FUN_0040ba60(param_1 + 0x2b4,"L>modelName" + 2);
  FUN_0040b8e0(param_1 + 0x4ec,"weightInPounds");
  FUN_0040b8e0(param_1 + 0x468,&DAT_005cc546);
  FUN_0040b4b0(param_1 + 0x45c,&DAT_005cc54a);
  FUN_0040b730(param_1 + 0x430,"loopWavName");
  FUN_0040b730(param_1 + 0x444,"collisionWavName");
  if (0x00000010 < 7) {
    FUN_0040b960(&local_c,"canBeCarried");
    if (local_c == 0) {
      *(uint *)(param_1 + 0x470) = 0;
    }
    else {
      *(uint *)(param_1 + 0x470) = 3;
    }
  }
  else {
    FUN_0040b960(param_1 + 0x470,"pickupType");
  }
  FUN_0040b9e0(param_1 + 0x474,"carriedByActor");
  if (1 < 0x00000010) {
    FUN_0040b960(param_1 + 0x478,"canBePushed");
    FUN_0040b9e0(param_1 + 0x47c,"pushedByActor");
  }
  if (2 < 0x00000010) {
    FUN_0040b960(param_1 + 0x74c,"groundType");
  }
  if (0x00000010 < 4) {
    *(uint *)(param_1 + 0x744) = 0xffffffff;
  }
  else {
    FUN_0040bee0(param_1 + 0x4f0,"simBox");
  }
  if (0x00000010 < 5) {
    *(uint *)(param_1 + 0x750) = 1;
  }
  else {
    FUN_0040b960(param_1 + 0x750,"plotInShadowFlag");
  }
  if (0x00000010 < 6) {
    *(uint *)(param_1 + 0x754) = 1;
  }
  else {
    FUN_0040b960(param_1 + 0x754,"collisionFlag");
  }
  if (7 < 0x00000010) {
    FUN_0040b960(param_1 + 0xfc,"isTransparent");
    FUN_0040b960(param_1 + 0x758,"dontUseNormals");
  }
  if (0x00000010 == 9) {
    FUN_0040b730(local_10c,"descriptiveName");
  }
  if (10 < 0x00000010) {
    FUN_0040b9e0(param_1 + 0x480,"constrainExtentsActor");
  }
  if (0xb < 0x00000010) {
    FUN_0040b730(param_1 + 0x75c,"useEvent");
  }
  if (0xc < 0x00000010) {
    FUN_0040b960(param_1 + 0x7c0,"allowedMeleeAttackTypes");
  }
  if (0xd < 0x00000010) {
    FUN_0040b730(param_1 + 0x488,"pushSound");
  }
  if (0xe < 0x00000010) {
    FUN_0040b960(param_1 + 0x7c4,"blockVirtualDirectorFlag");
  }
  if (0x00000010 < 0x10) {
    return;
  }
  FUN_0040b550(param_1 + 0x7c8,"camOrient");
  return;
}
