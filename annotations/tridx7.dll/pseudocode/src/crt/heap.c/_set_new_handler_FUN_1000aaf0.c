// Name: crt_heap.c__set_new_handler_FUN_1000aaf0
// Address: 1000aaf0
// Address Range: [[1000aaf0, 1000ab17]]
// Convention: __cdecl
// Signature: _PNH __cdecl crt_heap_c__set_new_handler_FUN_1000aaf0(_PNH pnh)

#include "nocturne.h"

_PNH __cdecl _set_new_handler(_PNH pnh)

{
  _PNH p_Var1;
  
  _lock(9);
  p_Var1 = DAT_10240794;
  DAT_10240794 = pnh;
  _unlock(9);
  return p_Var1;
}
