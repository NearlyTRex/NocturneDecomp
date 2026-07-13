// Name: FUN_10005600
// Address: 10005600
// Address Range: [[10005600, 1000562e]]
// Convention: unknown
// Signature: void FUN_10005600(void)

#include "nocturne.h"

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10005600(void)

{
  uint in_EAX;
  byte *puVar1;
  uint unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(uint *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}
