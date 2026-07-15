// Name: crt_math.c___ld12tod_FUN_1000a130
// Address: 1000a130
// Address Range: [[1000a130, 1000a147]]
// Convention: __cdecl
// Signature: INTRNCVT_STATUS __cdecl crt_math_c___ld12tod_FUN_1000a130(_LDBL12 *ifp,_CRT_DOUBLE *d)

#include "nocturne.h"

INTRNCVT_STATUS __cdecl __ld12tod(_LDBL12 *ifp,_CRT_DOUBLE *d)

{
  INTRNCVT_STATUS IVar1;
  
  IVar1 = _ld12cvt((ushort *)ifp,(uint *)d,(int *)&DAT_100176a0);
  return IVar1;
}
