// Name: FUN_0056ada0
// Address: 0056ada0
// Address Range: [[0056ada0, 0056ade3]]
// Convention: unknown
// Signature: void FUN_0056ada0(void)

#include "nocturne.h"

void FUN_0056ada0(void)

{
  char cVar1;
  
  if (DAT_005c1794 == '\0') {
    DAT_005c1795 = DAT_005c1794;
    cVar1 = func_0x0056ad64();
    if (DAT_005c1d04 == '\0') {
      DAT_005c1794 = cVar1;
      DAT_005c1795 = cVar1;
    }
  }
  return;
}
