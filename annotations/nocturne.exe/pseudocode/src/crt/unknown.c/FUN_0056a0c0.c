// Name: crt_unknown.c_FUN_0056a0c0
// Address: 0056a0c0
// Address Range: [[0056a0c0, 0056a0f0]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056a0c0(void)

#include "nocturne.h"

void FUN_0056a0c0(void)

{
  byte *in_EAX;
  byte *puVar1;
  uint in_ECX;
  uint uVar2;
  byte uVar3;
  uint in_EDX;
  undefined6 uVar4;
  
  if (in_ECX != 0) {
    do {
      if (((uint)in_EAX & 3) == 0) break;
      *in_EAX = (char)in_EDX;
      in_EAX = in_EAX + 1;
      in_EDX = in_EDX >> 8 | in_EDX << 0x18;
      in_ECX = in_ECX - 1;
    } while (in_ECX != 0);
    uVar4 = FUN_0056a0f7();
    puVar1 = (byte *)uVar4;
    uVar2 = in_ECX & 3;
    if (uVar2 != 0) {
      uVar3 = (byte)((uint6)uVar4 >> 0x20);
      *puVar1 = uVar3;
      if ((uVar2 != 1) && (puVar1[1] = (char)((uint6)uVar4 >> 0x28), uVar2 != 2)) {
        puVar1[2] = uVar3;
      }
    }
  }
  return;
}
