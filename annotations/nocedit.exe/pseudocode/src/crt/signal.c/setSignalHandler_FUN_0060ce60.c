// Name: crt_signal.c_setSignalHandler_FUN_0060ce60
// Address: 0060ce60
// Address Range: [[0060ce60, 0060ceb0]]
// Convention: __watcallStack
// Signature: SIGNAL_HANDLER crt_signal.c_setSignalHandler_FUN_0060ce60(int signal_number, SIGNAL_HANDLER new_handler)

#include "nocturne.h"

SIGNAL_HANDLER __watcallStack
crt_signal_c_setSignalHandler_FUN_0060ce60(int signal_number,SIGNAL_HANDLER new_handler)

{
  SIGNAL_HANDLER pSVar1;
  ThreadData *pTVar2;
  
  if ((signal_number != 7) && (signal_number != 4)) {
    pTVar2 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
    pSVar1 = pTVar2->signal_handlers[signal_number + -1].handler;
    pTVar2 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
    pTVar2->signal_handlers[signal_number + -1].handler = new_handler;
    return pSVar1;
  }
  pSVar1 = g_GlobalSignalHandlers[signal_number * 2];
  g_GlobalSignalHandlers[signal_number * 2] = new_handler;
  return pSVar1;
}
