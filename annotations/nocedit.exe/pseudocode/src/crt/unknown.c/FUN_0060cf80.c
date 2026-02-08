// Name: crt_unknown.c_FUN_0060cf80
// Address: 0060cf80
// Address Range: [[0060cf80, 0060cfb5]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_0060cf80(void)

#include "nocturne.h"

uint FUN_0060cf80(void)

{
  SIGNAL_HANDLER_TYPE SVar1;
  SIGNAL_HANDLER_TYPE SVar2;
  
  SVar1 = getSignalHandler(4);
  SVar2 = getSignalHandler(7);
  if (((SVar1 == 2) || (SVar1 == 3)) && ((SVar2 == 2 || (SVar2 == 3)))) {
    return 0;
  }
  return 1;
}
