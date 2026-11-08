// Name: FUN_005c6fb4
// Address: 005c6fb4
// Address Range: [[005c6fb4, 005c6fda]]
// Convention: unknown
// Signature: void FUN_005c6fb4(void)

#include "nocturne.h"

void FUN_005c6fb4(void)

{
  int *piVar1;
  
  while (DAT_0062676c != (uint *)0x0) {
    piVar1 = DAT_0062676c + 1;
    DAT_0062676c = (uint *)*DAT_0062676c;
    (**(code **)(*piVar1 + 4))(*(uint *)(*piVar1 + 8),0);
  }
  return;
}
