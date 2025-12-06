// Name: crt_math.c_set_math_errno_FUN_0060befa
// Address: 0060befa
// Address Range: [[0060befa, 0060bf2c]]
// Convention: __cdecl
// Signature: double crt_math.c_set_math_errno_FUN_0060befa(int errorFlags, double * valuePtr)

#include "nocturne.h"

double __cdecl crt_math_c_set_math_errno_FUN_0060befa(int errorFlags,double *valuePtr)

{
  double dVar1;
  
  dVar1 = crt_math_c_process_math_error_FUN_0060bf2d(errorFlags,valuePtr,valuePtr);
  return dVar1;
}
