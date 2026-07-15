// Name: crt_math.c___ld12tof_FUN_1000a150
// Address: 1000a150
// Address Range: [[1000a150, 1000a167]]
// Convention: __cdecl
// Signature: INTRNCVT_STATUS __cdecl crt_math_c___ld12tof_FUN_1000a150(_LDBL12 *ifp,_CRT_FLOAT *f)

#include "nocturne.h"

INTRNCVT_STATUS __cdecl __ld12tof(_LDBL12 *ifp,_CRT_FLOAT *f)

{
  INTRNCVT_STATUS IVar1;
  
  IVar1 = _ld12cvt((ushort *)ifp,(uint *)f,(int *)&DAT_100176b8);
  return IVar1;
}
