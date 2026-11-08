// Name: FUN_0042a9d0
// Address: 0042a9d0
// Address Range: [[0042a9d0, 0042aaf0]]
// Convention: unknown
// Signature: void FUN_0042a9d0(int param_1)

#include "nocturne.h"

void FUN_0042a9d0(int param_1)

{
  FUN_0040c280(param_1);
  FUN_0040b8b0(param_1 + 0x158,"?vertexCount" + 1);
  FUN_0040b830(param_1 + 0x15c,"chainLength");
  FUN_0040b930(param_1 + 0x164,"target");
  FUN_0040b8b0(param_1 + 0x168,"targetBone");
  FUN_0040b830(param_1 + 0x55c,"weight");
  FUN_0040b830(param_1 + 0x568,"dampen");
  FUN_0040b830(param_1 + 0x560,"friction");
  FUN_0040b830(param_1 + 0x564,"gravity");
  if (1 < 0x00000004) {
    FUN_0040b680(param_1 + 0x174,"textureName");
  }
  if (2 < 0x00000004) {
    FUN_0040b680(param_1 + 0x1b4,"pullWavName");
    FUN_0040b680(param_1 + 0x21c,"moveWavName");
  }
  if (0x00000004 < 4) {
    return;
  }
  FUN_0040b8b0(param_1 + 0x288,"groundCollideFlag");
  return;
}
