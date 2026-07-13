// Name: FUN_004c4190
// Address: 004c4190
// Address Range: [[004c4190, 004c41a6]]
// Convention: unknown
// Signature: undefined1 FUN_004c4190(undefined4 param_1,int param_2)

#include "nocturne.h"

byte FUN_004c4190(uint param_1,int param_2)

{
  byte uVar1;
  
  uVar1 = (&DAT_01c02598)[param_2];
  (&DAT_01c02598)[param_2] = 0;
  return uVar1;
}
