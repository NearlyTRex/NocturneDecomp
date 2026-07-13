// Name: _sprintf
// Address: 10005630
// Address Range: [[10005630, 10005696]]
// Convention: __cdecl
// Signature: int __cdecl _sprintf(char *_Dest,char *_Format,...)

#include "nocturne.h"

/* Library Function - Single Match
int __cdecl _sprintf(char *_Dest,char *_Format,...)

{
  int iVar1;
  char *local_20;
  int local_1c;
  char *local_18;
  uint local_14;
  
  local_14 = 0x42;
  local_18 = _Dest;
  local_20 = _Dest;
  local_1c = 0x7fffffff;
  iVar1 = FUN_10005f40(&local_20,_Format,&stack0x0000000c);
  local_1c = local_1c + -1;
  if (-1 < local_1c) {
    *local_20 = '\0';
    return iVar1;
  }
  FUN_10007420(0,&local_20);
  return iVar1;
}
