// Name: FUN_00408840
// Address: 00408840
// Address Range: [[00408840, 0040886c]]
// Convention: unknown
// Signature: undefined4 FUN_00408840(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00408840(uint param_1)

{
  _DAT_01d71de0 = "..\\core\\actor.cpp";
  _DAT_01d71de4 = 0x22b;
  FUN_004e4330("CDemonActor::getActorType called for %s.  Should never be called for this base class!",param_1);
  return 0;
}
