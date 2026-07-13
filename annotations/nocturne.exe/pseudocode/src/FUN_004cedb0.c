// Name: FUN_004cedb0
// Address: 004cedb0
// Address Range: [[004cedb0, 004ceeca]]
// Convention: unknown
// Signature: void FUN_004cedb0(int param_1)

#include "nocturne.h"

void FUN_004cedb0(int param_1)

{
  FUN_00554170(param_1);
  if (1 < 0x00000007) {
    FUN_0040c900(param_1 + 0x570,"allowedAttackTypes");
  }
  if (2 < 0x00000007) {
    FUN_0040c880(param_1 + 0x574,"strengthLo");
    FUN_0040c880(param_1 + 0x578,"strengthHi");
    FUN_0040c900(param_1 + 0x2e8,"canAttachLight");
  }
  if (3 < 0x00000007) {
    FUN_0040c880(param_1 + 0x57c,"dismemberProb");
  }
  if (4 < 0x00000007) {
    FUN_0040c900(param_1 + 0x580,"canGoInInventory");
  }
  if (5 < 0x00000007) {
    FUN_0040c900(param_1 + 0x594,"ammoType");
  }
  if (0x00000007 < 7) {
    return;
  }
  FUN_0040c6d0(param_1 + 0x598,"thrustHitCharacterSound");
  FUN_0040c6d0(param_1 + 0x5fc,"swingHitCharacterSound");
  FUN_0040c6d0(param_1 + 0x660,"hitOtherSound");
  return;
}
