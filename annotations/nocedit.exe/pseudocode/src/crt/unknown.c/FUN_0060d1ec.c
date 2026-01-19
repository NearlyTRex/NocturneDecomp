// Name: crt_unknown.c_FUN_0060d1ec
// Address: 0060d1ec
// Address Range: [[0060d1ec, 0060d212]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060d1ec()

#include "nocturne.h"

void crt_unknown_c_FUN_0060d1ec(void)

{
  int iVar1;
  
  iVar1 = crt_unknown_c_FUN_0060cf80();
  if (iVar1 != 0) {
    crt_signal_c_unregisterConsoleHandler_FUN_0060cfe4();
    crt_signal_c_setSignalHandler_FUN_0060ce60(4,2);
    crt_signal_c_setSignalHandler_FUN_0060ce60(7,2);
  }
  return;
}
