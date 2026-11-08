// Name: FUN_004d49bf
// Address: 004d49bf
// Address Range: [[004d49bf, 004d4a11]]
// Convention: unknown
// Signature: void FUN_004d49bf(void)

#include "nocturne.h"

void FUN_004d49bf(void)

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
  *(uint *)(unaff_EBX + 0x2565c) = 0x3f800000;
  *(uint *)(unaff_EBX + 0x25658) = 0;
  *(uint *)(unaff_EBX + 0x25654) = *(uint *)(unaff_EBX + 0x25658);
  *(uint *)(unaff_EBX + 0x25650) = *(uint *)(unaff_EBX + 0x25654);
  *(uint *)(unaff_EBX + 0x25660) = 0;
  *(uint *)(unaff_EBX + 0x25664) = 0;
  *(uint *)(unaff_EBX + 0x25a8) = 0x43960000;
  return;
}
