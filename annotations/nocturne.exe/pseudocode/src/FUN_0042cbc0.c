// Name: FUN_0042cbc0
// Address: 0042cbc0
// Address Range: [[0042cbc0, 0042cce0]]
// Convention: unknown
// Signature: void FUN_0042cbc0(int param_1)

#include "nocturne.h"

void FUN_0042cbc0(int param_1)

{
  FUN_0040d2d0(param_1);
  FUN_0040c900(param_1 + 0x150,"?vertexCount" + 1);
  FUN_0040c880(param_1 + 0x154,"chainLength");
  FUN_0040c980(param_1 + 0x15c,"target");
  FUN_0040c900(param_1 + 0x160,"targetBone");
  FUN_0040c880(param_1 + 0x554,"weight");
  FUN_0040c880(param_1 + 0x560,"dampen");
  FUN_0040c880(param_1 + 0x558,"friction");
  FUN_0040c880(param_1 + 0x55c,"gravity");
  if (1 < 0x00000004) {
    FUN_0040c6d0(param_1 + 0x16c,"textureName");
  }
  if (2 < 0x00000004) {
    FUN_0040c6d0(param_1 + 0x1ac,"pullWavName");
    FUN_0040c6d0(param_1 + 0x214,"moveWavName");
  }
  if (0x00000004 < 4) {
    return;
  }
  FUN_0040c900(param_1 + 0x280,"groundCollideFlag");
  return;
}
