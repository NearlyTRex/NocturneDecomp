// Name: FUN_005096a0
// Address: 005096a0
// Address Range: [[005096a0, 005097ba]]
// Convention: unknown
// Signature: void FUN_005096a0(int param_1)

#include "nocturne.h"

void FUN_005096a0(int param_1)

{
  FUN_005ad8b0(param_1);
  if (1 < 0x00000007) {
    FUN_0040b670(param_1 + 0x578,"allowedAttackTypes");
  }
  if (2 < 0x00000007) {
    FUN_0040b5f0(param_1 + 0x57c,"strengthLo");
    FUN_0040b5f0(param_1 + 0x580,"strengthHi");
    FUN_0040b670(param_1 + 0x2f0,"canAttachLight");
  }
  if (3 < 0x00000007) {
    FUN_0040b5f0(param_1 + 0x584,"dismemberProb");
  }
  if (4 < 0x00000007) {
    FUN_0040b670(param_1 + 0x588,"canGoInInventory");
  }
  if (5 < 0x00000007) {
    FUN_0040b670(param_1 + 0x59c,"ammoType");
  }
  if (0x00000007 < 7) {
    return;
  }
  FUN_0040b440(param_1 + 0x5a0,"thrustHitCharacterSound");
  FUN_0040b440(param_1 + 0x604,"swingHitCharacterSound");
  FUN_0040b440(param_1 + 0x668,"hitOtherSound");
  return;
}
