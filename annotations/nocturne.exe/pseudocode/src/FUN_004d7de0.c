// Name: FUN_004d7de0
// Address: 004d7de0
// Address Range: [[004d7de0, 004d7df8]]
// Convention: unknown
// Signature: void FUN_004d7de0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_004d7de0(void)

{
  int iVar1;
  
  do {
    iVar1 = _fgetc();
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}
