// Name: crt_memory.c_realloc_implementation_FUN_00601e08
// Address: 00601e08
// Address Range: [[00601e08, 00601e9b]]
// Convention: __cdecl
// Signature: void * crt_memory.c_realloc_implementation_FUN_00601e08(void * ptr, ulong new_size)

#include "nocturne.h"

void * __cdecl crt_memory_c_realloc_implementation_FUN_00601e08(void *ptr,ulong new_size)

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
    pvVar1 = crt_heap_c_InternalHeapAlloc_FUN_00601bc0(new_size);
    return pvVar1;
  }
  if (new_size == 0) {
    crt_heap_c_ValidateHeapIntegrity_FUN_00601ce0(ptr);
    return (void *)0x0;
  }
  new_size_00 = crt_heap_c_GetBlockSize_FUN_00609790(ptr);
  puVar2 = crt_heap_c_TryResizeInPlace_FUN_00609974(ptr,new_size);
  if (puVar2 == (uint *)0x0) {
    puVar2 = crt_heap_c_InternalHeapAlloc_FUN_00601bc0(new_size);
    if (puVar2 == (uint *)0x0) {
      crt_heap_c_TryResizeInPlace_FUN_00609974(ptr,new_size_00);
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
      crt_heap_c_ValidateHeapIntegrity_FUN_00601ce0(ptr);
    }
  }
  return puVar2;
}
