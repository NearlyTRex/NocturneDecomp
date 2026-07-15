// Name: crt_math.c__atoflt_FUN_1000a280
// Address: 1000a280
// Address Range: [[1000a280, 1000a2b4]]
// Convention: __cdecl
// Signature: int __cdecl crt_math_c__atoflt_FUN_1000a280(_CRT_FLOAT *result,char *str)

#include "nocturne.h"

int __cdecl _atoflt(_CRT_FLOAT *result,char *str)

{
  INTRNCVT_STATUS IVar1;
  char *local_10;
  _LDBL12 local_c;
  
  _strgtold12(&local_c,&local_10,str,0,0,0,0);
  IVar1 = __ld12tof(&local_c,result);
  return IVar1;
}
