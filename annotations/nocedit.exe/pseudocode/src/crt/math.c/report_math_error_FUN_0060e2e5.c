// Name: crt_math.c_report_math_error_FUN_0060e2e5
// Address: 0060e2e5
// Address Range: [[0060e2e5, 0060e338]]
// Convention: __cdecl
// Signature: double __cdecl crt_math_c_report_math_error_FUN_0060e2e5(MathErrorContext *errorCtx)

#include "nocturne.h"

double __cdecl crt_math_c_report_math_error_FUN_0060e2e5(MathErrorContext *errorCtx)

{
  int iVar1;
  
  iVar1 = (*PTR_crt_math_c_check_error_context_FUN_0060fa8b_00685590)(errorCtx);
  if (iVar1 == 0) {
    crt_math_c_print_error_message_FUN_0060e298(errorCtx->errorType,errorCtx->errorData);
    if (errorCtx->errorType == 1) {
      crt_math_c_set_domain_error_errno_FUN_006027a0();
    }
    else {
      crt_math_c_set_range_error_errno_FUN_006027ac();
    }
  }
  return errorCtx->resultValue;
}
