// Name: crt_math.c_report_math_error_FUN_0060e2e5
// Address: 0060e2e5
// Address Range: [[0060e2e5, 0060e338]]
// Convention: __cdecl
// Signature: double __cdecl crt_math_c_report_math_error_FUN_0060e2e5(MathErrorContext *errorCtx)

#include "nocturne.h"

double __cdecl report_math_error(MathErrorContext *errorCtx)

{
  int iVar1;
  
  iVar1 = (*PTR_crt_math_c_check_error_context_FUN_0060fa8b_00685590)(errorCtx);
  if (iVar1 == 0) {
    print_error_message(errorCtx->errorType,errorCtx->errorData);
    if (errorCtx->errorType == 1) {
      set_domain_error_errno();
    }
    else {
      set_range_error_errno();
    }
  }
  return errorCtx->resultValue;
}
