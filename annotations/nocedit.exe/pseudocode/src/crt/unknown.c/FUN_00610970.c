// Name: crt_unknown.c_FUN_00610970
// Address: 00610970
// Address Range: [[00610970, 00610983]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00610970()
// Cross-references:
//   crt_unknown.c_FUN_0060fe94 (0060fe94) at 0060fec7 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int crt_unknown_c_FUN_00610970(void)

{
  int in_stack_00000004;
  
  if ((0x60 < (ushort)in_stack_00000004) && ((ushort)in_stack_00000004 < 0x7b)) {
    in_stack_00000004 = in_stack_00000004 + -0x20;
  }
  return in_stack_00000004;
}


// Assembly code:
// 00610970: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_unknown.c_FUN_00610970
//   XREF to: Stack[0x4] (READ)
// 00610974: CMP AX,0x61
// 00610978: JC 0x00610983
//   XREF to: 00610983 (CONDITIONAL_JUMP)
// 0061097a: CMP AX,0x7a
// 0061097e: JA 0x00610983
//   XREF to: 00610983 (CONDITIONAL_JUMP)
// 00610980: SUB EAX,0x20
// 00610983: RET
//   Label: LAB_00610983
