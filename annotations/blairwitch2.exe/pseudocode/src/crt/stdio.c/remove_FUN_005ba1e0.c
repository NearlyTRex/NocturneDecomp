// Name: crt_stdio.c_remove_FUN_005ba1e0
// Address: 005ba1e0
// Address Range: [[005ba1e0, 005ba1ed]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_remove_FUN_005ba1e0(char *filename)

#include "nocturne.h"

int __cdecl _remove(char *filename)

{
  int iVar1;
  
  iVar1 = FUN_005c0fc0(filename);
  return iVar1;
}
