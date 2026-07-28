// Name: FUN_00571630
// Address: 00571630
// Address Range: [[00571630, 00571665]]
// Convention: unknown
// Signature: undefined4 FUN_00571630(void)

#include "nocturne.h"

uint FUN_00571630(void)

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
