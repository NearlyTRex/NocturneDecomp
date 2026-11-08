// Name: FUN_00540f10
// Address: 00540f10
// Address Range: [[00540f10, 00540f2e]]
// Convention: unknown
// Signature: int FUN_00540f10(int param_1,int param_2,int param_3)

#include "nocturne.h"

int FUN_00540f10(int param_1,int param_2,int param_3)

{
  return (param_3 * *(int *)(param_1 + 0x1d1f8) + param_2) * 0x10 + *(int *)(param_1 + 0x1e010);
}
