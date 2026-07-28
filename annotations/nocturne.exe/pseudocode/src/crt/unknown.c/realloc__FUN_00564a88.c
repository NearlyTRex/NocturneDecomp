// Name: crt_unknown.c_realloc__FUN_00564a88
// Address: 00564a88
// Address Range: [[00564a88, 00564b1b]]
// Convention: __cdecl
// Signature: void * __cdecl crt_unknown_c_realloc__FUN_00564a88(void *ptr,ulong new_size)

#include "nocturne.h"

void * __cdecl realloc_(void *ptr,ulong new_size)

{
  void *pvVar1;
  ulong new_size_00;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (ptr == (void *)0x0) {
    pvVar1 = InternalHeapAlloc(new_size);
    return pvVar1;
  }
  if (new_size == 0) {
    ValidateHeapIntegrity(ptr);
    return (void *)0x0;
  }
  new_size_00 = GetBlockSize(ptr);
  puVar2 = TryResizeInPlace(ptr,new_size);
  if (puVar2 == (uint *)0x0) {
    puVar2 = InternalHeapAlloc(new_size);
    if (puVar2 == (uint *)0x0) {
      TryResizeInPlace(ptr,new_size_00);
    }
    else {
      puVar4 = ptr;
      puVar5 = puVar2;
      for (uVar3 = new_size_00 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      for (uVar3 = new_size_00 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(byte *)puVar5 = *(byte *)puVar4;
        puVar4 = (uint *)((int)puVar4 + (uint)bVar6 * -2 + 1);
        puVar5 = (uint *)((int)puVar5 + (uint)bVar6 * -2 + 1);
      }
      ValidateHeapIntegrity(ptr);
    }
  }
  return puVar2;
}
