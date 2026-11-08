// Name: FUN_00464150
// Address: 00464150
// Address Range: [[00464150, 0046418a]]
// Convention: unknown
// Signature: void FUN_00464150(void)

#include "nocturne.h"

void FUN_00464150(void)

{
  byte *puVar1;
  
  puVar1 = &DAT_006122d8;
  FUN_00484f00(DAT_00612560,&DAT_006122c0);
  do {
    FUN_00484f00(DAT_00612560,puVar1);
    puVar1 = puVar1 + 0x30;
  } while (puVar1 != &DAT_00612488);
  return;
}
