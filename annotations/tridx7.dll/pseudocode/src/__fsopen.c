// Name: __fsopen
// Address: 10005520
// Address Range: [[10005520, 10005559]]
// Convention: __cdecl
// Signature: FILE * __cdecl __fsopen(char *_Filename,char *_Mode,int _ShFlag)

#include "nocturne.h"

/* Library Function - Single Match
FILE * __cdecl __fsopen(char *_Filename,char *_Mode,int _ShFlag)

{
  FILE *_File;
  FILE *pFVar1;
  
  _File = (FILE *)FUN_10006c40();
  if (_File == (FILE *)0x0) {
    return (FILE *)0x0;
  }
  pFVar1 = __openfile(_Filename,_Mode,_ShFlag,_File);
  __unlock_file(_File);
  return pFVar1;
}
