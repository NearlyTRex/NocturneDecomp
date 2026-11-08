// Name: FUN_00488940
// Address: 00488940
// Address Range: [[00488940, 00488969]]
// Convention: unknown
// Signature: void FUN_00488940(int param_1,int param_2)

#include "nocturne.h"

void FUN_00488940(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x10a64) != 0) {
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x2568) = 1;
    }
    FUN_00425a00(param_1,param_2);
  }
  return;
}
