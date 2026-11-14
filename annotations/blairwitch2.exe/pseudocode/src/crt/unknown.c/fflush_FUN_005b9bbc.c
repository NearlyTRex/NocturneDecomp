// Name: crt_unknown.c_fflush_FUN_005b9bbc
// Address: 005b9bbc
// Address Range: [[005b9bbc, 005b9bf6]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_fflush_FUN_005b9bbc(_FILE *stream)

#include "nocturne.h"

void __cdecl _fflush(_FILE *stream)

{
  int iVar1;
  
  iVar1 = (int)&stream->_ptr + *(int *)(stream->_ptr + 4);
  if (*(int *)(iVar1 + 4) != 0) {
    iVar1 = FUN_005c0b3c(*(int *)(iVar1 + 4));
    if (iVar1 != 0) {
      return;
    }
    iVar1 = (int)&stream->_ptr + *(int *)(stream->_ptr + 4);
  }
  FUN_005c0b85(iVar1,2);
  return;
}
