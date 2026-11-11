// Name: crt_unknown.c_fflush_FUN_005c1f9c
// Address: 005c1f9c
// Address Range: [[005c1f9c, 005c1fd6]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_fflush_FUN_005c1f9c(_FILE *stream)

#include "nocturne.h"

void __cdecl _fflush(_FILE *stream)

{
  int iVar1;
  
  iVar1 = (int)&stream->_ptr + *(int *)(stream->_ptr + 4);
  if (*(int *)(iVar1 + 4) != 0) {
    iVar1 = FUN_005c8dfc(*(int *)(iVar1 + 4));
    if (iVar1 != 0) {
      return;
    }
    iVar1 = (int)&stream->_ptr + *(int *)(stream->_ptr + 4);
  }
  FUN_005c8e45(iVar1,2);
  return;
}
