// Name: crt_unknown.c_FUN_00571588
// Address: 00571588
// Address Range: [[00571588, 005715ab]]
// Convention: unknown
// Signature: SIGNAL_HANDLER_TYPE crt_unknown_c_FUN_00571588(int param_1)

#include "nocturne.h"

SIGNAL_HANDLER_TYPE FUN_00571588(int param_1)

{
  int iVar1;
  
  if ((param_1 != 7) && (param_1 != 4)) {
    iVar1 = (*(code *)PTR_crt_thread_c_GetTLS_FUN_005671dc_005c1abc)();
    return *(SIGNAL_HANDLER_TYPE *)(iVar1 + 0x5c + param_1 * 8);
  }
  return g_GlobalSignalHandlers[param_1 * 2 + 1];
}
