// Name: FUN_005a1fb0
// Address: 005a1fb0
// Address Range: [[005a1fb0, 005a1fd8]]
// Convention: unknown
// Signature: undefined4 FUN_005a1fb0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005a1fb0(void)

{
  _DAT_01d1d400 = "..\\support\\trstream.cpp";
  _DAT_01d1d404 = 0xabc;
  FUN_005030e0("COutStreamDebug::tell - invalid operation");
  return 0xffffffff;
}
