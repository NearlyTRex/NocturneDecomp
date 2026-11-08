// Name: FUN_005adc04
// Address: 005adc04
// Address Range: [[005adc04, 005adc21]]
// Convention: unknown
// Signature: void FUN_005adc04(void)

#include "nocturne.h"

void FUN_005adc04(void)

{
  if (DAT_0060799c != -1) {
    TlsFree(DAT_0060799c);
    DAT_0060799c = -1;
  }
  return;
}
