// Name: FUN_00436d50
// Address: 00436d50
// Address Range: [[00436d50, 00436e70]]
// Convention: unknown
// Signature: void FUN_00436d50(int param_1)

#include "nocturne.h"

void FUN_00436d50(int param_1)

{
  FUN_0040c040(param_1);
  FUN_0040b670(param_1 + 0x158,"?vertexCount" + 1);
  FUN_0040b5f0(param_1 + 0x15c,"chainLength");
  FUN_0040b6f0(param_1 + 0x164,"target");
  FUN_0040b670(param_1 + 0x168,"targetBone");
  FUN_0040b5f0(param_1 + 0x55c,"weight");
  FUN_0040b5f0(param_1 + 0x568,"dampen");
  FUN_0040b5f0(param_1 + 0x560,"friction");
  FUN_0040b5f0(param_1 + 0x564,"gravity");
  if (1 < 0x00000004) {
    FUN_0040b440(param_1 + 0x174,"textureName");
  }
  if (2 < 0x00000004) {
    FUN_0040b440(param_1 + 0x1b4,"pullWavName");
    FUN_0040b440(param_1 + 0x21c,"moveWavName");
  }
  if (0x00000004 < 4) {
    return;
  }
  FUN_0040b670(param_1 + 0x288,"groundCollideFlag");
  return;
}
