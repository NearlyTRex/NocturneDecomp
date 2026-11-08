// Name: FUN_005affa0
// Address: 005affa0
// Address Range: [[005affa0, 005affd5]]
// Convention: unknown
// Signature: undefined4 FUN_005affa0(void)

#include "nocturne.h"

uint FUN_005affa0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005afed4(4);
  iVar2 = FUN_005afed4(7);
  if (((iVar1 == 2) || (iVar1 == 3)) && ((iVar2 == 2 || (iVar2 == 3)))) {
    return 0;
  }
  return 1;
}
