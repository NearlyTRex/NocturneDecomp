// Name: crt_signal.c_setSignalHandler_FUN_0060ce60
// Address: 0060ce60
// Address Range: [[0060ce60, 0060ceb0]]
// Convention: __watcallStack
// Signature: SIGNAL_HANDLER_TYPE __watcallStack crt_signal_c_setSignalHandler_FUN_0060ce60(int signal_number,SIGNAL_HANDLER_TYPE new_handler_type)

#include "nocturne.h"

SIGNAL_HANDLER_TYPE __watcallStack setSignalHandler(int signal_number,SIGNAL_HANDLER_TYPE new_handler_type)

{
  SIGNAL_HANDLER_TYPE SVar1;
  ThreadData *pTVar2;
  
  if ((signal_number != 7) && (signal_number != 4)) {
    pTVar2 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
    SVar1 = pTVar2->signal_handlers[signal_number + -1].type;
    pTVar2 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
    pTVar2->signal_handlers[signal_number + -1].type = new_handler_type;
    return SVar1;
  }
  SVar1 = g_GlobalSignalHandlers[signal_number * 2];
  g_GlobalSignalHandlers[signal_number * 2] = new_handler_type;
  return SVar1;
}
