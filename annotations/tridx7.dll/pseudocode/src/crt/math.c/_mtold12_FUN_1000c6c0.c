// Name: crt_math.c__mtold12_FUN_1000c6c0
// Address: 1000c6c0
// Address Range: [[1000c6c0, 1000c7a7]]
// Convention: __cdecl
// Signature: void __cdecl crt_math_c__mtold12_FUN_1000c6c0(char *manptr,int cnt,uint *ld12)

#include "nocturne.h"

void __cdecl _mtold12(char *manptr,int cnt,uint *ld12)

{
  byte bVar1;
  uint uVar2;
  short sVar3;
  uint local_c;
  uint local_8;
  uint local_4;
  
  sVar3 = 0x404e;
  *ld12 = 0;
  ld12[1] = 0;
  ld12[2] = 0;
  for (; cnt != 0; cnt = cnt + -1) {
    local_c = *ld12;
    local_8 = ld12[1];
    local_4 = ld12[2];
    _shl_12(ld12);
    _shl_12(ld12);
    _add_12(ld12,&local_c);
    _shl_12(ld12);
    local_c = (uint)*manptr;
    local_8 = 0;
    local_4 = 0;
    _add_12(ld12,&local_c);
    manptr = manptr + 1;
  }
  uVar2 = ld12[2];
  while (uVar2 == 0) {
    sVar3 = sVar3 + -0x10;
    uVar2 = ld12[1] >> 0x10;
    ld12[2] = uVar2;
    ld12[1] = ld12[1] << 0x10 | *ld12 >> 0x10;
    *ld12 = *ld12 << 0x10;
  }
  bVar1 = *(byte *)((int)ld12 + 9);
  while ((bVar1 & 0x80) == 0) {
    sVar3 = sVar3 + -1;
    _shl_12(ld12);
    bVar1 = *(byte *)((int)ld12 + 9);
  }
  *(short *)((int)ld12 + 10) = sVar3;
  return;
}
