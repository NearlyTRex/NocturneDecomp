// Name: crt_signal.c_raiseFPE_FUN_005716d8
// Address: 005716d8
// Address Range: [[005716d8, 00571716]]
// Convention: __cdecl
// Signature: int __cdecl crt_signal_c_raiseFPE_FUN_005716d8(int fpe_code)

#include "nocturne.h"

int __cdecl raiseFPE(int fpe_code)

{
  code *pcVar1;
  
  pcVar1 = (code *)getSignalHandler(2);
  if (((pcVar1 != (code *)0x1) && (pcVar1 != (code *)0x2)) && (pcVar1 != (code *)0x3)) {
    setSignalHandler(2,2);
    (*pcVar1)(2,fpe_code);
    return 0;
  }
  return -1;
}
