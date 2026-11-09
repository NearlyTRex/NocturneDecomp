// Name: crt_unknown.c_FUN_005bc5ad
// Address: 005bc5ad
// Address Range: [[005bc5ad, 005bc5c3]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005bc5ad(void)

#include "nocturne.h"

void FUN_005bc5ad(void)

{
  ushort uVar1;
  uint in_EAX;
  char *unaff_EBX;
  
  if (99 < in_EAX) {
    in_EAX = (in_EAX & 0xffff) % 100;
  }
  FUN_005bc5c4();
  uVar1 = (ushort)CONCAT31((int3)in_EAX,(char)(in_EAX >> 8));
  if (9 < (byte)in_EAX) {
    uVar1 = CONCAT11((char)((ushort)in_EAX % 10),(char)((ushort)in_EAX / 10));
  }
  *unaff_EBX = (char)uVar1 + '0';
  unaff_EBX[1] = (char)((ushort)uVar1 >> 8) + '0';
  return;
}
