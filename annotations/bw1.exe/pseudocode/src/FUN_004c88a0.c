// Name: FUN_004c88a0
// Address: 004c88a0
// Address Range: [[004c88a0, 004c88ef]]
// Convention: unknown
// Signature: undefined4 FUN_004c88a0(int param_1)

#include "nocturne.h"

uint FUN_004c88a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040c600(*(uint *)(param_1 + 0x25b0),DAT_007c5330);
  if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x678) == 2 || (*(int *)(iVar1 + 0x678) == 3)))) {
    return 0xbf860a92;
  }
  return 0xbfc80fc6;
}
