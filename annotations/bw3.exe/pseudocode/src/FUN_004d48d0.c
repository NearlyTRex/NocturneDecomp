// Name: FUN_004d48d0
// Address: 004d48d0
// Address Range: [[004d48d0, 004d48fb]]
// Convention: unknown
// Signature: void FUN_004d48d0(void)

#include "nocturne.h"

void FUN_004d48d0(void)

{
  if (*(int *)(0x01D2130C + 0x264) == 0) {
    (*(code *)**(uint **)(0x01D2130C + 0xb8c))(0x01D2130C,1);
    return;
  }
  (*(code *)**(uint **)(0x01D2130C + 0xb8c))(0x01D2130C,0);
  return;
}
