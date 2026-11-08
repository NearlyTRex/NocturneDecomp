// Name: FUN_004af900
// Address: 004af900
// Address Range: [[004af900, 004af94f]]
// Convention: unknown
// Signature: undefined4 FUN_004af900(int param_1)

#include "nocturne.h"

uint FUN_004af900(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040c8f0(*(uint *)(param_1 + 0x2620),DAT_007bcc84);
  if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x7d4) == 2 || (*(int *)(iVar1 + 0x7d4) == 3)))) {
    return 0xbf860a92;
  }
  return 0xbfc80fc6;
}
