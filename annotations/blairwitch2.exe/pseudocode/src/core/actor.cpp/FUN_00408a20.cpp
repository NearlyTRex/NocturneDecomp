// Name: FUN_00408a20
// Address: 00408a20
// Address Range: [[00408a20, 00408a45]]
// Convention: unknown
// Signature: undefined4 FUN_00408a20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00408a20(void)

{
  _DAT_01d046a0 = "..\\core\\actor.cpp";
  _DAT_01d046a4 = 0x231;
  FUN_004e4500("CDemonActor::getActorType called.  Should never be called for this base class!");
  return 0;
}
