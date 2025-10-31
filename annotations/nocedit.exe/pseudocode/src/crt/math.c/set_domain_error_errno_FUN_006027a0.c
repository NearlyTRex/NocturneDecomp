// Name: crt_math.c_set_domain_error_errno_FUN_006027a0
// Address: 006027a0
// Address Range: [[006027a0, 006027aa]]
// Convention: __cdecl
// Signature: void crt_math.c_set_domain_error_errno_FUN_006027a0(void)
// Cross-references:
//   crt_math.c_report_math_error_FUN_0060e2e5 (0060e2e5) at 0060e314 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_errno.c_setErrno_FUN_00602790

#include "nocturne.h"

void __cdecl crt_math_c_set_domain_error_errno_FUN_006027a0(void)

{
  crt_errno_c_setErrno_FUN_00602790(0xd);
  return;
}


// Assembly code:
// 006027a0: PUSH 0xd
//   Label: crt_math.c_set_domain_error_errno_FUN_006027a0
// 006027a2: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 006027a7: ADD ESP,0x4
// 006027aa: RET
