// Name: FUN_0041206c
// Address: 0041206c
// Address Range: [[0041206c, 0041207e]]
// Convention: unknown
// Signature: void FUN_0041206c(void)

#include "nocturne.h"

void FUN_0041206c(void)

{
  uint in_EAX;
  char in_CL;
  uint *in_EDX;
  int unaff_EBX;
  
  *(char *)(unaff_EBX + 0x24548bdb) = *(char *)(unaff_EBX + 0x24548bdb) + in_CL;
  *in_EDX = *(uint *)(CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + -0x75) & 0xffffff08);
  return;
}
