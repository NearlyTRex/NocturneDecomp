// Name: FUN_004fd230
// Address: 004fd230
// Address Range: [[004fd230, 004fd246]]
// Convention: unknown
// Signature: undefined1 FUN_004fd230(undefined4 param_1,int param_2)

#include "nocturne.h"

byte FUN_004fd230(uint param_1,int param_2)

{
  byte uVar1;
  
  uVar1 = (&DAT_01c50950)[param_2];
  (&DAT_01c50950)[param_2] = 0;
  return uVar1;
}
