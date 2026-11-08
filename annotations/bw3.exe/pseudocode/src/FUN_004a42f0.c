// Name: FUN_004a42f0
// Address: 004a42f0
// Address Range: [[004a42f0, 004a433e]]
// Convention: unknown
// Signature: void FUN_004a42f0(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_004a42f0(uint param_1,int param_2)

{
  byte *puVar1;
  byte *puVar2;
  byte *puVar3;
  
  puVar1 = &DAT_005fcb14;
  puVar2 = &DAT_005fd084;
  do {
    puVar3 = puVar1;
    if (((param_2 == 0) || (param_2 == 2)) || (puVar3 = puVar2, param_2 == 3)) {
      FUN_0046e5e0(DAT_005f2afc,puVar3);
    }
    puVar1 = puVar1 + 0x18;
    puVar2 = puVar2 + 0x18;
  } while (puVar1 != &DAT_005fd084);
  return;
}
