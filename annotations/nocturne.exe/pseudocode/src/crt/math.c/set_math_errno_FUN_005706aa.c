// Name: crt_math.c_set_math_errno_FUN_005706aa
// Address: 005706aa
// Address Range: [[005706aa, 005706dc]]
// Convention: __cdecl
// Signature: double __cdecl crt_math_c_set_math_errno_FUN_005706aa(int errorFlags,double *valuePtr)

#include "nocturne.h"

double __cdecl set_math_errno(int errorFlags,double *valuePtr)

{
  double dVar1;
  
  dVar1 = (double)process_math_error(errorFlags,valuePtr,valuePtr);
  return dVar1;
}
