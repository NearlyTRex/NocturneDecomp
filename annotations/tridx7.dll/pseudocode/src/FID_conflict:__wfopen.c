// Name: FID_conflict:__wfopen
// Address: 10005560
// Address Range: [[10005560, 10005574]]
// Convention: __cdecl
// Signature: FILE * __cdecl FID_conflict___wfopen(char *_Filename,char *_Mode)

#include "nocturne.h"

/* Library Function - Multiple Matches With Different Base Names
FILE * __cdecl FID_conflict___wfopen(char *_Filename,char *_Mode)

{
  FILE *pFVar1;
  
  pFVar1 = __fsopen(_Filename,_Mode,0x40);
  return pFVar1;
}
