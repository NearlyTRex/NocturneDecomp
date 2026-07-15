// Name: crt_heap.c__callnewh_FUN_1000ab30
// Address: 1000ab30
// Address Range: [[1000ab30, 1000ab6d]]
// Convention: __cdecl
// Signature: int __cdecl crt_heap_c__callnewh_FUN_1000ab30(size_t size)

#include "nocturne.h"

int __cdecl _callnewh(size_t size)

{
  int iVar1;
  
  _lock(9);
  if (DAT_10240794 != (code *)0x0) {
    iVar1 = (*DAT_10240794)(size);
    if (iVar1 != 0) {
      _unlock(9);
      return 1;
    }
  }
  _unlock(9);
  return 0;
}
