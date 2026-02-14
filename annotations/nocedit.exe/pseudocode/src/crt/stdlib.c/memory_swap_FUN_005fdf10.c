// Name: crt_stdlib.c_memory_swap_FUN_005fdf10
// Address: 005fdf10
// Address Range: [[005fdf10, 005fdf35]]
// Convention: __watcallRegister
// Signature: void __watcallRegister crt_stdlib_c_memory_swap_FUN_005fdf10(void *ptr1,void *ptr2,SIZE_T bytes)

#include "nocturne.h"

void __watcallRegister memory_swap(void *ptr1,void *ptr2,SIZE_T bytes)

{
  byte uVar1;
  uint uVar2;
  uint uVar3;
  uint in_ECX;
  uint uVar4;
  uint *unaff_ESI;
  uint *unaff_EDI;
  
  for (uVar4 = in_ECX >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    LOCK();
    uVar2 = *unaff_ESI;
    *unaff_ESI = *unaff_EDI;
    UNLOCK();
    *unaff_EDI = uVar2;
    unaff_ESI = unaff_ESI + 1;
    unaff_EDI = unaff_EDI + 1;
  }
  uVar4 = (uint)((byte)in_ECX & 3);
  uVar3 = in_ECX & 3;
  while (uVar3 != 0) {
    LOCK();
    uVar1 = *(byte *)unaff_ESI;
    *(byte *)unaff_ESI = *(byte *)unaff_EDI;
    UNLOCK();
    *(byte *)unaff_EDI = uVar1;
    unaff_ESI = (uint *)((int)unaff_ESI + 1);
    uVar4 = uVar4 - 1;
    unaff_EDI = (uint *)((int)unaff_EDI + 1);
    uVar3 = uVar4;
  }
  return;
}
