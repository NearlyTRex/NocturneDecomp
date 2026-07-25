// Name: FUN_0047767b
// Address: 0047767b
// Address Range: [[0047767b, 0047768e]]
// Convention: unknown
// Signature: void FUN_0047767b(void)

#include "nocturne.h"

void FUN_0047767b(void)

{
  char *in_EAX;
  char in_CL;
  uint *in_EDX;
  int unaff_EBX;
  
  *in_EAX = *in_EAX + (char)in_EAX;
  *in_EAX = *in_EAX + (char)in_EAX;
  *(char *)(unaff_EBX + -0x74fbdbac) = *(char *)(unaff_EBX + -0x74fbdbac) + in_CL;
  *in_EDX = *(uint *)((uint)in_EAX & 0xffffff08);
  return;
}
