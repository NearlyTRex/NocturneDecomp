// Name: crt_unknown.c_FUN_0060cf80
// Address: 0060cf80
// Address Range: [[0060cf80, 0060cfb5]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060cf80()

#include "nocturne.h"

/* Signature: byte FUN_0060cf80() */

uint crt_unknown_c_FUN_0060cf80(void)

{
  SIGNAL_HANDLER pSVar1;
  SIGNAL_HANDLER pSVar2;
  
  pSVar1 = crt_signal_c_getSignalHandler_FUN_0060ceb4(4);
  pSVar2 = crt_signal_c_getSignalHandler_FUN_0060ceb4(7);
  if (((pSVar1 == (SIGNAL_HANDLER)&DAT_00000002) || (pSVar1 == (SIGNAL_HANDLER)0x3)) &&
     ((pSVar2 == (SIGNAL_HANDLER)&DAT_00000002 || (pSVar2 == (SIGNAL_HANDLER)0x3)))) {
    return 0;
  }
  return 1;
}
