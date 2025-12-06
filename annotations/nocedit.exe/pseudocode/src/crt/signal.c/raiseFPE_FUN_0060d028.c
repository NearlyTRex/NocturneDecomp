// Name: crt_signal.c_raiseFPE_FUN_0060d028
// Address: 0060d028
// Address Range: [[0060d028, 0060d066]]
// Convention: __cdecl
// Signature: int crt_signal.c_raiseFPE_FUN_0060d028(int fpe_code)

#include "nocturne.h"

int __cdecl crt_signal_c_raiseFPE_FUN_0060d028(int fpe_code)

{
  SIGNAL_HANDLER pSVar1;
  
  pSVar1 = crt_signal_c_getSignalHandler_FUN_0060ceb4(2);
  if (((pSVar1 != (SIGNAL_HANDLER)&DAT_00000001) && (pSVar1 != (SIGNAL_HANDLER)&DAT_00000002)) &&
     (pSVar1 != (SIGNAL_HANDLER)0x3)) {
    crt_signal_c_setSignalHandler_FUN_0060ce60(2,(SIGNAL_HANDLER)&DAT_00000002);
    (*pSVar1)(2);
    return 0;
  }
  return -1;
}
