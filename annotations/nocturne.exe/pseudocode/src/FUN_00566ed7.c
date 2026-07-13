// Name: FUN_00566ed7
// Address: 00566ed7
// Address Range: [[00566ed7, 00566eff]]
// Convention: unknown
// Signature: void FUN_00566ed7(void)

#include "nocturne.h"

void FUN_00566ed7(void)

{
  if (DAT_005c1f4c != 0) {
    return;
  }
  DAT_005c1f4c = 1;
  FUN_0056af76("pure virtual function called!",1);
  return;
}
