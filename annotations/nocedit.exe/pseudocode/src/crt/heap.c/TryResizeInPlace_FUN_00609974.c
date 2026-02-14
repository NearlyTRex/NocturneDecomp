// Name: crt_heap.c_TryResizeInPlace_FUN_00609974
// Address: 00609974
// Address Range: [[00609974, 006099bd]]
// Convention: __cdecl
// Signature: void * __cdecl crt_heap_c_TryResizeInPlace_FUN_00609974(void *ptr,ulong new_size)

#include "nocturne.h"

void * __cdecl TryResizeInPlace(void *ptr,ulong new_size)

{
  int iVar1;
  ulong *pExtraNeeded;
  ushort in_DS;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f00)();
  iVar1 = ResizeBlockInPlace
                    (in_DS,(void *)CONCAT22((short)(new_size >> 0x10),in_DS),(ulong)ptr,pExtraNeeded
                    );
  if (iVar1 == 0) {
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f08)();
    return ptr;
  }
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f08)();
  return (void *)0x0;
}
