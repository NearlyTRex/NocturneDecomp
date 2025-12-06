// Name: crt_heap.c_heapCheck_FUN_00601374
// Address: 00601374
// Address Range: [[00601374, 0060139a]]
// Convention: __cdecl
// Signature: int crt_heap.c_heapCheck_FUN_00601374(void * heap_state_ptr)

#include "nocturne.h"

int __cdecl crt_heap_c_heapCheck_FUN_00601374(void *heap_state_ptr)

{
  int iVar1;
  
  (*(code *)PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f00)();
  iVar1 = crt_heap_c_heapWalk_FUN_006012d0((HeapState *)heap_state_ptr,g_MainHeap);
  (*(code *)PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f08)();
  return iVar1;
}
