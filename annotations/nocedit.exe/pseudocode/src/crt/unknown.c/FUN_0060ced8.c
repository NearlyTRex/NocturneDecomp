// Name: crt_unknown.c_FUN_0060ced8
// Address: 0060ced8
// Address Range: [[0060ced8, 0060cefb]]
// Convention: unknown
// Signature: SIGNAL_HANDLER_TYPE crt_unknown_c_FUN_0060ced8(int param_1)

#include "nocturne.h"

SIGNAL_HANDLER_TYPE FUN_0060ced8(int param_1)

{
  ThreadData *pTVar1;
  
  if ((param_1 != 7) && (param_1 != 4)) {
    pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
    return pTVar1->signal_handlers[param_1].flags;
  }
  return g_GlobalSignalHandlers[param_1 * 2 + 1];
}
