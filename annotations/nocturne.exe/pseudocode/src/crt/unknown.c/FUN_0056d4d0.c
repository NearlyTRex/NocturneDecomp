// Name: crt_unknown.c_FUN_0056d4d0
// Address: 0056d4d0
// Address Range: [[0056d4d0, 0056d4e7]]
// Convention: unknown
// Signature: uint crt_unknown_c_FUN_0056d4d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0056d4d0(void)

{
  uint uVar1;
  
  uVar1 = _g_TimezoneInitFlags & 1;
  _g_TimezoneInitFlags = _g_TimezoneInitFlags & 0xfffffffc;
  return uVar1;
}
