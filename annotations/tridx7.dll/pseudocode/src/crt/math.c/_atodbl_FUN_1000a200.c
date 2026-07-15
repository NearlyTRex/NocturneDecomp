// Name: crt_math.c__atodbl_FUN_1000a200
// Address: 1000a200
// Address Range: [[1000a200, 1000a234]]
// Convention: __cdecl
// Signature: int __cdecl crt_math_c__atodbl_FUN_1000a200(_CRT_DOUBLE *result,char *str)

#include "nocturne.h"

int __cdecl _atodbl(_CRT_DOUBLE *result,char *str)

{
  INTRNCVT_STATUS IVar1;
  char *local_10;
  _LDBL12 local_c;
  
  _strgtold12(&local_c,&local_10,str,0,0,0,0);
  IVar1 = __ld12tod(&local_c,result);
  return IVar1;
}
