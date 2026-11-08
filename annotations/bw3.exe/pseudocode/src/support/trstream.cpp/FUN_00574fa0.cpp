// Name: FUN_00574fa0
// Address: 00574fa0
// Address Range: [[00574fa0, 00574fc8]]
// Convention: unknown
// Signature: undefined4 FUN_00574fa0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00574fa0(void)

{
  _DAT_01d71de0 = "..\\support\\trstream.cpp";
  _DAT_01d71de4 = 0xabc;
  FUN_004e4330("COutStreamDebug::tell - invalid operation");
  return 0xffffffff;
}
