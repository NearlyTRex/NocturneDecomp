// Name: crt_string.c_memcpy_FUN_0060cd60
// Address: 0060cd60
// Address Range: [[0060cd60, 0060cd88]]
// Convention: __cdecl
// Signature: void * crt_string.c_memcpy_FUN_0060cd60(void * dest, void * src, SIZE_T count)

#include "nocturne.h"

void * __cdecl crt_string_c_memcpy_FUN_0060cd60(void *dest,void *src,SIZE_T count)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = dest;
  for (uVar1 = count >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *(uint *)src;
    src = (uint *)((int)src + 4);
    puVar2 = puVar2 + 1;
  }
  for (uVar1 = count & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(byte *)puVar2 = *(byte *)src;
    src = (uint *)((int)src + 1);
    puVar2 = (uint *)((int)puVar2 + 1);
  }
  return dest;
}
