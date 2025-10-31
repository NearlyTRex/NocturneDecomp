// Name: crt_stdio.c_storeErrorState_FUN_0060b78e
// Address: 0060b78e
// Address Range: [[0060b78e, 0060b798]]
// Convention: __watcallStack
// Signature: void crt_stdio.c_storeErrorState_FUN_0060b78e(uint * destination, uint error_state)
// Cross-references:
//   crt_stdio.c_reportStreamError_FUN_00606020 (00606020) at 00606048 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __watcallStack crt_stdio_c_storeErrorState_FUN_0060b78e(uint *destination,uint error_state)

{
  *destination = error_state;
  return;
}


// Assembly code:
// 0060b78e: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_stdio.c_storeErrorState_FUN_0060b78e
//   XREF to: Stack[0x4] (READ)
// 0060b792: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0060b796: MOV dword ptr [EAX],EDX
// 0060b798: RET
