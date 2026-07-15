// Name: crt_io.c__open_FUN_100093d0
// Address: 100093d0
// Address Range: [[100093d0, 100093e9]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c__open_FUN_100093d0(char *filename,int oflag)

#include "nocturne.h"

int __cdecl _open(char *filename,int oflag)

{
  int iVar1;
  int in_stack_0000000c;
  
  iVar1 = _sopen(filename,oflag,0x40,in_stack_0000000c);
  return iVar1;
}
