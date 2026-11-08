// Name: FUN_005ad2f0
// Address: 005ad2f0
// Address Range: [[005ad2f0, 005ad315]]
// Convention: unknown
// Signature: void FUN_005ad2f0(void)

#include "nocturne.h"

void FUN_005ad2f0(void)

{
  (*(code *)PTR_FUN_00607d78)();
  (*(code *)PTR_FUN_00607d7c)();
  if (DAT_00607b58 != (code *)0x0) {
    (*DAT_00607b58)();
  }
  FUN_005a8210();
  return;
}
