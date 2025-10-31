// Name: crt_unknown.c_thunk_FUN_0060b142
// Address: 0060477a
// Address Range: [[0060477a, 0060477e]]
// Convention: unknown
// Signature: undefined crt_unknown.c_thunk_FUN_0060b142()
// Cross-references:
//   crt_unknown.c_staticInit_FUN_005fde60 (005fde60) at 005fde71 [DATA]

#include "nocturne.h"

void crt_unknown_c_thunk_FUN_0060b142(void)

{
  undefined4 uVar1;
  int in_stack_0000000c;
  int *in_stack_00000010;
  
  crt_unknown_c_FUN_0060d480();
  uVar1 = crt_unknown_c_FUN_0060d48c();
  crt_unknown_c_FUN_0060b133(uVar1,in_stack_0000000c + *in_stack_00000010);
  return;
}


// Assembly code:
// 0060477a: JMP 0x0060b142
//   Label: crt_unknown.c_thunk_FUN_0060b142
//   XREF to: 0060b142 (UNCONDITIONAL_JUMP)
