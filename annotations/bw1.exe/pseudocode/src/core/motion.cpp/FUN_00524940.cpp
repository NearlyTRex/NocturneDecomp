// Name: FUN_00524940
// Address: 00524940
// Address Range: [[00524940, 00524965]]
// Convention: unknown
// Signature: undefined4 FUN_00524940(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00524940(void)

{
  _DAT_01d1d400 = "..\\core\\motion.cpp";
  _DAT_01d1d404 = 0x30e;
  FUN_005030e0("CMotionController::findPatchToFrame should never be called for this base class!");
  return 0;
}
