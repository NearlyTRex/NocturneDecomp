// Name: FUN_00584f10
// Address: 00584f10
// Address Range: [[00584f10, 00584f68]]
// Convention: unknown
// Signature: undefined4 FUN_00584f10(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00584f10(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_0040c600(*(uint *)(param_1 + 0x678),_DAT_0152c398);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x184) != 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x314) != 3) {
    iVar1 = FUN_0040c550(param_2,"CHero");
    if (iVar1 == 0) {
      return 0;
    }
  }
  return *(uint *)(param_1 + 0x314);
}
