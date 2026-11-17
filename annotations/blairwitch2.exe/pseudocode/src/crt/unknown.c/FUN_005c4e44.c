// Name: crt_unknown.c_FUN_005c4e44
// Address: 005c4e44
// Address Range: [[005c4e44, 005c4e67]]
// Convention: unknown
// Signature: SIGNAL_HANDLER_TYPE crt_unknown_c_FUN_005c4e44(int param_1)

#include "nocturne.h"

SIGNAL_HANDLER_TYPE FUN_005c4e44(int param_1)

{
  int iVar1;
  
  if ((param_1 != 7) && (param_1 != 4)) {
    iVar1 = (*(code *)PTR_crt_unknown_c_FUN_005bcdfc_0061f2a4)();
    return *(SIGNAL_HANDLER_TYPE *)(iVar1 + 0x58 + param_1 * 8);
  }
  return g_GlobalSignalHandlers[param_1 * 2];
}
