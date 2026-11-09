// Name: crt_unknown.c_FUN_005a9e24
// Address: 005a9e24
// Address Range: [[005a9e24, 005a9e4a]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005a9e24(void)

#include "nocturne.h"

void FUN_005a9e24(void)

{
  int *piVar1;
  
  while (DAT_00607b10 != (uint *)0x0) {
    piVar1 = DAT_00607b10 + 1;
    DAT_00607b10 = (uint *)*DAT_00607b10;
    (**(code **)(*piVar1 + 4))(*(uint *)(*piVar1 + 8),0);
  }
  return;
}
