// Name: engine_alphabit.cpp_copyBytes_FUN_00410d20
// Address: 00410d20
// Address Range: [[00410d20, 00410d44]]
// Convention: __cdecl
// Signature: void engine_alphabit.cpp_copyBytes_FUN_00410d20(void * src, void * dest, int width, int height)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_copyBytes_FUN_00410d20(void *src,void *dest,int width,int height)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  uVar1 = *(int *)((int)src + 0xc) * *(int *)((int)src + 0x10);
                    /* WARNING: Load size is inaccurate */
  puVar3 = *src;
  puVar4 = *(uint **)((int)src + 4);
  for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(byte *)puVar4 = *(byte *)puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  return;
}
