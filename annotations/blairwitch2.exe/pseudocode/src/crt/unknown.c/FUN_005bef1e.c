// Name: crt_unknown.c_FUN_005bef1e
// Address: 005bef1e
// Address Range: [[005bef1e, 005bef44]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005bef1e(void)

#include "nocturne.h"

void FUN_005bef1e(void)

{
  int *piVar1;
  
  while (DAT_0061f64c != (uint *)0x0) {
    piVar1 = DAT_0061f64c + 1;
    DAT_0061f64c = (uint *)*DAT_0061f64c;
    (**(code **)(*piVar1 + 4))(*(uint *)(*piVar1 + 8),0);
  }
  return;
}
