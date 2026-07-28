// Name: crt_unknown.c_heapCheck_FUN_00566c44
// Address: 00566c44
// Address Range: [[00566c44, 00566c6a]]
// Convention: __cdecl
// Signature: int __cdecl crt_unknown_c_heapCheck_FUN_00566c44(void *heap_state_ptr)

#include "nocturne.h"

int __cdecl heapCheck(void *heap_state_ptr)

{
  int iVar1;
  
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad8)();
  iVar1 = heapWalk(heap_state_ptr,DAT_005c1680);
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ae0)();
  return iVar1;
}
