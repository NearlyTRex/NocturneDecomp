// Name: crt_math.c__atoldbl_FUN_1000a240
// Address: 1000a240
// Address Range: [[1000a240, 1000a274]]
// Convention: __cdecl
// Signature: int __cdecl crt_math_c__atoldbl_FUN_1000a240(_LDOUBLE *result,char *str)

#include "nocturne.h"

int __cdecl _atoldbl(_LDOUBLE *result,char *str)

{
  INTRNCVT_STATUS IVar1;
  char *local_10;
  _LDBL12 local_c;
  
  _strgtold12(&local_c,&local_10,str,1,0,0,0);
  IVar1 = __ld12told(&local_c,result);
  return IVar1;
}
