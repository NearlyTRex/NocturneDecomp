// Name: FUN_004cc78f
// Address: 004cc78f
// Address Range: [[004cc78f, 004cc7c3]]
// Convention: unknown
// Signature: void FUN_004cc78f(void)

#include "nocturne.h"

void FUN_004cc78f(void)

{
  char cVar1;
  char *in_EAX;
  int unaff_EBX;
  char *pcVar2;
  
  cVar1 = (char)in_EAX + *in_EAX;
  pcVar2 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar1);
  *pcVar2 = *pcVar2 + cVar1;
  *pcVar2 = *pcVar2 + cVar1;
  FUN_005478b0();
  *(uint *)(unaff_EBX + 0x25654) = 0x3f800000;
  *(uint *)(unaff_EBX + 0x25650) = 0;
  *(uint *)(unaff_EBX + 0x2564c) = *(uint *)(unaff_EBX + 0x25650);
  *(uint *)(unaff_EBX + 0x25648) = *(uint *)(unaff_EBX + 0x2564c);
  return;
}
