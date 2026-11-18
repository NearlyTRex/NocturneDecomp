// Name: crt_unknown.c_FUN_005cd168
// Address: 005cd168
// Address Range: [[005cd168, 005cd18b]]
// Convention: unknown
// Signature: SIGNAL_HANDLER_TYPE crt_unknown_c_FUN_005cd168(int param_1)

#include "nocturne.h"

SIGNAL_HANDLER_TYPE FUN_005cd168(int param_1)

{
  int iVar1;
  
  if ((param_1 != 7) && (param_1 != 4)) {
    iVar1 = (*(code *)PTR_crt_unknown_c_FUN_005c50cc_006265fc)();
    return *(SIGNAL_HANDLER_TYPE *)(iVar1 + 0x5c + param_1 * 8);
  }
  return g_GlobalSignalHandlers[param_1 * 2 + 1];
}
