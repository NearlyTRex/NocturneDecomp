// Name: FUN_005c1d04
// Address: 005c1d04
// Address Range: [[005c1d04, 005c1d40]]
// Convention: unknown
// Signature: undefined2 FUN_005c1d04(void)

#include "nocturne.h"

ushort FUN_005c1d04(void)

{
  char cVar1;
  ushort in_AX;
  float10 in_ST0;
  
  if (((float10)1 - in_ST0 * in_ST0 != (float10)0) && (cVar1 = FUN_005c7f06(), cVar1 == '\0')) {
    FUN_005c1d69();
  }
  return in_AX;
}
