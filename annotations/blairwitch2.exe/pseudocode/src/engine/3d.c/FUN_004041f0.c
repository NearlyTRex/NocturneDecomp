// Name: FUN_004041f0
// Address: 004041f0
// Address Range: [[004041f0, 00404237]]
// Convention: unknown
// Signature: undefined * FUN_004041f0(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_004041f0(uint *param_1)

{
  byte auStack_54 [80];
  
  FUN_005b7790(auStack_54,"Old func : %d",*param_1);
  _DAT_01d046a4 = 0xe2;
  _DAT_01d046a0 = "..\\engine\\3d.c";
  FUN_004e4500(auStack_54);
  return &DAT_0070ca84;
}
