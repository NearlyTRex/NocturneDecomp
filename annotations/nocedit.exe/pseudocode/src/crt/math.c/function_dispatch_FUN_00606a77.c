// Name: crt_math.c_function_dispatch_FUN_00606a77
// Address: 00606a77
// Address Range: [[00606a77, 00606a80]]
// Convention: __watcallRegister
// Signature: void crt_math.c_function_dispatch_FUN_00606a77(int function_index)
// Cross-references:
//   crt_math.c_atan2_FUN_0060c440 (0060c440) at 0060c50f [UNCONDITIONAL_CALL]
//   crt_math.c_pow_FUN_005ffd76 (005ffd76) at 005ffe59 [UNCONDITIONAL_CALL]
// Globals:
//   void* PTR_FUN_006873d4 = 00606a81

#include "nocturne.h"

void crt_math_c_function_dispatch_FUN_00606a77(int function_index)

{
                    /* WARNING: Could not recover jumptable at 0x00606a7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_006873d4)[function_index])();
  return;
}


// Assembly code:
// 00606a77: SUB ESP,0x2c
//   Label: crt_math.c_function_dispatch_FUN_00606a77
// 00606a7a: JMP dword ptr [EAX*0x4 + 0x6873d4]
//   XREF to: 006873d4 (DATA)
