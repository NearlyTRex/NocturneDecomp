// Name: FUN_004ec9e0
// Address: 004ec9e0
// Address Range: [[004ec9e0, 004eca0b]]
// Convention: unknown
// Signature: void FUN_004ec9e0(void)

#include "nocturne.h"

void FUN_004ec9e0(void)

{
  if (*(int *)(0x01CCF390 + 0x25c) == 0) {
    (*(code *)**(uint **)(0x01CCF390 + 0xb00))(0x01CCF390,1);
    return;
  }
  (*(code *)**(uint **)(0x01CCF390 + 0xb00))(0x01CCF390,0);
  return;
}
