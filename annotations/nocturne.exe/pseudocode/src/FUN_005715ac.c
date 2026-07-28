// Name: FUN_005715ac
// Address: 005715ac
// Address Range: [[005715ac, 005715cf]]
// Convention: unknown
// Signature: SIGNAL_HANDLER_TYPE FUN_005715ac(int param_1,int param_2)

#include "nocturne.h"

SIGNAL_HANDLER_TYPE FUN_005715ac(int param_1,int param_2)

{
  int iVar1;
  SIGNAL_HANDLER_TYPE SVar2;
  
  iVar1 = FUN_00571588(param_1);
  if (iVar1 == param_2) {
    SVar2 = getSignalHandler(param_1);
    return SVar2;
  }
  return 0;
}
