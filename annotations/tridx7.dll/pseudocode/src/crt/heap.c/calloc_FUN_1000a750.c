// Name: crt_heap.c_calloc_FUN_1000a750
// Address: 1000a750
// Address Range: [[1000a750, 1000a7a1]]
// Convention: __cdecl
// Signature: void * __cdecl crt_heap_c_calloc_FUN_1000a750(size_t num,size_t size)

#include "nocturne.h"

void * __cdecl calloc(size_t num,size_t size)

{
  LPVOID pvVar1;
  int iVar2;
  uint dwBytes;
  
  dwBytes = size * num;
  if (dwBytes == 0) {
    dwBytes = 1;
  }
  do {
    if (dwBytes < 0xffffffe1) {
      pvVar1 = HeapAlloc(DAT_10241974,8,dwBytes);
    }
    else {
      pvVar1 = (LPVOID)0x0;
    }
    if (pvVar1 != (LPVOID)0x0) {
      return pvVar1;
    }
    if (DAT_10017780 == 0) {
      return (void *)0x0;
    }
    iVar2 = _callnewh(dwBytes);
  } while (iVar2 != 0);
  return (void *)0x0;
}
