// Name: crt_unknown.c_FUN_005afed4
// Address: 005afed4
// Address Range: [[005afed4, 005afef7]]
// Convention: unknown
// Signature: SIGNAL_HANDLER_TYPE crt_unknown_c_FUN_005afed4(int param_1)

#include "nocturne.h"

SIGNAL_HANDLER_TYPE FUN_005afed4(int param_1)

{
  int iVar1;
  
  if ((param_1 != 7) && (param_1 != 4)) {
    iVar1 = (*(code *)PTR_crt_unknown_c_FUN_005a7f3c_006079a0)();
    return *(SIGNAL_HANDLER_TYPE *)(iVar1 + 0x58 + param_1 * 8);
  }
  return g_GlobalSignalHandlers[param_1 * 2];
}
