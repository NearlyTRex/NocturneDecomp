// Name: crt_unknown.c_FUN_0056b1ee
// Address: 0056b1ee
// Address Range: [[0056b1ee, 0056b214]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056b1ee(void)

#include "nocturne.h"

void FUN_0056b1ee(void)

{
  int *piVar1;
  
  while (DAT_005c1f50 != (uint *)0x0) {
    piVar1 = DAT_005c1f50 + 1;
    DAT_005c1f50 = (uint *)*DAT_005c1f50;
    (**(code **)(*piVar1 + 4))(*(uint *)(*piVar1 + 8),0);
  }
  return;
}
