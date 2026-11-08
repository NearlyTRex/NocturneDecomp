// Name: FUN_00551c70
// Address: 00551c70
// Address Range: [[00551c70, 00551ca1]]
// Convention: unknown
// Signature: void FUN_00551c70(void)

#include "nocturne.h"

void FUN_00551c70(void)

{
  int iVar1;
  
  FUN_005532f0();
  iVar1 = 0x2641924;
  FUN_005510d0();
  do {
    FUN_0054d9b0(iVar1);
    iVar1 = iVar1 + 0x1ac;
  } while (iVar1 != 0x2648424);
  FUN_00551440();
  return;
}
