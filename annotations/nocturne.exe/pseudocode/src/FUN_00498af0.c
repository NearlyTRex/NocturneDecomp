// Name: FUN_00498af0
// Address: 00498af0
// Address Range: [[00498af0, 00498b52]]
// Convention: unknown
// Signature: undefined4 FUN_00498af0(int param_1)

#include "nocturne.h"

uint FUN_00498af0(int param_1)

{
  int iVar1;
  
  if (((((*(byte *)(param_1 + 0x1fa3c) & 2) != 0) && (1.0 <= *(float *)(param_1 + 0x1fa44))) &&
      (1.0 <= *(float *)(param_1 + 0x1fa78))) &&
     ((*(float *)(param_1 + 0x1fa74) <= 0.0 &&
      (iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x1f8d0) + 0x14c) + 0xe0))
                         (*(int *)(param_1 + 0x1f8d0)), iVar1 != 0)))) {
    return 1;
  }
  return 0;
}
