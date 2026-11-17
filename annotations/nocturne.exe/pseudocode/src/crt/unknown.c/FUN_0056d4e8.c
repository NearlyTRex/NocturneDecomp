// Name: crt_unknown.c_FUN_0056d4e8
// Address: 0056d4e8
// Address Range: [[0056d4e8, 0056d50a]]
// Convention: unknown
// Signature: uint crt_unknown_c_FUN_0056d4e8(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0056d4e8(void)

{
  uint uVar1;
  
  uVar1 = _g_TimezoneInitFlags & 1;
  _g_TimezoneInitFlags = _g_TimezoneInitFlags & 0xfffffffd | 1;
  return uVar1;
}
