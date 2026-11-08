// Name: FUN_00410040
// Address: 00410040
// Address Range: [[00410040, 00410077]]
// Convention: unknown
// Signature: void FUN_00410040(int param_1,int param_2)

#include "nocturne.h"

void FUN_00410040(int param_1,int param_2)

{
  if ((param_2 == *(int *)(param_1 + 0x25718)) && (*(int *)(param_1 + 0x25718) != 0)) {
    FUN_00503620(param_1 + 0x2b4,7,1);
    *(uint *)(param_1 + 0x25718) = 0;
    return;
  }
  return;
}
