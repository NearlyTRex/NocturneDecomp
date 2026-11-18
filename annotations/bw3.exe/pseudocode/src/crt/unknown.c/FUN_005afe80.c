// Name: crt_unknown.c_FUN_005afe80
// Address: 005afe80
// Address Range: [[005afe80, 005afed0]]
// Convention: unknown
// Signature: SIGNAL_HANDLER_TYPE crt_unknown_c_FUN_005afe80(int param_1,SIGNAL_HANDLER_TYPE param_2)

#include "nocturne.h"

SIGNAL_HANDLER_TYPE FUN_005afe80(int param_1,SIGNAL_HANDLER_TYPE param_2)

{
  SIGNAL_HANDLER_TYPE SVar1;
  int iVar2;
  
  if ((param_1 != 7) && (param_1 != 4)) {
    iVar2 = (*(code *)PTR_crt_unknown_c_FUN_005a7f3c_006079a0)();
    SVar1 = *(SIGNAL_HANDLER_TYPE *)(param_1 * 8 + 0x58 + iVar2);
    iVar2 = (*(code *)PTR_crt_unknown_c_FUN_005a7f3c_006079a0)();
    *(SIGNAL_HANDLER_TYPE *)(iVar2 + param_1 * 8 + 0x58) = param_2;
    return SVar1;
  }
  SVar1 = g_GlobalSignalHandlers[param_1 * 2];
  g_GlobalSignalHandlers[param_1 * 2] = param_2;
  return SVar1;
}
