// Name: crt_signal.c_getSignalHandler_FUN_0060ceb4
// Address: 0060ceb4
// Address Range: [[0060ceb4, 0060ced7]]
// Convention: __watcallStack
// Signature: SIGNAL_HANDLER crt_signal.c_getSignalHandler_FUN_0060ceb4(int signal_number)

#include "nocturne.h"

SIGNAL_HANDLER __watcallStack crt_signal_c_getSignalHandler_FUN_0060ceb4(int signal_number)

{
  ThreadData *pTVar1;
  
  if ((signal_number != 7) && (signal_number != 4)) {
    pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
    return pTVar1->signal_handlers[signal_number + -1].handler;
  }
  return g_GlobalSignalHandlers[signal_number * 2];
}
