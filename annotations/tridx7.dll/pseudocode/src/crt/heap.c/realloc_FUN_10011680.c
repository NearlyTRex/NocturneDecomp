// Name: crt_heap.c_realloc_FUN_10011680
// Address: 10011680
// Address Range: [[10011680, 100116ee]]
// Convention: __cdecl
// Signature: void * __cdecl crt_heap_c_realloc_FUN_10011680(void *ptr,size_t size)

#include "nocturne.h"

void * __cdecl realloc(void *ptr,size_t size)

{
  void *pvVar1;
  LPVOID pvVar2;
  int iVar3;
  
  if (ptr == (void *)0x0) {
    pvVar1 = malloc(size);
    return pvVar1;
  }
  if (size != 0) {
    do {
      if (size < 0xffffffe1) {
        pvVar2 = HeapReAlloc(DAT_10241974,0,ptr,size);
      }
      else {
        pvVar2 = (LPVOID)0x0;
      }
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      if (DAT_10017780 == 0) {
        return (void *)0x0;
      }
      iVar3 = _callnewh(size);
    } while (iVar3 != 0);
    return (void *)0x0;
  }
  free(ptr);
  return (void *)0x0;
}
