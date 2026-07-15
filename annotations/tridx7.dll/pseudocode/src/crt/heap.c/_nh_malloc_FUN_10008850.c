// Name: crt_heap.c__nh_malloc_FUN_10008850
// Address: 10008850
// Address Range: [[10008850, 1000888f]]
// Convention: __cdecl
// Signature: void * __cdecl crt_heap_c__nh_malloc_FUN_10008850(size_t size,int nh_flag)

#include "nocturne.h"

void * __cdecl _nh_malloc(size_t size,int nh_flag)

{
  void *pvVar1;
  int iVar2;
  
  if (0xffffffe0 < size) {
    return (void *)0x0;
  }
  if (size == 0) {
    size = 1;
  }
  while( true ) {
    pvVar1 = _heap_alloc(size);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (nh_flag == 0) break;
    iVar2 = _callnewh(size);
    if (iVar2 == 0) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}
