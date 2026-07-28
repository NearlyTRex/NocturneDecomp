// Name: crt_signal.c_setSignalHandler_FUN_00571510
// Address: 00571510
// Address Range: [[00571510, 00571560]]
// Convention: __watcallStack
// Signature: SIGNAL_HANDLER_TYPE __watcallStack crt_signal_c_setSignalHandler_FUN_00571510(int signal_number,SIGNAL_HANDLER_TYPE new_handler_type)

#include "nocturne.h"

SIGNAL_HANDLER_TYPE __watcallStack setSignalHandler(int signal_number,SIGNAL_HANDLER_TYPE new_handler_type)

{
  SIGNAL_HANDLER_TYPE SVar1;
  int iVar2;
  
  if ((signal_number != 7) && (signal_number != 4)) {
    iVar2 = (*(code *)PTR_crt_thread_c_GetTLS_FUN_005671dc_005c1abc)();
    SVar1 = *(SIGNAL_HANDLER_TYPE *)(signal_number * 8 + 0x58 + iVar2);
    iVar2 = (*(code *)PTR_crt_thread_c_GetTLS_FUN_005671dc_005c1abc)();
    *(SIGNAL_HANDLER_TYPE *)(iVar2 + signal_number * 8 + 0x58) = new_handler_type;
    return SVar1;
  }
  SVar1 = *(SIGNAL_HANDLER_TYPE *)(&DAT_005c20d8 + signal_number * 8);
  *(SIGNAL_HANDLER_TYPE *)(&DAT_005c20d8 + signal_number * 8) = new_handler_type;
  return SVar1;
}
