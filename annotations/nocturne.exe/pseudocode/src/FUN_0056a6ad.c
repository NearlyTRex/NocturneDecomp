// Name: FUN_0056a6ad
// Address: 0056a6ad
// Address Range: [[0056a6ad, 0056a6c3]]
// Convention: unknown
// Signature: void FUN_0056a6ad(void)

#include "nocturne.h"

void FUN_0056a6ad(void)

{
  ushort uVar1;
  uint in_EAX;
  char *unaff_EBX;
  
  if (99 < in_EAX) {
    in_EAX = (in_EAX & 0xffff) % 100;
  }
  FUN_0056a6c4();
  uVar1 = (ushort)CONCAT31((int3)in_EAX,(char)(in_EAX >> 8));
  if (9 < (byte)in_EAX) {
    uVar1 = CONCAT11((char)((ushort)in_EAX % 10),(char)((ushort)in_EAX / 10));
  }
  *unaff_EBX = (char)uVar1 + '0';
  unaff_EBX[1] = (char)((ushort)uVar1 >> 8) + '0';
  return;
}
