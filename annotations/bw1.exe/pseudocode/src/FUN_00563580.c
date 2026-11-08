// Name: FUN_00563580
// Address: 00563580
// Address Range: [[00563580, 0056359e]]
// Convention: unknown
// Signature: int FUN_00563580(int param_1,int param_2,int param_3)

#include "nocturne.h"

int FUN_00563580(int param_1,int param_2,int param_3)

{
  return (param_3 * *(int *)(param_1 + 0x1de78) + param_2) * 0x10 + *(int *)(param_1 + 0x1ec90);
}
