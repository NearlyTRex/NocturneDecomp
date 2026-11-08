// Name: FUN_005c4f10
// Address: 005c4f10
// Address Range: [[005c4f10, 005c4f45]]
// Convention: unknown
// Signature: undefined4 FUN_005c4f10(void)

#include "nocturne.h"

uint FUN_005c4f10(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005c4e44(4);
  iVar2 = FUN_005c4e44(7);
  if (((iVar1 == 2) || (iVar1 == 3)) && ((iVar2 == 2 || (iVar2 == 3)))) {
    return 0;
  }
  return 1;
}
