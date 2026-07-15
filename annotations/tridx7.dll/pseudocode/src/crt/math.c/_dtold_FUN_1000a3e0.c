// Name: crt_math.c__dtold_FUN_1000a3e0
// Address: 1000a3e0
// Address Range: [[1000a3e0, 1000a49b]]
// Convention: __cdecl
// Signature: void __cdecl crt_math_c__dtold_FUN_1000a3e0(uint *dst,uint *src)

#include "nocturne.h"

void __cdecl _dtold(uint *dst,uint *src)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  
  uVar1 = *(ushort *)((int)src + 6);
  uVar5 = (uVar1 & 0x7ff0) >> 4;
  uVar4 = 0x80000000;
  uVar2 = src[1];
  uVar3 = *src;
  if (uVar5 == 0) {
    if (((uVar2 & 0xfffff) == 0) && (uVar3 == 0)) {
      *(ushort *)(dst + 2) = 0;
      dst[1] = 0;
      *dst = 0;
      return;
    }
    uVar5 = 0x3c01;
    uVar4 = 0;
  }
  else if (uVar5 == 0x7ff) {
    uVar5 = 0x7fff;
  }
  else {
    uVar5 = uVar5 + 0x3c00;
  }
  *dst = uVar3 << 0xb;
  dst[1] = (uVar2 & 0xfffff) << 0xb | uVar3 >> 0x15 | uVar4;
  while (uVar4 == 0) {
    uVar5 = uVar5 - 1;
    uVar2 = *dst;
    uVar3 = dst[1];
    *dst = uVar2 * 2;
    dst[1] = uVar2 >> 0x1f | uVar3 * 2;
    uVar4 = uVar3 * 2 & 0x80000000;
  }
  *(ushort *)(dst + 2) = uVar5 | uVar1 & 0x8000;
  return;
}
