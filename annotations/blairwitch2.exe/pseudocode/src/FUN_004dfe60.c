// Name: FUN_004dfe60
// Address: 004dfe60
// Address Range: [[004dfe60, 004dfe76]]
// Convention: unknown
// Signature: undefined1 FUN_004dfe60(undefined4 param_1,int param_2)

#include "nocturne.h"

byte FUN_004dfe60(uint param_1,int param_2)

{
  byte uVar1;
  
  uVar1 = (&DAT_01c37790)[param_2];
  (&DAT_01c37790)[param_2] = 0;
  return uVar1;
}
