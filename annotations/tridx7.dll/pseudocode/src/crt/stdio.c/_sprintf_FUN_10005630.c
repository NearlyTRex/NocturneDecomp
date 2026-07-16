// Name: crt_stdio.c__sprintf_FUN_10005630
// Address: 10005630
// Address Range: [[10005630, 10005696]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c__sprintf_FUN_10005630(char *dest,char *format)

#include "nocturne.h"

int __cdecl _sprintf(char *dest,char *format)

{
  int iVar1;
  _FILE local_20;
  
  local_20._flag = 0x42;
  local_20._base = dest;
  local_20._ptr = dest;
  local_20._cnt = 0x7fffffff;
  iVar1 = _output(&local_20,format,&stack0x0000000c);
  local_20._cnt = local_20._cnt + -1;
  if (-1 < local_20._cnt) {
    *local_20._ptr = '\0';
    return iVar1;
  }
  _flsbuf(0,&local_20);
  return iVar1;
}
