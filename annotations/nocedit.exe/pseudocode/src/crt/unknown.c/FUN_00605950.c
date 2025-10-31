// Name: crt_unknown.c_FUN_00605950
// Address: 00605950
// Address Range: [[00605950, 0060595a]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00605950()
// Cross-references:
//   crt_stdio.c_fflush_FUN_00601540 (00601540) at 00601548 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_FlushFilesByMask_FUN_0060595c

#include "nocturne.h"

/* Signature: undefined1 unk_CallToDoNothing14SandwichMax() */

void crt_unknown_c_FUN_00605950(void)

{
  crt_stdio_c_FlushFilesByMask_FUN_0060595c(0xffffffff);
  return;
}


// Assembly code:
// 00605950: PUSH -0x1
//   Label: crt_unknown.c_FUN_00605950
// 00605952: CALL crt_stdio.c_FlushFilesByMask_FUN_0060595c
//   XREF to: 0060595c (UNCONDITIONAL_CALL)
// 00605957: ADD ESP,0x4
// 0060595a: RET
