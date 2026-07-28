// Name: crt_math.c_report_math_error_FUN_00572a35
// Address: 00572a35
// Address Range: [[00572a35, 00572a88]]
// Convention: __cdecl
// Signature: double __cdecl crt_math_c_report_math_error_FUN_00572a35(MathErrorContext *errorCtx)

#include "nocturne.h"

double __cdecl report_math_error(MathErrorContext *errorCtx)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_thunk_FUN_00573ffb_005c2164)(errorCtx);
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
