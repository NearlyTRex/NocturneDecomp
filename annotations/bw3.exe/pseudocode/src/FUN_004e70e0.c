// Name: FUN_004e70e0
// Address: 004e70e0
// Address Range: [[004e70e0, 004e71fa]]
// Convention: unknown
// Signature: void FUN_004e70e0(int param_1)

#include "nocturne.h"

void FUN_004e70e0(int param_1)

{
  FUN_0057b2a0(param_1);
  if (1 < 0x00000007) {
    FUN_0040b8b0(param_1 + 0x594,"allowedAttackTypes");
  }
  if (2 < 0x00000007) {
    FUN_0040b830(param_1 + 0x598,"strengthLo");
    FUN_0040b830(param_1 + 0x59c,"strengthHi");
    FUN_0040b8b0(param_1 + 0x2f0,"canAttachLight");
  }
  if (3 < 0x00000007) {
    FUN_0040b830(param_1 + 0x5a0,"dismemberProb");
  }
  if (4 < 0x00000007) {
    FUN_0040b8b0(param_1 + 0x5a4,"canGoInInventory");
  }
  if (5 < 0x00000007) {
    FUN_0040b8b0(param_1 + 0x5b8,"ammoType");
  }
  if (0x00000007 < 7) {
    return;
  }
  FUN_0040b680(param_1 + 0x5bc,"thrustHitCharacterSound");
  FUN_0040b680(param_1 + 0x620,"swingHitCharacterSound");
  FUN_0040b680(param_1 + 0x684,"hitOtherSound");
  return;
}
