// Name: FUN_10008800
// Address: 10008800
// Address Range: [[10008800, 1000882f]]
// Convention: unknown
// Signature: undefined4 FUN_10008800(int param_1)

#include "nocturne.h"

uint FUN_10008800(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_10016ff8;
  do {
    if (*piVar2 == param_1) break;
    piVar2 = piVar2 + 2;
    iVar1 = iVar1 + 1;
  } while (piVar2 < &DAT_10017080);
  if ((&DAT_10016ff8)[iVar1 * 2] == param_1) {
    return *(uint *)(iVar1 * 8 + 0x10016ffc);
  }
  return 0;
}
