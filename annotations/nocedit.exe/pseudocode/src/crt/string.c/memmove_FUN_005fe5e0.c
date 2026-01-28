// Name: crt_string.c_memmove_FUN_005fe5e0
// Address: 005fe5e0
// Address Range: [[005fe5e0, 005fe631]]
// Convention: __cdecl
// Signature: void * __cdecl crt_string_c_memmove_FUN_005fe5e0(void *dest,void *src,SIZE_T n)

#include "nocturne.h"

void * __cdecl crt_string_c_memmove_FUN_005fe5e0(void *dest,void *src,SIZE_T n)

{
  uint uVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint *puVar4;
  
  if (src != dest) {
    if ((src < dest) && (dest < (ushort *)((int)src + n))) {
      uVar1 = n >> 1;
      puVar2 = (ushort *)((int)src + n);
      puVar3 = (ushort *)((int)dest + n);
      while( true ) {
        if (uVar1 == 0) break;
        uVar1 = uVar1 - 1;
        puVar3[-1] = puVar2[-1];
        puVar2 = puVar2 + -1;
        puVar3 = puVar3 + -1;
      }
      uVar1 = (uint)((n & 1) != 0);
      while( true ) {
        puVar3 = (ushort *)((int)puVar3 + -1);
        puVar2 = (ushort *)((int)puVar2 - 1);
        if (uVar1 == 0) break;
        uVar1 = uVar1 - 1;
        *(byte *)puVar3 = *(byte *)puVar2;
      }
      return dest;
    }
    puVar4 = dest;
    for (uVar1 = n >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = *(uint *)src;
      src = (uint *)((int)src + 4);
      puVar4 = puVar4 + 1;
    }
    for (uVar1 = n & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(byte *)puVar4 = *(byte *)src;
      src = (uint *)((int)src + 1);
      puVar4 = (uint *)((int)puVar4 + 1);
    }
  }
  return dest;
}
