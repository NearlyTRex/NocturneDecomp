// Name: FUN_00568980
// Address: 00568980
// Address Range: [[00568980, 005689d8]]
// Convention: unknown
// Signature: undefined4 FUN_00568980(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00568980(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_0040c840(*(uint *)(param_1 + 0x6e8),_DAT_01548bfc);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x184) != 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x314) != 3) {
    iVar1 = FUN_0040c790(param_2,"CHero");
    if (iVar1 == 0) {
      return 0;
    }
  }
  return *(uint *)(param_1 + 0x314);
}
