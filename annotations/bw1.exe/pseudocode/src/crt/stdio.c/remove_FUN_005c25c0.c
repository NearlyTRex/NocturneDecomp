// Name: crt_stdio.c_remove_FUN_005c25c0
// Address: 005c25c0
// Address Range: [[005c25c0, 005c25cd]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_remove_FUN_005c25c0(char *filename)

#include "nocturne.h"

int __cdecl _remove(char *filename)

{
  int iVar1;
  
  iVar1 = FUN_005c9280(filename);
  return iVar1;
}
