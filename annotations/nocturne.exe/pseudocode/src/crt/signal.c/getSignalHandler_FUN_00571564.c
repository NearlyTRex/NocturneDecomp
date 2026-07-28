// Name: crt_signal.c_getSignalHandler_FUN_00571564
// Address: 00571564
// Address Range: [[00571564, 00571587]]
// Convention: __watcallStack
// Signature: SIGNAL_HANDLER_TYPE __watcallStack crt_signal_c_getSignalHandler_FUN_00571564(int signal_number)

#include "nocturne.h"

SIGNAL_HANDLER_TYPE __watcallStack getSignalHandler(int signal_number)

{
  int iVar1;
  
  if ((signal_number != 7) && (signal_number != 4)) {
    iVar1 = (*(code *)PTR_crt_thread_c_GetTLS_FUN_005671dc_005c1abc)();
    return *(SIGNAL_HANDLER_TYPE *)(iVar1 + 0x58 + signal_number * 8);
  }
  return *(SIGNAL_HANDLER_TYPE *)(&DAT_005c20d8 + signal_number * 8);
}
