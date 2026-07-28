// Name: crt_math.c_function_dispatch_FUN_0056bf67
// Address: 0056bf67
// Address Range: [[0056bf67, 0056bf70]]
// Convention: __watcallRegister
// Signature: float10 __watcallRegister crt_math_c_function_dispatch_FUN_0056bf67(int function_index)

#include "nocturne.h"

float10 __watcallRegister function_dispatch(int function_index)

{
  float10 in_ST0;
  
                    /* WARNING: Could not recover jumptable at 0x0056bf6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_005c3f84)[function_index])();
  return in_ST0;
}
