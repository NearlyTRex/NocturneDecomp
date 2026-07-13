// Name: FUN_00409f70
// Address: 00409f70
// Address Range: [[00409f70, 00409f95]]
// Convention: unknown
// Signature: undefined4 FUN_00409f70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00409f70(void)

{
  _DAT_01cc4800 = "..\\core\\actor.cpp";
  _DAT_01cc4804 = 0x22c;
  FUN_004c8440("CDemonActor::getActorType called.  Should never be called for this base class!");
  return 0;
}
