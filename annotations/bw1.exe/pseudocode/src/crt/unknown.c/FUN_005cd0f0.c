// Name: crt_unknown.c_FUN_005cd0f0
// Address: 005cd0f0
// Address Range: [[005cd0f0, 005cd140]]
// Convention: unknown
// Signature: SIGNAL_HANDLER_TYPE crt_unknown_c_FUN_005cd0f0(int param_1,SIGNAL_HANDLER_TYPE param_2)

#include "nocturne.h"

SIGNAL_HANDLER_TYPE FUN_005cd0f0(int param_1,SIGNAL_HANDLER_TYPE param_2)

{
  SIGNAL_HANDLER_TYPE SVar1;
  int iVar2;
  
  if ((param_1 != 7) && (param_1 != 4)) {
    iVar2 = (*(code *)PTR_crt_unknown_c_FUN_005c50cc_006265fc)();
    SVar1 = *(SIGNAL_HANDLER_TYPE *)(param_1 * 8 + 0x58 + iVar2);
    iVar2 = (*(code *)PTR_crt_unknown_c_FUN_005c50cc_006265fc)();
    *(SIGNAL_HANDLER_TYPE *)(iVar2 + param_1 * 8 + 0x58) = param_2;
    return SVar1;
  }
  SVar1 = g_SIGNAL_HANDLER_TYPE_ARRAY_00626ae4[param_1 * 2];
  g_SIGNAL_HANDLER_TYPE_ARRAY_00626ae4[param_1 * 2] = param_2;
  return SVar1;
}
