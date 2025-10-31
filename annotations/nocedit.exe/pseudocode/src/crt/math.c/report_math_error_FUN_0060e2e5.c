// Name: crt_math.c_report_math_error_FUN_0060e2e5
// Address: 0060e2e5
// Address Range: [[0060e2e5, 0060e338]]
// Convention: __cdecl
// Signature: double crt_math.c_report_math_error_FUN_0060e2e5(MathErrorContext * errorCtx)
// Cross-references:
//   crt_math.c_process_math_error_FUN_0060bf2d (0060bf2d) at 0060c004 [UNCONDITIONAL_CALL]
// Globals:
//   MATH_CHECK_REPORTING_FUNC* PTR_crt_math.c_check_error_context_FUN_0060fa8b_00685590 = 0060eba0
// Function calls:
//   crt_math.c_print_error_message_FUN_0060e298
//   crt_math.c_set_domain_error_errno_FUN_006027a0
//   crt_math.c_set_range_error_errno_FUN_006027ac
//   crt_operation.c_always_zero_FUN_0060fa8b

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


// Assembly code:
// 0060e2e5: PUSH EBP
//   Label: crt_math.c_report_math_error_FUN_0060e2e5
// 0060e2e6: MOV EBP,ESP
// 0060e2e8: PUSH EBX
// 0060e2e9: PUSH ESI
// 0060e2ea: SUB ESP,0x8
// 0060e2ed: MOV EBX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060e2f0: PUSH EBX
// 0060e2f1: CALL dword ptr [PTR_crt_math.c_check_error_context_FUN_0060fa8b_00685590]
//   XREF to: 0060eba0 (COMPUTED_CALL)
//   XREF to: 00685590 (READ)
// 0060e2f7: ADD ESP,0x4
// 0060e2fa: TEST EAX,EAX
// 0060e2fc: JNZ 0x0060e320
//   XREF to: 0060e320 (CONDITIONAL_JUMP)
// 0060e2fe: MOV EDX,dword ptr [EBX + 0x4]
// 0060e301: PUSH EDX
// 0060e302: MOV ECX,dword ptr [EBX]
// 0060e304: PUSH ECX
// 0060e305: CALL crt_math.c_print_error_message_FUN_0060e298
//   XREF to: 0060e298 (UNCONDITIONAL_CALL)
// 0060e30a: MOV ESI,dword ptr [EBX]
// 0060e30c: ADD ESP,0x8
// 0060e30f: CMP ESI,0x1
// 0060e312: JNZ 0x0060e31b
//   XREF to: 0060e31b (CONDITIONAL_JUMP)
// 0060e314: CALL crt_math.c_set_domain_error_errno_FUN_006027a0
//   XREF to: 006027a0 (UNCONDITIONAL_CALL)
// 0060e319: JMP 0x0060e320
//   XREF to: 0060e320 (UNCONDITIONAL_JUMP)
// 0060e31b: CALL crt_math.c_set_range_error_errno_FUN_006027ac
//   Label: LAB_0060e31b
//   XREF to: 006027ac (UNCONDITIONAL_CALL)
// 0060e320: MOV EAX,dword ptr [EBX + 0x18]
//   Label: LAB_0060e320
// 0060e323: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0060e326: MOV EAX,dword ptr [EBX + 0x1c]
// 0060e329: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0060e32c: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 0060e32f: MOV EDX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x10] (READ)
// 0060e332: LEA ESP,[EBP + -0x8]
//   XREF to: Stack[-0xc] (DATA)
// 0060e335: POP ESI
// 0060e336: POP EBX
// 0060e337: POP EBP
// 0060e338: RET
