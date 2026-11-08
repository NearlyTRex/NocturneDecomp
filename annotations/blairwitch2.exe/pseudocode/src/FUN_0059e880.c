// Name: FUN_0059e880
// Address: 0059e880
// Address Range: [[0059e880, 0059e8b3]]
// Convention: unknown
// Signature: void FUN_0059e880(int param_1,int param_2)

#include "nocturne.h"

void FUN_0059e880(int param_1,int param_2)

{
  if ((param_2 == 7000) && (*(char *)(param_1 + 0x11642) != '\0')) {
    FUN_0055ae50(0x0264B290,param_1,param_1 + 0x11642,param_1 + 0x20);
    return;
  }
  return;
}
