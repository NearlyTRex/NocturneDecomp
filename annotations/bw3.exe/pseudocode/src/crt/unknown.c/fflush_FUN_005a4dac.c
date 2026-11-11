// Name: crt_unknown.c_fflush_FUN_005a4dac
// Address: 005a4dac
// Address Range: [[005a4dac, 005a4de6]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_fflush_FUN_005a4dac(_FILE *stream)

#include "nocturne.h"

void __cdecl _fflush(_FILE *stream)

{
  int iVar1;
  
  iVar1 = (int)&stream->_ptr + *(int *)(stream->_ptr + 4);
  if (*(int *)(iVar1 + 4) != 0) {
    iVar1 = FUN_005abc3c(*(int *)(iVar1 + 4));
    if (iVar1 != 0) {
      return;
    }
    iVar1 = (int)&stream->_ptr + *(int *)(stream->_ptr + 4);
  }
  FUN_005abc85(iVar1,2);
  return;
}
