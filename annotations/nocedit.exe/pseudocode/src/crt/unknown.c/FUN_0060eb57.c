// Name: crt_unknown.c_FUN_0060eb57
// Address: 0060eb57
// Address Range: [[0060eb57, 0060eb76]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060eb57()
// Cross-references:
//   crt_unknown.c_FUN_0060dcf6 (0060dcf6) at 0060ddcb [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060defc (0060defc) at 0060e0b4 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060e0b9 (0060e0b9) at 0060e16b [UNCONDITIONAL_CALL]
// Function calls:
//   crt_math.c_set_range_error_errno_FUN_006027ac
//   crt_unknown.c_FUN_0060fa80

#include "nocturne.h"

ulonglong crt_unknown_c_FUN_0060eb57(void)

{
  uint in_stack_00000004;
  
  crt_math_c_set_range_error_errno_FUN_006027ac();
  crt_unknown_c_FUN_0060fa80(0x84);
  return (ulonglong)(in_stack_00000004 & 0x80000000) << 0x20 | 0x7ff0000000000000;
}


// Assembly code:
// 0060eb57: PUSH EAX
//   Label: crt_unknown.c_FUN_0060eb57
// 0060eb58: CALL crt_math.c_set_range_error_errno_FUN_006027ac
//   XREF to: 006027ac (UNCONDITIONAL_CALL)
// 0060eb5d: MOV EAX,0x84
// 0060eb62: CALL crt_unknown.c_FUN_0060fa80
//   XREF to: 0060fa80 (UNCONDITIONAL_CALL)
// 0060eb67: POP EAX
// 0060eb68: AND EAX,0x80000000
//   Label: LAB_0060eb68
// 0060eb6d: OR EAX,0x7ff00000
// 0060eb72: MOV EDX,EAX
// 0060eb74: SUB EAX,EAX
// 0060eb76: RET
