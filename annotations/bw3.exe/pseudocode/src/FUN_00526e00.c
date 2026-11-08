// Name: FUN_00526e00
// Address: 00526e00
// Address Range: [[00526e00, 00526e2b]]
// Convention: unknown
// Signature: void FUN_00526e00(int param_1,int param_2)

#include "nocturne.h"

void FUN_00526e00(int param_1,int param_2)

{
  *(int *)(param_1 + 0x20bcc) = param_2;
  if ((param_2 == 0) && (*(int *)(0x01D2130C + 0x26c) != 0)) {
    *(uint *)(0x01D2130C + 0x26c) = 0;
    return;
  }
  return;
}
