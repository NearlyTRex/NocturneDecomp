// Name: FUN_005a1f80
// Address: 005a1f80
// Address Range: [[005a1f80, 005a1fa5]]
// Convention: unknown
// Signature: undefined4 FUN_005a1f80(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005a1f80(void)

{
  _DAT_01d1d400 = "..\\support\\trstream.cpp";
  _DAT_01d1d404 = 0xab7;
  FUN_005030e0("COutStreamDebug::seek - invalid operation");
  return 0;
}
