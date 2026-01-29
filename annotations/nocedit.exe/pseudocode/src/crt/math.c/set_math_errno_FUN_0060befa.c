// Name: crt_math.c_set_math_errno_FUN_0060befa
// Address: 0060befa
// Address Range: [[0060befa, 0060bf2c]]
// Convention: __cdecl
// Signature: double __cdecl crt_math_c_set_math_errno_FUN_0060befa(int errorFlags,double *valuePtr)

#include "nocturne.h"

double __cdecl set_math_errno(int errorFlags,double *valuePtr)

{
  double dVar1;
  
  dVar1 = process_math_error(errorFlags,valuePtr,valuePtr);
  return dVar1;
}
