// Name: FID_conflict:_fwprintf
// Address: 100054d0
// Address Range: [[100054d0, 10005518]]
// Convention: __cdecl
// Signature: int __cdecl FID_conflict__fwprintf(FILE *_File,wchar_t *_Format,...)

#include "nocturne.h"

/* Library Function - Multiple Matches With Different Base Names
int __cdecl FID_conflict__fwprintf(FILE *_File,wchar_t *_Format,...)

{
  int _Flag;
  int iVar1;
  
  __lock_file(_File);
  _Flag = __stbuf(_File);
  iVar1 = FUN_10005f40(_File,_Format,&stack0x0000000c);
  __ftbuf(_Flag,_File);
  __unlock_file(_File);
  return iVar1;
}
