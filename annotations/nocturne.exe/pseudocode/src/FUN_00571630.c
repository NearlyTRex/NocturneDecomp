// Name: FUN_00571630
// Address: 00571630
// Address Range: [[00571630, 00571665]]
// Convention: unknown
// Signature: undefined4 FUN_00571630(void)

#include "nocturne.h"

uint FUN_00571630(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00571564(4);
  iVar2 = FUN_00571564(7);
  if (((iVar1 == 2) || (iVar1 == 3)) && ((iVar2 == 2 || (iVar2 == 3)))) {
    return 0;
  }
  return 1;
}
