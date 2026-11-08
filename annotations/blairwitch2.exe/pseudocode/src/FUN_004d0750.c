// Name: FUN_004d0750
// Address: 004d0750
// Address Range: [[004d0750, 004d077b]]
// Convention: unknown
// Signature: void FUN_004d0750(void)

#include "nocturne.h"

void FUN_004d0750(void)

{
  if (*(int *)(0x01CB6900 + 0x25c) == 0) {
    (*(code *)**(uint **)(0x01CB6900 + 0xb1c))(0x01CB6900,1);
    return;
  }
  (*(code *)**(uint **)(0x01CB6900 + 0xb1c))(0x01CB6900,0);
  return;
}
