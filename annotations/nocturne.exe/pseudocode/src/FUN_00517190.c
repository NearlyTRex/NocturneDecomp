// Name: FUN_00517190
// Address: 00517190
// Address Range: [[00517190, 005171a8]]
// Convention: unknown
// Signature: void FUN_00517190(undefined4 param_1)

#include "nocturne.h"

void FUN_00517190(uint param_1)

{
  int iVar1;
  
  do {
    iVar1 = _fgetc(param_1);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}
