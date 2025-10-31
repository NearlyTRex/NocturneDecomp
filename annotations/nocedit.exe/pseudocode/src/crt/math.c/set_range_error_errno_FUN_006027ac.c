// Name: crt_math.c_set_range_error_errno_FUN_006027ac
// Address: 006027ac
// Address Range: [[006027ac, 006027b6]]
// Convention: __cdecl
// Signature: void crt_math.c_set_range_error_errno_FUN_006027ac(void)
// Cross-references:
//   crt_math.c_report_math_error_FUN_0060e2e5 (0060e2e5) at 0060e31b [UNCONDITIONAL_CALL]
//   crt_string.c_strtod_main_FUN_00605d5d (00605d5d) at 00605e33 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00600002 (00600002) at 0060006a [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060eb57 (0060eb57) at 0060eb58 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_errno.c_setErrno_FUN_00602790

#include "nocturne.h"

void __cdecl crt_math_c_set_range_error_errno_FUN_006027ac(void)

{
  crt_errno_c_setErrno_FUN_00602790(0xe);
  return;
}


// Assembly code:
// 006027ac: PUSH 0xe
//   Label: crt_math.c_set_range_error_errno_FUN_006027ac
// 006027ae: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 006027b3: ADD ESP,0x4
// 006027b6: RET
