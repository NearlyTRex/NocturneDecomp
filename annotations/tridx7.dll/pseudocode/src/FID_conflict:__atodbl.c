// Name: FID_conflict:__atodbl
// Address: 1000a280
// Address Range: [[1000a280, 1000a2b4]]
// Convention: __cdecl
// Signature: int __cdecl FID_conflict___atodbl(_CRT_FLOAT *_Result,char *_Str)

#include "nocturne.h"

/* Library Function - Multiple Matches With Different Base Names
int __cdecl FID_conflict___atodbl(_CRT_FLOAT *_Result,char *_Str)

{
  INTRNCVT_STATUS IVar1;
  char *local_10;
  _LDBL12 local_c;
  
  ___strgtold12(&local_c,&local_10,_Str,0,0,0,0);
  IVar1 = FID_conflict___ld12tod(&local_c,(_CRT_DOUBLE *)_Result);
  return IVar1;
}
