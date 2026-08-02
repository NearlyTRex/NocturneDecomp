// Name: crt_unknown.c_FUN_0056d4e8
// Address: 0056d4e8
// Address Range: [[0056d4e8, 0056d50a]]
// Convention: unknown
// Signature: uint crt_unknown_c_FUN_0056d4e8(void)

#include "nocturne.h"

uint FUN_0056d4e8(void)

{
  uint uVar1;
  
  uVar1 = DAT_005c1f20 & 1;
  DAT_005c1f20 = DAT_005c1f20 & 0xfffffffd | 1;
  return uVar1;
}
