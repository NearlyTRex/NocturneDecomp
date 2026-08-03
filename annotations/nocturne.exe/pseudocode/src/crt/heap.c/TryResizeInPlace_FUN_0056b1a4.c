// Name: crt_heap.c_TryResizeInPlace_FUN_0056b1a4
// Address: 0056b1a4
// Address Range: [[0056b1a4, 0056b1ed]]
// Convention: __cdecl
// Signature: void * __cdecl crt_heap_c_TryResizeInPlace_FUN_0056b1a4(void *ptr,ulong new_size)

#include "nocturne.h"

void * __cdecl TryResizeInPlace(void *ptr,ulong new_size)

{
  int iVar1;
  
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad8)();
  iVar1 = ResizeBlockInPlace();
  if (iVar1 == 0) {
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ae0)();
    return ptr;
  }
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ae0)();
  return (void *)0x0;
}
