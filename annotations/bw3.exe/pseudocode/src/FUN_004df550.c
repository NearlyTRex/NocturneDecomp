// Name: FUN_004df550
// Address: 004df550
// Address Range: [[004df550, 004df566]]
// Convention: unknown
// Signature: undefined1 FUN_004df550(undefined4 param_1,int param_2)

#include "nocturne.h"

byte FUN_004df550(uint param_1,int param_2)

{
  byte uVar1;
  
  uVar1 = (&DAT_01c6cef0)[param_2];
  (&DAT_01c6cef0)[param_2] = 0;
  return uVar1;
}
