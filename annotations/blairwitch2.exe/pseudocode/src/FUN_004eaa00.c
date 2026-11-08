// Name: FUN_004eaa00
// Address: 004eaa00
// Address Range: [[004eaa00, 004eab1a]]
// Convention: unknown
// Signature: void FUN_004eaa00(int param_1)

#include "nocturne.h"

void FUN_004eaa00(int param_1)

{
  FUN_00589d60(param_1);
  if (1 < 0x00000007) {
    FUN_0040b960(param_1 + 0x6d4,"allowedAttackTypes");
  }
  if (2 < 0x00000007) {
    FUN_0040b8e0(param_1 + 0x6d8,"strengthLo");
    FUN_0040b8e0(param_1 + 0x6dc,"strengthHi");
    FUN_0040b960(param_1 + 0x44c,"canAttachLight");
  }
  if (3 < 0x00000007) {
    FUN_0040b8e0(param_1 + 0x6e0,"dismemberProb");
  }
  if (4 < 0x00000007) {
    FUN_0040b960(param_1 + 0x6e4,"canGoInInventory");
  }
  if (5 < 0x00000007) {
    FUN_0040b960(param_1 + 0x6f8,"ammoType");
  }
  if (0x00000007 < 7) {
    return;
  }
  FUN_0040b730(param_1 + 0x6fc,"thrustHitCharacterSound");
  FUN_0040b730(param_1 + 0x760,"swingHitCharacterSound");
  FUN_0040b730(param_1 + 0x7c4,"hitOtherSound");
  return;
}
