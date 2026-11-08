// Name: FUN_00574f70
// Address: 00574f70
// Address Range: [[00574f70, 00574f95]]
// Convention: unknown
// Signature: undefined4 FUN_00574f70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00574f70(void)

{
  _DAT_01d71de0 = "..\\support\\trstream.cpp";
  _DAT_01d71de4 = 0xab7;
  FUN_004e4330("COutStreamDebug::seek - invalid operation");
  return 0;
}
