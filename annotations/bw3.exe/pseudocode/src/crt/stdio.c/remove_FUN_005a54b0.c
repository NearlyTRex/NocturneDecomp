// Name: crt_stdio.c_remove_FUN_005a54b0
// Address: 005a54b0
// Address Range: [[005a54b0, 005a54bd]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_remove_FUN_005a54b0(char *filename)

#include "nocturne.h"

int __cdecl _remove(char *filename)

{
  int iVar1;
  
  iVar1 = FUN_005acbc0(filename);
  return iVar1;
}
