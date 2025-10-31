// Name: crt_unknown.c_FUN_0060d480
// Address: 0060d480
// Address Range: [[0060d480, 0060d48b]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060d480()
// Cross-references:
//   crt_unknown.c_FUN_0060b106 (0060b106) at 0060b10c [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060b142 (0060b142) at 0060b14b [UNCONDITIONAL_CALL]
// Globals:
//   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
// Function calls:
//   crt_thread.c_GetTLS_FUN_0060242c

#include "nocturne.h"

undefined1 * crt_unknown_c_FUN_0060d480(void)

{
  ThreadData *pTVar1;
  
  pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  return (undefined1 *)((int)&pTVar1->signal_handlers[0xd].flags + 2);
}


// Assembly code:
// 0060d480: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   Label: crt_unknown.c_FUN_0060d480
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 0060d486: ADD EAX,0xc6
// 0060d48b: RET
