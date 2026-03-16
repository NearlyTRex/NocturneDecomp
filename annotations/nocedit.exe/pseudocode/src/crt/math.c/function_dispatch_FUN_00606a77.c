// Name: crt_math.c_function_dispatch_FUN_00606a77
// Address: 00606a77
// Address Range: [[00606a77, 00606a80]]
// Convention: __watcallRegister
// Signature: float10 __watcallRegister crt_math_c_function_dispatch_FUN_00606a77(int function_index)

#include "nocturne.h"

float10 __watcallRegister function_dispatch(int function_index)

{
  float10 in_ST0;
  
                    /* WARNING: Could not recover jumptable at 0x00606a7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(&PTR_FUN_006873d4)[function_index])();
  return in_ST0;
}
