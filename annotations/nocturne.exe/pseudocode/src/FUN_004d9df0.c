// Name: FUN_004d9df0
// Address: 004d9df0
// Address Range: [[004d9df0, 004d9e48]]
// Convention: unknown
// Signature: int FUN_004d9df0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004d9df0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x514);
  iVar3 = 0;
  do {
    if (iVar2 == 0) {
      return iVar3;
    }
    while ((iVar1 = FUN_0040d890(iVar2,_DAT_01bcdef4), iVar1 != 0 &&
           (iVar1 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x104))(iVar1), iVar1 != 0))) {
      iVar3 = iVar3 + 1;
      iVar2 = *(int *)(iVar2 + 0x144);
      if (iVar2 == 0) {
        return iVar3;
      }
    }
    iVar2 = *(int *)(iVar2 + 0x144);
  } while( true );
}
